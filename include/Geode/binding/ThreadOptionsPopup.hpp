#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class ThreadOptionsPopup : public SetupTriggerPopup, public ThreadMessageDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "ThreadOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xd2d70
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadOptionsPopup();

    /**
     * @note[short] Android
     */
    static ThreadOptionsPopup* create(GJMessageThread* p0, ThreadViewPopup* p1, bool p2);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xf5b40
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf4a90
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0xf5130
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0xf5510
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0xf5680
     * @note[short] Android
     */
    virtual void threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xf5730
     * @note[short] Android
     */
    virtual void threadMessagesFailed(int p0);

    /**
     * @note[short] Windows: 0xf57e0
     * @note[short] Android
     */
    virtual void threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xf5890
     * @note[short] Android
     */
    virtual void threadSearchFailed(int p0);

    /**
     * @note[short] Windows: 0xf5940
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] Windows: 0xf59f0
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
    bool init(GJMessageThread* p0, ThreadViewPopup* p1, bool p2);

    /**
     * @note[short] Android
     */
    void onCancelRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDismissRemoved(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHide(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLeave(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMembers(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onModLock(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMuteRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPinRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRename(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReport(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
};
