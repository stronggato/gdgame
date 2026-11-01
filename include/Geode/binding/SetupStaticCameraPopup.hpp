#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupStaticCameraPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupStaticCameraPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupStaticCameraPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupStaticCameraPopup();

    /**
     * @note[short] iOS: 0x266c14
     * @note[short] Android
     */
    static SetupStaticCameraPopup* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3100e8
     * @note[short] MacOS (Intel): 0x3852a0
     * @note[short] Windows: 0x5f27a0
     * @note[short] iOS: 0x267500
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x310170
     * @note[short] MacOS (Intel): 0x385330
     * @note[short] Windows: 0x5d3bb0
     * @note[short] iOS: 0x267518
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4266c4
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x310074
     * @note[short] MacOS (Intel): 0x385220
     * @note[short] iOS: 0x26748c
     * @note[short] Android
     */
    void updateState();
};
