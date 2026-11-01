#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupZoomTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupZoomTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupZoomTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x611ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupZoomTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupZoomTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x29f354
     * @note[short] MacOS (Intel): 0x30c450
     * @note[short] Windows: 0x3978c0
     * @note[short] iOS: 0x24c604
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x29f358
     * @note[short] MacOS (Intel): 0x30c460
     * @note[short] Windows: 0x3978d0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29efb8
     * @note[short] iOS: 0x313c8
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
