#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/GJAccountDelegate.hpp>
#include <Geode/binding/GJAccountBackupDelegate.hpp>
#include <Geode/binding/GJAccountSyncDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class AccountLayer : public GJDropDownLayer, public GJAccountDelegate, public GJAccountBackupDelegate, public GJAccountSyncDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x92870
     * @note[short] Android: Rebinded
     */
    virtual  ~AccountLayer();

    /**
     * @note[short] MacOS (ARM): 0x89dec
     * @note[short] Windows: 0x92ae0
     * @note[short] iOS: 0x1ec714
     * @note[short] Android
     */
    static AccountLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x8a07c
     * @note[short] Windows: 0x92c40
     * @note[short] iOS: 0x1ec894
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x8bfe0
     * @note[short] MacOS (Intel): 0x9c060
     * @note[short] Windows: 0x949f0
     * @note[short] iOS: 0x1edf80
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x8b59c
     * @note[short] MacOS (Intel): 0x9b5a0
     * @note[short] Windows: 0x940d0
     * @note[short] Android
     */
    virtual void backupAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0x8b760
     * @note[short] MacOS (Intel): 0x9b760
     * @note[short] Windows: 0x94280
     * @note[short] iOS: 0x1ed9d4
     * @note[short] Android
     */
    virtual void backupAccountFailed(BackupAccountError errorType, int response);

    /**
     * @note[short] MacOS (ARM): 0x8bacc
     * @note[short] MacOS (Intel): 0x9bb20
     * @note[short] Windows: 0x94590
     * @note[short] Android
     */
    virtual void syncAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0x8bc38
     * @note[short] MacOS (Intel): 0x9bca0
     * @note[short] Windows: 0x94750
     * @note[short] iOS: 0x98fac
     * @note[short] Android
     */
    virtual void syncAccountFailed(BackupAccountError errorType, int response);

    /**
     * @note[short] MacOS (ARM): 0x8b588
     * @note[short] MacOS (Intel): 0x9b570
     * @note[short] Windows: 0x93d00
     * @note[short] iOS: 0x1ed88c
     * @note[short] Android
     */
    virtual void accountStatusChanged();

    /**
     * @note[short] MacOS (ARM): 0x8beb0
     * @note[short] MacOS (Intel): 0x9bf40
     * @note[short] Windows: 0x948e0
     * @note[short] iOS: 0x1edee4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x8b1a8
     * @note[short] MacOS (Intel): 0x9b200
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x8b41c
     * @note[short] MacOS (Intel): 0x9b410
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ed77c
     * @note[short] Android
     */
    void doBackup();

    /**
     * @note[short] MacOS (ARM): 0x8b4f8
     * @note[short] MacOS (Intel): 0x9b4e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ed804
     * @note[short] Android
     */
    void doSync();

    /**
     * @note[short] MacOS (ARM): 0x8b580
     * @note[short] MacOS (Intel): 0x9b560
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x8b704
     * @note[short] MacOS (Intel): 0x9b6f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x8a788
     * @note[short] MacOS (Intel): 0x9a790
     * @note[short] iOS: 0x1ecf90
     * @note[short] Android
     */
    void onBackup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8ac78
     * @note[short] MacOS (Intel): 0x9aca0
     * @note[short] iOS: 0x1ed2c4
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8a6d0
     * @note[short] MacOS (Intel): 0x9a6e0
     * @note[short] Windows: 0x933b0
     * @note[short] iOS: 0x1ecedc
     * @note[short] Android
     */
    void onLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8ad50
     * @note[short] MacOS (Intel): 0x9ad60
     * @note[short] iOS: 0x1ed378
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8a76c
     * @note[short] MacOS (Intel): 0x9a770
     * @note[short] Windows: 0x933f0
     * @note[short] iOS: 0x1ecf74
     * @note[short] Android
     */
    void onRegister(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8aa80
     * @note[short] MacOS (Intel): 0x9aac0
     * @note[short] iOS: 0x1ed178
     * @note[short] Android
     */
    void onSync(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8b4a4
     * @note[short] MacOS (Intel): 0x9b490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x8be70
     * @note[short] MacOS (Intel): 0x9bf00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleUI(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x8ad60
     * @note[short] MacOS (Intel): 0x9ad80
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x14a4c0
     * @note[short] Android
     */
    void updatePage(bool changed);
    cocos2d::CCLabelBMFont* m_linkedAccountTitle;
    TextArea* m_textArea;
    CCMenuItemSpriteExtra* m_loginButton;
    CCMenuItemSpriteExtra* m_registerButton;
    CCMenuItemSpriteExtra* m_backupButton;
    CCMenuItemSpriteExtra* m_syncButton;
    CCMenuItemSpriteExtra* m_helpButton;
    CCMenuItemSpriteExtra* m_moreButton;
    LoadingCircle* m_loadingCircle;
    int m_accountHelpRelated;
    bool m_isLoggedIn;
};
