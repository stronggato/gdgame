#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/LeaderboardManagerDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class LeaderboardsLayer : public cocos2d::CCLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LeaderboardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LeaderboardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LeaderboardsLayer();

    /**
     * @note[short] MacOS (Intel): 0x512a90
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~LeaderboardsLayer();

    /**
     * @note[short] MacOS (ARM): 0x46dad8
     * @note[short] MacOS (Intel): 0x512d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x454e38
     * @note[short] Android
     */
    static LeaderboardsLayer* create(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x46d9e0
     * @note[short] MacOS (Intel): 0x512bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x454ddc
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x46fb4c
     * @note[short] MacOS (Intel): 0x514da0
     * @note[short] Windows: 0x3da940
     * @note[short] iOS: 0x456ab8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x46faf4
     * @note[short] MacOS (Intel): 0x514d40
     * @note[short] Windows: 0x3da890
     * @note[short] iOS: 0x456a60
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x46f430
     * @note[short] MacOS (Intel): 0x514710
     * @note[short] Windows: 0x3d9fa0
     * @note[short] iOS: 0x45668c
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x46f470
     * @note[short] MacOS (Intel): 0x514770
     * @note[short] Windows: 0x3d9fc0
     * @note[short] iOS: 0x4566cc
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x46f518
     * @note[short] MacOS (Intel): 0x514810
     * @note[short] Windows: 0x3d9fd0
     * @note[short] iOS: 0x456728
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* scores, char const* key);

    /**
     * @note[short] MacOS (Intel): 0x514a60
     * @note[short] Windows: 0x3da090
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x46dbbc
     * @note[short] MacOS (Intel): 0x512e40
     * @note[short] Windows: 0x3d7a30
     * @note[short] iOS: 0x454f0c
     * @note[short] Android
     */
    bool init(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x46f6fc
     * @note[short] MacOS (Intel): 0x514970
     * @note[short] iOS: 0x4567fc
     * @note[short] Android
     */
    bool isCorrect(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x46eed8
     * @note[short] MacOS (Intel): 0x5141a0
     * @note[short] Windows: 0x3da8c0
     * @note[short] iOS: 0x456134
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46ef78
     * @note[short] MacOS (Intel): 0x514250
     * @note[short] iOS: 0x4561d4
     * @note[short] Android
     */
    void onCreators(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46ef5c
     * @note[short] MacOS (Intel): 0x514230
     * @note[short] iOS: 0x4561b8
     * @note[short] Android
     */
    void onGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46e4c8
     * @note[short] MacOS (Intel): 0x513790
     * @note[short] Windows: 0x3da370
     * @note[short] iOS: 0x23158
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46ef94
     * @note[short] MacOS (Intel): 0x514270
     * @note[short] Windows: 0x3d98d0
     * @note[short] iOS: 0x4561f0
     * @note[short] Android
     */
    void onStat(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46ef24
     * @note[short] MacOS (Intel): 0x5141f0
     * @note[short] iOS: 0x456180
     * @note[short] Android
     */
    void onTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46ef40
     * @note[short] MacOS (Intel): 0x514210
     * @note[short] iOS: 0x45619c
     * @note[short] Android
     */
    void onWeek(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46f104
     * @note[short] MacOS (Intel): 0x5143e0
     * @note[short] iOS: 0x456360
     * @note[short] Android
     */
    void refreshTabs();

    /**
     * @note[short] MacOS (ARM): 0x46ed2c
     * @note[short] MacOS (Intel): 0x514000
     * @note[short] iOS: 0x455f9c
     * @note[short] Android
     */
    void selectLeaderboard(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x46efcc
     * @note[short] MacOS (Intel): 0x5142a0
     * @note[short] iOS: 0x456228
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* scores);

    /**
     * @note[short] MacOS (ARM): 0x46e74c
     * @note[short] MacOS (Intel): 0x2acce0
     * @note[short] iOS: 0x4559c0
     * @note[short] Android
     */
    void setupTabs();

    /**
     * @note[short] MacOS (ARM): 0x46f1a8
     * @note[short] MacOS (Intel): 0x514480
     * @note[short] iOS: 0x456404
     * @note[short] Android
     */
    void toggleTabButtons();
    GJListLayer* m_list;
    cocos2d::CCArray* m_userScores;
    LeaderboardType m_type;
    LeaderboardStat m_stat;
    CCMenuItemToggler* m_topBtn;
    CCMenuItemToggler* m_globalBtn;
    CCMenuItemToggler* m_creatorsBtn;
    CCMenuItemToggler* m_friendsBtn;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    cocos2d::CCArray* m_tabs;
    cocos2d::CCArray* m_modeButtons;
};
