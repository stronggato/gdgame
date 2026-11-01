#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAnimSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAnimSettingsPopup();

    /**
     * @note[short] Android
     */
    static SetupAnimSettingsPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5ba00
     * @note[short] MacOS (Intel): 0x62760
     * @note[short] Windows: 0x59e3b0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5b220
     * @note[short] Windows: 0x59db20
     * @note[short] iOS: 0x3803e0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5b99c
     * @note[short] MacOS (Intel): 0x626f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x380a44
     * @note[short] Android
     */
    void updateAnimSettings();
};
