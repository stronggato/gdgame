#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GooglePlayDelegate.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol, public GooglePlayDelegate, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MenuLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x305ce8
     * @note[short] MacOS (Intel): 0x37a410
     * @note[short] Windows: 0x46ebe0
     * @note[short] Android: Rebinded
     */
    virtual  ~MenuLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static MenuLayer* get();

    /**
     * @note[short] MacOS (ARM): 0x305e10
     * @note[short] MacOS (Intel): 0x37a5d0
     * @note[short] Windows: 0x46ed30
     * @note[short] iOS: 0x30144c
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool isVideoOptionsOpen);

    /**
     * @note[short] MacOS (ARM): 0x305fcc
     * @note[short] MacOS (Intel): 0x37a7a0
     * @note[short] Windows: 0x46eee0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x30819c
     * @note[short] MacOS (Intel): 0x37ca60
     * @note[short] Windows: 0x471f60
     * @note[short] iOS: 0x30335c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x308418
     * @note[short] MacOS (Intel): 0x37cd30
     * @note[short] Windows: 0x472360
     * @note[short] iOS: 0x3035e4
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x307f50
     * @note[short] MacOS (Intel): 0x37c7d0
     * @note[short] Windows: 0x471940
     * @note[short] iOS: 0x3031c0
     * @note[short] Android
     */
    virtual void googlePlaySignedIn();

    /**
     * @note[short] MacOS (ARM): 0x3081a8
     * @note[short] MacOS (Intel): 0x37ca90
     * @note[short] Windows: 0x472130
     * @note[short] iOS: 0x30341c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Windows: 0x4717c0
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkParentalPending();

    /**
     * @note[short] MacOS (ARM): 0x30840c
     * @note[short] MacOS (Intel): 0x37cd00
     * @note[short] Windows: 0x4723d0
     * @note[short] iOS: 0x3035c8
     * @note[short] Android
     */
    void endGame();

    /**
     * @note[short] MacOS (ARM): 0x4d3718
     * @note[short] Android
     */
    void firstNetworkTest();

    /**
     * @note[short] MacOS (ARM): 0x3075f0
     * @note[short] MacOS (Intel): 0x37be20
     * @note[short] Windows: 0x4717e0
     * @note[short] iOS: 0x302aa4
     * @note[short] Android
     */
    void onAchievements(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x37bda0
     * @note[short] Android
     */
    void onCreator(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x37c390
     * @note[short] iOS: 0x302f38
     * @note[short] Android
     */
    void onDaily(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307860
     * @note[short] MacOS (Intel): 0x383250
     * @note[short] iOS: 0x302cf0
     * @note[short] Android
     */
    void onDiscord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x308048
     * @note[short] MacOS (Intel): 0x37c8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3077d0
     * @note[short] iOS: 0x302c60
     * @note[short] Android
     */
    void onFacebook(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3080f0
     * @note[short] MacOS (Intel): 0x37c9b0
     * @note[short] Android
     */
    void onFreeLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x308110
     * @note[short] MacOS (Intel): 0x37c9d0
     * @note[short] Android
     */
    void onFullVersion(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307de8
     * @note[short] MacOS (Intel): 0x37c640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3030b8
     * @note[short] Android
     */
    void onGameCenter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x37bd20
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307f28
     * @note[short] MacOS (Intel): 0x37c7a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onGooglePlayGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307d40
     * @note[short] MacOS (Intel): 0x37c580
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3079a4
     * @note[short] MacOS (Intel): 0x37c190
     * @note[short] Windows: 0x4710d0
     * @note[short] iOS: 0x302d5c
     * @note[short] Android
     */
    void onMyProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3076d4
     * @note[short] MacOS (Intel): 0x37bee0
     * @note[short] iOS: 0x302b88
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNews(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30763c
     * @note[short] MacOS (Intel): 0x37be60
     * @note[short] iOS: 0x302af0
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x305f64
     * @note[short] MacOS (Intel): 0x37a740
     * @note[short] Android
     */
    void onOptionsInstant();

    /**
     * @note[short] MacOS (Intel): 0x37bc90
     * @note[short] iOS: 0x3029b0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3078cc
     * @note[short] MacOS (Intel): 0x37c0c0
     * @note[short] iOS: 0x303360
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReportQueue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3077ac
     * @note[short] MacOS (Intel): 0x37bfb0
     * @note[short] iOS: 0x302c3c
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307688
     * @note[short] MacOS (Intel): 0x37bea0
     * @note[short] Windows: 0x471bf0
     * @note[short] iOS: 0x302b3c
     * @note[short] Android
     */
    void onStats(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30815c
     * @note[short] MacOS (Intel): 0x37ca20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onTrailer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30783c
     * @note[short] MacOS (Intel): 0x383230
     * @note[short] iOS: 0x302ccc
     * @note[short] Android
     */
    void onTwitch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3077f4
     * @note[short] iOS: 0x302c84
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307818
     * @note[short] iOS: 0x302ca8
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30804c
     * @note[short] MacOS (Intel): 0x37c8f0
     * @note[short] iOS: 0x3032b8
     * @note[short] Android
     */
    void openOptions(bool videoOptions);

    /**
     * @note[short] MacOS (ARM): 0x307e30
     * @note[short] MacOS (Intel): 0x37c690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x303100
     * @note[short] Android
     */
    void showGCQuestion();

    /**
     * @note[short] MacOS (ARM): 0x307ce4
     * @note[short] MacOS (Intel): 0x37c510
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showMeltdownPromo();

    /**
     * @note[short] MacOS (Intel): 0x37c3b0
     * @note[short] Windows: 0x470fa0
     * @note[short] Android
     */
    void showTOS();

    /**
     * @note[short] MacOS (ARM): 0x30801c
     * @note[short] MacOS (Intel): 0x37c8a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30328c
     * @note[short] Android
     */
    void syncPlatformAchievements(float dt);

    /**
     * @note[short] MacOS (ARM): 0x72a8
     * @note[short] MacOS (Intel): 0x37c520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd(float dt);

    /**
     * @note[short] Android
     */
    TodoReturn updateNewsBadge();

    /**
     * @note[short] MacOS (ARM): 0x7901cc
     * @note[short] Windows: 0xd6210
     * @note[short] iOS: 0x228fb0
     * @note[short] Android
     */
    void updateUserProfileButton();

    /**
     * @note[short] MacOS (ARM): 0x3080e4
     * @note[short] MacOS (Intel): 0x37c990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x303350
     * @note[short] Android
     */
    void videoOptionsClosed();

    /**
     * @note[short] MacOS (ARM): 0x3080d4
     * @note[short] MacOS (Intel): 0x37c970
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x303340
     * @note[short] Android
     */
    void videoOptionsOpened();

    /**
     * @note[short] MacOS (ARM): 0x305d84
     * @note[short] MacOS (Intel): 0x37a500
     * @note[short] Windows: 0x472090
     * @note[short] iOS: 0x3013d4
     * @note[short] Android
     */
    void willClose();
    bool m_showingTOS;
    cocos2d::CCSprite* m_gpSprite;
    cocos2d::CCSprite* m_viewProfileSprite;
    cocos2d::CCLabelBMFont* m_profileLabel;
    CCMenuItemSpriteExtra* m_profileButton;
    void* m_unknown;
    MenuGameLayer* m_menuGameLayer;
};
