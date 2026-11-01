#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/LevelDownloadDelegate.hpp>
#include <Geode/binding/LevelUpdateDelegate.hpp>
#include <Geode/binding/RateLevelDelegate.hpp>
#include <Geode/binding/LikeItemDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/LevelDeleteDelegate.hpp>
#include <Geode/binding/NumberInputDelegate.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/vector.hpp>

class LevelInfoLayer : public cocos2d::CCLayer, public LevelDownloadDelegate, public LevelUpdateDelegate, public RateLevelDelegate, public LikeItemDelegate, public FLAlertLayerProtocol, public LevelDeleteDelegate, public NumberInputDelegate, public SetIDPopupDelegate, public TableViewCellDelegate, public AdminActionConfirmDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelInfoLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e2d8
     * @note[short] Android: Out of line
     */
     LevelInfoLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~LevelInfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x201494
     * @note[short] MacOS (Intel): 0x2a9bf0
     * @note[short] Windows: 0x1b2280
     * @note[short] iOS: 0x375704
     * @note[short] Android
     */
    static LevelInfoLayer* create(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x24b0c8
     * @note[short] MacOS (Intel): 0x2a9ba0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x2529ec
     * @note[short] MacOS (Intel): 0x2b18c0
     * @note[short] Windows: 0x4234a0
     * @note[short] iOS: 0x2e25c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2529f8
     * @note[short] MacOS (Intel): 0x2b18f0
     * @note[short] Windows: 0x4234b0
     * @note[short] iOS: 0x2e268
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x251fdc
     * @note[short] MacOS (Intel): 0x2b0ef0
     * @note[short] Windows: 0x41f8e0
     * @note[short] iOS: 0x2db78
     * @note[short] Android
     */
    virtual void numberInputClosed(NumberInputLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x250230
     * @note[short] MacOS (Intel): 0x2af090
     * @note[short] Windows: 0x41b990
     * @note[short] iOS: 0x2c298
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x251184
     * @note[short] MacOS (Intel): 0x2b0030
     * @note[short] Windows: 0x41dac0
     * @note[short] iOS: 0x2d0bc
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x79415c
     * @note[short] Windows: 0x41de40
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int response);

    /**
     * @note[short] MacOS (ARM): 0x251534
     * @note[short] MacOS (Intel): 0x2b0420
     * @note[short] Windows: 0x41df80
     * @note[short] iOS: 0x2d404
     * @note[short] Android
     */
    virtual void levelUpdateFinished(GJGameLevel* level, UpdateResponse response);

    /**
     * @note[short] MacOS (ARM): 0x25173c
     * @note[short] MacOS (Intel): 0x2b0610
     * @note[short] Windows: 0x41e0e0
     * @note[short] iOS: 0x2d524
     * @note[short] Android
     */
    virtual void levelUpdateFailed(int response);

    /**
     * @note[short] MacOS (ARM): 0x251840
     * @note[short] Windows: 0x41e220
     * @note[short] iOS: 0x2d604
     * @note[short] Android
     */
    virtual void levelDeleteFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x251938
     * @note[short] Windows: 0x41e360
     * @note[short] iOS: 0x2d6d4
     * @note[short] Android
     */
    virtual void levelDeleteFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x2526cc
     * @note[short] MacOS (Intel): 0x2b15d0
     * @note[short] Windows: 0x420cd0
     * @note[short] iOS: 0x2e058
     * @note[short] Android
     */
    virtual void rateLevelClosed();

    /**
     * @note[short] MacOS (ARM): 0x2526d8
     * @note[short] MacOS (Intel): 0x2b1600
     * @note[short] Windows: 0x420f60
     * @note[short] iOS: 0x2e064
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType type, int id, bool liked);

    /**
     * @note[short] MacOS (ARM): 0x2527fc
     * @note[short] MacOS (Intel): 0x2b1710
     * @note[short] Windows: 0x422e60
     * @note[short] iOS: 0x2e0d4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Windows: 0x41bb70
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] Windows: 0x41e490
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] Windows: 0x4201e0
     * @note[short] Android
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn addProgressBar(cocos2d::CCPoint p0, int p1, cocos2d::ccColor3B p2, char const* p3, char const* p4);

    /**
     * @note[short] MacOS (ARM): 0x24fac0
     * @note[short] MacOS (Intel): 0x2ae940
     * @note[short] Windows: 0xf4010
     * @note[short] iOS: 0x2bc40
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f164
     * @note[short] MacOS (Intel): 0x2adff0
     * @note[short] iOS: 0x2b410
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24ff80
     * @note[short] MacOS (Intel): 0x2aedf0
     * @note[short] iOS: 0x2c068
     * @note[short] Android
     */
    void confirmMoveToBottom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223f08
     * @note[short] MacOS (Intel): 0x27e8a0
     * @note[short] iOS: 0x2bfac
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3fd510
     * @note[short] Android
     */
    void confirmOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24de14
     * @note[short] MacOS (Intel): 0x2acbe0
     * @note[short] Windows: 0x41c1b0
     * @note[short] iOS: 0x2a1e0
     * @note[short] Android
     */
    void downloadLevel();

    /**
     * @note[short] MacOS (ARM): 0x252760
     * @note[short] MacOS (Intel): 0x2b1680
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementDislikes();

    /**
     * @note[short] MacOS (ARM): 0x25274c
     * @note[short] MacOS (Intel): 0x2b1660
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementLikes();

    /**
     * @note[short] MacOS (ARM): 0x7be4dc
     * @note[short] MacOS (Intel): 0x15a190
     * @note[short] Windows: 0x419120
     * @note[short] iOS: 0x4b70d8
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x251d5c
     * @note[short] MacOS (Intel): 0x2b0c50
     * @note[short] Windows: 0x41f560
     * @note[short] iOS: 0x2da2c
     * @note[short] Android
     */
    void loadLevelStep();

    /**
     * @note[short] Android
     */
    TodoReturn loadReplay();

    /**
     * @note[short] MacOS (ARM): 0x2501d8
     * @note[short] MacOS (Intel): 0x2af030
     * @note[short] Windows: 0x41b940
     * @note[short] iOS: 0x2c260
     * @note[short] Android
     */
    void onAddToList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24fd2c
     * @note[short] MacOS (Intel): 0x2aeb90
     * @note[short] Windows: 0x4233b0
     * @note[short] iOS: 0x2be38
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2521a8
     * @note[short] MacOS (Intel): 0x2b1080
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2dcf4
     * @note[short] Android
     */
    void onClone(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCreatorSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeathTracker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2522ec
     * @note[short] MacOS (Intel): 0x2b11f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ddd0
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24fe28
     * @note[short] MacOS (Intel): 0x2aec90
     * @note[short] Windows: 0x41bbf0
     * @note[short] iOS: 0x2bf34
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24fddc
     * @note[short] MacOS (Intel): 0x2aec40
     * @note[short] Windows: 0x41bfd0
     * @note[short] iOS: 0x2bee8
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2ae1f0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x392b70
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f3ac
     * @note[short] MacOS (Intel): 0x2ae220
     * @note[short] iOS: 0x2b5b4
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x250064
     * @note[short] MacOS (Intel): 0x2aeed0
     * @note[short] Windows: 0x421410
     * @note[short] iOS: 0x2c124
     * @note[short] Android
     */
    void onLevelOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f410
     * @note[short] MacOS (Intel): 0x2ae290
     * @note[short] iOS: 0x2b618
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x41e590
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onPlayReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25258c
     * @note[short] MacOS (Intel): 0x2b14a0
     * @note[short] Windows: 0x420240
     * @note[short] iOS: 0x2df54
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f5d0
     * @note[short] MacOS (Intel): 0x2ae470
     * @note[short] Windows: 0x350100
     * @note[short] iOS: 0x2b7b8
     * @note[short] Android
     */
    void onRateDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f480
     * @note[short] MacOS (Intel): 0x2ae310
     * @note[short] Windows: 0x4d7e80
     * @note[short] iOS: 0x2b688
     * @note[short] Android
     */
    void onRateStars(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xda8f0
     * @note[short] Android
     */
    void onRateStarsMod(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x250124
     * @note[short] MacOS (Intel): 0x2aef90
     * @note[short] Windows: 0x41bad0
     * @note[short] iOS: 0x2c1c0
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f250
     * @note[short] MacOS (Intel): 0x2ae0d0
     * @note[short] Windows: 0x4212a0
     * @note[short] iOS: 0x2b4cc
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24d4a8
     * @note[short] MacOS (Intel): 0x92c0
     * @note[short] Windows: 0x4214c0
     * @note[short] iOS: 0x29964
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x251c10
     * @note[short] MacOS (Intel): 0x1e05a0
     * @note[short] iOS: 0x2d8e0
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x251cd4
     * @note[short] MacOS (Intel): 0x1e0660
     * @note[short] iOS: 0x2d9a4
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x251e38
     * @note[short] MacOS (Intel): 0x2b0d20
     * @note[short] Windows: 0x41f630
     * @note[short] iOS: 0x2db08
     * @note[short] Android
     */
    void playStep4();

    /**
     * @note[short] MacOS (ARM): 0x3f238c
     * @note[short] Windows: 0x41ce90
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x24e9f8
     * @note[short] MacOS (Intel): 0x2ad8d0
     * @note[short] Windows: 0x26f4a0
     * @note[short] iOS: 0x2ad58
     * @note[short] Android
     */
    void setupPlatformerStats();

    /**
     * @note[short] MacOS (Intel): 0x5fd610
     * @note[short] iOS: 0x1856dc
     * @note[short] Android
     */
    void setupProgressBars();

    /**
     * @note[short] MacOS (ARM): 0x2504e8
     * @note[short] MacOS (Intel): 0x2af310
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2c48c
     * @note[short] Android
     */
    bool shouldDownloadLevel();

    /**
     * @note[short] MacOS (ARM): 0x251a30
     * @note[short] MacOS (Intel): 0x2b0940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d7a4
     * @note[short] Android
     */
    void showSongWarning();

    /**
     * @note[short] MacOS (ARM): 0x2515a4
     * @note[short] MacOS (Intel): 0x2b0480
     * @note[short] Windows: 0x41dff0
     * @note[short] iOS: 0x2d474
     * @note[short] Android
     */
    void showUpdateAlert(UpdateResponse type);

    /**
     * @note[short] Android
     */
    TodoReturn startServerDelete(std::string const& p0, std::vector<int> const& p1);

    /**
     * @note[short] MacOS (ARM): 0x24fbf0
     * @note[short] MacOS (Intel): 0x2aea70
     * @note[short] iOS: 0x2bd2c
     * @note[short] Android
     */
    void tryCloneLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x250210
     * @note[short] MacOS (Intel): 0x2af070
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd();

    /**
     * @note[short] MacOS (Intel): 0x2af4e0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x396a8c
     * @note[short] Android
     */
    void updateLabelValues();

    /**
     * @note[short] MacOS (ARM): 0x24f620
     * @note[short] MacOS (Intel): 0x2ae4d0
     * @note[short] Windows: 0x133bb0
     * @note[short] iOS: 0x2b804
     * @note[short] Android
     */
    void updateSideButtons();
    bool m_isBusy;
    cocos2d::CCMenu* m_playBtnMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_coins;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_starRateBtn;
    CCMenuItemSpriteExtra* m_demonRateBtn;
    void* m_unk2;
    cocos2d::CCLabelBMFont* m_lengthLabel;
    cocos2d::CCLabelBMFont* m_exactLengthLabel;
    cocos2d::CCLabelBMFont* m_downloadsLabel;
    cocos2d::CCLabelBMFont* m_likesLabel;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_folderLabel;
    CCMenuItemSpriteExtra* m_cloneBtn;
    void* m_unk3;
    cocos2d::CCSprite* m_likesIcon;
    cocos2d::CCSprite* m_orbsIcon;
    GJLevelType m_levelType;
    bool m_noUpdateAlert;
    bool m_enterTransitionFinished;
    LoadingCircle* m_circle;
    GJDifficultySprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsIcon;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCArray* m_icons;
    float m_iconOffset;
    cocos2d::CCPoint m_basePosition;
    float m_baseStarsY;
    bool m_challenge;
    cocos2d::CCScene* m_playScene;
    cocos2d::CCSprite* m_playSprite;
    cocos2d::CCProgressTimer* m_progressTimer;
    CustomSongWidget* m_songWidget;
};
