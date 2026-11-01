#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAreaMoveTriggerPopup.hpp>

class SetupAreaRotateTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaRotateTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaRotateTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Windows: 0x59e610
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAreaRotateTriggerPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaRotateTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupAreaRotateTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x5a2200
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);
};
