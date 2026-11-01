#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJAccountManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJAccountManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJAccountManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x302790
     * @note[short] Android: Rebinded
     */
    virtual  ~GJAccountManager();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GJAccountManager* get();

    /**
     * @note[short] MacOS (Intel): 0x9d410
     * @note[short] Windows: 0x302830
     * @note[short] Android
     */
    static GJAccountManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x8f900
     * @note[short] MacOS (Intel): 0xa0020
     * @note[short] Windows: 0x302e90
     * @note[short] iOS: 0x444214
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x302ed0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4442b8
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0x90f48
     * @note[short] MacOS (Intel): 0xa1670
     * @note[short] Windows: 0x54f60
     * @note[short] iOS: 0x433f78
     * @note[short] Android
     */
    bool backupAccount(std::string url);

    /**
     * @note[short] MacOS (ARM): 0x92180
     * @note[short] MacOS (Intel): 0xa2a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x445bbc
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x92128
     * @note[short] MacOS (Intel): 0xa2a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x445b64
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x92124
     * @note[short] MacOS (Intel): 0xa2a10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x445b60
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool getAccountBackupURL();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool getAccountSyncURL();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x44424c
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x92354
     * @note[short] MacOS (Intel): 0xa2c40
     * @note[short] Windows: 0x307770
     * @note[short] iOS: 0x445d58
     * @note[short] Android
     */
    std::string getShaPassword(std::string password);

    /**
     * @note[short] Windows: 0x3e8040
     * @note[short] Android
     */
    void handleIt(bool success, std::string response, std::string tag, GJHttpType type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItDelayed(bool success, std::string response, std::string tag, GJHttpType type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* node, void* data);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x7fdb2c
     * @note[short] Windows: 0x306c50
     * @note[short] iOS: 0x4e9e9c
     * @note[short] Android
     */
    void linkToAccount(std::string username, std::string gjp2, int accountID, int userID);

    /**
     * @note[short] MacOS (ARM): 0x903ac
     * @note[short] MacOS (Intel): 0xa0b00
     * @note[short] Windows: 0x303ca0
     * @note[short] iOS: 0x4448b4
     * @note[short] Android
     */
    void loginAccount(std::string username, std::string gjp2);

    /**
     * @note[short] MacOS (ARM): 0x8e430
     * @note[short] MacOS (Intel): 0x9e880
     * @note[short] iOS: 0x443464
     * @note[short] Android
     */
    void onBackupAccountCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x8f3e8
     * @note[short] MacOS (Intel): 0x9fb10
     * @note[short] iOS: 0x443e8c
     * @note[short] Android
     */
    void onGetAccountBackupURLCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x8f610
     * @note[short] MacOS (Intel): 0x9fd20
     * @note[short] iOS: 0x444000
     * @note[short] Android
     */
    void onGetAccountSyncURLCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x8e0d4
     * @note[short] MacOS (Intel): 0x9e4e0
     * @note[short] Windows: 0x304120
     * @note[short] iOS: 0x44327c
     * @note[short] Android
     */
    void onLoginAccountCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onOpenRegisterCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x8dfd0
     * @note[short] MacOS (Intel): 0x9e3f0
     * @note[short] Windows: 0x303850
     * @note[short] iOS: 0x4431c4
     * @note[short] Android
     */
    void onRegisterAccountCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x8e6dc
     * @note[short] MacOS (Intel): 0x9eb50
     * @note[short] iOS: 0x443640
     * @note[short] Android
     */
    void onSyncAccountCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x8f31c
     * @note[short] MacOS (Intel): 0x9fa70
     * @note[short] iOS: 0x443e00
     * @note[short] Android
     */
    void onUpdateAccountSettingsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn openRegister();

    /**
     * @note[short] MacOS (ARM): 0x8d298
     * @note[short] MacOS (Intel): 0x9d4e0
     * @note[short] Windows: 0x302970
     * @note[short] iOS: 0x442934
     * @note[short] Android
     */
    void ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (Intel): 0x3a7a50
     * @note[short] Android
     */
    void registerAccount(std::string response, std::string tag, std::string data);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeDLFromActive(char const* tag);

    /**
     * @note[short] Android
     */
    TodoReturn showAccountNeededAlert(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x91724
     * @note[short] MacOS (Intel): 0xa1f10
     * @note[short] Windows: 0x659b0
     * @note[short] iOS: 0x445440
     * @note[short] Android
     */
    bool syncAccount(std::string url);

    /**
     * @note[short] MacOS (ARM): 0x91c18
     * @note[short] MacOS (Intel): 0xa2420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4457e4
     * @note[short] Android
     */
    void unlinkFromAccount();

    /**
     * @note[short] Windows: 0x3482e0
     * @note[short] Android
     */
    TodoReturn updateAccountSettings(int p0, int p1, int p2, int p3, int p4, std::string p5, std::string p6, std::string p7, std::string p8, std::string p9, std::string p10, std::string p11);
    cocos2d::CCDictionary* m_activeDownloads;
    std::string m_username;
    int m_accountID;
    int m_unkInt1;
    int m_unkInt2;
    std::string m_GJP2;
    GJAccountRegisterDelegate* m_accountRegisterDelegate;
    GJAccountLoginDelegate* m_accountLoginDelegate;
    GJAccountDelegate* m_accountDelegate;
    GJAccountBackupDelegate* m_backupDelegate;
    GJAccountSyncDelegate* m_syncDelegate;
    GJAccountSettingsDelegate* m_accountSettingsDelegate;
    int m_gameManagerSize;
    int m_localLevelsSize;
    std::string m_password;
};
