#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class NotificationFilterPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "NotificationFilterPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NotificationFilterPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~NotificationFilterPopup();

    /**
     * @note[short] Android
     */
    static NotificationFilterPopup* create(NotificationsPage* p0);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x476c40
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    bool init(NotificationsPage* p0);

    /**
     * @note[short] Android
     */
    void onDownloadMilestones(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFollowerMilestones(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFollowUploads(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFriendAccepts(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFriendRated(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFriendUploads(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSocialAlerts(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn savedMask();

    /**
     * @note[short] Android
     */
    TodoReturn toggleSource(int p0);
};
