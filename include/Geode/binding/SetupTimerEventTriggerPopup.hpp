#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupTimerEventTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimerEventTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimerEventTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupTimerEventTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupTimerEventTriggerPopup* create(TimerTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    bool init(TimerTriggerGameObject* object, cocos2d::CCArray* objects);
};
