#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/ButtonSprite.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <Geode/binding/GameManager.hpp>
#include <Geode/binding/ScrollingLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

FLAlertLayer::FLAlertLayer() {
    m_buttonMenu = nullptr;
    m_alertProtocol = nullptr;
    m_scene = nullptr;
    m_reverseKeyBack = false;
    m_color = cocos2d::ccc3(0, 0, 0);
    m_mainLayer = nullptr;
    m_ZOrder = 0;
    m_noElasticity = false;
    m_color2 = cocos2d::ccc3(0, 0, 0);
    m_unk258 = cocos2d::CCPointZero;
    m_button1 = nullptr;
    m_button2 = nullptr;
    m_scrollingLayer = nullptr;
    m_controlConnected = -1;
    m_containsBorder = false;
    m_noAction = false;
    m_joystickConnected = -1;
    m_forcePrioRegistered = false;
    m_width = 0.0f;
    m_height = 0.0f;
    m_unk290 = false;
}

FLAlertLayer::~FLAlertLayer() {
    this->removeAllChildrenWithCleanup(true);
}

FLAlertLayer* FLAlertLayer::create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width) {
    return FLAlertLayer::create(delegate, title, desc, btn1, btn2, width, false, 0.0f, 1.0f);
}

FLAlertLayer* FLAlertLayer::create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale) {
    auto pRet = new FLAlertLayer();
    if (pRet && pRet->init(delegate, title, desc, btn1, btn2, width, scroll, height, textScale)) {
        pRet->autorelease();
        return pRet;
    }
    delete pRet;
    return nullptr;
}

bool FLAlertLayer::init(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale) {
    if (!cocos2d::CCLayerColor::initWithColor(cocos2d::ccc4(0, 0, 0, 150))) {
        return false;
    }

    m_alertProtocol = delegate;
    m_width = width;
    m_height = height;

    auto gm = GameManager::sharedState();
    if (gm && gm->getGameVariable("0168")) {
        m_noElasticity = true;
    }

    this->setTouchEnabled(true);
    this->setKeypadEnabled(true);

    m_mainLayer = cocos2d::CCLayer::create();
    if (m_mainLayer) {
        this->addChild(m_mainLayer);
    }

    m_buttonMenu = cocos2d::CCMenu::create();
    if (m_buttonMenu) {
        this->addChild(m_buttonMenu, 2);
    }

    return true;
}

void FLAlertLayer::show() {
    auto scene = m_scene ? m_scene : cocos2d::CCDirector::sharedDirector()->getRunningScene();
    if (scene) {
        scene->addChild(this, 100);
    }

    if (!m_noElasticity && m_mainLayer) {
        m_mainLayer->setScale(0.1f);
        auto scaleAction = cocos2d::CCEaseElasticOut::create(cocos2d::CCScaleTo::create(0.5f, 1.0f), 0.6f);
        m_mainLayer->runAction(scaleAction);
    }
}

bool FLAlertLayer::ownsTouchPrio() {
    return true;
}

void FLAlertLayer::registerWithTouchDispatcher() {
    cocos2d::CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, -500, true);
}

bool FLAlertLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
    return true;
}

void FLAlertLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
}

void FLAlertLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
}

void FLAlertLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
}

void FLAlertLayer::keyBackClicked() {
    this->setKeypadEnabled(false);
    this->setTouchEnabled(false);

    if (m_alertProtocol) {
        m_alertProtocol->FLAlert_Clicked(this, m_reverseKeyBack);
    }

    this->removeFromParentAndCleanup(true);
}

void FLAlertLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) {
    switch (key) {
        case cocos2d::KEY_Space:
        case cocos2d::KEY_Enter:
            if (m_alertProtocol) {
                m_alertProtocol->FLAlert_Clicked(this, true);
            }
            this->removeFromParentAndCleanup(true);
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
