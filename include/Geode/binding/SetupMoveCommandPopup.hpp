#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupMoveCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMoveCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMoveCommandPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x38b840
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupMoveCommandPopup();

    /**
     * @note[short] Android
     */
    static SetupMoveCommandPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5f3500
     * @note[short] MacOS (Intel): 0x6de6a0
     * @note[short] Windows: 0x38cf70
     * @note[short] iOS: 0x310638
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x5f34d8
     * @note[short] MacOS (Intel): 0x6de670
     * @note[short] Windows: 0x38cf40
     * @note[short] iOS: 0x310610
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5f3530
     * @note[short] MacOS (Intel): 0x6de6d0
     * @note[short] Windows: 0x38cfa0
     * @note[short] iOS: 0x310668
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5f3424
     * @note[short] MacOS (Intel): 0x6de590
     * @note[short] Windows: 0x38ce90
     * @note[short] iOS: 0x31055c
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5f3468
     * @note[short] MacOS (Intel): 0x6de5e0
     * @note[short] Windows: 0x38cee0
     * @note[short] iOS: 0x3105a0
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5f36f8
     * @note[short] MacOS (Intel): 0x6de8e0
     * @note[short] Windows: 0x38d610
     * @note[short] iOS: 0x310828
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5f3278
     * @note[short] MacOS (Intel): 0x6de3e0
     * @note[short] Windows: 0x4bb40
     * @note[short] iOS: 0x3103b0
     * @note[short] Android
     */
    void updateControlVisibility();
    bool m_smallStep;
};
