#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class CustomSFXWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSFXWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSFXWidget, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x15e910
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomSFXWidget();

    /**
     * @note[short] MacOS (ARM): 0x86639c
     * @note[short] MacOS (Intel): 0x6b33a0
     * @note[short] Windows: 0x15eb40
     * @note[short] iOS: 0x53a334
     * @note[short] Android
     */
    static CustomSFXWidget* create(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, bool p8);

    /**
     * @note[short] MacOS (ARM): 0x5cfef8
     * @note[short] MacOS (Intel): 0x6b6870
     * @note[short] Windows: 0x1622c0
     * @note[short] iOS: 0x38b648
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x5cff98
     * @note[short] MacOS (Intel): 0x6b6920
     * @note[short] Windows: 0x162340
     * @note[short] iOS: 0x38b6a0
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x5cfed0
     * @note[short] MacOS (Intel): 0x6b6800
     * @note[short] Windows: 0x1610b0
     * @note[short] iOS: 0x38b634
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x5d01f0
     * @note[short] MacOS (Intel): 0x6b6b40
     * @note[short] Windows: 0x162440
     * @note[short] iOS: 0x38b794
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x5cf968
     * @note[short] MacOS (Intel): 0x6b6260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38b280
     * @note[short] Android
     */
    void deleteSFX();

    /**
     * @note[short] MacOS (ARM): 0x5cfe1c
     * @note[short] MacOS (Intel): 0x6b6750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38b5f8
     * @note[short] Android
     */
    void downloadFailed();

    /**
     * @note[short] MacOS (ARM): 0x5ced3c
     * @note[short] MacOS (Intel): 0x6b55b0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x38a894
     * @note[short] Android
     */
    void hideLoadingArt();

    /**
     * @note[short] Android
     */
    TodoReturn infoBtnWidth();

    /**
     * @note[short] MacOS (Intel): 0x6b34f0
     * @note[short] Windows: 0x568c0
     * @note[short] Android
     */
    bool init(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, bool p8);

    /**
     * @note[short] Android
     */
    void onAddToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ce398
     * @note[short] iOS: 0x38a0d0
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ce3d4
     * @note[short] MacOS (Intel): 0x6b4bf0
     * @note[short] iOS: 0x38a10c
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ce254
     * @note[short] MacOS (Intel): 0x6b4a50
     * @note[short] Windows: 0x160920
     * @note[short] iOS: 0x38a01c
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditCustom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ce4d4
     * @note[short] MacOS (Intel): 0x6b4d00
     * @note[short] Windows: 0xf0ab0
     * @note[short] iOS: 0x38a1e8
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ce4b4
     * @note[short] MacOS (Intel): 0x6b4cd0
     * @note[short] Windows: 0x160b30
     * @note[short] iOS: 0x38a1c8
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShowInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a47b8
     * @note[short] MacOS (Intel): 0x69990
     * @note[short] Windows: 0x160600
     * @note[short] Android
     */
    void showLoadingArt();

    /**
     * @note[short] MacOS (Intel): 0x6b65c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void startDownload();

    /**
     * @note[short] MacOS (ARM): 0x5cf8bc
     * @note[short] MacOS (Intel): 0x6b61b0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x38b228
     * @note[short] Android
     */
    void startMonitorDownload();

    /**
     * @note[short] MacOS (ARM): 0x5cfd58
     * @note[short] MacOS (Intel): 0x6b6680
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x38b590
     * @note[short] Android
     */
    void updateDownloadProgress(float dt);

    /**
     * @note[short] MacOS (ARM): 0x5d0064
     * @note[short] MacOS (Intel): 0x6b69e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38b6dc
     * @note[short] Android
     */
    void updateError(GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x5cfedc
     * @note[short] MacOS (Intel): 0x6b6830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38b640
     * @note[short] Android
     */
    void updateLengthMod(float mod);

    /**
     * @note[short] MacOS (ARM): 0x5cf964
     * @note[short] MacOS (Intel): 0x6b6250
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] MacOS (ARM): 0x5cecc4
     * @note[short] MacOS (Intel): 0x6b5530
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x38a81c
     * @note[short] Android
     */
    void updateProgressBar(int progress);

    /**
     * @note[short] MacOS (ARM): 0x5cee5c
     * @note[short] MacOS (Intel): 0x6b56d0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x38a978
     * @note[short] Android
     */
    void updateSFXInfo();

    /**
     * @note[short] MacOS (ARM): 0x5cedd0
     * @note[short] MacOS (Intel): 0x6b5640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38a924
     * @note[short] Android
     */
    void updateSFXObject(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5cfee4
     * @note[short] MacOS (Intel): 0x6b6850
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool verifySFXID(int id);
    SFXInfoObject* m_sfxObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_titleLabel;
    cocos2d::CCLabelBMFont* m_idLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadButton;
    CCMenuItemSpriteExtra* m_cancelButton;
    CCMenuItemSpriteExtra* m_selectButton;
    CCMenuItemSpriteExtra* m_playButton;
    CCMenuItemSpriteExtra* m_deleteButton;
    cocos2d::CCSprite* m_progressOutlineSprite;
    cocos2d::CCSprite* m_progressBarSprite;
    cocos2d::CCSprite* m_clockSprite;
    CustomSFXDelegate* m_delegate;
    bool m_showDelete;
    bool m_showPlay;
    bool m_showDownload;
    bool m_showCancel;
    bool m_compactMode;
    int m_sfxID;
    float m_lengthMod;
};
