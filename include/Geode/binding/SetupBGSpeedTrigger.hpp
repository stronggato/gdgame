#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupBGSpeedTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupBGSpeedTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupBGSpeedTrigger, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5b88e0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupBGSpeedTrigger();

    /**
     * @note[short] Windows: 0x5ba250
     * @note[short] iOS: 0x38d41c
     * @note[short] Android
     */
    static SetupBGSpeedTrigger* create(EffectGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x46710c
     * @note[short] Windows: 0x5ba370
     * @note[short] iOS: 0x38d4fc
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, int id);
};
