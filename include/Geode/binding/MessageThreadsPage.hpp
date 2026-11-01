#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/FriendPickerDelegate.hpp>

class MessageThreadsPage : public FLAlertLayer, public ThreadMessageDelegate, public FLAlertLayerProtocol, public FriendPickerDelegate {
public:
    static constexpr auto CLASS_NAME = "MessageThreadsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MessageThreadsPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0xd1cb0
     * @note[short] Android: Rebinded
     */
    virtual  ~MessageThreadsPage();

    /**
     * @note[short] Windows: 0xd3440
     * @note[short] Android
     */
    static MessageThreadsPage* create();

    /**
     * @note[short] Windows: 0xd3660
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0xd82e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xd8170
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0xd6960
     * @note[short] Android
     */
    virtual void friendPicked(GJUserScore* p0);

    /**
     * @note[short] Windows: 0xd6b10
     * @note[short] Android
     */
    virtual bool isRecipientSelected(int p0);

    /**
     * @note[short] Windows: 0xd6b90
     * @note[short] Android
     */
    virtual TodoReturn selectedRecipientCount();

    /**
     * @note[short] Windows: 0xd6bb0
     * @note[short] Android
     */
    virtual TodoReturn selectedRecipients();

    /**
     * @note[short] Windows: 0xd6bc0
     * @note[short] Android
     */
    virtual void clearRecipients();

    /**
     * @note[short] Windows: 0xd6bf0
     * @note[short] Android
     */
    virtual void friendPickerClosed();

    /**
     * @note[short] Windows: 0xd5d60
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0xd75e0
     * @note[short] Android
     */
    virtual void threadListFinished(cocos2d::CCArray* p0, int p1, int p2, int p3);

    /**
     * @note[short] Windows: 0xd7d30
     * @note[short] Android
     */
    virtual void threadListFailed();

    /**
     * @note[short] Windows: 0xd63e0
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0xd6540
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn applyThreadList(cocos2d::CCArray* p0, int p1, int p2, int p3, bool p4);

    /**
     * @note[short] Android
     */
    TodoReturn checkActivityAbove(float p0);

    /**
     * @note[short] Android
     */
    bool isCovered();

    /**
     * @note[short] Windows: 0xd4e00
     * @note[short] Android
     */
    void loadPage(int p0, bool p1);

    /**
     * @note[short] Windows: 0xd7010
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd8200
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd5810
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onInboxPoll(float p0);

    /**
     * @note[short] Windows: 0xd7400
     * @note[short] Android
     */
    void onLegacyMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd6210
     * @note[short] Android
     */
    void onMarkRead(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd74a0
     * @note[short] Android
     */
    void onNewThread(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd70a0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd7090
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd7240
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd8120
     * @note[short] Android
     */
    void onScrollToTop(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd68e0
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd53c0
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd6fc0
     * @note[short] Android
     */
    void onSelectFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd54c0
     * @note[short] Android
     */
    void onSelectionChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd5690
     * @note[short] Android
     */
    void onShowInvites(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd5030
     * @note[short] Android
     */
    void onThreadsChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd6920
     * @note[short] Android
     */
    void onUserFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refetchIfQueued();

    /**
     * @note[short] Android
     */
    TodoReturn refreshUserFilterBtn();

    /**
     * @note[short] Android
     */
    TodoReturn selectedCount();

    /**
     * @note[short] Android
     */
    void setActivityAbove(bool p0);

    /**
     * @note[short] Android
     */
    void setInboxPoll(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupThreadBrowser(cocos2d::CCArray* p0, float p1);

    /**
     * @note[short] Windows: 0xd6650
     * @note[short] Android
     */
    TodoReturn syncSearchFromBox();

    /**
     * @note[short] Windows: 0xd6e30
     * @note[short] Android
     */
    TodoReturn updateFilterButtons();

    /**
     * @note[short] Android
     */
    TodoReturn updateInviteButton();

    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectUI();

    /**
     * @note[short] Windows: 0xd6d40
     * @note[short] Android
     */
    TodoReturn userFilterCSV();
};
