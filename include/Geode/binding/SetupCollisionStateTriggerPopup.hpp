#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupInstantCollisionTriggerPopup.hpp>

class SetupCollisionStateTriggerPopup : public SetupInstantCollisionTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCollisionStateTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCollisionStateTriggerPopup, SetupInstantCollisionTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCollisionStateTriggerPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupCollisionStateTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupCollisionStateTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1888c
     * @note[short] iOS: 0x1b288c
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
