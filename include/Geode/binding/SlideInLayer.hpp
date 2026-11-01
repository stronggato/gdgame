#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SlideInLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "SlideInLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SlideInLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x21f624
     * @note[short] MacOS (Intel): 0x279a70
     * @note[short] Android
     */
    static SlideInLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x21f718
     * @note[short] MacOS (Intel): 0x279b90
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x21fde4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x21fe20
     * @note[short] MacOS (Intel): 0x27a2f0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x21fe40
     * @note[short] MacOS (Intel): 0x27a350
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x21fe30
     * @note[short] MacOS (Intel): 0x27a310
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x21fe38
     * @note[short] MacOS (Intel): 0x27a330
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x21fb00
     * @note[short] MacOS (Intel): 0x279fc0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x21fb38
     * @note[short] MacOS (Intel): 0x27a000
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x21fa9c
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x21fac8
     * @note[short] MacOS (Intel): 0x279f90
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x21fb5c
     * @note[short] MacOS (Intel): 0x27a040
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21fbc0
     * @note[short] MacOS (Intel): 0x27a090
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x21fcb0
     * @note[short] MacOS (Intel): 0x27a180
     * @note[short] Android
     */
    virtual void hideLayer(bool instant);

    /**
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x21faa0
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x21fab4
     * @note[short] MacOS (Intel): 0x279f70
     * @note[short] Android
     */
    virtual void enableUI();
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCSprite* m_exitSprite;
    CCMenuItemSpriteExtra* m_exitButton;
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    void* m_delegate;
    bool m_closeOnHide;
};
