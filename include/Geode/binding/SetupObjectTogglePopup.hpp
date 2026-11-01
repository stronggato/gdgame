#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupObjectTogglePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectTogglePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectTogglePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5bb0f0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupObjectTogglePopup();

    /**
     * @note[short] Android
     */
    static SetupObjectTogglePopup* create(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x2ee1b0
     * @note[short] MacOS (Intel): 0x35f640
     * @note[short] Windows: 0x5b5b70
     * @note[short] iOS: 0x236514
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ee138
     * @note[short] MacOS (Intel): 0x35f5c0
     * @note[short] Windows: 0x5bbcb0
     * @note[short] iOS: 0x2364a4
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2ed804
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);
};
