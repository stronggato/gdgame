#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupRotateCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotateCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotateCommandPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x3ab240
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupRotateCommandPopup();

    /**
     * @note[short] Android
     */
    static SetupRotateCommandPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x263c
     * @note[short] MacOS (Intel): 0x2830
     * @note[short] Windows: 0x3ac710
     * @note[short] iOS: 0x484f8c
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2640
     * @note[short] MacOS (Intel): 0x2840
     * @note[short] Windows: 0x3ac720
     * @note[short] iOS: 0x484f90
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2614
     * @note[short] MacOS (Intel): 0x27e0
     * @note[short] Windows: 0x3ac6d0
     * @note[short] iOS: 0x484f64
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2638
     * @note[short] MacOS (Intel): 0x2820
     * @note[short] Windows: 0x3ac700
     * @note[short] iOS: 0x484f88
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x28d0
     * @note[short] MacOS (Intel): 0x2b80
     * @note[short] Windows: 0x1639d0
     * @note[short] iOS: 0x4850a4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x15ec
     * @note[short] Windows: 0xbf430
     * @note[short] iOS: 0x4841c8
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2538
     * @note[short] MacOS (Intel): 0x26e0
     * @note[short] Windows: 0x3aca80
     * @note[short] iOS: 0x484e88
     * @note[short] Android
     */
    void onInfiniteDuration(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2544
     * @note[short] MacOS (Intel): 0x2700
     * @note[short] Windows: 0x3ac9a0
     * @note[short] iOS: 0x484e94
     * @note[short] Android
     */
    void updateControlVisibility();
};
