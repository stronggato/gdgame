#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class UIObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIObjectSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~UIObjectSettingsPopup();

    /**
     * @note[short] Android
     */
    static UIObjectSettingsPopup* create(UISettingsGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f7870
     * @note[short] MacOS (Intel): 0x5a97c0
     * @note[short] Windows: 0x5fcb40
     * @note[short] iOS: 0x489724
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f6e58
     * @note[short] Android
     */
    bool init(UISettingsGameObject* object, cocos2d::CCArray* objects);
};
