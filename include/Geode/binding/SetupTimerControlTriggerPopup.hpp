#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupTimerControlTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimerControlTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimerControlTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupTimerControlTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupTimerControlTriggerPopup* create(TimerTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x315b14
     * @note[short] MacOS (Intel): 0x38b480
     * @note[short] Windows: 0x5f55a0
     * @note[short] iOS: 0x31718
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x30f20
     * @note[short] Android
     */
    bool init(TimerTriggerGameObject* object, cocos2d::CCArray* objects);
};
