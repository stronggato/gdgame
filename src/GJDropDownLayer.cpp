#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/GJDropDownLayerDelegate.hpp>
#include <Geode/binding/GJListLayer.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <Geode/binding/GameManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [4/13] Address: 0x91760
// Method: GJDropDownLayer::GJDropDownLayer
GJDropDownLayer::GJDropDownLayer() {
    m_endPosition = cocos2d::CCPointZero;
    m_startPosition = cocos2d::CCPointZero;
    m_buttonMenu = nullptr;
    m_listLayer = nullptr;
    m_mainLayer = nullptr;
    m_closeOnHide = false;
    m_delegate = nullptr;
    m_fastMenu = false;
}

// [5/13] Address: 0x35be60
// Method: GJDropDownLayer::~GJDropDownLayer
GJDropDownLayer::~GJDropDownLayer() {
    auto director = cocos2d::CCDirector::sharedDirector();
    if (director && director->getTouchDispatcher()) {
        director->getTouchDispatcher()->unregisterForcePrio(this);
    }
}

// [1/13] Address: 0x45260
// Method: GJDropDownLayer::enterLayer
void GJDropDownLayer::enterLayer() {
    this->enableUI();
    this->showLayer(false);
}

// [2/13] Address: 0x45370
// Method: GJDropDownLayer::layerVisible
void GJDropDownLayer::layerVisible() {
    this->setVisible(true);
}

// [3/13] Address: 0x453c0
// Method: GJDropDownLayer::draw
void GJDropDownLayer::draw() {
    if (this->getOpacity() > 0) {
        cocos2d::CCLayerColor::draw();
    }
}

// [6/13] Address: 0x35bf10
// Method: GJDropDownLayer::init
bool GJDropDownLayer::init(char const* title, float height, bool noBack) {
    auto director = cocos2d::CCDirector::sharedDirector();
    if (director && director->getTouchDispatcher()) {
        director->getTouchDispatcher()->registerForcePrio(this, 2, 0);
    }

    if (!cocos2d::CCLayerColor::initWithColor(cocos2d::ccc4(0, 0, 0, 125))) {
        return false;
    }

    this->setTouchEnabled(true);
    this->setKeypadEnabled(true);
    this->setTouchMode(cocos2d::kCCTouchesOneByOne);

    auto winSize = director->getWinSize();

    this->m_mainLayer = cocos2d::CCLayer::create();
    this->addChild(this->m_mainLayer);

    this->m_endPosition = cocos2d::CCPointZero;
    this->m_startPosition = cocos2d::CCPoint(0.0f, winSize.height);
    this->m_mainLayer->setPosition(this->m_startPosition);

    this->m_listLayer = GJListLayer::create(nullptr, title, cocos2d::ccc4(0, 0, 0, 180), 356.0f, height, 0);
    if (this->m_listLayer) {
        this->m_mainLayer->addChild(this->m_listLayer);
        this->m_listLayer->setPosition(cocos2d::CCPoint(
            (winSize.width - 356.0f) * 0.5f,
            (winSize.height - height) * 0.5f - 5.0f
        ));
    }

    auto backSprite = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
    auto backBtn = CCMenuItemSpriteExtra::create(backSprite, nullptr, this, menu_selector(GJDropDownLayer::exitLayer));

    this->m_buttonMenu = cocos2d::CCMenu::create(backBtn, nullptr);
    float top = director->getScreenTop() - 23.0f;
    float left = director->getScreenLeft() + 24.0f;
    this->m_buttonMenu->setPosition(cocos2d::CCPoint(left, top));
    this->m_mainLayer->addChild(this->m_buttonMenu, 10);

    float listY = this->m_listLayer ? this->m_listLayer->getPositionY() : 0.0f;
    float chainY = height + listY + 12.0f;

    auto chainLeft = cocos2d::CCSprite::createWithSpriteFrameName("chain_01_001.png");
    this->m_mainLayer->addChild(chainLeft, -1);
    chainLeft->setAnchorPoint(cocos2d::CCPoint(0.5f, 0.0f));
    chainLeft->setPosition(cocos2d::CCPoint(winSize.width * 0.5f - 156.0f, chainY));
    chainLeft->setFlipX(false);

    auto chainRight = cocos2d::CCSprite::createWithSpriteFrameName("chain_01_001.png");
    this->m_mainLayer->addChild(chainRight, -1);
    chainRight->setAnchorPoint(cocos2d::CCPoint(0.5f, 0.0f));
    chainRight->setPosition(cocos2d::CCPoint(winSize.width * 0.5f + 156.0f, chainY));
    chainRight->setFlipX(true);

    this->m_closeOnHide = false;
    this->hideLayer(true);
    this->m_closeOnHide = true;
    this->customSetup();

    return true;
}

// [7/13] Address: 0x35c350
// Method: GJDropDownLayer::disableUI
void GJDropDownLayer::disableUI() {
    if (this->m_buttonMenu) {
        this->m_buttonMenu->setTouchEnabled(false);
    }
}

// [8/13] Address: 0x35c370
// Method: GJDropDownLayer::enableUI
void GJDropDownLayer::enableUI() {
    if (this->m_buttonMenu) {
        this->m_buttonMenu->setTouchEnabled(true);
    }
}

// [9/13] Address: 0x35c390
// Method: GJDropDownLayer::keyBackClicked
void GJDropDownLayer::keyBackClicked() {
    this->exitLayer(nullptr);
}

// [10/13] Address: 0x35c3b0
// Method: GJDropDownLayer::exitLayer
void GJDropDownLayer::exitLayer(cocos2d::CCObject* sender) {
    this->setKeypadEnabled(false);
    this->disableUI();
    this->hideLayer(this->m_fastMenu);
}

// [11/13] Address: 0x35c3f0
// Method: GJDropDownLayer::showLayer
void GJDropDownLayer::showLayer(bool instant) {
    if (this->m_mainLayer) {
        this->m_mainLayer->stopAllActions();
    }
    this->layerVisible();

    auto gm = GameManager::sharedState();
    if ((gm && gm->getGameVariable("0168")) || instant) {
        if (this->m_mainLayer) {
            this->m_mainLayer->setPosition(this->m_endPosition);
        }
        this->setOpacity(125);
        this->enterAnimFinished();
    } else {
        auto move = cocos2d::CCMoveTo::create(0.5f, this->m_endPosition);
        auto ease = cocos2d::CCEaseInOut::create(move, 2.0f);
        auto call = cocos2d::CCCallFunc::create(this, callfunc_selector(GJDropDownLayer::enterAnimFinished));
        auto seq = cocos2d::CCSequence::create(ease, call, nullptr);
        if (this->m_mainLayer) {
            this->m_mainLayer->runAction(seq);
        }
        this->setOpacity(0);
        this->runAction(cocos2d::CCFadeTo::create(0.5f, 125));
    }
}

// [12/13] Address: 0x35c540
// Method: GJDropDownLayer::hideLayer
void GJDropDownLayer::hideLayer(bool instant) {
    if (this->m_closeOnHide && this->m_delegate) {
        this->m_delegate->dropDownLayerWillClose(this);
    }
    if (this->m_mainLayer) {
        this->m_mainLayer->stopAllActions();
    }

    auto gm = GameManager::sharedState();
    if ((gm && gm->getGameVariable("0168")) || instant) {
        if (this->m_mainLayer) {
            this->m_mainLayer->setPosition(this->m_startPosition);
        }
        this->setOpacity(0);
        this->layerHidden();
    } else {
        auto move = cocos2d::CCMoveTo::create(0.5f, this->m_startPosition);
        auto ease = cocos2d::CCEaseInOut::create(move, 2.0f);
        auto call = cocos2d::CCCallFunc::create(this, callfunc_selector(GJDropDownLayer::layerHidden));
        auto seq = cocos2d::CCSequence::create(ease, call, nullptr);
        if (this->m_mainLayer) {
            this->m_mainLayer->runAction(seq);
        }
        this->runAction(cocos2d::CCFadeTo::create(0.5f, 0));
    }
}

// [13/13] Address: 0x35c690
// Method: GJDropDownLayer::layerHidden
void GJDropDownLayer::layerHidden() {
    this->setVisible(false);
    if (this->m_closeOnHide) {
        this->removeFromParentAndCleanup(true);
    }
}

void GJDropDownLayer::registerWithTouchDispatcher() {
    auto director = cocos2d::CCDirector::sharedDirector();
    if (director && director->getTouchDispatcher()) {
        director->getTouchDispatcher()->registerForcePrio(this, 2, 0);
    }
}
