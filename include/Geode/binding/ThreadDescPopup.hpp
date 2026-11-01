#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>

class ThreadDescPopup : public SetupTriggerPopup, public ThreadMessageDelegate, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "ThreadDescPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadDescPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xd32a0
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadDescPopup();

    /**
     * @note[short] Android
     */
    static ThreadDescPopup* create(GJMessageThread* p0, ThreadViewPopup* p1);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xfd830
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xfc3b0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0xfca80
     * @note[short] Android
     */
    virtual void emotePicked(EmotePickerPopup* p0, EmoteDef const* p1);

    /**
     * @note[short] Windows: 0xfcad0
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] Windows: 0xfd1b0
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0xfd2d0
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0xfd410
     * @note[short] Android
     */
    virtual void threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xfd4c0
     * @note[short] Android
     */
    virtual void threadMessagesFailed(int p0);

    /**
     * @note[short] Windows: 0xfd570
     * @note[short] Android
     */
    virtual void threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xfd620
     * @note[short] Android
     */
    virtual void threadSearchFailed(int p0);

    /**
     * @note[short] Windows: 0xfd6d0
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] Windows: 0xfd780
     * @note[short] Android
     */
    virtual void threadSendFailed();

    /**
     * @note[short] Android
     */
    TodoReturn buildUI(bool p0, std::string const& p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn finishSave(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn handBackSlot();

    /**
     * @note[short] Android
     */
    bool init(GJMessageThread* p0, ThreadViewPopup* p1);

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

    /**
     * @note[short] Android
     */
    TodoReturn sendDescription();
};
