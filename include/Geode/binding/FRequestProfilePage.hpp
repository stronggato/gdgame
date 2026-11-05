#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/FriendRequestDelegate.hpp>
#include <Geode/binding/UserListDelegate.hpp>

class FRequestProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public FriendRequestDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FRequestProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FRequestProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x20d180
     * @note[short] Android: Rebinded
     */
    virtual  ~FRequestProfilePage();

    /**
     * @note[short] iOS: 0x21f0b8
     * @note[short] Android
     */
    static FRequestProfilePage* create(bool sent);

    /**
     * @note[short] MacOS (ARM): 0x766118
     * @note[short] MacOS (Intel): 0x86fac0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x24b00c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x76610c
     * @note[short] MacOS (Intel): 0x86fa90
     * @note[short] Windows: 0x20fe50
     * @note[short] iOS: 0x24b000
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1c251c
     * @note[short] Windows: 0x20f930
     * @note[short] iOS: 0x263138
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Windows: 0x20fe60
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] Windows: 0x20feb0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] Windows: 0x210050
     * @note[short] iOS: 0x24b1b0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (Intel): 0x8a4f80
     * @note[short] Windows: 0x210b10
     * @note[short] iOS: 0x22ef84
     * @note[short] Android
     */
    virtual void loadFRequestsFinished(cocos2d::CCArray* scores, char const* key);

    /**
     * @note[short] Windows: 0x210ba0
     * @note[short] Android
     */
    virtual void loadFRequestsFailed(char const* key, GJErrorCode errorType);

    /**
     * @note[short] Windows: 0x210c80
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] Windows: 0x210c60
     * @note[short] Android
     */
    virtual void forceReloadRequests(bool sent);

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] Windows: 0x20ebc0
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] Windows: 0x20ecd0
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType p0, GJErrorCode p1);

    /**
     * @note[short] Windows: 0x2106c0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x765cc0
     * @note[short] MacOS (Intel): 0x2131f0
     * @note[short] Android
     */
    void deleteSelected();

    /**
     * @note[short] Android
     */
    TodoReturn doSearch(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn exitGlobalMode();

    /**
     * @note[short] Android
     */
    bool init(bool sent);

    /**
     * @note[short] iOS: 0x263444
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] iOS: 0x262cfc
     * @note[short] Android
     */
    void loadPage(int page);

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
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGlobalSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMarkRead(cocos2d::CCObject* sender);

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
    void onSelectionChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x86ddd0
     * @note[short] Android
     */
    void onSentRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn removeFromNewCount(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn selectedCount();

    /**
     * @note[short] MacOS (ARM): 0x765a54
     * @note[short] iOS: 0x24a9e4
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* scores);

    /**
     * @note[short] MacOS (Intel): 0x213790
     * @note[short] Android
     */
    void untoggleAll();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateModeButtons();

    /**
     * @note[short] MacOS (ARM): 0x7671f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageArrows();

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectUI();
    bool m_sent;
    std::string m_key;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_circle;
    UploadActionPopup* m_uploadPopup;
    void* m_unk2e8;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_toggledAll;
};
