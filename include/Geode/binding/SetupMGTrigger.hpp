#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupMGTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMGTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMGTrigger, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5b8810
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupMGTrigger();

    /**
     * @note[short] Android
     */
    static SetupMGTrigger* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x466810
     * @note[short] MacOS (Intel): 0x50b150
     * @note[short] Windows: 0x5b9ad0
     * @note[short] iOS: 0x38cd1c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x466f88
     * @note[short] MacOS (Intel): 0x50ba20
     * @note[short] Windows: 0x5ba1e0
     * @note[short] iOS: 0x38d38c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x466d88
     * @note[short] MacOS (Intel): 0x50b7c0
     * @note[short] Windows: 0x5b9e30
     * @note[short] iOS: 0x38d1cc
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5aa190
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] Windows: 0x9ae30
     * @note[short] iOS: 0x38b990
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] iOS: 0x38cacc
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5aa0c0
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int posFromSliderValue(float value);

    /**
     * @note[short] Windows: 0x5aa800
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46659c
     * @note[short] MacOS (Intel): 0x50aee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float sliderValueFromPos(int pos);

    /**
     * @note[short] MacOS (ARM): 0x466544
     * @note[short] MacOS (Intel): 0x50ae90
     * @note[short] iOS: 0x38cb30
     * @note[short] Android
     */
    void sliderYChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void toggleEasingRateVisibility();

    /**
     * @note[short] MacOS (ARM): 0x466c40
     * @note[short] MacOS (Intel): 0x50b650
     * @note[short] iOS: 0x38d09c
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (Intel): 0x50b090
     * @note[short] iOS: 0x38cc40
     * @note[short] Android
     */
    void updateEasingLabel();

    /**
     * @note[short] Android
     */
    void updateEasingRateLabel();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMoveCommandEasing();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMoveCommandEasingRate();

    /**
     * @note[short] Android
     */
    void updateMoveCommandPosY();

    /**
     * @note[short] Android
     */
    void updateValueYLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_mgEasingLabel;
    EasingType m_mgEasingType;
    float m_mgEasingRate;
    CCMenuItemSpriteExtra* m_mgEasingRateButton;
    cocos2d::CCLabelBMFont* m_mgEasingRateLabel;
    CCTextInputNode* m_offsetYInput;
    Slider* m_offsetYSlider;
    int m_offsetY;
};
