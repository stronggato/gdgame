#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupGameplayOffsetPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGameplayOffsetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGameplayOffsetPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5d2720
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupGameplayOffsetPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupGameplayOffsetPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x231f78
     * @note[short] Android
     */
    static SetupGameplayOffsetPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x76d550
     * @note[short] MacOS (Intel): 0x8779f0
     * @note[short] Windows: 0x5d3cd0
     * @note[short] iOS: 0x232768
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x76d538
     * @note[short] MacOS (Intel): 0x8779d0
     * @note[short] Windows: 0x5d3cb0
     * @note[short] iOS: 0x232750
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x76d4e8
     * @note[short] MacOS (Intel): 0x877980
     * @note[short] Windows: 0x5d3c60
     * @note[short] iOS: 0x232700
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x76d520
     * @note[short] MacOS (Intel): 0x8779b0
     * @note[short] Windows: 0x5d3c90
     * @note[short] iOS: 0x232738
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x76d454
     * @note[short] MacOS (Intel): 0x8778e0
     * @note[short] Windows: 0x5d3bb0
     * @note[short] iOS: 0x23267c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x76cd5c
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x232050
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x76d410
     * @note[short] MacOS (Intel): 0x8778a0
     * @note[short] Windows: 0x5d3b00
     * @note[short] iOS: 0x232638
     * @note[short] Android
     */
    void onDefaultValues(cocos2d::CCObject* sender);
};
