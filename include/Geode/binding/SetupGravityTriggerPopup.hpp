#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupGravityTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGravityTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGravityTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5ba940
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupGravityTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupGravityTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x422b14
     * @note[short] MacOS (Intel): 0x4bf390
     * @note[short] Windows: 0x5bafb0
     * @note[short] iOS: 0x4a1938
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x4fd738
     * @note[short] iOS: 0x48d7f8
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
