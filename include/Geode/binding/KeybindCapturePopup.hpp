#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/InputCaptureDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class KeybindCapturePopup : public SetupTriggerPopup, public InputCaptureDelegate {
public:
    static constexpr auto CLASS_NAME = "KeybindCapturePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindCapturePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x44b110
     * @note[short] Android: Rebinded
     */
    virtual  ~KeybindCapturePopup();

    /**
     * @note[short] Android
     */
    static KeybindCapturePopup* create(KeybindSource* p0, int p1, int p2, KeybindingsLayer* p3, KeybindCaptureMode p4);

    /**
     * @note[short] Windows: 0x44bd10
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] Windows: 0x44bcc0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44b240
     * @note[short] Android
     */
    virtual void inputKeySelected(int p0);

    /**
     * @note[short] Windows: 0x44bf80
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] Android
     */
    TodoReturn fadeButtonSprite(ButtonSprite* p0, bool p1);

    /**
     * @note[short] Android
     */
    bool init(KeybindSource* p0, int p1, int p2, KeybindingsLayer* p3, KeybindCaptureMode p4);

    /**
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSet(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleController(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateButtonStates();

    /**
     * @note[short] Android
     */
    TodoReturn updateChordDisplay();

    /**
     * @note[short] Android
     */
    TodoReturn updateConflictLabel();
};
