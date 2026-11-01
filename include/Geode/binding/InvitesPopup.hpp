#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class InvitesPopup : public PagedListPopup, public ThreadMessageDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "InvitesPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InvitesPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xd2ed0
     * @note[short] Android: Rebinded
     */
    virtual  ~InvitesPopup();

    /**
     * @note[short] Android
     */
    static InvitesPopup* create();

    /**
     * @note[short] Windows: 0xf5b70
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] Windows: 0xf6390
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0xf8640
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0xf6580
     * @note[short] Android
     */
    virtual void threadInvitesFinished(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0xf65e0
     * @note[short] Android
     */
    virtual void threadInvitesFailed();

    /**
     * @note[short] Windows: 0xf87d0
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0xf8ae0
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn acceptInvite(GJMessageThread* p0);

    /**
     * @note[short] Android
     */
    TodoReturn buildRows();

    /**
     * @note[short] Android
     */
    TodoReturn declineInvite(GJMessageThread* p0);

    /**
     * @note[short] Android
     */
    TodoReturn layoutTitleInfo();

    /**
     * @note[short] Android
     */
    void onAccept(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDecline(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleIgnored(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewInviter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewMembers(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn removeInviteRow(int p0);
};
