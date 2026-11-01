#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/LevelCommentDelegate.hpp>
#include <Geode/binding/CommentUploadDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/vector.hpp>

class InfoLayer : public FLAlertLayer, public LevelCommentDelegate, public CommentUploadDelegate, public FLAlertLayerProtocol, public AdminActionConfirmDelegate {
public:
    static constexpr auto CLASS_NAME = "InfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3cae50
     * @note[short] Android: Rebinded
     */
    virtual  ~InfoLayer();

    /**
     * @note[short] Windows: 0x123790
     * @note[short] Android
     */
    static InfoLayer* create(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2, GJEditorSoundConfig* p3);

    /**
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3482a4
     * @note[short] MacOS (Intel): 0x3c3aa0
     * @note[short] Windows: 0x3ce950
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x788b74
     * @note[short] MacOS (Intel): 0x8950b0
     * @note[short] Windows: 0x3d0320
     * @note[short] iOS: 0x15b350
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x787d68
     * @note[short] MacOS (Intel): 0x894240
     * @note[short] Windows: 0x3cf470
     * @note[short] iOS: 0x3ef460
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* comments, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x787e4c
     * @note[short] MacOS (Intel): 0x894310
     * @note[short] Windows: 0x3cf4e0
     * @note[short] iOS: 0x3ef4d0
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x6430e0
     * @note[short] Windows: 0x3cf530
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] Windows: 0x3cf880
     * @note[short] iOS: 0x4f8370
     * @note[short] Android
     */
    virtual void commentUploadFinished(int parentID);

    /**
     * @note[short] MacOS (ARM): 0x810fc8
     * @note[short] Windows: 0x3cf940
     * @note[short] Android
     */
    virtual void commentUploadFailed(int parentID, CommentError errorType);

    /**
     * @note[short] MacOS (ARM): 0x788550
     * @note[short] Windows: 0x3cf740
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (Intel): 0x94cbb0
     * @note[short] Windows: 0x3cdb60
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Windows: 0x3d1970
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual TodoReturn ownsTouchPrio();

    /**
     * @note[short] Windows: 0x3d1380
     * @note[short] Android
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] Windows: 0x3d1660
     * @note[short] Android
     */
    virtual void bulkCommentDeleteFinished(int p0);

    /**
     * @note[short] Windows: 0x3d1870
     * @note[short] Android
     */
    virtual void bulkCommentDeleteFailed();

    /**
     * @note[short] Android
     */
    TodoReturn activeCommentID();

    /**
     * @note[short] Android
     */
    TodoReturn activeCommentKeyType();

    /**
     * @note[short] Android
     */
    TodoReturn canBulkDelete();

    /**
     * @note[short] Android
     */
    TodoReturn canToggleModRoom();

    /**
     * @note[short] Android
     */
    TodoReturn clearBulkSelection();

    /**
     * @note[short] Android
     */
    TodoReturn confirmBulkDelete(std::string const& p0, std::vector<int> const& p1);

    /**
     * @note[short] MacOS (Intel): 0x5bc7d0
     * @note[short] Android
     */
    void confirmReport(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x892710
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getAccountID();

    /**
     * @note[short] MacOS (ARM): 0x786420
     * @note[short] MacOS (Intel): 0x892710
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getID();

    /**
     * @note[short] MacOS (ARM): 0x787560
     * @note[short] MacOS (Intel): 0x8939d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getRealID();

    /**
     * @note[short] MacOS (ARM): 0x785f7c
     * @note[short] MacOS (Intel): 0x892230
     * @note[short] Windows: 0x3cd500
     * @note[short] iOS: 0x3edee4
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* frame, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, cocos2d::CCPoint position);

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2, GJEditorSoundConfig* p3);

    /**
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x786474
     * @note[short] MacOS (Intel): 0x892770
     * @note[short] Windows: 0x3ceaa0
     * @note[short] iOS: 0x3ee2a4
     * @note[short] Android
     */
    void loadPage(int page, bool noSetup);

    /**
     * @note[short] Android
     */
    void onBulkDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBulkSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x1bfbdc
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3cdcc0
     * @note[short] iOS: 0x10f88c
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCommentCellToggled(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7875f0
     * @note[short] MacOS (Intel): 0x893a80
     * @note[short] Windows: 0x160b50
     * @note[short] iOS: 0x53b53c
     * @note[short] Android
     */
    void onCopyLevelID(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGetComments(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d05a8
     * @note[short] MacOS (Intel): 0x893020
     * @note[short] Windows: 0x249210
     * @note[short] iOS: 0x3ee850
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x785564
     * @note[short] MacOS (Intel): 0x8917b0
     * @note[short] Windows: 0x3cdb90
     * @note[short] iOS: 0x3ed738
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80a244
     * @note[short] MacOS (Intel): 0x8921b0
     * @note[short] Windows: 0xd70a0
     * @note[short] iOS: 0x4f29d0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x891a40
     * @note[short] Windows: 0x3cdc00
     * @note[short] iOS: 0x3ed9a4
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x785ef8
     * @note[short] MacOS (Intel): 0x892190
     * @note[short] Windows: 0xd7090
     * @note[short] iOS: 0x3ede68
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x787154
     * @note[short] MacOS (Intel): 0x8935b0
     * @note[short] Android
     */
    void onRefreshComments(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x893d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onSimilar(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn parentalCommentsDisabled();

    /**
     * @note[short] Android
     */
    TodoReturn refreshBulkUI();

    /**
     * @note[short] Android
     */
    TodoReturn refreshUserTitle();

    /**
     * @note[short] Android
     */
    void reloadWindow();

    /**
     * @note[short] Android
     */
    TodoReturn setupBulkUI();

    /**
     * @note[short] MacOS (ARM): 0x78687c
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* comments);

    /**
     * @note[short] MacOS (ARM): 0x7855d4
     * @note[short] MacOS (Intel): 0x891820
     * @note[short] Windows: 0x3cd650
     * @note[short] iOS: 0x3ed798
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x4fa060
     * @note[short] MacOS (Intel): 0x892310
     * @note[short] Windows: 0x3cfef0
     * @note[short] iOS: 0x3edfcc
     * @note[short] Android
     */
    void toggleCommentMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x786144
     * @note[short] MacOS (Intel): 0x8923f0
     * @note[short] iOS: 0x3ee028
     * @note[short] Android
     */
    void toggleExtendedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn toggleModRoom(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x786174
     * @note[short] MacOS (Intel): 0x892420
     * @note[short] Windows: 0x284230
     * @note[short] Android
     */
    void toggleSmallCommentMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x786370
     * @note[short] MacOS (Intel): 0x892650
     * @note[short] Windows: 0x3cffb0
     * @note[short] iOS: 0x3ee1a0
     * @note[short] Android
     */
    void updateCommentModeButtons();

    /**
     * @note[short] MacOS (ARM): 0x7884e0
     * @note[short] MacOS (Intel): 0x894900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ef7f4
     * @note[short] Android
     */
    void updateLevelsLabel();
    GJGameLevel* m_level;
    GJUserScore* m_score;
    GJLevelList* m_levelList;
    std::string m_commentKey;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_noComments;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_reportBtn;
    CCMenuItemSpriteExtra* m_commentsBtn;
    CCMenuItemSpriteExtra* m_refreshCommentsBtn;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_canUpdateUserScore;
    CommentKeyType m_mode;
};
