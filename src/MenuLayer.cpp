#include <Geode/binding/MenuLayer.hpp>
#include <Geode/binding/MenuGameLayer.hpp>
#include <Geode/binding/GameManager.hpp>
#include <Geode/binding/GJAccountManager.hpp>
#include <Geode/binding/MusicDownloadManager.hpp>
#include <Geode/binding/ButtonSprite.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ProfilePage.hpp>
#include <Geode/binding/AchievementsLayer.hpp>
#include <Geode/binding/StatsLayer.hpp>
#include <Geode/binding/CreatorLayer.hpp>
#include <Geode/binding/LevelSelectLayer.hpp>
#include <Geode/binding/GJGarageLayer.hpp>
#include <Geode/binding/OptionsLayer.hpp>
#include <Geode/binding/DailyLevelPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

MenuLayer::~MenuLayer() {
    auto mdm = MusicDownloadManager::sharedState();
    if (mdm) {
        mdm->removeMusicDownloadDelegate(this);
    }
    auto gm = GameManager::sharedState();
    if (gm) {
        gm->m_menuLayer = nullptr;
    }
    this->willClose();
}

cocos2d::CCScene* MenuLayer::scene(bool isVideoOptionsOpen) {
    auto scene = cocos2d::CCScene::create();
    auto layer = MenuLayer::create();
    if (scene && layer) {
        scene->addChild(layer);
        if (isVideoOptionsOpen) {
            auto action = cocos2d::CCSequence::create(
                cocos2d::CCDelayTime::create(0.0f),
                cocos2d::CCCallFunc::create(layer, callfunc_selector(MenuLayer::videoOptionsOpened)),
                nullptr
            );
            layer->runAction(action);
        }
    }
    return scene;
}

bool MenuLayer::init() {
    if (!cocos2d::CCLayer::init()) {
        return false;
    }

    auto gm = GameManager::sharedState();
    if (gm) {
        gm->m_menuLayer = this;
    }

    this->setKeypadEnabled(true);
    this->setTouchEnabled(true);

    auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();

    m_menuGameLayer = MenuGameLayer::create();
    if (m_menuGameLayer) {
        this->addChild(m_menuGameLayer, 0);
    }

    auto menu = cocos2d::CCMenu::create();
    this->addChild(menu, 2);

    auto playSprite = ButtonSprite::create("GJ_playBtn_001.png");
    auto playBtn = CCMenuItemSpriteExtra::create(playSprite, nullptr, this, menu_selector(MenuLayer::onPlay));
    if (playBtn) {
        menu->addChild(playBtn);
        playBtn->setPosition(cocos2d::CCPoint(0.0f, 0.0f));
    }

    auto garageSprite = ButtonSprite::create("GJ_garageBtn_001.png");
    auto garageBtn = CCMenuItemSpriteExtra::create(garageSprite, nullptr, this, menu_selector(MenuLayer::onGarage));
    if (garageBtn) {
        menu->addChild(garageBtn);
        garageBtn->setPosition(cocos2d::CCPoint(-120.0f, 0.0f));
    }

    auto creatorSprite = ButtonSprite::create("GJ_creatorBtn_001.png");
    auto creatorBtn = CCMenuItemSpriteExtra::create(creatorSprite, nullptr, this, menu_selector(MenuLayer::onCreator));
    if (creatorBtn) {
        menu->addChild(creatorBtn);
        creatorBtn->setPosition(cocos2d::CCPoint(120.0f, 0.0f));
    }

    auto bottomMenu = cocos2d::CCMenu::create();
    this->addChild(bottomMenu, 2);
    bottomMenu->setPosition(cocos2d::CCPoint(winSize.width * 0.5f, 45.0f));

    auto achSprite = ButtonSprite::create("GJ_achBtn_001.png");
    auto achBtn = CCMenuItemSpriteExtra::create(achSprite, nullptr, this, menu_selector(MenuLayer::onAchievements));
    if (achBtn) bottomMenu->addChild(achBtn);

    auto optSprite = ButtonSprite::create("GJ_optionsBtn_001.png");
    auto optBtn = CCMenuItemSpriteExtra::create(optSprite, nullptr, this, menu_selector(MenuLayer::onOptions));
    if (optBtn) bottomMenu->addChild(optBtn);

    auto statsSprite = ButtonSprite::create("GJ_statsBtn_001.png");
    auto statsBtn = CCMenuItemSpriteExtra::create(statsSprite, nullptr, this, menu_selector(MenuLayer::onStats));
    if (statsBtn) bottomMenu->addChild(statsBtn);

    bottomMenu->alignItemsHorizontallyWithPadding(10.0f);

    return true;
}

void MenuLayer::showTOS() {
    m_showingTOS = false;
    auto popup = FLAlertLayer::create(nullptr, "Terms of Service", "Please accept the Terms of Service to continue.", "Decline", "Accept", 300.0f);
    if (popup) {
        popup->show();
    }
}

void MenuLayer::onMyProfile(cocos2d::CCObject* sender) {
    auto am = GJAccountManager::sharedState();
    if (am && am->m_accountID > 0) {
        auto page = ProfilePage::create(am->m_accountID, true);
        if (page) {
            page->show();
        }
    }
}

void MenuLayer::musicActionFinished(GJMusicAction p0) {
}

void MenuLayer::onAchievements(cocos2d::CCObject* sender) {
    auto layer = AchievementsLayer::create();
    if (layer) {
        this->addChild(layer, 100);
        layer->showLayer(false);
    }
}

void MenuLayer::googlePlaySignedIn() {
    if (m_gpSprite) {
        auto sfc = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
        if (auto frame = sfc->spriteFrameByName("GJ_gpBtn_001.png")) {
            m_gpSprite->setDisplayFrame(frame);
        }
    }
}

void MenuLayer::onStats(cocos2d::CCObject* sender) {
    auto layer = StatsLayer::create();
    if (layer) {
        this->addChild(layer, 100);
        layer->showLayer(false);
    }
}

void MenuLayer::onCreator(cocos2d::CCObject* sender) {
    auto scene = CreatorLayer::scene();
    cocos2d::CCDirector::sharedDirector()->replaceScene(cocos2d::CCTransitionFade::create(0.5f, scene));
}

void MenuLayer::onDaily(cocos2d::CCObject* sender) {
    auto layer = DailyLevelPage::create(GJTimedLevelType::Daily);
    if (layer) {
        layer->show();
    }
}

void MenuLayer::onDiscord(cocos2d::CCObject* sender) {
    cocos2d::CCApplication::sharedApplication()->openURL("https://discord.gg/geometrydash");
}

void MenuLayer::onFacebook(cocos2d::CCObject* sender) {
    cocos2d::CCApplication::sharedApplication()->openURL("https://www.facebook.com/geometrydash");
}

void MenuLayer::onTwitter(cocos2d::CCObject* sender) {
    cocos2d::CCApplication::sharedApplication()->openURL("https://twitter.com/robtopgames");
}

void MenuLayer::onYouTube(cocos2d::CCObject* sender) {
    cocos2d::CCApplication::sharedApplication()->openURL("https://www.youtube.com/user/RobTopGames");
}

void MenuLayer::onTwitch(cocos2d::CCObject* sender) {
    cocos2d::CCApplication::sharedApplication()->openURL("https://www.twitch.tv/robtopgames");
}

void MenuLayer::onPlay(cocos2d::CCObject* sender) {
    auto scene = LevelSelectLayer::scene(0);
    cocos2d::CCDirector::sharedDirector()->replaceScene(cocos2d::CCTransitionFade::create(0.5f, scene));
}

void MenuLayer::onGarage(cocos2d::CCObject* sender) {
    auto scene = GJGarageLayer::scene();
    cocos2d::CCDirector::sharedDirector()->replaceScene(cocos2d::CCTransitionFade::create(0.5f, scene));
}

void MenuLayer::onOptions(cocos2d::CCObject* sender) {
    auto layer = OptionsLayer::create();
    if (layer) {
        this->addChild(layer, 100);
        layer->showLayer(false);
    }
}

void MenuLayer::keyBackClicked() {
    auto alert = FLAlertLayer::create(
        this,
        "Quit Game",
        "Are you sure you want to <cr>quit</c>?",
        "Cancel",
        "Quit",
        300.0f
    );
    alert->setTag(0);
    alert->show();
}

void MenuLayer::willClose() {
    auto gm = GameManager::sharedState();
    if (gm) {
        gm->m_menuLayer = nullptr;
    }
}

void MenuLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) {
    if (!layer) return;
    if (btn2) {
        int tag = layer->getTag();
        if (tag == 0) {
            auto seq = cocos2d::CCSequence::create(
                cocos2d::CCDelayTime::create(0.5f),
                cocos2d::CCCallFunc::create(this, callfunc_selector(MenuLayer::endGame)),
                nullptr
            );
            this->runAction(seq);
        } else if (tag == 2) {
            cocos2d::CCApplication::sharedApplication()->openURL("https://www.robtopgames.com/download/gj");
        } else if (tag == 3) {
            cocos2d::CCApplication::sharedApplication()->openURL("https://www.newgrounds.com/audio");
        }
    }
}

void MenuLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) {
    switch (key) {
        case cocos2d::KEY_Space:
        case cocos2d::KEY_Enter:
            this->onPlay(nullptr);
            break;
        case cocos2d::KEY_Escape:
        case cocos2d::KEY_Backspace:
            this->keyBackClicked();
            break;
        default:
            cocos2d::CCLayer::keyDown(key, timestamp);
            break;
    }
}

void MenuLayer::endGame() {
    cocos2d::CCDirector::sharedDirector()->end();
}
