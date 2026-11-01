#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/CommentAdminDelegate.hpp>
#include <Geode/binding/CommentUploadDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DropdownDelegate.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
#include <Geode/binding/ReviewChoiceDelegate.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class AccountReviewPopup : public PagedListPopup, public CommentAdminDelegate, public CommentUploadDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol, public DropdownDelegate, public AdminActionConfirmDelegate, public ReviewChoiceDelegate, public ThreadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "AccountReviewPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountReviewPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xadf70
     * @note[short] Android: Rebinded
     */
    virtual  ~AccountReviewPopup();

    /**
     * @note[short] Android
     */
    static AccountReviewPopup* create(int p0, std::string const& p1, GJUserScore* p2);

    /**
     * @note[short] Windows: 0xb2550
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] Windows: 0xb2390
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] Windows: 0xb2460
     * @note[short] Android
     */
    virtual TodoReturn clearPageContent();

    /**
     * @note[short] Windows: 0xae210
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb2630
     * @note[short] Android
     */
    virtual void dropdownSelectionChanged(Dropdown* p0, int p1);

    /**
     * @note[short] Windows: 0xb9690
     * @note[short] Android
     */
    virtual void reviewChoicePicked(int p0, int p1, std::string const& p2);

    /**
     * @note[short] Windows: 0xbb800
     * @note[short] Android
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] Windows: 0xba270
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0xbbc30
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Windows: 0xbad40
     * @note[short] Android
     */
    virtual void commentDeleteFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0xbacf0
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0xbad10
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0xafbe0
     * @note[short] Android
     */
    virtual void adminAccountReviewFinished(int p0, AccountReviewCard const& p1);

    /**
     * @note[short] Windows: 0xafef0
     * @note[short] Android
     */
    virtual void adminAccountReviewFailed(int p0);

    /**
     * @note[short] Windows: 0xb27b0
     * @note[short] Android
     */
    virtual void adminReportedContentFinished(int p0, cocos2d::CCArray* p1, AdminReportedMeta const& p2);

    /**
     * @note[short] Windows: 0xb2960
     * @note[short] Android
     */
    virtual void adminReportedContentFailed(int p0);

    /**
     * @note[short] Windows: 0xb29d0
     * @note[short] Android
     */
    virtual void adminAbuseInfoFinished(int p0, cocos2d::CCArray* p1, AdminAbuseMeta const& p2);

    /**
     * @note[short] Windows: 0xb2b30
     * @note[short] Android
     */
    virtual void adminAbuseInfoFailed(int p0);

    /**
     * @note[short] Windows: 0xb2ba0
     * @note[short] Android
     */
    virtual void adminUserHistoryFinished(int p0, cocos2d::CCArray* p1, int p2, int p3, int p4);

    /**
     * @note[short] Windows: 0xb2cd0
     * @note[short] Android
     */
    virtual void adminUserHistoryFailed(int p0);

    /**
     * @note[short] Windows: 0xb9c40
     * @note[short] Android
     */
    virtual void adminClearReportsFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0xb9ea0
     * @note[short] Android
     */
    virtual void adminClearReportsFailed(int p0);

    /**
     * @note[short] Windows: 0xbba40
     * @note[short] Android
     */
    virtual void adminDeleteCommentsFinished(int p0);

    /**
     * @note[short] Windows: 0xbbb80
     * @note[short] Android
     */
    virtual void adminDeleteCommentsFailed();

    /**
     * @note[short] Windows: 0xbbd20
     * @note[short] Android
     */
    virtual void adminCloseCaseFinished(int p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0xbc100
     * @note[short] Android
     */
    virtual void adminCloseCaseFailed(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn applySelected(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn buildDirectReportRow(cocos2d::CCNode* p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn buildFilterRows(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn buildHistoryRows(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn buildReportedRows(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn clearCard();

    /**
     * @note[short] Android
     */
    TodoReturn clearSelectedReports();

    /**
     * @note[short] Android
     */
    TodoReturn closeAfterDone();

    /**
     * @note[short] Android
     */
    TodoReturn confirmDeleteSelected();

    /**
     * @note[short] Android
     */
    TodoReturn deleteEntry(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteFailedTick(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteFilterEntry(int p0);

    /**
     * @note[short] Android
     */
    bool init(int p0, std::string const& p1, GJUserScore* p2);

    /**
     * @note[short] Android
     */
    TodoReturn jumpTo(int p0, int p1);

    /**
     * @note[short] Android
     */
    void onBans(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCommentHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopyAccountID(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteFilterRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDone(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHistoryJump(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onJumpFilterRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onJumpRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onModActionTaken(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNotes(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOpenProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn openUserComments(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn rebuildRows();

    /**
     * @note[short] Android
     */
    TodoReturn refreshCard();

    /**
     * @note[short] Android
     */
    TodoReturn selectedDeletable();

    /**
     * @note[short] Android
     */
    TodoReturn selectTab(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn threadDeleteAnswered();

    /**
     * @note[short] Android
     */
    TodoReturn updateCard(AccountReviewCard const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectedLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateTabControls();

    /**
     * @note[short] Android
     */
    TodoReturn viewedByLabel(std::string const& p0, std::string const& p1, float p2);
};
