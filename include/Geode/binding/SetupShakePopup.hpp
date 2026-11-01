#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupShakePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShakePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShakePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5e6610
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupShakePopup();

    /**
     * @note[short] Windows: 0x5e66e0
     * @note[short] Android
     */
    static SetupShakePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x64fa78
     * @note[short] MacOS (Intel): 0x742640
     * @note[short] Windows: 0x5e7590
     * @note[short] iOS: 0x44e5f4
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x6500b8
     * @note[short] MacOS (Intel): 0x742db0
     * @note[short] Windows: 0x5e8000
     * @note[short] iOS: 0x44eb1c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64fdac
     * @note[short] MacOS (Intel): 0x742a20
     * @note[short] Windows: 0x5e7c20
     * @note[short] iOS: 0x44e8e4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x64ebc8
     * @note[short] Windows: 0x5e6820
     * @note[short] iOS: 0x44da70
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x64f474
     * @note[short] MacOS (Intel): 0x742060
     * @note[short] Windows: 0x5e7760
     * @note[short] iOS: 0x44e294
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x64fccc
     * @note[short] iOS: 0x44e814
     * @note[short] Android
     */
    void updateInterval();

    /**
     * @note[short] Android
     */
    void updateIntervalLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x64fd3c
     * @note[short] MacOS (Intel): 0x6b7ee0
     * @note[short] iOS: 0x260c08
     * @note[short] Android
     */
    void updateShake();

    /**
     * @note[short] Android
     */
    void updateShakeLabel(bool decimals);
    CCTextInputNode* m_durationInput;
    Slider* m_durationSlider;
    float m_duration;
    CCTextInputNode* m_strengthInput;
    Slider* m_strengthSlider;
    float m_strength;
    CCTextInputNode* m_intervalInput;
    Slider* m_intervalSlider;
    float m_interval;
};
