#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/VirtualRowSource.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/LevelPickerDelegate.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class ThreadViewPopup : public FLAlertLayer, public VirtualRowSource, public ThreadMessageDelegate, public LevelPickerDelegate, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "ThreadViewPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadViewPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xd2190
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadViewPopup();

    /**
     * @note[short] Android
     */
    static ThreadViewPopup* create(GJMessageThread* p0);

    /**
     * @note[short] Windows: 0xe2e10
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xe2e80
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xe2ef0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xe4500
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xe1e00
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xe1e40
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] Windows: 0xc2b30
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0xe1e20
     * @note[short] Android
     */
    virtual void emotePickerKeyDown(EmotePickerPopup* p0, cocos2d::enumKeyCodes p1, double p2);

    /**
     * @note[short] Windows: 0xe1f10
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0xe1ed0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0xe1ef0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0xdd3f0
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] Windows: 0xdb930
     * @note[short] Android
     */
    virtual void levelPicked(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0xdba30
     * @note[short] Android
     */
    virtual void listPicked(GJLevelList* p0);

    /**
     * @note[short] Windows: 0xdbb20
     * @note[short] Android
     */
    virtual void shareIDPicked(int p0, bool p1);

    /**
     * @note[short] Windows: 0xddaa0
     * @note[short] Android
     */
    virtual void threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xdf040
     * @note[short] Android
     */
    virtual void threadMessagesFailed(int p0);

    /**
     * @note[short] Windows: 0xdaf40
     * @note[short] Android
     */
    virtual void threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xdb560
     * @note[short] Android
     */
    virtual void threadSearchFailed(int p0);

    /**
     * @note[short] Windows: 0xdd400
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] Windows: 0xdd820
     * @note[short] Android
     */
    virtual void threadSendFailed();

    /**
     * @note[short] Windows: 0xdc220
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0xdc5d0
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0xe0620
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] Windows: 0xe0630
     * @note[short] Android
     */
    virtual int virtualRowHeight(int p0);

    /**
     * @note[short] Windows: 0xe0730
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] Windows: 0xe0650
     * @note[short] Android
     */
    virtual void unmountVirtualRow(int p0, cocos2d::CCNode* p1);

    /**
     * @note[short] Android
     */
    TodoReturn buildMemberButton();

    /**
     * @note[short] Android
     */
    TodoReturn buildRows(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkMessageTap(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkUnseenBelow(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn createModView(GJMessageThread* p0, long long p1);

    /**
     * @note[short] Android
     */
    TodoReturn dmSendBlocked();

    /**
     * @note[short] Android
     */
    TodoReturn exitSearch(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn goToDate(std::string const& p0);

    /**
     * @note[short] Android
     */
    bool init(GJMessageThread* p0);

    /**
     * @note[short] Android
     */
    TodoReturn insertShareToken(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn jumpToLatest();

    /**
     * @note[short] Android
     */
    TodoReturn layoutComposeBar();

    /**
     * @note[short] Android
     */
    TodoReturn layoutRows();

    /**
     * @note[short] Android
     */
    TodoReturn layoutTitleRow();

    /**
     * @note[short] Android
     */
    TodoReturn measureBody(GJThreadMessage* p0);

    /**
     * @note[short] Android
     */
    TodoReturn messageWithID(long long p0);

    /**
     * @note[short] Android
     */
    TodoReturn onAutoRefresh(float p0);

    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

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
    void onHideKeyboard(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onHighlightFaded();

    /**
     * @note[short] Android
     */
    void onJumpToLatest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onJumpToMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLoadEarlier(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLoadNewer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMessageOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onScrollToBottom(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSend(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSenderProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShareLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShowDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShowMembers(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onThreadOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn openAt(long long p0);

    /**
     * @note[short] Android
     */
    TodoReturn pastScoreFor(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn refetchLatest();

    /**
     * @note[short] Android
     */
    TodoReturn refreshDMSubLabel();

    /**
     * @note[short] Android
     */
    TodoReturn refreshLockNotice();

    /**
     * @note[short] Android
     */
    TodoReturn removedView();

    /**
     * @note[short] Android
     */
    TodoReturn requestDeleteMessage(long long p0);

    /**
     * @note[short] Android
     */
    TodoReturn requestMessages(long long p0, long long p1);

    /**
     * @note[short] Android
     */
    TodoReturn scrollToUnreadLine();

    /**
     * @note[short] Android
     */
    TodoReturn senderNameFor(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn senderScoreFor(int p0);

    /**
     * @note[short] Android
     */
    void setPollInterval(float p0);

    /**
     * @note[short] Android
     */
    void setSendPending(bool p0);

    /**
     * @note[short] Android
     */
    void setUnseenBelow(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn showLoading();

    /**
     * @note[short] Android
     */
    TodoReturn sortMessagesByID();

    /**
     * @note[short] Android
     */
    TodoReturn startSearch(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateComposeCount();
};
