#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <Geode/binding/FMODAudioEngine.hpp>
#include <cocos2d.h>

using namespace cocos2d;

CCMenuItemSpriteExtra::CCMenuItemSpriteExtra() {
    m_scaleMultiplier = 1.0f;
    m_baseScale = 1.0f;
    m_animationEnabled = true;
    m_colorEnabled = false;
    m_volume = 1.0f;
    m_activateSound = "";
    m_selectSound = "";
    m_colorDip = 0.5f;
    m_offset = cocos2d::CCPointZero;
    m_duration = 0.1f;
    m_unselectedDuration = 0.4f;
    m_animationType = MenuAnimationType::Scale;
    m_startPosition = cocos2d::CCPointZero;
    m_iconType = IconType::Cube;
}

CCMenuItemSpriteExtra* CCMenuItemSpriteExtra::create(cocos2d::CCNode* sprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback) {
    return CCMenuItemSpriteExtra::create(sprite, nullptr, target, callback);
}

CCMenuItemSpriteExtra* CCMenuItemSpriteExtra::create(cocos2d::CCNode* sprite, cocos2d::CCNode* selectedSprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback) {
    auto pRet = new CCMenuItemSpriteExtra();
    if (pRet && pRet->init(sprite, selectedSprite, target, callback)) {
        pRet->autorelease();
        return pRet;
    }
    delete pRet;
    return nullptr;
}

bool CCMenuItemSpriteExtra::init(cocos2d::CCNode* sprite, cocos2d::CCNode* selectedSprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback) {
    if (!CCMenuItemSprite::initWithTarget(target, callback)) {
        return false;
    }
    this->setNormalImage(sprite);
    if (selectedSprite) {
        this->setSelectedImage(selectedSprite);
    }
    this->setCascadeColorEnabled(true);
    this->setCascadeOpacityEnabled(true);
    return true;
}

void CCMenuItemSpriteExtra::activate() {
    if (this->isEnabled()) {
        this->stopAllActions();
        if (!m_animationEnabled) {
            this->setScale(m_baseScale);
        }
        if (!m_activateSound.empty()) {
            FMODAudioEngine::sharedEngine()->playEffect(m_activateSound, 1.0f, 0.0f, m_volume);
        }
        CCMenuItemSprite::activate();
    }
}

void CCMenuItemSpriteExtra::selected() {
    CCMenuItemSprite::selected();
    if (m_animationEnabled) {
        this->stopActionByTag(0);
        auto action = cocos2d::CCScaleTo::create(m_duration, m_baseScale * m_scaleMultiplier);
        action->setTag(0);
        this->runAction(action);
    }
    if (!m_selectSound.empty()) {
        FMODAudioEngine::sharedEngine()->playEffect(m_selectSound, 1.0f, 0.0f, m_volume);
    }
}

void CCMenuItemSpriteExtra::unselected() {
    CCMenuItemSprite::unselected();
    if (m_animationEnabled) {
        this->stopActionByTag(0);
        auto action = cocos2d::CCScaleTo::create(m_unselectedDuration, m_baseScale);
        action->setTag(0);
        this->runAction(action);
    }
}

void CCMenuItemSpriteExtra::setSizeMult(float mult) {
    m_scaleMultiplier = mult;
}

void CCMenuItemSpriteExtra::useAnimationType(MenuAnimationType type) {
    m_animationType = type;
}
