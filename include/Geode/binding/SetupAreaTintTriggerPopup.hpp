#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAreaMoveTriggerPopup.hpp>
#include <Geode/binding/HSVWidgetDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class SetupAreaTintTriggerPopup : public SetupAreaMoveTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTintTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTintTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Windows: 0x5a30d0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAreaTintTriggerPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x59e7b0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaTintTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupAreaTintTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x4d3c50
     * @note[short] Windows: 0x5a3db0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x435228
     * @note[short] MacOS (Intel): 0x4d3f80
     * @note[short] Windows: 0x5a40f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x434e58
     * @note[short] MacOS (Intel): 0x4d3b70
     * @note[short] Windows: 0x5a3bf0
     * @note[short] iOS: 0x3b88c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Windows: 0x5a3ff0
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value);

    /**
     * @note[short] MacOS (ARM): 0x43431c
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3aed4
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x434d90
     * @note[short] MacOS (Intel): 0x4d3ab0
     * @note[short] iOS: 0x3b7c4
     * @note[short] Android
     */
    void updateHSVButton();
    CCMenuItemSpriteExtra* m_hsvButton;
    cocos2d::ccHSVValue m_hsvValue;
    bool m_hsvChanged;
};
