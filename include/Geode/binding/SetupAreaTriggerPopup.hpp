#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAreaMoveTriggerPopup.hpp>

class SetupAreaTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Windows: 0x59e8c0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAreaTriggerPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupAreaTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x5a41a0
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);
};
