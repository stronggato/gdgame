#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>

class CCBlockLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "CCBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCBlockLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x46020
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCBlockLayer();

    /**
     * @note[short] MacOS (ARM): 0x518580
     * @note[short] MacOS (Intel): 0x518580
     * @note[short] Windows: 0x460f0
     * @note[short] Android: Rebinded
     */
     ~CCBlockLayer();

    /**
     * @note[short] MacOS (Intel): 0x518900
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCBlockLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x4735a0
     * @note[short] MacOS (Intel): 0x5189d0
     * @note[short] Windows: 0x461a0
     * @note[short] iOS: 0x8f138
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x473828
     * @note[short] MacOS (Intel): 0x518c80
     * @note[short] Windows: 0x463c0
     * @note[short] iOS: 0x8f398
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x473864
     * @note[short] MacOS (Intel): 0x518cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f3d4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x473884
     * @note[short] MacOS (Intel): 0x518d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f3f4
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x473874
     * @note[short] MacOS (Intel): 0x518cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f3e4
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x47387c
     * @note[short] MacOS (Intel): 0x518cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f3ec
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x473708
     * @note[short] MacOS (Intel): 0x518b40
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x8f278
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x473740
     * @note[short] MacOS (Intel): 0x518b80
     * @note[short] Windows: 0x462f0
     * @note[short] iOS: 0x8f2b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4736c4
     * @note[short] MacOS (Intel): 0x518ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f234
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x4736d0
     * @note[short] MacOS (Intel): 0x518b10
     * @note[short] Windows: 0x46260
     * @note[short] iOS: 0x8f240
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x47375c
     * @note[short] MacOS (Intel): 0x518bb0
     * @note[short] Windows: 0x46310
     * @note[short] iOS: 0x8f2cc
     * @note[short] Android
     */
    virtual void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x4737a8
     * @note[short] MacOS (Intel): 0x518bf0
     * @note[short] Windows: 0x46350
     * @note[short] iOS: 0x8f318
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x4737b4
     * @note[short] MacOS (Intel): 0x518c00
     * @note[short] Windows: 0x46360
     * @note[short] iOS: 0x8f324
     * @note[short] Android
     */
    virtual void hideLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x4737c4
     * @note[short] Windows: 0x46370
     * @note[short] iOS: 0x8f334
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x4737d4
     * @note[short] MacOS (Intel): 0x518c40
     * @note[short] Windows: 0x46380
     * @note[short] iOS: 0x8f344
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x4737c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f330
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x4736c8
     * @note[short] MacOS (Intel): 0x518af0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f238
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x4736cc
     * @note[short] MacOS (Intel): 0x518b00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f23c
     * @note[short] Android
     */
    virtual void enableUI();

    /**
     * @note[short] MacOS (ARM): 0x34e508
     * @note[short] MacOS (Intel): 0x518d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f3fc
     * @note[short] Android
     */
    void decrementForcePrio();

    /**
     * @note[short] MacOS (ARM): 0x34e4c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f1e8
     * @note[short] Android
     */
    void incrementForcePrio();
    bool m_closeOnHide;
    bool m_forcePrioRegistered;
};
