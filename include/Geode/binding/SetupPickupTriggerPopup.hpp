#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupPickupTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPickupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPickupTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupPickupTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupPickupTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1a2a4
     * @note[short] MacOS (Intel): 0x1e5d0
     * @note[short] Windows: 0x5c8dc0
     * @note[short] iOS: 0x47244
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x246e20
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1a244
     * @note[short] MacOS (Intel): 0x1e560
     * @note[short] Windows: 0x5c8d50
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateState();
};
