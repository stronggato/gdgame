#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>

class SetTextPopup : public FLAlertLayer, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "SetTextPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTextPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetTextPopup();

    /**
     * @note[short] Windows: 0x396d60
     * @note[short] Android: Rebinded
     */
     ~SetTextPopup();

    /**
     * @note[short] MacOS (Intel): 0x29a280
     * @note[short] Android
     */
    static SetTextPopup* create(std::string p0, std::string p1, int p2, std::string p3, std::string p4, bool p5, float p6, bool p7, int p8, int p9);

    /**
     * @note[short] MacOS (Intel): 0x37ca60
     * @note[short] Windows: 0x3a5c80
     * @note[short] iOS: 0x4d8a7c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7f13a4
     * @note[short] MacOS (Intel): 0x90aae0
     * @note[short] Windows: 0x3a5900
     * @note[short] iOS: 0x4df974
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x23ed08
     * @note[short] MacOS (Intel): 0x29b8c0
     * @note[short] Windows: 0x1250a0
     * @note[short] iOS: 0x37b2cc
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23ed24
     * @note[short] MacOS (Intel): 0x29b900
     * @note[short] Windows: 0x3a5450
     * @note[short] iOS: 0x37b2e8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x198cb0
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addInfoButton(std::string const& p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn addInfoLabel(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn addPathLabel(std::string const& p0);

    /**
     * @note[short] iOS: 0x3488a8
     * @note[short] Android
     */
    bool init(std::string p0, std::string p1, int p2, std::string p3, std::string p4, bool p5, float p6, bool p7, int p8, int p9);

    /**
     * @note[short] MacOS (ARM): 0x23ec4c
     * @note[short] MacOS (Intel): 0x29b800
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x18db4c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23eb80
     * @note[short] MacOS (Intel): 0x29b750
     * @note[short] Windows: 0x3a53f0
     * @note[short] iOS: 0x37b1f4
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x29b820
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_input;
    bool m_disableDelegate;
    bool m_cancelled;
    std::string m_value;
    SetTextPopupDelegate* m_delegate;
};
