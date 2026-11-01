#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/FriendPickerDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class MemberListPopup : public PagedListPopup, public ThreadMessageDelegate, public FriendPickerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "MemberListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MemberListPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xd2a70
     * @note[short] Android: Rebinded
     */
    virtual  ~MemberListPopup();

    /**
     * @note[short] Android
     */
    static MemberListPopup* create(GJMessageThread* p0, ThreadViewPopup* p1, bool p2);

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] Windows: 0xec9d0
     * @note[short] Android
     */
    virtual void friendPicked(GJUserScore* p0);

    /**
     * @note[short] Windows: 0xecb80
     * @note[short] Android
     */
    virtual bool isRecipientSelected(int p0);

    /**
     * @note[short] Windows: 0xecc00
     * @note[short] Android
     */
    virtual TodoReturn selectedRecipientCount();

    /**
     * @note[short] Windows: 0xecc20
     * @note[short] Android
     */
    virtual TodoReturn selectedRecipients();

    /**
     * @note[short] Windows: 0xecc30
     * @note[short] Android
     */
    virtual TodoReturn pickerRowState(int p0);

    /**
     * @note[short] Windows: 0xecd70
     * @note[short] Android
     */
    virtual TodoReturn pickerCountBase();

    /**
     * @note[short] Windows: 0xecda0
     * @note[short] Android
     */
    virtual void friendPickerAdd();

    /**
     * @note[short] Windows: 0xecd80
     * @note[short] Android
     */
    virtual void friendPickerClosed();

    /**
     * @note[short] Windows: 0xec4c0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0xed890
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0xedca0
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0xeaff0
     * @note[short] Android
     */
    virtual void threadMembersFinished(int p0);

    /**
     * @note[short] Windows: 0xeaff0
     * @note[short] Android
     */
    virtual void threadMembersFailed(int p0);

    /**
     * @note[short] Windows: 0xeb0c0
     * @note[short] Android
     */
    virtual void threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xeb120
     * @note[short] Android
     */
    virtual void threadMessagesFailed(int p0);

    /**
     * @note[short] Windows: 0xeb140
     * @note[short] Android
     */
    virtual void threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xeb160
     * @note[short] Android
     */
    virtual void threadSearchFailed(int p0);

    /**
     * @note[short] Windows: 0xeb180
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] Windows: 0xeb250
     * @note[short] Android
     */
    virtual void threadSendFailed();

    /**
     * @note[short] Android
     */
    TodoReturn applyAddOutcome(GJMessageThread* p0);

    /**
     * @note[short] Android
     */
    TodoReturn buildRows();

    /**
     * @note[short] Android
     */
    bool init(GJMessageThread* p0, ThreadViewPopup* p1, bool p2);

    /**
     * @note[short] Android
     */
    void onAddMember(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onAddPolicy(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onKickMember(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMemberProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRevokeInvite(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTransferOwner(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn opPending();

    /**
     * @note[short] Android
     */
    TodoReturn refreshHost();

    /**
     * @note[short] Android
     */
    TodoReturn refreshPolicyBtn();
};
