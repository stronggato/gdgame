#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/LevelCommentDelegate.hpp>
#include <Geode/binding/CommentUploadDelegate.hpp>
#include <Geode/binding/UserInfoDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/LeaderboardManagerDelegate.hpp>
#include <Geode/binding/FollowUserDelegate.hpp>

class ProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public LevelCommentDelegate, public CommentUploadDelegate, public UserInfoDelegate, public UploadActionDelegate, public UploadPopupDelegate, public LeaderboardManagerDelegate, public FollowUserDelegate {
public:
    static constexpr auto CLASS_NAME = "ProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x54c7c0
     * @note[short] Android: Rebinded
     */
    virtual  ~ProfilePage();

    /**
     * @note[short] MacOS (ARM): 0x78f0e8
     * @note[short] MacOS (Intel): 0x89bc00
     * @note[short] Windows: 0x54ca10
     * @note[short] Android
     */
    static ProfilePage* create(int accountID, bool ownProfile);

    /**
     * @note[short] MacOS (ARM): 0x7984fc
     * @note[short] MacOS (Intel): 0x8a5970
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x22f584
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x796900
     * @note[short] MacOS (Intel): 0x8a3db0
     * @note[short] Windows: 0x555280
     * @note[short] iOS: 0x22e4dc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x555630
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x796340
     * @note[short] Windows: 0x554af0
     * @note[short] iOS: 0x22e114
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x7969f4
     * @note[short] MacOS (Intel): 0x8a3ec0
     * @note[short] Windows: 0x5554b0
     * @note[short] iOS: 0x22e4e8
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x796a94
     * @note[short] MacOS (Intel): 0x8a3fa0
     * @note[short] Windows: 0x5555e0
     * @note[short] iOS: 0x22e588
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x797400
     * @note[short] MacOS (Intel): 0x8a48e0
     * @note[short] Windows: 0x555ec0
     * @note[short] iOS: 0x22eb98
     * @note[short] Android
     */
    virtual void getUserInfoFinished(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x7977a0
     * @note[short] MacOS (Intel): 0x8a4cb0
     * @note[short] Windows: 0x555fe0
     * @note[short] iOS: 0x22edf8
     * @note[short] Android
     */
    virtual void getUserInfoFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x797870
     * @note[short] MacOS (Intel): 0x8a4d70
     * @note[short] Windows: 0x556030
     * @note[short] iOS: 0x22ee64
     * @note[short] Android
     */
    virtual void userInfoChanged(GJUserScore* score);

    /**
     * @note[short] MacOS (Intel): 0x8a4f80
     * @note[short] Windows: 0x5566a0
     * @note[short] iOS: 0x22ef84
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* comments, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x797b90
     * @note[short] MacOS (Intel): 0x8a5070
     * @note[short] Windows: 0x556720
     * @note[short] iOS: 0x22f008
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* key);

    /**
     * @note[short] Windows: 0x556780
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x798210
     * @note[short] MacOS (Intel): 0x8a5670
     * @note[short] Windows: 0x5569a0
     * @note[short] iOS: 0x11816c
     * @note[short] Android
     */
    virtual void commentUploadFinished(int parentID);

    /**
     * @note[short] Windows: 0x5569f0
     * @note[short] Android
     */
    virtual void commentUploadFailed(int parentID, CommentError errorType);

    /**
     * @note[short] MacOS (ARM): 0x798394
     * @note[short] MacOS (Intel): 0x8a57e0
     * @note[short] Windows: 0x556b30
     * @note[short] iOS: 0x22f454
     * @note[short] Android
     */
    virtual void commentDeleteFailed(int id, int parentID);

    /**
     * @note[short] MacOS (Intel): 0x8a3a20
     * @note[short] Windows: 0x554ef0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x3f44e8
     * @note[short] Windows: 0x554f40
     * @note[short] iOS: 0x50def0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (Intel): 0x8a3c90
     * @note[short] Windows: 0x555140
     * @note[short] iOS: 0x22e458
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] Windows: 0x553f80
     * @note[short] Android
     */
    virtual void followUserFinished(int p0, bool p1);

    /**
     * @note[short] Windows: 0x5547c0
     * @note[short] Android
     */
    virtual void followUserFailed(int p0, bool p1);

    /**
     * @note[short] MacOS (Intel): 0x8a3330
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] Android
     */
    TodoReturn createOfflineNotice();

    /**
     * @note[short] Android
     */
    TodoReturn createUnfriendAlert(FLAlertLayerProtocol* p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x78f17c
     * @note[short] MacOS (Intel): 0x89bc70
     * @note[short] Windows: 0x54cc20
     * @note[short] Android
     */
    bool init(int accountID, bool ownProfile);

    /**
     * @note[short] MacOS (ARM): 0x1c29e8
     * @note[short] iOS: 0x22eee8
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x78ff54
     * @note[short] MacOS (Intel): 0x89cad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isOnWatchlist(int id);

    /**
     * @note[short] MacOS (ARM): 0x7974ac
     * @note[short] MacOS (Intel): 0x8a4980
     * @note[short] Windows: 0x5561f0
     * @note[short] iOS: 0x22ec44
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x232434
     * @note[short] MacOS (Intel): 0x232a00
     * @note[short] iOS: 0x2294c0
     * @note[short] Android
     */
    void loadPageFromUserInfo(GJUserScore* score);

    /**
     * @note[short] Android
     */
    void onAdminPanel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x793494
     * @note[short] MacOS (Intel): 0x891b90
     * @note[short] Windows: 0x553690
     * @note[short] iOS: 0x22bf74
     * @note[short] Android
     */
    void onBlockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x78ff5c
     * @note[short] MacOS (Intel): 0x89cae0
     * @note[short] iOS: 0x228d44
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7952e0
     * @note[short] MacOS (Intel): 0x8a26e0
     * @note[short] Windows: 0x552f10
     * @note[short] iOS: 0x22d580
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x794248
     * @note[short] MacOS (Intel): 0x8a14b0
     * @note[short] iOS: 0x22c9e4
     * @note[short] Android
     */
    void onCommentHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x794acc
     * @note[short] MacOS (Intel): 0x8a1e80
     * @note[short] Windows: 0xbe610
     * @note[short] iOS: 0x22d038
     * @note[short] Android
     */
    void onCopyName(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x9a790
     * @note[short] Windows: 0x41c4e0
     * @note[short] Android
     */
    void onFollow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x793130
     * @note[short] MacOS (Intel): 0x8a0320
     * @note[short] iOS: 0x22bf74
     * @note[short] Android
     */
    void onFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x22d4f8
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x58d280
     * @note[short] MacOS (Intel): 0x8a1640
     * @note[short] Windows: 0xcd7b0
     * @note[short] iOS: 0x22cb00
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x22d4f8
     * @note[short] Android
     */
    void onMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onModInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onModNotes(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x794d0c
     * @note[short] MacOS (Intel): 0x8a20c0
     * @note[short] Windows: 0x552ad0
     * @note[short] iOS: 0x22d238
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x794ed8
     * @note[short] MacOS (Intel): 0x8a22a0
     * @note[short] Windows: 0x552c50
     * @note[short] iOS: 0x22d37c
     * @note[short] Android
     */
    void onMyLists(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMyStuff(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x796334
     * @note[short] MacOS (Intel): 0x8a37e0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x22e108
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNotifications(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x796328
     * @note[short] MacOS (Intel): 0x8a37c0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x22e0fc
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReportUser(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307a20
     * @note[short] MacOS (Intel): 0x8a0250
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7952c0
     * @note[short] MacOS (Intel): 0x8a26c0
     * @note[short] Windows: 0x555940
     * @note[short] iOS: 0x22d560
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSocialPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onStatInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUnblockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x790338
     * @note[short] MacOS (Intel): 0x89ced0
     * @note[short] Windows: 0x54df70
     * @note[short] iOS: 0x2290a4
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupAccountButtons();

    /**
     * @note[short] MacOS (ARM): 0x78ffd4
     * @note[short] MacOS (Intel): 0x89cb60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x228dbc
     * @note[short] Android
     */
    void setupComments();

    /**
     * @note[short] MacOS (ARM): 0x7905e8
     * @note[short] MacOS (Intel): 0x89d1d0
     * @note[short] iOS: 0x229350
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* comments);

    /**
     * @note[short] MacOS (Intel): 0x36d460
     * @note[short] Windows: 0x27c780
     * @note[short] iOS: 0x311ab4
     * @note[short] Android
     */
    void showNoAccountError();

    /**
     * @note[short] MacOS (ARM): 0x796c90
     * @note[short] MacOS (Intel): 0x8a4180
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleMainPageVisibility(bool visible);

    /**
     * @note[short] MacOS (Intel): 0x96a640
     * @note[short] Android
     */
    void toggleShip(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn unblockUser();

    /**
     * @note[short] Android
     */
    TodoReturn updateFollowButton(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x79820c
     * @note[short] MacOS (Intel): 0x8a5660
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] Windows: 0xa7790
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageArrows();
    GJUserScore* m_score;
    int m_accountID;
    bool m_ownProfile;
    std::string m_profileKey;
    cocos2d::CCLabelBMFont* m_somethingWentWrong;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_followBtn;
    bool m_unk;
    cocos2d::CCArray* m_buttons;
    cocos2d::CCArray* m_arrayWithUsernameLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    LoadingCircle* m_circle;
    UploadActionPopup* m_popupDelegate;
    CCMenuItemSpriteExtra* m_refreshBtn;
    int m_unk2;
};
