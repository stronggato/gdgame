#include <Geode/binding/LoadingLayer.hpp>
#include <Geode/binding/MenuLayer.hpp>
#include <Geode/binding/GameManager.hpp>
#include <Geode/binding/TextArea.hpp>
#include <Geode/binding/FMODAudioEngine.hpp>
#include <cocos2d.h>
#include <cstdlib>

using namespace cocos2d;

cocos2d::CCScene* LoadingLayer::scene(bool refresh) {
    auto scene = cocos2d::CCScene::create();
    auto layer = LoadingLayer::create(refresh);
    if (scene && layer) {
        scene->addChild(layer);
    }
    return scene;
}

const char* LoadingLayer::getLoadingString() {
    if (m_fromRefresh) {
        return "Loading resources";
    }

    switch (std::rand() % 100) {
        case 1:  return "Listen to the music to help time your jumps";
        case 2:  return "Back for more are ya?";
        case 3:  return "Use practice mode to learn the layout of a level";
        case 4:  return "If at first you don't succeed, try, try again...";
        case 5:  return "Customize your character's icon and color!";
        case 6:  return "You can download all songs from the level select page!";
        case 7:  return "Spikes are not your friends, don't forget to jump";
        case 8:  return "Build your own levels using the level editor";
        case 9:  return "Go online to play other players levels!";
        case 10: return "Can you beat them all?";
        case 11: return "Here be dragons...";
        case 12: return "Pro tip: Don't crash";
        case 13: return "Hold down to keep jumping";
        case 14: return "The spikes whisper to me...";
        case 15: return "Looking for pixels";
        case 16: return "Approaching lightspeed";
        case 17: return "Flipping gravity...";
        case 18: return "Looking for RobTop";
        case 19: return "Checking for updates...";
        case 20: return "Entering secret code...";
        case 21: return "Reticulating splines";
        case 22: return "Loading sound effects";
        case 23: return "Waiting for the drop";
        case 24: return "Cleaning up the floor";
        case 25: return "Charging flux capacitor";
        case 26: return "Recalibrating physics engine";
        case 27: return "Generating random obstacles";
        case 28: return "Polishing gold rings";
        case 29: return "Warming up the jump button";
        case 30: return "Sharpening triangle corners";
        case 31: return "Counting stars";
        case 32: return "Calibrating stereo audio";
        case 33: return "Calculating trajectory";
        case 34: return "Checking icon vault";
        case 35: return "Loading awesome music";
        case 36: return "Preparing next failure";
        case 37: return "Downloading more RAM";
        case 38: return "Checking secret chests";
        case 39: return "Consulting the demon guardian";
        case 40: return "Adding more sparkles";
        case 41: return "Aligning pixels...";
        case 42: return "Checking mana levels";
        case 43: return "Counting mana orbs";
        case 44: return "Calibrating gravity inverted portal";
        case 45: return "Preparing rainbow trails";
        case 46: return "Polishing the trophies";
        case 47: return "Tuning the wave controls";
        case 48: return "Summoning the spider";
        case 49: return "Hiding rocket launcher";
        case 50: return "It's Over 9000!";
        case 51: return "Programming amazing AI";
        case 52: return "Hiding secret vault";
        case 53: return "Spooky doesn't get out much";
        case 54: return "RubRub was here";
        case 55: return "Warp Speed";
        case 56: return "So, what's up?";
        case 57: return "Hold on, reading the manual";
        case 58: return "I don't know how this works...";
        case 59: return "Why u have to be mad?";
        case 60: return "It is only game...";
        case 61: return "What's a Ninja Muffin?";
        case 62: return "Update 2.3 coming soon";
        case 63: return "Why are you back? Just to suffer?";
        case 64: return "I am porfesional progarmer";
        case 65: return "Welcome to Robert Games";
        case 66: return "Winner of the Fastest Update award";
        case 67: return "You got something to eat?";
        case 68: return "Time to crash at 96%";
        case 69: return "Most relaxing game ever made";
        case 70: return "Now with more colors!";
        case 71: return "Troll Headquarters";
        case 72: return "Welcome to the friendliest place on earth";
        case 73: return "Loading Shape Jumper";
        case 74: return "Made by RobTroll";
        case 75: return "Why can't you just be nice";
        case 76: return "Loading the loading screen";
        case 77: return "Get ready for big fail";
        case 78: return "RTX OFF";
        case 79: return "It's Rob Toppin Time!";
        case 80: return "It's you again. I can smell it.";
        case 81: return "Eat. Sleep. Dash. Repeat.";
        case 82: return "Impossible geometry!";
        case 83: return "Breaking physics...";
        case 84: return "Trying to find more FPS";
        case 85: return "Stay calm, or panic. Whatever you prefer.";
        case 86: return "It's about time...";
        case 87: return "Loading done. Just waiting.";
        case 88: return "Gathering pixels...";
        case 89: return "At the end of the day, it is night.";
        case 90: return "You waited how many years!?";
        case 91: return "50% of the time, you crash, everytime.";
        case 92: return "Dont Dash. Open Inside.";
        case 93: return "Fixing bugs, hold on.";
        case 94: return "Adding bugs, hold on.";
        case 95: return "What are these physics...";
        case 96: return "Loading what, exactly?";
        case 97: return "Dashing to victory!";
        case 98: return "I'm something of a programmer myself.";
        case 99: return "You know what? I don't know...";
        default: return "Unlock new icons and colors by completing achievements!";
    }
}

bool LoadingLayer::init(bool refresh) {
    if (!cocos2d::CCLayer::init()) {
        return false;
    }

    m_fromRefresh = refresh;
    cocos2d::CCTexture2D::setDefaultAlphaPixelFormat(cocos2d::kCCTexture2DPixelFormat_RGBA8888);

    if (!m_fromRefresh) {
        FMODAudioEngine::sharedEngine();
    }

    auto gm = GameManager::sharedState();
    if (gm) {
        gm->loadBackground(1);
    }

    cocos2d::CCTextureCache::sharedTextureCache()->addImage("GJ_LaunchSheet.png", false);
    cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile("GJ_LaunchSheet.plist");

    auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();

    auto bg = cocos2d::CCSprite::create(cocos2d::CCString::createWithFormat("game_bg_%02d_001.png", 1)->getCString());
    if (bg) {
        this->addChild(bg);
        bg->setPosition(cocos2d::CCPoint(winSize.width * 0.5f, winSize.height * 0.5f));
        bg->setColor({ 102, 102, 255 });
    }

    auto logo = cocos2d::CCSprite::createWithSpriteFrameName("GJ_logo_001.png");
    if (logo) {
        this->addChild(logo);
        logo->setPosition(cocos2d::CCPoint(winSize.width * 0.5f, winSize.height * 0.5f));

        auto robtopLogo = cocos2d::CCSprite::createWithSpriteFrameName("RobTopLogoBig_001.png");
        if (robtopLogo) {
            this->addChild(robtopLogo);
            robtopLogo->setPosition(logo->getPosition() + cocos2d::CCPoint(0.0f, 80.0f));
        }
    }

    m_unknown2 = true;
    m_loadStep = 0;

    auto cocosLogo = cocos2d::CCSprite::createWithSpriteFrameName("cocos2DxLogo.png");
    if (cocosLogo) {
        this->addChild(cocosLogo);
        cocosLogo->setPosition(cocos2d::CCPoint(winSize.width - 34.0f, 13.0f));

        auto fmodLogo = cocos2d::CCSprite::createWithSpriteFrameName("fmodLogo.png");
        if (fmodLogo) {
            this->addChild(fmodLogo);
            fmodLogo->setPosition(cocosLogo->getPosition() + cocos2d::CCPoint(0.0f, 20.0f));
        }
    }

    m_caption = cocos2d::CCLabelBMFont::create(this->getLoadingString(), "goldFont.fnt");
    if (m_caption) {
        this->addChild(m_caption);
        m_caption->setPosition(cocos2d::CCPoint(winSize.width * 0.5f, winSize.height * 0.5f - 70.0f));
        m_caption->setVisible(false);
    }

    m_textArea = TextArea::create(this->getLoadingString(), "goldFont.fnt", 1.0f, 440.0f, cocos2d::CCPoint(0.5f, 0.5f), 28.0f, false, 0);
    if (m_textArea) {
        this->addChild(m_textArea);
        m_textArea->setPosition(cocos2d::CCPoint(winSize.width * 0.5f, winSize.height * 0.5f - 100.0f));
    }

    auto sliderGroove = cocos2d::CCSprite::create("slidergroove.png");
    if (sliderGroove) {
        this->addChild(sliderGroove, 3);
        m_sliderBar = cocos2d::CCSprite::create("sliderBar.png");
        if (m_sliderBar) {
            m_sliderGrooveXPos = sliderGroove->getContentSize().width - 4.0f;
            m_sliderGrooveHeight = 16.0f;
            cocos2d::ccTexParams params = { GL_LINEAR, GL_LINEAR, GL_REPEAT, GL_REPEAT };
            if (auto tex = m_sliderBar->getTexture()) {
                tex->setTexParameters(&params);
            }
            sliderGroove->addChild(m_sliderBar, -1);
            m_sliderBar->setAnchorPoint(cocos2d::CCPointZero);
            m_sliderBar->setPosition(cocos2d::CCPoint(2.0f, 4.0f));
        }
        if (m_caption && m_textArea) {
            sliderGroove->setPosition(cocos2d::CCPoint(m_caption->getPositionX(), m_textArea->getPositionY() + 40.0f));
        }
    }

    this->updateProgress(0);

    auto seq = cocos2d::CCSequence::create(
        cocos2d::CCDelayTime::create(0.0f),
        cocos2d::CCCallFunc::create(this, callfunc_selector(LoadingLayer::loadAssets)),
        nullptr
    );
    cocos2d::CCDirector::sharedDirector()->getActionManager()->addAction(seq, this, false);

    return true;
}

void LoadingLayer::updateProgress(int progress) {
    if (m_sliderBar) {
        float width = (m_sliderGrooveXPos * static_cast<float>(progress)) / 100.0f;
        m_sliderBar->setTextureRect(cocos2d::CCRect(0.0f, 0.0f, width, m_sliderGrooveHeight));
    }
}

void LoadingLayer::loadAssets() {
    auto tc = cocos2d::CCTextureCache::sharedTextureCache();
    auto sfc = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();

    switch (m_loadStep) {
        case 0:
            tc->addImage("GJ_GameSheet.png", false);
            sfc->addSpriteFramesWithFile("GJ_GameSheet.plist");
            break;
        case 1:
            tc->addImage("GJ_GameSheet02.png", false);
            sfc->addSpriteFramesWithFile("GJ_GameSheet02.plist");
            break;
        case 2:
            tc->addImage("GJ_GameSheet03.png", false);
            sfc->addSpriteFramesWithFile("GJ_GameSheet03.plist");
            tc->addImage("GJ_GameSheetEditor.png", false);
            sfc->addSpriteFramesWithFile("GJ_GameSheetEditor.plist");
            break;
        case 3:
            tc->addImage("GJ_GameSheet04.png", false);
            sfc->addSpriteFramesWithFile("GJ_GameSheet04.plist");
            break;
        case 4:
            tc->addImage("GJ_GameSheetGlow.png", false);
            sfc->addSpriteFramesWithFile("GJ_GameSheetGlow.plist");
            break;
        case 5:
            tc->addImage("FireSheet_01.png", false);
            sfc->addSpriteFramesWithFile("FireSheet_01.plist");
            tc->addImage("GJ_ShopSheet.png", false);
            sfc->addSpriteFramesWithFile("GJ_ShopSheet.plist");
            tc->addImage("smallDot.png", false);
            tc->addImage("square02_001.png", false);
            tc->addImage("GJ_ParticleSheet.png", false);
            sfc->addSpriteFramesWithFile("GJ_ParticleSheet.plist");
            tc->addImage("PixelSheet_01.png", false);
            sfc->addSpriteFramesWithFile("PixelSheet_01.plist");
            break;
        case 6:
            tc->addImage("CCControlColourPickerSpriteSheet.png", false);
            sfc->addSpriteFramesWithFile("CCControlColourPickerSpriteSheet.plist");
            tc->addImage("GJ_gradientBG.png", false);
            tc->addImage("edit_barBG_001.png", false);
            tc->addImage("GJ_button_01.png", false);
            tc->addImage("slidergroove2.png", false);
            tc->addImage("sliderBar2.png", false);
            break;
        case 7:
            tc->addImage("GJ_square01.png", false);
            tc->addImage("GJ_square02.png", false);
            tc->addImage("GJ_square03.png", false);
            tc->addImage("GJ_square05.png", false);
            tc->addImage("gravityLine_001.png", false);
            break;
        case 8:
            cocos2d::CCLabelBMFont::create(" ", "chatFont.fnt");
            tc->addImage("goldFont.png", false);
            tc->addImage("bigFont.png", false);
            cocos2d::CCLabelBMFont::create(" ", "goldFont.fnt");
            break;
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            break;
        default:
            this->loadingFinished();
            return;
    }

    m_loadStep++;
    m_unknown2 = true;
    this->updateProgress(m_loadStep * 7);

    auto seq = cocos2d::CCSequence::create(
        cocos2d::CCDelayTime::create(0.01f),
        cocos2d::CCCallFunc::create(this, callfunc_selector(LoadingLayer::loadAssets)),
        nullptr
    );
    cocos2d::CCDirector::sharedDirector()->getActionManager()->addAction(seq, this, false);
}
