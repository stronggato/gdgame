#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAreaMoveTriggerPopup.hpp>

class SetupAreaTransformTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTransformTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTransformTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Windows: 0x59e540
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAreaTransformTriggerPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaTransformTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupAreaTransformTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4322f0
     * @note[short] Windows: 0x5a1940
     * @note[short] iOS: 0x307cc
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);
};
