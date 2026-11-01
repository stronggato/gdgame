#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/FriendPickerDelegate.hpp>
#include <Geode/binding/LevelPickerDelegate.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class NewThreadPopup : public FLAlertLayer, public ThreadMessageDelegate, public FriendPickerDelegate, public LevelPickerDelegate, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "NewThreadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NewThreadPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xd2bd0
     * @note[short] Android: Rebinded
     */
    virtual  ~NewThreadPopup();

    /**
     * @note[short] Android
     */
    static NewThreadPopup* create(int p0, std::string const& p1, std::string const& p2);

    /**
     * @note[short] Windows: 0xf2e40
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xef520
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] Windows: 0xf2d10
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0xe1e20
     * @note[short] Android
     */
    virtual void emotePickerKeyDown(EmotePickerPopup* p0, cocos2d::enumKeyCodes p1, double p2);

    /**
     * @note[short] Windows: 0xef700
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] Windows: 0xef890
     * @note[short] Android
     */
    virtual void emotePicked(EmotePickerPopup* p0, EmoteDef const* p1);

    /**
     * @note[short] Windows: 0xf0340
     * @note[short] Android
     */
    virtual void levelPicked(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0xf0440
     * @note[short] Android
     */
    virtual void listPicked(GJLevelList* p0);

    /**
     * @note[short] Windows: 0xf0530
     * @note[short] Android
     */
    virtual void shareIDPicked(int p0, bool p1);

    /**
     * @note[short] Windows: 0xf0dc0
     * @note[short] Android
     */
    virtual void friendPicked(GJUserScore* p0);

    /**
     * @note[short] Windows: 0xf0a30
     * @note[short] Android
     */
    virtual bool isRecipientSelected(int p0);

    /**
     * @note[short] Windows: 0xf0a00
     * @note[short] Android
     */
    virtual TodoReturn selectedRecipientCount();

    /**
     * @note[short] Windows: 0xf0a20
     * @note[short] Android
     */
    virtual TodoReturn selectedRecipients();

    /**
     * @note[short] Windows: 0xf00e0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0xf23f0
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] Windows: 0xf2c20
     * @note[short] Android
     */
    virtual void threadSendFailed();

    /**
     * @note[short] Android
     */
    TodoReturn applyMode();

    /**
     * @note[short] Android
     */
    TodoReturn bodyCharLimit();

    /**
     * @note[short] Android
     */
    TodoReturn bodyEmoteCap();

    /**
     * @note[short] Android
     */
    bool init(int p0, std::string const& p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn insertShareToken(std::string const& p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOpenPicker(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPickIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSend(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShareLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshIconSlot();

    /**
     * @note[short] Android
     */
    void setSendPending(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateCharCount(cocos2d::CCLabelBMFont* p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn updateRecipientLabel();
};
