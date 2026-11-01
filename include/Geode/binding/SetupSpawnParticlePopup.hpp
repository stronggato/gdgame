#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupSpawnParticlePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSpawnParticlePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSpawnParticlePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSpawnParticlePopup();

    /**
     * @note[short] Android
     */
    static SetupSpawnParticlePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
