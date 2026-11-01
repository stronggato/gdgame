#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJAssetDownloadAction.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/vector.hpp>

class CustomSongWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSongWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSongWidget, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1224a0
     * @note[short] Android: Out of line
     */
     CustomSongWidget();

    /**
     * @note[short] MacOS (ARM): 0x1ad248
     * @note[short] MacOS (Intel): 0x6f5210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11d658
     * @note[short] Android: Rebinded
     */
     ~CustomSongWidget();

    /**
     * @note[short] Windows: 0x167b30
     * @note[short] Android
     */
    static CustomSongWidget* create(SongInfoObject* p0, CustomSongDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10);

    /**
     * @note[short] MacOS (ARM): 0x60c75c
     * @note[short] MacOS (Intel): 0x6faaf0
     * @note[short] Windows: 0x16c9b0
     * @note[short] iOS: 0x121bf0
     * @note[short] Android
     */
    virtual void loadSongInfoFinished(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x60ca00
     * @note[short] MacOS (Intel): 0x6fadd0
     * @note[short] Windows: 0x16cb60
     * @note[short] iOS: 0x121cdc
     * @note[short] Android
     */
    virtual void loadSongInfoFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (Intel): 0x6fb0d0
     * @note[short] Windows: 0x16cc40
     * @note[short] iOS: 0x121e50
     * @note[short] Android
     */
    virtual void downloadSongStarted(int id);

    /**
     * @note[short] MacOS (ARM): 0x60ce90
     * @note[short] MacOS (Intel): 0x6fb270
     * @note[short] Windows: 0x16cc60
     * @note[short] iOS: 0x121e84
     * @note[short] Android
     */
    virtual void downloadSongFinished(int id);

    /**
     * @note[short] MacOS (Intel): 0x6fb560
     * @note[short] Windows: 0x16cd20
     * @note[short] iOS: 0x122068
     * @note[short] Android
     */
    virtual void downloadSongFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (Intel): 0x6fb790
     * @note[short] Windows: 0x16cda0
     * @note[short] iOS: 0x12215c
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int id);

    /**
     * @note[short] MacOS (Intel): 0x6fb7c0
     * @note[short] Windows: 0x16cdc0
     * @note[short] iOS: 0x122170
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (Intel): 0x6fbc00
     * @note[short] Windows: 0x16d440
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x60b704
     * @note[short] MacOS (Intel): 0x6f99e0
     * @note[short] Windows: 0x16d470
     * @note[short] iOS: 0x1eeb40
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x60b750
     * @note[short] MacOS (Intel): 0x6f9a30
     * @note[short] Windows: 0x16ae20
     * @note[short] iOS: 0x12112c
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x60d884
     * @note[short] MacOS (Intel): 0x6fbd10
     * @note[short] Windows: 0x16d7f0
     * @note[short] iOS: 0x12241c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x60abf4
     * @note[short] MacOS (Intel): 0x6f8df0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1207c0
     * @note[short] Android
     */
    void addExtraVisuals(bool newMusic, bool newLibraryMusic);

    /**
     * @note[short] MacOS (ARM): 0x1e8b68
     * @note[short] MacOS (Intel): 0x639d30
     * @note[short] iOS: 0x1209ec
     * @note[short] Android
     */
    void deleteSong();

    /**
     * @note[short] MacOS (ARM): 0x60d304
     * @note[short] MacOS (Intel): 0x6fb710
     * @note[short] Windows: 0x16d370
     * @note[short] iOS: 0x1220d0
     * @note[short] Android
     */
    void downloadAssetFailed(int id, GJAssetType type, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x60cf54
     * @note[short] MacOS (Intel): 0x6fb330
     * @note[short] iOS: 0x121f50
     * @note[short] Android
     */
    void downloadAssetFinished(int id, GJAssetType type);

    /**
     * @note[short] MacOS (ARM): 0x60b704
     * @note[short] MacOS (Intel): 0x6f99e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1210e0
     * @note[short] Android
     */
    void downloadFailed();

    /**
     * @note[short] MacOS (ARM): 0x60b180
     * @note[short] MacOS (Intel): 0x6f9390
     * @note[short] Windows: 0x16a060
     * @note[short] iOS: 0x120d18
     * @note[short] Android
     */
    void getSongInfoIfUnloaded();

    /**
     * @note[short] Windows: 0xd83f0
     * @note[short] Android
     */
    bool init(SongInfoObject* p0, CustomSongDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10);

    /**
     * @note[short] MacOS (ARM): 0x608a14
     * @note[short] iOS: 0x11ea88
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x608a50
     * @note[short] MacOS (Intel): 0x6f6a80
     * @note[short] iOS: 0x11eac4
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6087c4
     * @note[short] MacOS (Intel): 0x6f67b0
     * @note[short] Windows: 0x1ae080
     * @note[short] iOS: 0x11e8e0
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x608b90
     * @note[short] MacOS (Intel): 0x6f6bc0
     * @note[short] iOS: 0x11ebe0
     * @note[short] Android
     */
    void onGetSongInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x608f24
     * @note[short] MacOS (Intel): 0x6f6f50
     * @note[short] iOS: 0x11eec0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x608c1c
     * @note[short] MacOS (Intel): 0x6f6c50
     * @note[short] Windows: 0x445ac0
     * @note[short] iOS: 0x11ec6c
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x608b30
     * @note[short] MacOS (Intel): 0x6f6b60
     * @note[short] Windows: 0x160cb0
     * @note[short] iOS: 0x11eb80
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUsage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6093f4
     * @note[short] MacOS (Intel): 0x6f74f0
     * @note[short] iOS: 0x11f150
     * @note[short] Android
     */
    void positionInfoObjects();

    /**
     * @note[short] MacOS (ARM): 0x60d4bc
     * @note[short] MacOS (Intel): 0x6fb950
     * @note[short] iOS: 0x122184
     * @note[short] Android
     */
    void processNextMultiAsset();

    /**
     * @note[short] Android
     */
    void setMultiAssetFilesize(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x60af80
     * @note[short] MacOS (Intel): 0x6f9150
     * @note[short] iOS: 0x120b24
     * @note[short] Android
     */
    void showError(bool fast);

    /**
     * @note[short] MacOS (ARM): 0x5cfca0
     * @note[short] MacOS (Intel): 0x6f9840
     * @note[short] iOS: 0x38b560
     * @note[short] Android
     */
    void startDownload();

    /**
     * @note[short] MacOS (Intel): 0x6f8c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x120684
     * @note[short] Android
     */
    void startMonitorDownload();

    /**
     * @note[short] MacOS (ARM): 0x60b2e4
     * @note[short] MacOS (Intel): 0x6f94e0
     * @note[short] Windows: 0x16cde0
     * @note[short] iOS: 0x120da8
     * @note[short] Android
     */
    void startMultiAssetDownload();

    /**
     * @note[short] MacOS (ARM): 0x60b28c
     * @note[short] MacOS (Intel): 0x6f9490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleUpdateButton(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x60b640
     * @note[short] MacOS (Intel): 0x6f9910
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x121078
     * @note[short] Android
     */
    void updateDownloadProgress(float dt);

    /**
     * @note[short] MacOS (ARM): 0x60cc18
     * @note[short] MacOS (Intel): 0x6faff0
     * @note[short] Windows: 0x16d4d0
     * @note[short] iOS: 0x121d80
     * @note[short] Android
     */
    void updateError(GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x60b79c
     * @note[short] MacOS (Intel): 0x6f9a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x121178
     * @note[short] Android
     */
    void updateLengthMod(float lengthMod);

    /**
     * @note[short] MacOS (Intel): 0x6fa270
     * @note[short] Windows: 0x16c160
     * @note[short] iOS: 0xa2690
     * @note[short] Android
     */
    void updateMultiAssetInfo(bool update);

    /**
     * @note[short] MacOS (ARM): 0x60ab18
     * @note[short] MacOS (Intel): 0x6f8d10
     * @note[short] Windows: 0x16ac30
     * @note[short] iOS: 0x1206e8
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] MacOS (ARM): 0x609a10
     * @note[short] MacOS (Intel): 0x6f7b20
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x11f714
     * @note[short] Android
     */
    void updateProgressBar(int progress);

    /**
     * @note[short] MacOS (ARM): 0x609b2c
     * @note[short] Windows: 0x16ae50
     * @note[short] iOS: 0x11f7f8
     * @note[short] Android
     */
    void updateSongInfo();

    /**
     * @note[short] MacOS (ARM): 0x609a88
     * @note[short] MacOS (Intel): 0x6f7ba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11f78c
     * @note[short] Android
     */
    void updateSongObject(SongInfoObject* songInfo);

    /**
     * @note[short] Android
     */
    TodoReturn updateUsageButton();

    /**
     * @note[short] MacOS (ARM): 0x60b7a4
     * @note[short] MacOS (Intel): 0x6f9aa0
     * @note[short] iOS: 0x121180
     * @note[short] Android
     */
    void updateWithMultiAssets(std::string songList, std::string sfxList, int bytes);

    /**
     * @note[short] MacOS (ARM): 0x60c748
     * @note[short] MacOS (Intel): 0x6faad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool verifySongID(int id);
    SongInfoObject* m_songInfoObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_songLabel;
    cocos2d::CCLabelBMFont* m_artistLabel;
    cocos2d::CCLabelBMFont* m_songIDLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadBtn;
    CCMenuItemSpriteExtra* m_cancelDownloadBtn;
    CCMenuItemSpriteExtra* m_selectSongBtn;
    CCMenuItemSpriteExtra* m_getSongInfoBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_moreBtn;
    CCMenuItemSpriteExtra* m_deleteBtn;
    CCMenuItemSpriteExtra* m_infoBtn;
    cocos2d::CCSprite* m_sliderGroove;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_ncsLogo;
    cocos2d::extension::CCScale9Sprite* m_bgSpr;
    CustomSongDelegate* m_songDelegate;
    bool m_showSelectSongBtn;
    bool m_showPlayMusicBtn;
    bool m_showDownloadBtn;
    bool m_isNotDownloading;
    bool m_isRobtopSong;
    bool m_isMusicLibrary;
    int m_customSongID;
    float m_lengthMod;
    bool m_isInCell;
    SongPlaybackDelegate* m_playbackDelegate;
    bool m_hasLibrarySongs;
    bool m_hasSFX;
    bool m_unkBool2;
    std::map<int, bool> m_songs;
    std::map<int, bool> m_sfx;
    std::vector<GJAssetDownloadAction> m_undownloadedAssets;
    int m_totalBytes;
    std::set<int> m_nextSongIDs;
};
