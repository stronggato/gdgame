#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>

class RenameThreadPopup : public SetupTriggerPopup, public ThreadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "RenameThreadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RenameThreadPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xd3130
     * @note[short] Android: Rebinded
     */
    virtual  ~RenameThreadPopup();

    /**
     * @note[short] Android
     */
    static RenameThreadPopup* create(GJMessageThread* p0, ThreadViewPopup* p1);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xf9e10
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf9650
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0xf9820
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0xf9950
     * @note[short] Android
     */
    virtual void threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xf9a00
     * @note[short] Android
     */
    virtual void threadMessagesFailed(int p0);

    /**
     * @note[short] Windows: 0xf9ab0
     * @note[short] Android
     */
    virtual void threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xf9b60
     * @note[short] Android
     */
    virtual void threadSearchFailed(int p0);

    /**
     * @note[short] Windows: 0xf9c10
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] Windows: 0xf9cc0
     * @note[short] Android
     */
    virtual void threadSendFailed();

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
    void onSave(cocos2d::CCObject* sender);
};
