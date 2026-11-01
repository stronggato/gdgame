#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetIDPopup.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>

class SetFolderPopup : public SetIDPopup, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SetFolderPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetFolderPopup, SetIDPopup)

    /**
     * @note[short] Windows: 0x397000
     * @note[short] Android: Rebinded
     */
    virtual  ~SetFolderPopup();

    /**
     * @note[short] MacOS (ARM): 0x23d1e4
     * @note[short] MacOS (Intel): 0x299bd0
     * @note[short] Windows: 0x3a3bb0
     * @note[short] iOS: 0x379cac
     * @note[short] Android
     */
    static SetFolderPopup* create(int value, bool isCreated, std::string title);

    /**
     * @note[short] MacOS (ARM): 0x23d76c
     * @note[short] MacOS (Intel): 0x29a130
     * @note[short] Windows: 0x3a3f80
     * @note[short] iOS: 0x37a1a8
     * @note[short] Android
     */
    virtual void valueChanged();

    /**
     * @note[short] MacOS (ARM): 0x23db64
     * @note[short] MacOS (Intel): 0x29a510
     * @note[short] Windows: 0x3a4300
     * @note[short] iOS: 0x37a4a4
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* popup, std::string text);

    /**
     * @note[short] MacOS (ARM): 0x23d2e8
     * @note[short] MacOS (Intel): 0x299ca0
     * @note[short] Windows: 0x66b400
     * @note[short] iOS: 0x379d94
     * @note[short] Android
     */
    bool init(int value, bool isCreated, std::string title);

    /**
     * @note[short] MacOS (ARM): 0x23d55c
     * @note[short] Windows: 0x3a40e0
     * @note[short] iOS: 0x37a000
     * @note[short] Android
     */
    void onSetFolderName(cocos2d::CCObject* sender);
    bool m_isCreated;
    cocos2d::CCLabelBMFont* m_titleLabel;
};
