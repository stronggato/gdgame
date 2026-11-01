#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/UIButtonConfig.hpp>
#include <Geode/binding/GManager.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/SeedValue.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/vector.hpp>

class GameManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "GameManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameManager, GManager)

    /**
     * @note[short] Windows: 0x285a50
     * @note[short] Android: Rebinded
     */
    virtual  ~GameManager();

    /**
Gets the active GameManager

 @returns The current instance pointer of the GameManag     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GameManager* get();

    /**
     * @note[short] MacOS (ARM): 0x2ee438
     * @note[short] MacOS (Intel): 0x35f8a0
     * @note[short] Windows: 0x273c50
     * @note[short] Android
     */
    static GameManager* sharedState();

    /**
Updates the GameManager for the current frame.

 @param dt Delta time (Time elapsed between the last frame and the current on     * @note[short] MacOS (ARM): 0x302094
     * @note[short] MacOS (Intel): 0x375fb0
     * @note[short] Windows: 0x284370
     * @note[short] iOS: 0x3b8ccc
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
Initializes the GameManager.

 @returns A true or false value for whether initialization was successful or no     * @note[short] MacOS (ARM): 0x4dc4ec
     * @note[short] MacOS (Intel): 0x35f900
     * @note[short] Windows: 0x273ca0
     * @note[short] iOS: 0xd4330
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x283290
     * @note[short] iOS: 0x3d011c
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] Windows: 0x280040
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x300548
     * @note[short] MacOS (Intel): 0x374290
     * @note[short] Windows: 0x282710
     * @note[short] iOS: 0x3b7b7c
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] Windows: 0x284230
     * @note[short] Android
     */
    virtual TodoReturn didEncodeForSave();

    /**
     * @note[short] Windows: 0x2842d0
     * @note[short] Android
     */
    virtual TodoReturn saveFinished(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn accountPostsRestricted();

    /**
When the client's account status is changed (e.g. logged in or logged out), this will be calle     * @note[short] MacOS (ARM): 0x2fb198
     * @note[short] MacOS (Intel): 0x36df00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b44dc
     * @note[short] Android
     */
    void accountStatusChanged();

    /**
Gets the ID for one of the client's current icons.

 @param type The type of icon to get the ID for

 @returns Icon      * @note[short] MacOS (ARM): 0x2f6ee8
     * @note[short] MacOS (Intel): 0x3699f0
     * @note[short] Windows: 0x27a830
     * @note[short] iOS: 0x3b20e0
     * @note[short] Android
     */
    int activeIconForType(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x1f93d8
     * @note[short] MacOS (Intel): 0x2503f0
     * @note[short] Windows: 0x2aa390
     * @note[short] iOS: 0x3eb7b0
     * @note[short] Android
     */
    void addCustomAnimationFrame(int objectID, int frameIndex, std::string mainFrame, std::string detailFrame);

    /**
     * @note[short] MacOS (ARM): 0x1f94f0
     * @note[short] MacOS (Intel): 0x250520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDuplicateLastFrame(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x1f9168
     * @note[short] MacOS (Intel): 0x250170
     * @note[short] Windows: 0x2aa220
     * @note[short] iOS: 0x3eb60c
     * @note[short] Android
     */
    void addGameAnimation(int objectID, int frames, float frameTime, std::string mainAnimFrame, std::string detailAnimFrame, int defaultFrame);

    /**
     * @note[short] MacOS (ARM): 0x2f7890
     * @note[short] MacOS (Intel): 0x36a730
     * @note[short] Android
     */
    void addIconDelegate(cocos2d::CCObject* delegate, int key);

    /**
     * @note[short] MacOS (ARM): 0x2faa14
     * @note[short] MacOS (Intel): 0x36d750
     * @note[short] Windows: 0x27c890
     * @note[short] iOS: 0x3b4134
     * @note[short] Android
     */
    void addNewCustomObject(std::string str);

    /**
     * @note[short] Android
     */
    TodoReturn addRecentEmote(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x2fc900
     * @note[short] MacOS (Intel): 0x36fc10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addToGJLog(cocos2d::CCString* str);

    /**
     * @note[short] MacOS (ARM): 0x3020e0
     * @note[short] MacOS (Intel): 0x376000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b8cf8
     * @note[short] Android
     */
    void applicationDidEnterBackground();

    /**
     * @note[short] MacOS (ARM): 0x3020e4
     * @note[short] MacOS (Intel): 0x376010
     * @note[short] iOS: 0x90068
     * @note[short] Android
     */
    void applicationWillEnterForeground();

    /**
     * @note[short] MacOS (ARM): 0x2ee574
     * @note[short] MacOS (Intel): 0x35f9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28cf10
     * @note[short] Android
     */
    void calculateBaseKeyForIcons();

    /**
     * @note[short] MacOS (ARM): 0x2f656c
     * @note[short] MacOS (Intel): 0x369100
     * @note[short] Android
     */
    bool canShowRewardedVideo();

    /**
     * @note[short] MacOS (ARM): 0x2f163c
     * @note[short] MacOS (Intel): 0x362d80
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void checkSteamAchievementUnlock();

    /**
     * @note[short] MacOS (ARM): 0x2f5090
     * @note[short] MacOS (Intel): 0x367cd0
     * @note[short] Windows: 0x27d2f0
     * @note[short] iOS: 0x3b131c
     * @note[short] Android
     */
    void checkUsedIcons();

    /**
     * @note[short] MacOS (ARM): 0x2f5e10
     * @note[short] MacOS (Intel): 0x368980
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void claimItemsResponse(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x2fc908
     * @note[short] MacOS (Intel): 0x36fc30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b537c
     * @note[short] Android
     */
    void clearGJLog();

    /**
     * @note[short] MacOS (ARM): 0x2f5e14
     * @note[short] MacOS (Intel): 0x368990
     * @note[short] Windows: 0x279f40
     * @note[short] iOS: 0x3b1788
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForIdx(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f62e0
     * @note[short] MacOS (Intel): 0x368e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int colorForPos(int pos);

    /**
     * @note[short] MacOS (ARM): 0x2ef98c
     * @note[short] MacOS (Intel): 0x361140
     * @note[short] Windows: 0x275010
     * @note[short] iOS: 0x3ad754
     * @note[short] Android
     */
    std::string colorKey(int id, UnlockType type);

    /**
     * @note[short] Android
     */
    TodoReturn commentsRestricted();

    /**
     * @note[short] MacOS (ARM): 0x2f0848
     * @note[short] MacOS (Intel): 0x361f00
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3ae10c
     * @note[short] Android
     */
    void completedAchievement(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x2f6ff8
     * @note[short] MacOS (Intel): 0x369c60
     * @note[short] Windows: 0x27a9a0
     * @note[short] iOS: 0x3b21f0
     * @note[short] Android
     */
    int countForType(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x1f1070
     * @note[short] MacOS (Intel): 0x2478a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int defaultFrameForAnimation(int objectID);

    /**
     * @note[short] MacOS (Intel): 0x375f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b8c84
     * @note[short] Android
     */
    void didExitPlayscene();

    /**
Performs a "Quick Save" and saves the progress of the clien     * @note[short] MacOS (ARM): 0x301fb4
     * @note[short] MacOS (Intel): 0x375ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x57d98
     * @note[short] Android
     */
    void doQuickSave();

    /**
     * @note[short] MacOS (ARM): 0x2fd36c
     * @note[short] MacOS (Intel): 0x370990
     * @note[short] Windows: 0x27fa40
     * @note[short] iOS: 0x3b5728
     * @note[short] Android
     */
    std::string dpadConfigToString(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x2f5dfc
     * @note[short] MacOS (Intel): 0x368940
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void eventUnlockFeature(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2eed4c
     * @note[short] MacOS (Intel): 0x360110
     * @note[short] iOS: 0x3acd0c
     * @note[short] Android
     */
    void fadeInMenuMusic();

    /**
     * @note[short] MacOS (ARM): 0x2eee44
     * @note[short] MacOS (Intel): 0x3601f0
     * @note[short] Windows: 0x2743c0
     * @note[short] iOS: 0x3acd9c
     * @note[short] Android
     */
    void fadeInMusic(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x2f93ec
     * @note[short] MacOS (Intel): 0x36c2b0
     * @note[short] Windows: 0x27b750
     * @note[short] iOS: 0x1f9d18
     * @note[short] Android
     */
    void finishedLoadingBGAsync(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (Intel): 0x36c8f0
     * @note[short] Windows: 0x27bbf0
     * @note[short] Android
     */
    void finishedLoadingGAsync(int index);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void finishedLoadingGAsync1(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (Intel): 0x36c8b0
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void finishedLoadingGAsync2(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x2f7a04
     * @note[short] MacOS (Intel): 0x36a8f0
     * @note[short] Android
     */
    void finishedLoadingIconAsync(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (Intel): 0x36c5a0
     * @note[short] Windows: 0x27b990
     * @note[short] Android
     */
    void finishedLoadingMGAsync(int index);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void finishedLoadingMGAsync1(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (Intel): 0x36c560
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void finishedLoadingMGAsync2(cocos2d::CCObject* obj);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void followTwitch();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void followTwitter();

    /**
     * @note[short] MacOS (ARM): 0x1f1248
     * @note[short] MacOS (Intel): 0x247aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int framesForAnimation(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x1f1278
     * @note[short] MacOS (Intel): 0x247ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float frameTimeForAnimation(int objectID);

    /**
     * @note[short] Android
     */
    TodoReturn friendRequestsRestricted();

    /**
     * @note[short] MacOS (ARM): 0x2fc744
     * @note[short] MacOS (Intel): 0x36f9a0
     * @note[short] Windows: 0x27f010
     * @note[short] iOS: 0x3b52e4
     * @note[short] Android
     */
    int generateSecretNumber();

    /**
     * @note[short] MacOS (ARM): 0x2f9b10
     * @note[short] MacOS (Intel): 0x36c990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b3728
     * @note[short] Android
     */
    const char* getBGTexture(int index);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    LevelEditorLayer* getEditorLayer();

    /**
     * @note[short] MacOS (ARM): 0x2f9044
     * @note[short] MacOS (Intel): 0x36bf40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b2c70
     * @note[short] Android
     */
    const char* getFontFile(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f90b0
     * @note[short] MacOS (Intel): 0x36bf90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b2cdc
     * @note[short] Android
     */
    const char* getFontTexture(int index);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    GJBaseGameLayer* getGameLayer();

    /**
     * @note[short] MacOS (ARM): 0x2eebac
     * @note[short] MacOS (Intel): 0x35ffc0
     * @note[short] Windows: 0x27bf50
     * @note[short] iOS: 0x3acc30
     * @note[short] Android
     */
    bool getGameVariable(char const* key);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool getGameVariableDefault(const char* key, bool defaultValue);

    /**
     * @note[short] MacOS (ARM): 0x2f9ba8
     * @note[short] MacOS (Intel): 0x36ca30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b37c0
     * @note[short] Android
     */
    const char* getGTexture(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f8ea4
     * @note[short] MacOS (Intel): 0x36bd80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b2bb4
     * @note[short] Android
     */
    int getIconRequestID();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    int getIntGameVariable(char const* key);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getIntGameVariableDefault(const char* key, int defaultValue);

    /**
     * @note[short] MacOS (ARM): 0x2ee6f4
     * @note[short] MacOS (Intel): 0x35fb90
     * @note[short] Windows: 0x54d30
     * @note[short] iOS: 0x3ac934
     * @note[short] Android
     */
    std::string getMenuMusicFile();

    /**
     * @note[short] MacOS (ARM): 0x2f9b5c
     * @note[short] MacOS (Intel): 0x36c9e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b3774
     * @note[short] Android
     */
    const char* getMGTexture(int index);

    /**
     * @note[short] MacOS (ARM): 0x2fa7ec
     * @note[short] MacOS (Intel): 0x36d520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b3fa4
     * @note[short] Android
     */
    int getNextUniqueObjectKey();

    /**
     * @note[short] MacOS (ARM): 0x2fa8e4
     * @note[short] MacOS (Intel): 0x36d610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b4060
     * @note[short] Android
     */
    int getNextUsedKey(int index, bool up);

    /**
     * @note[short] MacOS (ARM): 0x2fa898
     * @note[short] MacOS (Intel): 0x11a760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b4014
     * @note[short] Android
     */
    cocos2d::CCArray* getOrderedCustomObjectKeys();

    /**
Gets the icon ID for the client's current ball icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerBall();

    /**
Gets the icon ID for the client's current bird/ufo icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerBird();

    /**
Gets the color ID for the client's current primary color.

 @returns Color      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerColor();

    /**
Gets the color ID for the client's current secondary color.

 @returns Color      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerColor2();

    /**
Gets the icon ID for the client's current dart/wave icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerDart();

    /**
Gets the death effect ID for the client's current death effect.

 @returns Death effect      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerDeathEffect();

    /**
Gets the icon ID for the client's current cube icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerFrame();

    /**
Gets the "Glow Enabled" state for the client's icons.

 @returns Glow enabled sta     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool getPlayerGlow();

    /**
Gets the color ID for the client's current glow color.

 @returns Color      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerGlowColor();

    /**
Gets the icon ID for the client's current jetpack icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerJetpack();

    /**
Gets the icon ID for the client's current robot icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerRobot();

    /**
Gets the icon ID for the client's current ship icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerShip();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerShipFire();

    /**
Gets the ID for the client's current spider icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerSpider();

    /**
Gets the ID for the client's current streak/trail.

 @returns Streak      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerStreak();

    /**
Gets the ID for the client's current swing icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerSwing();

    /**
Gets the active PlayLayer. Returns nullptr if none.

 @returns PlayLayer point     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    PlayLayer* getPlayLayer();

    /**
     * @note[short] MacOS (ARM): 0x2ee868
     * @note[short] MacOS (Intel): 0x35fce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ac9fc
     * @note[short] Android
     */
    std::string getPracticeMusicFile();

    /**
     * @note[short] MacOS (ARM): 0x2fa134
     * @note[short] MacOS (Intel): 0x36cf50
     * @note[short] Android
     */
    bool getUGV(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2efdb0
     * @note[short] MacOS (Intel): 0x361570
     * @note[short] Windows: 0x189df0
     * @note[short] iOS: 0x3ada28
     * @note[short] Android
     */
    void getUnlockForAchievement(std::string key, int& id, UnlockType& type);

    /**
     * @note[short] MacOS (ARM): 0x2f97b0
     * @note[short] MacOS (Intel): 0x36c640
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool groundHasSecondaryColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f7dc0
     * @note[short] MacOS (Intel): 0x36acb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void iconAndTypeForKey(int key, int& id, int& type);

    /**
     * @note[short] MacOS (ARM): 0x2ef334
     * @note[short] MacOS (Intel): 0x360870
     * @note[short] Windows: 0x274b40
     * @note[short] iOS: 0x3ad244
     * @note[short] Android
     */
    std::string iconKey(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2ef7b8
     * @note[short] MacOS (Intel): 0x360e10
     * @note[short] Windows: 0x274e40
     * @note[short] iOS: 0x3ad540
     * @note[short] Android
     */
    UnlockType iconTypeToUnlockType(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2efbbc
     * @note[short] MacOS (Intel): 0x3613e0
     * @note[short] Windows: 0x3cff0
     * @note[short] iOS: 0x3ad888
     * @note[short] Android
     */
    bool isColorUnlocked(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f70d4
     * @note[short] MacOS (Intel): 0x369e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b22cc
     * @note[short] Android
     */
    bool isIconLoaded(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x2ef6a4
     * @note[short] MacOS (Intel): 0x360d50
     * @note[short] Windows: 0x274d60
     * @note[short] iOS: 0x3ad478
     * @note[short] Android
     */
    bool isIconUnlocked(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2f5e04
     * @note[short] MacOS (Intel): 0x368960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void itemPurchased(char const* key);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void joinDiscord();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void joinReddit();

    /**
     * @note[short] MacOS (ARM): 0x2f71a8
     * @note[short] MacOS (Intel): 0x369f50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int keyForIcon(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x2f5e08
     * @note[short] MacOS (Intel): 0x368970
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool levelIsPremium(int unk1, int unk2);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void likeFacebook();

    /**
     * @note[short] MacOS (ARM): 0x2f929c
     * @note[short] MacOS (Intel): 0x36c170
     * @note[short] Windows: 0x27b6a0
     * @note[short] iOS: 0x3b2ec4
     * @note[short] Android
     */
    void loadBackground(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f9340
     * @note[short] MacOS (Intel): 0x36c220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b2f68
     * @note[short] Android
     */
    void loadBackgroundAsync(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f911c
     * @note[short] MacOS (Intel): 0x36bfe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b2d48
     * @note[short] Android
     */
    void loadDeathEffect(int id);

    /**
     * @note[short] MacOS (ARM): 0x2fe128
     * @note[short] MacOS (Intel): 0x371990
     * @note[short] iOS: 0x3b5ef8
     * @note[short] Android
     */
    void loadDpadFromString(UIButtonConfig& config, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x2fdd10
     * @note[short] MacOS (Intel): 0x371540
     * @note[short] iOS: 0x3b5be8
     * @note[short] Android
     */
    void loadDPadLayout(int index, bool dual);

    /**
     * @note[short] MacOS (ARM): 0x2f8f98
     * @note[short] MacOS (Intel): 0x36be90
     * @note[short] Windows: 0x27b5f0
     * @note[short] iOS: 0x3b2bc8
     * @note[short] Android
     */
    void loadFont(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f97c0
     * @note[short] MacOS (Intel): 0x36c650
     * @note[short] Windows: 0x27ba50
     * @note[short] iOS: 0x3b33d8
     * @note[short] Android
     */
    void loadGround(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f98d4
     * @note[short] MacOS (Intel): 0x36c770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b34ec
     * @note[short] Android
     */
    void loadGroundAsync(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f7e78
     * @note[short] MacOS (Intel): 0x36ad20
     * @note[short] iOS: 0x3b24d4
     * @note[short] Android
     */
    cocos2d::CCTexture2D* loadIcon(int id, int type, int requestID);

    /**
     * @note[short] MacOS (ARM): 0x2f71bc
     * @note[short] MacOS (Intel): 0x369f70
     * @note[short] Android
     */
    void loadIconAsync(int id, int type, int requestID, cocos2d::CCObject* delegate);

    /**
     * @note[short] MacOS (ARM): 0x2f9488
     * @note[short] MacOS (Intel): 0x36c340
     * @note[short] Windows: 0x27b800
     * @note[short] iOS: 0x3b30b0
     * @note[short] Android
     */
    void loadMiddleground(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f9588
     * @note[short] MacOS (Intel): 0x36c440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b31b0
     * @note[short] Android
     */
    void loadMiddlegroundAsync(int index);

    /**
     * @note[short] MacOS (ARM): 0x2fea74
     * @note[short] MacOS (Intel): 0x3723e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b6348
     * @note[short] Android
     */
    void loadVideoSettings();

    /**
     * @note[short] MacOS (ARM): 0x2efd3c
     * @note[short] MacOS (Intel): 0x361510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ad9c4
     * @note[short] Android
     */
    void lockColor(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2ef918
     * @note[short] MacOS (Intel): 0x3610e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ad6f0
     * @note[short] Android
     */
    void lockIcon(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2f8eb8
     * @note[short] MacOS (Intel): 0x36bda0
     * @note[short] Android
     */
    void logLoadedIconInfo();

    /**
     * @note[short] Android
     */
    TodoReturn messagesRestricted();

    /**
     * @note[short] Android
     */
    TodoReturn modUIRank();

    /**
     * @note[short] Android
     */
    TodoReturn offlineModeEnabled();

    /**
     * @note[short] Android
     */
    TodoReturn onlyCuratedLevels();

    /**
     * @note[short] MacOS (Intel): 0x369890
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void openEditorGuide();

    /**
     * @note[short] Android
     */
    TodoReturn parentalOptionsActive();

    /**
     * @note[short] MacOS (ARM): 0xc9b4
     * @note[short] MacOS (Intel): 0x35fe20
     * @note[short] Windows: 0x274050
     * @note[short] iOS: 0x3acac4
     * @note[short] Android
     */
    void playMenuMusic();

    /**
     * @note[short] MacOS (ARM): 0x2eef7c
     * @note[short] MacOS (Intel): 0x360310
     * @note[short] iOS: 0x3acec4
     * @note[short] Android
     */
    int playSFXTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (Intel): 0x371c90
     * @note[short] Android
     */
    void prepareDPadSettings();

    /**
     * @note[short] MacOS (ARM): 0x2fc904
     * @note[short] MacOS (Intel): 0x36fc20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b5378
     * @note[short] Android
     */
    void printGJLog();

    /**
     * @note[short] Android
     */
    TodoReturn privacyPushWanted();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void queueReloadMenu(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x2f6a08
     * @note[short] MacOS (Intel): 0x369550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b1c34
     * @note[short] Android
     */
    void rateGame();

    /**
     * @note[short] MacOS (ARM): 0x2fb8f8
     * @note[short] MacOS (Intel): 0x36e710
     * @note[short] Windows: 0x27dd30
     * @note[short] iOS: 0x3b4a0c
     * @note[short] Android
     */
    void recountUserStats(std::string str);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void reloadAll(bool switchingModes, bool toFullscreen, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x302aac
     * @note[short] MacOS (Intel): 0x376920
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void reloadAll(bool switchingModes, bool toFullscreen, bool borderless, bool fix, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x302b50
     * @note[short] MacOS (Intel): 0x3769d0
     * @note[short] iOS: 0x3b9358
     * @note[short] Android
     */
    void reloadAllStep2();

    /**
     * @note[short] MacOS (ARM): 0x302c3c
     * @note[short] MacOS (Intel): 0x376ae0
     * @note[short] Windows: 0x285360
     * @note[short] iOS: 0x3b9444
     * @note[short] Android
     */
    void reloadAllStep3();

    /**
     * @note[short] MacOS (ARM): 0x302cc4
     * @note[short] MacOS (Intel): 0x376b60
     * @note[short] iOS: 0x3b94cc
     * @note[short] Android
     */
    void reloadAllStep4();

    /**
     * @note[short] MacOS (ARM): 0x302d30
     * @note[short] MacOS (Intel): 0x376bc0
     * @note[short] Windows: 0x285520
     * @note[short] iOS: 0x3b9538
     * @note[short] Android
     */
    void reloadAllStep5();

    /**
     * @note[short] MacOS (ARM): 0x774f38
     * @note[short] MacOS (Intel): 0x87fd80
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void reloadMenu();

    /**
     * @note[short] MacOS (ARM): 0x2fb08c
     * @note[short] MacOS (Intel): 0x36de10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b445c
     * @note[short] Android
     */
    void removeCustomObject(int key);

    /**
     * @note[short] MacOS (Intel): 0x36ba00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b29e8
     * @note[short] Android
     */
    void removeIconDelegate(int requestID);

    /**
     * @note[short] MacOS (ARM): 0x2fad30
     * @note[short] MacOS (Intel): 0x36da70
     * @note[short] Windows: 0x27cb80
     * @note[short] iOS: 0x3b4288
     * @note[short] Android
     */
    int reorderKey(int index, bool up);

    /**
     * @note[short] MacOS (ARM): 0x22bc84
     * @note[short] MacOS (Intel): 0x362c60
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3ae71c
     * @note[short] Android
     */
    void reportAchievementWithID(char const* key, int percent, bool dontNotify);

    /**
     * @note[short] MacOS (ARM): 0x2f0b98
     * @note[short] MacOS (Intel): 0x362200
     * @note[short] iOS: 0x3ae300
     * @note[short] Android
     */
    void reportPercentageForLevel(int levelID, int percentage, bool isPlatformer);

    /**
     * @note[short] MacOS (ARM): 0x2f09f8
     * @note[short] MacOS (Intel): 0x362090
     * @note[short] iOS: 0x3ae1f4
     * @note[short] Android
     */
    void resetAchievement(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x2f6304
     * @note[short] MacOS (Intel): 0x368e80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAdTimer();

    /**
     * @note[short] MacOS (ARM): 0x2fb1a8
     * @note[short] MacOS (Intel): 0x36df20
     * @note[short] Windows: 0x27cfc0
     * @note[short] iOS: 0x3b44ec
     * @note[short] Android
     */
    void resetAllIcons();

    /**
     * @note[short] MacOS (ARM): 0x2f4804
     * @note[short] MacOS (Intel): 0x3673c0
     * @note[short] iOS: 0x3b0ce4
     * @note[short] Android
     */
    void resetCoinUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x2fe7d4
     * @note[short] MacOS (Intel): 0x372080
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetDPadSettings(bool dual);

    /**
     * @note[short] MacOS (ARM): 0x302d84
     * @note[short] MacOS (Intel): 0x376c00
     * @note[short] Windows: 0x285560
     * @note[short] iOS: 0x3b957c
     * @note[short] Android
     */
    cocos2d::CCSize resolutionForKey(int key);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resumeAudio();

    /**
     * @note[short] MacOS (ARM): 0x2f64a4
     * @note[short] MacOS (Intel): 0x369040
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resumeAudioDelayed();

    /**
     * @note[short] MacOS (ARM): 0x3025b4
     * @note[short] MacOS (Intel): 0x376400
     * @note[short] iOS: 0x3b8ebc
     * @note[short] Android
     */
    void returnToLastScene(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2f65d4
     * @note[short] MacOS (Intel): 0x97be10
     * @note[short] Android
     */
    void rewardedVideoAdFinished(int unused);

    /**
     * @note[short] MacOS (ARM): 0x2f6714
     * @note[short] MacOS (Intel): 0x369270
     * @note[short] Android
     */
    void rewardedVideoHidden();

    /**
     * @note[short] MacOS (ARM): 0x2f6690
     * @note[short] MacOS (Intel): 0x369200
     * @note[short] Android
     */
    void rewardedVideoHiddenDelayed();

    /**
     * @note[short] Android
     */
    TodoReturn safeModeEnabled();

    /**
     * @note[short] MacOS (ARM): 0x3028f0
     * @note[short] MacOS (Intel): 0x376760
     * @note[short] Windows: 0x285010
     * @note[short] iOS: 0x3b919c
     * @note[short] Android
     */
    bool safePopScene();

    /**
     * @note[short] Android
     */
    void saveAdTimer();

    /**
     * @note[short] MacOS (ARM): 0x2fc910
     * @note[short] MacOS (Intel): 0x36fc50
     * @note[short] Windows: 0x27f140
     * @note[short] iOS: 0x18dcb4
     * @note[short] Android
     */
    void saveDPadLayout(int index, bool dual);

    /**
     * @note[short] MacOS (ARM): 0x2f9bf4
     * @note[short] MacOS (Intel): 0x36ca80
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3b380c
     * @note[short] Android
     */
    void setGameVariable(char const* key, bool value);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setHasRatingPower(int hasRP);

    /**
     * @note[short] iOS: 0x19dc54
     * @note[short] Android
     */
    void setIntGameVariable(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerBall(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerBird(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerColor(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerColor2(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerColor3(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerDart(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerDeathEffect(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerFrame(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerGlow(bool v);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerJetpack(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerRobot(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerShip(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerShipStreak(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerSpider(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerStreak(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerSwing(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerUserID(int id);

    /**
     * @note[short] MacOS (ARM): 0x2f9f90
     * @note[short] MacOS (Intel): 0x36cde0
     * @note[short] iOS: 0x3b39dc
     * @note[short] Android
     */
    void setUGV(char const* key, bool value);

    /**
     * @note[short] MacOS (Intel): 0x249490
     * @note[short] Android
     */
    void setupGameAnimations();

    /**
     * @note[short] MacOS (ARM): 0x2f7484
     * @note[short] MacOS (Intel): 0x36a240
     * @note[short] Windows: 0x27b2a0
     * @note[short] iOS: 0x3b2328
     * @note[short] Android
     */
    std::string sheetNameForIcon(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x2f630c
     * @note[short] MacOS (Intel): 0x368ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void shortenAdTimer(float time);

    /**
     * @note[short] MacOS (ARM): 0x2f6378
     * @note[short] MacOS (Intel): 0x368f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldShowInterstitial(int unk1, int unk2, int unk3);

    /**
     * @note[short] MacOS (ARM): 0x2f6380
     * @note[short] MacOS (Intel): 0x368f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool showInterstitial();

    /**
     * @note[short] MacOS (ARM): 0x2f6424
     * @note[short] MacOS (Intel): 0x368fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool showInterstitialForced();

    /**
     * @note[short] MacOS (ARM): 0x2f62fc
     * @note[short] MacOS (Intel): 0x368e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool showMainMenuAd();

    /**
     * @note[short] Android
     */
    TodoReturn showParentalRestrictedAlert();

    /**
     * @note[short] MacOS (ARM): 0x2ee6ac
     * @note[short] MacOS (Intel): 0x35fb40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ac8ec
     * @note[short] Android
     */
    void startUpdate();

    /**
     * @note[short] MacOS (ARM): 0x2faba8
     * @note[short] MacOS (Intel): 0x36d8e0
     * @note[short] Windows: 0x27ca20
     * @note[short] iOS: 0x3b41dc
     * @note[short] Android
     */
    std::string stringForCustomObject(int customObjectID);

    /**
     * @note[short] Android
     */
    TodoReturn subSpotlight();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void subYouTube();

    /**
     * @note[short] MacOS (ARM): 0x2fad7c
     * @note[short] MacOS (Intel): 0x36daa0
     * @note[short] Windows: 0x27cc80
     * @note[short] iOS: 0x3b42d4
     * @note[short] Android
     */
    void switchCustomObjects(int key1, int key2);

    /**
     * @note[short] MacOS (Intel): 0x376880
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void switchScreenMode(bool fullscreen, bool borderless, bool fix, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x2f6dcc
     * @note[short] MacOS (Intel): 0x3698c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b1fdc
     * @note[short] Android
     */
    void syncPlatformAchievements();

    /**
     * @note[short] MacOS (ARM): 0x2f9eac
     * @note[short] MacOS (Intel): 0x36cd20
     * @note[short] Windows: 0x27c100
     * @note[short] iOS: 0x3b399c
     * @note[short] Android
     */
    bool toggleGameVariable(char const* key);

    /**
     * @note[short] Android
     */
    void tryCacheAd();

    /**
     * @note[short] MacOS (ARM): 0x2f6374
     * @note[short] MacOS (Intel): 0x368f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowInterstitial(int unk1, int unk2, int unk3);

    /**
     * @note[short] MacOS (ARM): 0x2f9204
     * @note[short] MacOS (Intel): 0x36c0d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b2e2c
     * @note[short] Android
     */
    void unloadBackground();

    /**
     * @note[short] MacOS (ARM): 0x2f84cc
     * @note[short] MacOS (Intel): 0x36b3a0
     * @note[short] Windows: 0x27ae20
     * @note[short] iOS: 0x3b27bc
     * @note[short] Android
     */
    void unloadIcon(int id, int type, int requestID);

    /**
     * @note[short] MacOS (ARM): 0x2f8c20
     * @note[short] MacOS (Intel): 0x36baf0
     * @note[short] Windows: 0x27b150
     * @note[short] iOS: 0x3b2ac4
     * @note[short] Android
     */
    void unloadIcons(int requestID);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ad92c
     * @note[short] Android
     */
    void unlockColor(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f5e00
     * @note[short] MacOS (Intel): 0x368950
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockedPremium();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ad658
     * @note[short] Android
     */
    void unlockIcon(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2ef848
     * @note[short] MacOS (Intel): 0x361030
     * @note[short] iOS: 0x3ad634
     * @note[short] Android
     */
    IconType unlockTypeToIconType(int type);

    /**
     * @note[short] MacOS (ARM): 0x303038
     * @note[short] MacOS (Intel): 0x376ed0
     * @note[short] Windows: 0x285990
     * @note[short] iOS: 0x3b9724
     * @note[short] Android
     */
    void updateCustomFPS();

    /**
     * @note[short] MacOS (ARM): 0x2f69c4
     * @note[short] MacOS (Intel): 0x369500
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x387be8
     * @note[short] Android
     */
    void updateMusic();

    /**
     * @note[short] MacOS (ARM): 0x2f1764
     * @note[short] MacOS (Intel): 0x362ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ae7c4
     * @note[short] Android
     */
    void verifyAchievementUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x2f1970
     * @note[short] MacOS (Intel): 0x3630c0
     * @note[short] Windows: 0x277180
     * @note[short] Android
     */
    void verifyCoinUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x2f1910
     * @note[short] MacOS (Intel): 0x363060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ae8d4
     * @note[short] Android
     */
    void verifyStarUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x2f5a88
     * @note[short] MacOS (Intel): 0x368580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void verifySyncedCoins();

    /**
     * @note[short] MacOS (ARM): 0x2f6470
     * @note[short] MacOS (Intel): 0x8dc40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void videoAdHidden();

    /**
     * @note[short] MacOS (ARM): 0x2f642c
     * @note[short] MacOS (Intel): 0x368fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void videoAdShowed();
    cocos2d::CCDictionary* m_mainFramesForAnimation;
    cocos2d::CCDictionary* m_detailFramesForAnimation;
    cocos2d::CCDictionary* m_frameTimeForAnimation;
    cocos2d::CCDictionary* m_framesForAnimation;
    cocos2d::CCDictionary* m_defaultFrames;
    bool m_switchModes;
    bool m_toFullscreen;
    bool m_reloading;
    bool m_fix;
    bool m_reloadTextures;
    bool m_unkBool2;
    bool m_vsyncEnabled;
    cocos2d::CCDictionary* m_valueKeeper;
    cocos2d::CCDictionary* m_unlockValueKeeper;
    cocos2d::CCDictionary* m_customObjectDict;
    double m_adTimer;
    double m_adCache;
    bool m_unkBool3;
    int m_unkSize4_1;
    double m_unkDouble2;
    int m_unkSize4_2;
    int m_unkSize4_3;
    bool m_loaded;
    bool m_googlePlaySignedIn;
    std::string m_editorClipboard;
    int m_copiedObjectCount;
    PlayLayer* m_playLayer;
    LevelEditorLayer* m_levelEditorLayer;
    GJBaseGameLayer* m_gameLayer;
    LevelSelectLayer* m_levelSelectLayer;
    MenuLayer* m_menuLayer;
    bool m_inMenuLayer;
    void* m_premiumPopup;
    bool m_firstSetup;
    bool m_showedMenu;
    bool m_unknownBool4;
    bool m_unknownBool5;
    std::string m_playerUDID;
    std::string m_playerName;
    bool m_scoreValid;
    geode::SeedValueRSV m_playerUserID;
    float m_bgVolume;
    float m_sfxVolume;
    float m_timeOffset;
    bool m_ratedGame;
    bool m_clickedFacebook;
    bool m_clickedTwitter;
    bool m_clickedYouTube;
    bool m_clickedTwitch;
    bool m_clickedDiscord;
    bool m_clickedReddit;
    double m_socialsDuration;
    bool m_musicPaused;
    bool m_isParticleObject;
    bool m_editorEnabled;
    int m_sceneEnum;
    bool m_searchObjectBool;
    geode::SeedValueRSV m_playerFrame;
    geode::SeedValueRSV m_playerShip;
    geode::SeedValueRSV m_playerBall;
    geode::SeedValueRSV m_playerBird;
    geode::SeedValueRSV m_playerDart;
    geode::SeedValueRSV m_playerRobot;
    geode::SeedValueRSV m_playerSpider;
    geode::SeedValueRSV m_playerSwing;
    geode::SeedValueRSV m_playerColor;
    geode::SeedValueRSV m_playerColor2;
    geode::SeedValueRSV m_playerGlowColor;
    geode::SeedValueRSV m_playerStreak;
    geode::SeedValueRSV m_playerShipFire;
    geode::SeedValueRSV m_playerDeathEffect;
    geode::SeedValueRSV m_playerJetpack;
    geode::SeedValueRS m_chk;
    geode::SeedValueSR m_secretNumber;
    bool m_playerGlow;
    IconType m_playerIconType;
    bool m_everyPlaySetup;
    bool m_showSongMarkers;
    bool m_showBPMMarkers;
    bool m_recordGameplay;
    bool m_showProgressBar;
    bool m_performanceMode;
    bool m_addGlow;
    bool m_clickedGarage;
    bool m_clickedEditor;
    bool m_clickedName;
    bool m_clickedPractice;
    bool m_showedEditorGuide;
    bool m_showedRateDiffDialog;
    bool m_showedRateStarDialog;
    bool m_showedLowDetailDialog;
    GameRateDelegate* m_gameRateDelegate1;
    GameRateDelegate* m_gameRateDelegate2;
    cocos2d::ccColor3B m_copiedColor;
    int m_currentLevelID;
    int m_currentColorChannel;
    int m_currentGroupID;
    int m_loadedBgID;
    int m_loadedGroundID;
    int m_loadedMG;
    int m_loadedFont;
    int m_loadedDeathEffect;
    bool m_loadingBG;
    bool m_loadingG;
    bool m_loadingG1;
    bool m_finishedLoadingG1;
    bool m_finishedLoadingG2;
    bool m_finishedLoadingMG1;
    bool m_finishedLoadingMG2;
    int m_sessionAttempts;
    int m_sessionAttempts2;
    int m_sessionNormalAttempts;
    int m_bootups;
    bool m_hasRatedGame;
    bool m_unkBool6;
    bool m_shouldLoadUnlockValueKeeper;
    bool m_unkBool7;
    bool m_unkBool8;
    geode::SeedValueRSV m_hasRP;
    bool m_hasDRP;
    bool m_canGetLevelSaveData;
    int m_resolution;
    int m_texQuality;
    bool m_somethingInMenuLayer;
    DailyLevelPage* m_dailyLevelPage;
    bool m_ropeGarageEnter;
    int m_currentGauntlet;
    int m_unkSize4_13;
    bool m_unkBool10;
    int m_unkSize4_14;
    bool m_disableThumbstick;
    float m_customFPSTarget;
    bool m_loadingLevel;
    int m_customMenuSongID;
    int m_customPracticeSongID;
    std::map<int, int> m_iconLoadCounts;
    std::map<int, std::map<int, int>> m_iconRequests;
    std::map<int, bool> m_isIconBeingLoaded;
    std::vector<int> m_keyStartForIcon;
    std::map<int, std::vector<cocos2d::CCObject*>> m_iconDelegates;
    int m_iconRequestID;
    cocos2d::CCArray* m_gjLog;
    RewardedVideoDelegate* m_rewardedVideoDelegate;
    SearchType m_localSearchType;
    SearchType m_savedSearchType;
    int m_levelSearchType;
    UIButtonConfig m_dpad1;
    UIButtonConfig m_dpad2;
    UIButtonConfig m_dpad3;
    UIButtonConfig m_dpad4;
    UIButtonConfig m_dpad5;
    std::string m_dpadLayout1;
    std::string m_dpadLayout2;
    std::string m_dpadLayout3;
    std::string m_dpadLayoutDual1;
    std::string m_dpadLayoutDual2;
    std::string m_dpadLayoutDual3;
    int m_leaderboardLevelID;
    int m_leaderboardLevelTime;
    int m_leaderboardLevelPoints;
    bool m_shouldResetShader;
    cocos2d::CCPoint m_practicePos;
    float m_practiceOpacity;
    int m_unk664;
};
