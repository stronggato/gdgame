#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class CustomizeObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomizeObjectSettingsPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CustomizeObjectSettingsPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CustomizeObjectSettingsPopup* create(GameObject* object, cocos2d::CCArray* objects, CustomizeObjectLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x18fedc
     * @note[short] MacOS (Intel): 0x1dbfe0
     * @note[short] Windows: 0x1431d0
     * @note[short] iOS: 0x59328
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x1dbf70
     * @note[short] Windows: 0x143120
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18fa88
     * @note[short] MacOS (Intel): 0x1dbb50
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x58f58
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects, CustomizeObjectLayer* layer);
    CustomizeObjectLayer* m_customizeLayer;
    bool m_settingsChanged;
};
