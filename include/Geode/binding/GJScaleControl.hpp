#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/unordered_map.hpp>

class GJScaleControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJScaleControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJScaleControl, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x1a0900
     * @note[short] Android: Rebinded
     */
    virtual  ~GJScaleControl();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJScaleControl();

    /**
     * @note[short] MacOS (Intel): 0x640000
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJScaleControl* create();

    /**
     * @note[short] MacOS (Intel): 0x640140
     * @note[short] Windows: 0x1a1680
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x57d408
     * @note[short] MacOS (Intel): 0x641480
     * @note[short] Windows: 0x1a2320
     * @note[short] iOS: 0x157d68
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57d6f0
     * @note[short] MacOS (Intel): 0x6417d0
     * @note[short] Windows: 0x1a25f0
     * @note[short] iOS: 0x158010
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57da7c
     * @note[short] MacOS (Intel): 0x641bc0
     * @note[short] Windows: 0x1a29d0
     * @note[short] iOS: 0x158358
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x83d80
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn applyFocusedInput();

    /**
     * @note[short] Android
     */
    TodoReturn createScaleInput(cocos2d::CCPoint p0, int p1, CCMenuItemSpriteExtra** p2);

    /**
     * @note[short] MacOS (Intel): 0x640a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void finishTouch();

    /**
     * @note[short] Android
     */
    TodoReturn hasActiveInput();

    /**
     * @note[short] MacOS (Intel): 0x640ab0
     * @note[short] Windows: 0x1a1d80
     * @note[short] iOS: 0x15774c
     * @note[short] Android
     */
    void loadValues(GameObject* object, cocos2d::CCArray* objects, std::unordered_map<int, GameObjectEditorState>& editorStates);

    /**
     * @note[short] Android
     */
    void onApplyScale(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x57b768
     * @note[short] MacOS (Intel): 0x640780
     * @note[short] iOS: 0x156660
     * @note[short] Android
     */
    void onToggleLockScale(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn releaseInputFocus();

    /**
     * @note[short] MacOS (ARM): 0x57d38c
     * @note[short] MacOS (Intel): 0x6413b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float scaleFromValue(float value);

    /**
     * @note[short] MacOS (ARM): 0x57d3c8
     * @note[short] MacOS (Intel): 0x6413f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float skewFromValue(float value);

    /**
     * @note[short] iOS: 0x157464
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateLabelX(float value);

    /**
     * @note[short] Android
     */
    void updateLabelXY(float value);

    /**
     * @note[short] Android
     */
    void updateLabelY(float value);

    /**
     * @note[short] MacOS (ARM): 0x57d3e0
     * @note[short] MacOS (Intel): 0x641440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float valueFromScale(float scale);

    /**
     * @note[short] MacOS (Intel): 0x641040
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float valueFromSkew(float value);
    Slider* m_sliderX;
    Slider* m_sliderY;
    Slider* m_sliderXY;
    int m_touchID;
    float m_valueX;
    float m_valueY;
    int m_unkSize4;
    float m_changedValueX;
    float m_changedValueY;
    bool m_scale1Lock;
    ScaleButtonType m_scaleButtonType;
    cocos2d::CCLabelBMFont* m_scaleXLabel;
    cocos2d::CCLabelBMFont* m_scaleYLabel;
    cocos2d::CCLabelBMFont* m_scaleLabel;
    GJScaleControlDelegate* m_delegate;
    float m_upperBound;
    float m_lowerBound;
    int m_senderTag;
    CCMenuItemSpriteExtra* m_scaleLockButton;
    bool m_scaleLocked;
};
