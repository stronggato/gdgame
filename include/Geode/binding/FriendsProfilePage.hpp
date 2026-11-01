#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/VirtualRowSource.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UserListDelegate.hpp>

class FriendsProfilePage : public PagedListPopup, public VirtualRowSource, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendsProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendsProfilePage, PagedListPopup)

    /**
     * @note[short] Windows: 0x211180
     * @note[short] Android: Rebinded
     */
    virtual  ~FriendsProfilePage();

    /**
     * @note[short] Windows: 0x16ddb0
     * @note[short] Android
     */
    static FriendsProfilePage* create(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x424cbc
     * @note[short] MacOS (Intel): 0x4c18e0
     * @note[short] Windows: 0x5b940
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0xc2bc0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (Intel): 0x989d40
     * @note[short] Windows: 0x212c80
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* scores, UserListType type);

    /**
     * @note[short] Windows: 0x213540
     * @note[short] iOS: 0x53f6dc
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType type, GJErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x643808
     * @note[short] MacOS (Intel): 0x7358b0
     * @note[short] Windows: 0x1250a0
     * @note[short] iOS: 0x271a44
     * @note[short] Android
     */
    virtual void userListChanged(cocos2d::CCArray* scores, UserListType type);

    /**
     * @note[short] Windows: 0x213610
     * @note[short] Android
     */
    virtual void forceReloadList(UserListType type);

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] Windows: 0x212680
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] Windows: 0xe7470
     * @note[short] Android
     */
    virtual int virtualRowHeight(int p0);

    /**
     * @note[short] Windows: 0x2126b0
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] Windows: 0x213e40
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x214090
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0x214120
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x2141f0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Windows: 0x214240
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn filterUsersWithQuery(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn getActiveUserList();

    /**
     * @note[short] Windows: 0x12f2b0
     * @note[short] Android
     */
    bool init(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x809e58
     * @note[short] Android
     */
    void onBlocked(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x214fa0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGlobalSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSwitchList(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSort(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSortDir(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUnblock(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUnfollow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUnmute(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6420f4
     * @note[short] MacOS (Intel): 0x7340e0
     * @note[short] iOS: 0x2708a4
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn rebuildList();

    /**
     * @note[short] Windows: 0xd7e10
     * @note[short] iOS: 0xa1a94
     * @note[short] Android
     */
    void setupUsersBrowser(cocos2d::CCArray* users, UserListType type);

    /**
     * @note[short] Android
     */
    TodoReturn sortUsers();

    /**
     * @note[short] Android
     */
    TodoReturn updateCountLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateSortLabel();
    UserListType m_type;
    cocos2d::CCLabelBMFont* m_noInternet;
    cocos2d::CCLabelBMFont* m_totalFriends;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_circle;
    void* m_unk532;
    cocos2d::CCArray* m_users;
    CCMenuItemSpriteExtra* m_refreshBtn;
};
