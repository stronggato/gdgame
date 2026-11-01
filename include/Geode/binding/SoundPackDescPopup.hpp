#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>

class SoundPackDescPopup : public SetupTriggerPopup, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "SoundPackDescPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SoundPackDescPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x190450
     * @note[short] Android: Rebinded
     */
    virtual  ~SoundPackDescPopup();

    /**
     * @note[short] Android
     */
    static SoundPackDescPopup* create(std::string const& p0, std::string const& p1, SoundPackDescDelegate* p2);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x198fe0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x198590
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x198c60
     * @note[short] Android
     */
    virtual void emotePicked(EmotePickerPopup* p0, EmoteDef const* p1);

    /**
     * @note[short] Windows: 0x198cb0
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] Android
     */
    bool init(std::string const& p0, std::string const& p1, SoundPackDescDelegate* p2);

    /**
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPickIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshIconSlot();
};
