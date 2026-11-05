#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/NotificationListDelegate.hpp>

class NotificationsPage : public FLAlertLayer, public NotificationListDelegate {
public:
    static constexpr auto CLASS_NAME = "NotificationsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NotificationsPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x4749c0
     * @note[short] Android: Rebinded
     */
    virtual  ~NotificationsPage();

    /**
     * @note[short] Android
     */
    static NotificationsPage* create();

    /**
     * @note[short] Windows: 0x474b00
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x4755c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] Windows: 0x475850
     * @note[short] Android
     */
    virtual void loadNotificationsFinished(cocos2d::CCArray* p0, int p1, int p2, int p3);

    /**
     * @note[short] Windows: 0x4759e0
     * @note[short] Android
     */
    virtual void loadNotificationsFailed(int p0, GJErrorCode p1);

    /**
     * @note[short] Windows: 0x475a40
     * @note[short] Android
     */
    virtual void notificationRewardFinished(int p0);

    /**
     * @note[short] Windows: 0x475ca0
     * @note[short] Android
     */
    virtual void notificationRewardFailed(int p0);

    /**
     * @note[short] Windows: 0x475da0
     * @note[short] Android
     */
    virtual void notificationMuteFinished(int p0);

    /**
     * @note[short] Windows: 0x475df0
     * @note[short] Android
     */
    virtual void notificationMuteFailed(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn loadPage(int p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn reloadCells();

    /**
     * @note[short] Android
     */
    TodoReturn setupBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateCountLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows();
};
