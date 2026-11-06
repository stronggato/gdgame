#include <Geode/binding/LevelSelectLayer.hpp>
#include <Geode/binding/LevelPage.hpp>
#include <Geode/binding/BoomScrollLayer.hpp>
#include <Geode/binding/GJGroundLayer.hpp>
#include <Geode/binding/GameManager.hpp>
#include <Geode/binding/GameLevelManager.hpp>
#include <Geode/binding/GJGameLevel.hpp>
#include <Geode/binding/MenuLayer.hpp>
#include <Geode/binding/SongsLayer.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/13] Address: 0x43d270
// Method: LevelSelectLayer::~LevelSelectLayer
LevelSelectLayer::~LevelSelectLayer() {
}

// [2/13] Address: 0x43d420
// Method: LevelSelectLayer::scene
cocos2d::CCScene* LevelSelectLayer::scene(int page) {
    auto scene = cocos2d::CCScene::create();
    auto layer = LevelSelectLayer::create(page);
    if (scene && layer) {
        scene->addChild(layer);
    }
    return scene;
}

// [3/13] Address: 0x43d560
// Method: LevelSelectLayer::init
bool LevelSelectLayer::init(int page) {
    if (!cocos2d::CCLayer::init()) return false;

    auto director = cocos2d::CCDirector::sharedDirector();
    auto winSize = director->getWinSize();
    this->m_width = winSize.width;

    auto glm = GameLevelManager::sharedState();

    // Background
    this->m_backgroundSprite = cocos2d::CCSprite::create("GJ_gradientBG.png");
    if (this->m_backgroundSprite) {
        this->m_backgroundSprite->setAnchorPoint(cocos2d::CCPointZero);
        this->m_backgroundSprite->setScaleX((winSize.width + 10.0f) / this->m_backgroundSprite->getContentSize().width);
        this->m_backgroundSprite->setScaleY((winSize.height + 10.0f) / this->m_backgroundSprite->getContentSize().height);
        this->m_backgroundSprite->setPosition(cocos2d::CCPoint(-5.0f, -5.0f));
        this->addChild(this->m_backgroundSprite, -2);
    }

    // Ground
    this->m_groundLayer = GJGroundLayer::create(1, 1);
    if (this->m_groundLayer) {
        this->addChild(this->m_groundLayer, 1);
        this->m_groundLayer->setPosition(cocos2d::CCPointZero);
    }

    // Navigation Menu
    auto navMenu = cocos2d::CCMenu::create();
    this->addChild(navMenu, 2);

    auto backSprite = CCMenuItemSpriteExtra::create(
        cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png"),
        nullptr,
        this,
        menu_selector(LevelSelectLayer::onBack)
    );
    if (backSprite) {
        navMenu->addChild(backSprite);
        backSprite->setPosition(cocos2d::CCPoint(-winSize.width * 0.5f + 25.0f, winSize.height * 0.5f - 25.0f));
    }

    auto prevBtnSprite = cocos2d::CCSprite::createWithSpriteFrameName("navArrowBtn_001.png");
    if (prevBtnSprite) {
        prevBtnSprite->setFlipX(true);
    }
    auto prevSprite = CCMenuItemSpriteExtra::create(
        prevBtnSprite,
        nullptr,
        this,
        menu_selector(LevelSelectLayer::onPrev)
    );
    if (prevSprite) {
        navMenu->addChild(prevSprite);
        prevSprite->setPosition(cocos2d::CCPoint(-winSize.width * 0.5f + 25.0f, 0.0f));
    }

    auto nextSprite = CCMenuItemSpriteExtra::create(
        cocos2d::CCSprite::createWithSpriteFrameName("navArrowBtn_001.png"),
        nullptr,
        this,
        menu_selector(LevelSelectLayer::onNext)
    );
    if (nextSprite) {
        navMenu->addChild(nextSprite);
        nextSprite->setPosition(cocos2d::CCPoint(winSize.width * 0.5f - 25.0f, 0.0f));
    }

    // Pages scroll layer
    auto pages = cocos2d::CCArray::create();
    for (int i = 1; i <= 22; ++i) {
        auto level = glm ? glm->getMainLevel(i, false) : nullptr;
        auto levelPage = LevelPage::create(level);
        if (levelPage) {
            pages->addObject(levelPage);
        }
    }

    this->m_scrollLayer = BoomScrollLayer::create(pages, 0, true, nullptr, this);
    if (this->m_scrollLayer) {
        this->addChild(this->m_scrollLayer, 0);
        this->m_scrollLayer->m_delegate = this;
        if (page > 0) {
            this->m_scrollLayer->moveToPage(page);
        }
    }

    this->setKeypadEnabled(true);
    this->setTouchEnabled(true);

    auto color = this->colorForPage(page);
    if (this->m_backgroundSprite) this->m_backgroundSprite->setColor(color);
    if (this->m_groundLayer) {
        this->m_groundLayer->updateGround01Color(color);
        this->m_groundLayer->updateGround02Color(color);
    }

    return true;
}

// [4/13] Address: 0x43e410
// Method: LevelSelectLayer::onDownload
void LevelSelectLayer::onDownload(cocos2d::CCObject* sender) {
    auto layer = SongsLayer::create();
    if (layer) {
        auto parent = this->getParent();
        if (parent) {
            parent->addChild(layer, 100);
            layer->showLayer(false);
        }
    }
}

// [5/13] Address: 0x43e470
// Method: LevelSelectLayer::updatePageWithObject
void LevelSelectLayer::updatePageWithObject(cocos2d::CCObject* layer, cocos2d::CCObject* object) {
    auto levelPage = dynamic_cast<LevelPage*>(layer);
    auto level = dynamic_cast<GJGameLevel*>(object);
    if (levelPage && level) {
        levelPage->updateDynamicPage(level);
    }
}

// [6/13] Address: 0x43e4e0
// Method: LevelSelectLayer::scrollLayerMoved
void LevelSelectLayer::scrollLayerMoved(cocos2d::CCPoint position) {
    if (!this->m_scrollLayer) return;
    float pageWidth = this->m_width > 0.0f ? this->m_width : 356.0f;
    float pagePos = -position.x / pageWidth;
    int page1 = (int)pagePos;
    int page2 = page1 + 1;
    float progress = pagePos - (float)page1;

    auto color = this->getColorValue(page1, page2, progress);
    if (this->m_backgroundSprite) {
        this->m_backgroundSprite->setColor(color);
    }
    if (this->m_groundLayer) {
        this->m_groundLayer->updateGround01Color(color);
        this->m_groundLayer->updateGround02Color(color);
    }
}

// [7/13] Address: 0x43f820
// Method: LevelSelectLayer::colorForPage
cocos2d::ccColor3B LevelSelectLayer::colorForPage(int page) {
    auto gm = GameManager::sharedState();
    int colorIdx = 1;
    switch (page) {
        case 0: colorIdx = 1; break;
        case 1: colorIdx = 2; break;
        case 2: colorIdx = 3; break;
        case 3: colorIdx = 4; break;
        case 4: colorIdx = 5; break;
        case 5: colorIdx = 6; break;
        case 6: colorIdx = 7; break;
        case 7: colorIdx = 8; break;
        case 8: colorIdx = 9; break;
        case 9: colorIdx = 10; break;
        case 10: colorIdx = 11; break;
        case 11: colorIdx = 12; break;
        case 12: colorIdx = 13; break;
        case 13: colorIdx = 14; break;
        case 14: colorIdx = 15; break;
        case 15: colorIdx = 16; break;
        case 16: colorIdx = 17; break;
        case 17: colorIdx = 18; break;
        case 18: colorIdx = 19; break;
        case 19: colorIdx = 20; break;
        case 20: colorIdx = 21; break;
        case 21: colorIdx = 22; break;
        default: colorIdx = 1; break;
    }
    return gm ? gm->colorForIdx(colorIdx) : cocos2d::ccc3(0, 100, 255);
}

// [8/13] Address: 0x43fbe0
// Method: LevelSelectLayer::onNext
void LevelSelectLayer::onNext(cocos2d::CCObject* sender) {
    if (this->m_scrollLayer) {
        int page = this->m_scrollLayer->m_page + 1;
        int total = this->m_scrollLayer->m_pages ? (int)this->m_scrollLayer->m_pages->count() : 0;
        if (page < total) {
            this->m_scrollLayer->moveToPage(page);
        }
    }
}

// [9/13] Address: 0x43fc60
// Method: LevelSelectLayer::onPrev
void LevelSelectLayer::onPrev(cocos2d::CCObject* sender) {
    if (this->m_scrollLayer) {
        int page = this->m_scrollLayer->m_page - 1;
        if (page >= 0) {
            this->m_scrollLayer->moveToPage(page);
        }
    }
}

// [10/13] Address: 0x43fce0
// Method: LevelSelectLayer::onBack
void LevelSelectLayer::onBack(cocos2d::CCObject* sender) {
    auto scene = MenuLayer::scene(false);
    auto transition = cocos2d::CCTransitionFade::create(0.5f, scene);
    cocos2d::CCDirector::sharedDirector()->replaceScene(transition);
}

// [11/13] Address: 0x43fd30
// Method: LevelSelectLayer::keyBackClicked
void LevelSelectLayer::keyBackClicked() {
    this->onBack(nullptr);
}

// [12/13] Address: 0x43fd80
// Method: LevelSelectLayer::keyDown
void LevelSelectLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) {
    switch (key) {
        case cocos2d::KEY_Left:
        case cocos2d::KEY_ArrowLeft:
            this->onPrev(nullptr);
            break;
        case cocos2d::KEY_Right:
        case cocos2d::KEY_ArrowRight:
            this->onNext(nullptr);
            break;
        case cocos2d::KEY_Space:
            this->onPlay(nullptr);
            break;
        case cocos2d::KEY_Escape:
            this->keyBackClicked();
            break;
        default:
            cocos2d::CCLayer::keyDown(key, timestamp);
            break;
    }
}

// [13/13] Address: 0x43fe60
// Method: LevelSelectLayer::onInfo
void LevelSelectLayer::onInfo(cocos2d::CCObject* sender) {
    auto alert = FLAlertLayer::create(nullptr, "Info", "Select a level to play!", "OK", nullptr, 300.0f);
    if (alert) {
        alert->show();
    }
}
