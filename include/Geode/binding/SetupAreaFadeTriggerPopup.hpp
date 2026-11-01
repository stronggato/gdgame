#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAreaMoveTriggerPopup.hpp>

class SetupAreaFadeTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaFadeTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaFadeTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Windows: 0x59e6e0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAreaFadeTriggerPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaFadeTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupAreaFadeTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x5a2960
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);
};
