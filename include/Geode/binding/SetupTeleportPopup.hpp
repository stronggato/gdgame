#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupTeleportPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTeleportPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTeleportPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5f2840
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupTeleportPopup();

    /**
     * @note[short] MacOS (Intel): 0x343c80
     * @note[short] Windows: 0x5f2930
     * @note[short] Android
     */
    static SetupTeleportPopup* create(TeleportPortalObject* object, cocos2d::CCArray* objects, int id, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x2d5db4
     * @note[short] MacOS (Intel): 0x345330
     * @note[short] Windows: 0x3978c0
     * @note[short] iOS: 0xc204
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x2d5db8
     * @note[short] MacOS (Intel): 0x345340
     * @note[short] Windows: 0x5f3d20
     * @note[short] iOS: 0xc208
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x2d5ec4
     * @note[short] MacOS (Intel): 0x345440
     * @note[short] Windows: 0x5f3d50
     * @note[short] iOS: 0xc2bc
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (Intel): 0x343db0
     * @note[short] iOS: 0xb388
     * @note[short] Android
     */
    bool init(TeleportPortalObject* object, cocos2d::CCArray* objects, int id, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x2d5c9c
     * @note[short] MacOS (Intel): 0x345210
     * @note[short] Windows: 0x5f3e50
     * @note[short] iOS: 0xc170
     * @note[short] Android
     */
    void onTeleportGravity(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d5e4c
     * @note[short] MacOS (Intel): 0x3453d0
     * @note[short] Windows: 0x5f3ef0
     * @note[short] iOS: 0xc244
     * @note[short] Android
     */
    void updateTeleportGravityState(int state);
    cocos2d::CCArray* m_teleportGravityToggles;
};
