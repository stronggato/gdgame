#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/SeedValue.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_map.hpp>

class GameStatsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameStatsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameStatsManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GameStatsManager* get();

    /**
     * @note[short] Windows: 0x2d3fa0
     * @note[short] Android: Rebinded
     */
    virtual  ~GameStatsManager();

    /**
     * @note[short] MacOS (ARM): 0x1ae3c
     * @note[short] MacOS (Intel): 0x1f1d0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3c0e8c
     * @note[short] Android
     */
    static GameStatsManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x1b180
     * @note[short] MacOS (Intel): 0x1f6b0
     * @note[short] Windows: 0x2d41a0
     * @note[short] iOS: 0x3c1028
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2a85f4
     * @note[short] MacOS (Intel): 0x3167d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x6d6b0
     * @note[short] Android
     */
    int accountIDForIcon(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x379b4
     * @note[short] MacOS (Intel): 0x3ddd0
     * @note[short] Windows: 0x2eb9f0
     * @note[short] iOS: 0x3ce490
     * @note[short] Android
     */
    void addSimpleSpecialChestReward(std::string key, UnlockType type, int id, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x37968
     * @note[short] MacOS (Intel): 0x3dd90
     * @note[short] Windows: 0x2ebc00
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addSpecialRewardDescription(std::string key, std::string description);

    /**
     * @note[short] MacOS (ARM): 0x26070
     * @note[short] MacOS (Intel): 0x2bd60
     * @note[short] Windows: 0x2d75f0
     * @note[short] iOS: 0x3c78a8
     * @note[short] Android
     */
    void addStoreItem(int index, int id, int unlockType, int price, ShopType shopType);

    /**
     * @note[short] MacOS (ARM): 0x325d8
     * @note[short] MacOS (Intel): 0x38820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cf764
     * @note[short] Android
     */
    bool areChallengesLoaded();

    /**
     * @note[short] MacOS (ARM): 0x31a88
     * @note[short] MacOS (Intel): 0x37d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cf15c
     * @note[short] Android
     */
    bool areRewardsLoaded();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void awardCurrencyForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x30fa0
     * @note[short] MacOS (Intel): 0x37270
     * @note[short] iOS: 0x3cea88
     * @note[short] Android
     */
    void awardDiamondsForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x356f4
     * @note[short] MacOS (Intel): 0x3ba60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void awardOldSpecialStats();

    /**
     * @note[short] MacOS (ARM): 0x4cfbc
     * @note[short] MacOS (Intel): 0x52f90
     * @note[short] Windows: 0x2f3ca0
     * @note[short] iOS: 0x3daa28
     * @note[short] Android
     */
    bool awardSecretKey();

    /**
     * @note[short] MacOS (ARM): 0x3740c
     * @note[short] MacOS (Intel): 0x3d850
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool canItemBeUnlocked(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x26bc0
     * @note[short] MacOS (Intel): 0x2c9a0
     * @note[short] Windows: 0x4e64b0
     * @note[short] iOS: 0x3c8000
     * @note[short] Android
     */
    void checkAchievement(char const* statKey);

    /**
     * @note[short] MacOS (ARM): 0x2bfe0
     * @note[short] MacOS (Intel): 0x323c0
     * @note[short] iOS: 0x3cc190
     * @note[short] Android
     */
    void checkCoinAchievement(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2f17c
     * @note[short] MacOS (Intel): 0x355a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cda64
     * @note[short] Android
     */
    void checkCoinsForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x3357c
     * @note[short] MacOS (Intel): 0x396e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cff54
     * @note[short] Android
     */
    bool claimListReward(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x31d58
     * @note[short] MacOS (Intel): 0x38070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cf2fc
     * @note[short] Android
     */
    void collectReward(GJRewardType type, GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x4d060
     * @note[short] MacOS (Intel): 0x53050
     * @note[short] Android
     */
    void collectVideoReward(int orbs);

    /**
     * @note[short] MacOS (ARM): 0x331c8
     * @note[short] MacOS (Intel): 0x39340
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cfd40
     * @note[short] Android
     */
    void completedChallenge(GJChallengeItem* item);

    /**
     * @note[short] MacOS (ARM): 0x33a00
     * @note[short] Android
     */
    GJRewardItem* completedDailyLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2d16c
     * @note[short] MacOS (Intel): 0x33420
     * @note[short] iOS: 0x3ccae8
     * @note[short] Android
     */
    void completedDemonLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2d010
     * @note[short] Windows: 0x2df2c0
     * @note[short] Android
     */
    void completedLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2db84
     * @note[short] MacOS (Intel): 0x33e20
     * @note[short] iOS: 0x3ccee0
     * @note[short] Android
     */
    void completedMapPack(GJMapPack* pack);

    /**
     * @note[short] MacOS (ARM): 0x2d16c
     * @note[short] MacOS (Intel): 0x335c0
     * @note[short] Windows: 0x2df6a0
     * @note[short] iOS: 0x3ccbb4
     * @note[short] Android
     */
    void completedStarLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4ce5c
     * @note[short] MacOS (Intel): 0x52e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3da9a0
     * @note[short] Android
     */
    int countSecretChests(GJRewardType rewardType);

    /**
     * @note[short] MacOS (ARM): 0x4cea0
     * @note[short] MacOS (Intel): 0x52e80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3da9e4
     * @note[short] Android
     */
    int countUnlockedSecretChests(GJRewardType rewardType);

    /**
     * @note[short] MacOS (ARM): 0x31464
     * @note[short] MacOS (Intel): 0x37720
     * @note[short] iOS: 0x3ced50
     * @note[short] Android
     */
    GJRewardItem* createReward(GJRewardType type, int id, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x1d164
     * @note[short] MacOS (Intel): 0x21df0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c3034
     * @note[short] Android
     */
    void createSecretChestItems();

    /**
     * @note[short] Windows: 0x2ec5d0
     * @note[short] iOS: 0x3d300c
     * @note[short] Android
     */
    void createSecretChestRewards();

    /**
     * @note[short] MacOS (ARM): 0x1d2a8
     * @note[short] MacOS (Intel): 0x21f40
     * @note[short] iOS: 0x3c3170
     * @note[short] Android
     */
    void createSpecialChestItems();

    /**
     * @note[short] MacOS (ARM): 0x1b228
     * @note[short] MacOS (Intel): 0x1f760
     * @note[short] Windows: 0x2d48e0
     * @note[short] iOS: 0x3c10f8
     * @note[short] Android
     */
    void createStoreItems();

    /**
     * @note[short] Android
     */
    TodoReturn dailyRecallPrice(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4dd08
     * @note[short] MacOS (Intel): 0x53eb0
     * @note[short] Windows: 0x2f4790
     * @note[short] iOS: 0x3db63c
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4d830
     * @note[short] MacOS (Intel): 0x53980
     * @note[short] Windows: 0x2f4480
     * @note[short] iOS: 0x3db25c
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4d1d0
     * @note[short] MacOS (Intel): 0x531b0
     * @note[short] Windows: 0x2f3d60
     * @note[short] iOS: 0x3daacc
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x2544c
     * @note[short] MacOS (Intel): 0x2ae50
     * @note[short] Windows: 0x557f20
     * @note[short] iOS: 0x3c73cc
     * @note[short] Android
     */
    void generateItemUnlockableData();

    /**
     * @note[short] Windows: 0xed080
     * @note[short] iOS: 0x3ce94c
     * @note[short] Android
     */
    int getAwardedCurrencyForLevel(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn getAwardedCurrencyForLevel(GJGameLevel* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x30d9c
     * @note[short] MacOS (Intel): 0x370b0
     * @note[short] iOS: 0x3ce94c
     * @note[short] Android
     */
    int getAwardedDiamondsForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x30110
     * @note[short] MacOS (Intel): 0x36460
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getBaseCurrency(int stars, bool mainLevel, int levelID);

    /**
     * @note[short] MacOS (ARM): 0x30170
     * @note[short] MacOS (Intel): 0x364b0
     * @note[short] iOS: 0x3ce1f4
     * @note[short] Android
     */
    int getBaseCurrencyForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x30d54
     * @note[short] MacOS (Intel): 0x37050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ce904
     * @note[short] Android
     */
    int getBaseDiamonds(int stars);

    /**
     * @note[short] MacOS (ARM): 0x30d68
     * @note[short] MacOS (Intel): 0x37070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ce918
     * @note[short] Android
     */
    int getBonusDiamonds(int stars);

    /**
     * @note[short] Android
     */
    GJChallengeItem* getChallenge(int id);

    /**
     * @note[short] MacOS (ARM): 0x32ff4
     * @note[short] MacOS (Intel): 0x39180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cfc88
     * @note[short] Android
     */
    std::string getChallengeKey(GJChallengeItem* chal);

    /**
     * @note[short] MacOS (ARM): 0x2c4a4
     * @note[short] MacOS (Intel): 0x32830
     * @note[short] iOS: 0x3cc3a8
     * @note[short] Android
     */
    int getCollectedCoinsForLevel(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn getCompletedDailyIDs(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x2e064
     * @note[short] MacOS (Intel): 0x342e0
     * @note[short] Windows: 0x2e0130
     * @note[short] iOS: 0x3cd1a8
     * @note[short] Android
     */
    cocos2d::CCArray* getCompletedMapPacks();

    /**
     * @note[short] MacOS (ARM): 0x3003c
     * @note[short] MacOS (Intel): 0x36390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ce138
     * @note[short] Android
     */
    std::string getCurrencyKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x33810
     * @note[short] MacOS (Intel): 0x39990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d00dc
     * @note[short] Android
     */
    std::string getDailyLevelKey(int dailyID);

    /**
     * @note[short] Android
     */
    TodoReturn getDailyStarKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2c978
     * @note[short] MacOS (Intel): 0x32d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cc60c
     * @note[short] Android
     */
    const char* getDemonLevelKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x38644
     * @note[short] MacOS (Intel): 0x3e9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    std::string getEventRewardKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x377c4
     * @note[short] MacOS (Intel): 0x3dbb0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3d2698
     * @note[short] Android
     */
    std::string getGauntletRewardKey(int id);

    /**
     * @note[short] Windows: 0x2e2a20
     * @note[short] Android
     */
    std::string getItemKey(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x37024
     * @note[short] MacOS (Intel): 0x3d4d0
     * @note[short] Windows: 0x2e6df0
     * @note[short] iOS: 0x3d2354
     * @note[short] Android
     */
    int getItemUnlockState(int itemID, UnlockType unlockType);

    /**
     * @note[short] MacOS (ARM): 0x37120
     * @note[short] MacOS (Intel): 0x3d590
     * @note[short] Android
     */
    int getItemUnlockStateLite(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2c624
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cc48c
     * @note[short] Android
     */
    std::string getLevelKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2c668
     * @note[short] MacOS (Intel): 0x32a20
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3cc4d0
     * @note[short] Android
     */
    std::string getLevelKey(int levelID, bool isOnline, bool isDaily, bool isGauntlet, bool isEvent);

    /**
     * @note[short] MacOS (ARM): 0x333b0
     * @note[short] MacOS (Intel): 0x39520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cfea0
     * @note[short] Android
     */
    std::string getListRewardKey(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2db5c
     * @note[short] MacOS (Intel): 0x33e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getMapPackKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4c8a8
     * @note[short] MacOS (Intel): 0x527a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3da6f8
     * @note[short] Android
     */
    int getNextGoldChestID();

    /**
     * @note[short] MacOS (ARM): 0x37d74
     * @note[short] MacOS (Intel): 0x3e170
     * @note[short] Android
     */
    std::string getNextVideoAdReward();

    /**
     * @note[short] Android
     */
    TodoReturn getNotificationRewardKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2bbcc
     * @note[short] MacOS (Intel): 0x31f60
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    std::string getPathRewardKey(int id);

    /**
     * @note[short] iOS: 0x3cfb0c
     * @note[short] Android
     */
    GJChallengeItem* getQueuedChallenge(int id);

    /**
     * @note[short] MacOS (ARM): 0x4ccec
     * @note[short] MacOS (Intel): 0x52ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJRewardItem* getRewardForSecretChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x38064
     * @note[short] MacOS (Intel): 0x3e470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d2a7c
     * @note[short] Android
     */
    GJRewardItem* getRewardForSpecialChest(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x31a7c
     * @note[short] MacOS (Intel): 0x37d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cf150
     * @note[short] Android
     */
    GJRewardItem* getRewardItem(GJRewardType type);

    /**
     * @note[short] Windows: 0x2e2a20
     * @note[short] Android
     */
    std::string getRewardKey(GJRewardType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x32e6c
     * @note[short] MacOS (Intel): 0x39020
     * @note[short] Windows: 0x2e30b0
     * @note[short] iOS: 0x3cfb90
     * @note[short] Android
     */
    GJChallengeItem* getSecondaryQueuedChallenge(int id);

    /**
     * @note[short] MacOS (ARM): 0x25d4c
     * @note[short] MacOS (Intel): 0x2b9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c76c0
     * @note[short] Android
     */
    int getSecretChestForItem(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f874
     * @note[short] MacOS (Intel): 0x35c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getSecretCoinKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x387f0
     * @note[short] MacOS (Intel): 0x3eba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getSecretOnlineRewardKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x25dd0
     * @note[short] MacOS (Intel): 0x2ba60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c7730
     * @note[short] Android
     */
    cocos2d::CCString* getSpecialChestKeyForItem(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x37bc8
     * @note[short] MacOS (Intel): 0x3dff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d292c
     * @note[short] Android
     */
    std::string getSpecialRewardDescription(std::string key, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x37c30
     * @note[short] MacOS (Intel): 0x3e050
     * @note[short] iOS: 0x3d2998
     * @note[short] Android
     */
    std::string getSpecialUnlockDescription(int id, UnlockType type, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x2c978
     * @note[short] MacOS (Intel): 0x32d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cc60c
     * @note[short] Android
     */
    char const* getStarLevelKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x265b4
     * @note[short] MacOS (Intel): 0x2c290
     * @note[short] Windows: 0x2d8820
     * @note[short] iOS: 0x36d368
     * @note[short] Android
     */
    int getStat(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2bb38
     * @note[short] MacOS (Intel): 0x31ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cbe8c
     * @note[short] Android
     */
    int getStatFromKey(StatKey key);

    /**
     * @note[short] MacOS (ARM): 0x26284
     * @note[short] MacOS (Intel): 0x2bf50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fa820
     * @note[short] Android
     */
    GJStoreItem* getStoreItem(int index);

    /**
     * @note[short] MacOS (ARM): 0x25ccc
     * @note[short] MacOS (Intel): 0x2b980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c7654
     * @note[short] Android
     */
    GJStoreItem* getStoreItem(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x34594
     * @note[short] MacOS (Intel): 0x3a720
     * @note[short] iOS: 0x3d0a5c
     * @note[short] Android
     */
    int getTotalCollectedCurrency();

    /**
     * @note[short] MacOS (ARM): 0x351dc
     * @note[short] MacOS (Intel): 0x3b4e0
     * @note[short] Windows: 0x45c5d0
     * @note[short] iOS: 0x3d1058
     * @note[short] Android
     */
    int getTotalCollectedDiamonds();

    /**
     * @note[short] MacOS (ARM): 0x33474
     * @note[short] MacOS (Intel): 0x395e0
     * @note[short] Windows: 0x2e3d80
     * @note[short] iOS: 0x3cfee4
     * @note[short] Android
     */
    bool hasClaimedListReward(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2ceb8
     * @note[short] MacOS (Intel): 0x39240
     * @note[short] Windows: 0x2e3960
     * @note[short] iOS: 0x3cfcd0
     * @note[short] Android
     */
    bool hasCompletedChallenge(GJChallengeItem* item);

    /**
     * @note[short] MacOS (ARM): 0x338d0
     * @note[short] MacOS (Intel): 0x39a50
     * @note[short] Windows: 0x2e3f70
     * @note[short] iOS: 0x3d011c
     * @note[short] Android
     */
    bool hasCompletedDailyLevel(int dailyID);

    /**
     * @note[short] Android
     */
    TodoReturn hasCompletedDailyStars(int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cc8ec
     * @note[short] Android
     */
    bool hasCompletedDemonLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2cccc
     * @note[short] MacOS (Intel): 0x32ff0
     * @note[short] iOS: 0x3cc86c
     * @note[short] Android
     */
    bool hasCompletedGauntletLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x2cb64
     * @note[short] MacOS (Intel): 0x32ec0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3cc77c
     * @note[short] Android
     */
    bool hasCompletedLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2cac8
     * @note[short] MacOS (Intel): 0x32e40
     * @note[short] iOS: 0x3cc6fc
     * @note[short] Android
     */
    bool hasCompletedMainLevel(int levelID);

    /**
     * @note[short] iOS: 0x3ccff8
     * @note[short] Android
     */
    bool hasCompletedMapPack(int id);

    /**
     * @note[short] MacOS (ARM): 0x2cc30
     * @note[short] MacOS (Intel): 0x32f70
     * @note[short] iOS: 0x3cc7ec
     * @note[short] Android
     */
    bool hasCompletedOnlineLevel(int id);

    /**
     * @note[short] Windows: 0x2dee60
     * @note[short] iOS: 0x3cc964
     * @note[short] Android
     */
    bool hasCompletedStarLevel(GJGameLevel* level);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3cdb68
     * @note[short] Android
     */
    bool hasPendingUserCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x31ccc
     * @note[short] MacOS (Intel): 0x38000
     * @note[short] Windows: 0x2e2b10
     * @note[short] iOS: 0x3cf28c
     * @note[short] Android
     */
    bool hasRewardBeenCollected(GJRewardType type, int id);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3cc404
     * @note[short] Android
     */
    bool hasSecretCoin(char const* key);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3cdbd8
     * @note[short] Android
     */
    bool hasUserCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2a954
     * @note[short] MacOS (Intel): 0x30ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cb79c
     * @note[short] Android
     */
    void incrementActivePath(int amount);

    /**
     * @note[short] MacOS (ARM): 0x2a364
     * @note[short] MacOS (Intel): 0x30c80
     * @note[short] iOS: 0x3cb584
     * @note[short] Android
     */
    void incrementChallenge(GJChallengeType type, int amount);

    /**
     * @note[short] MacOS (ARM): 0x268ec
     * @note[short] MacOS (Intel): 0x2c5d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c7e80
     * @note[short] Android
     */
    void incrementStat(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x268f4
     * @note[short] MacOS (Intel): 0x2c5e0
     * @note[short] Windows: 0x2d7b20
     * @note[short] iOS: 0x3c7e88
     * @note[short] Android
     */
    void incrementStat(char const* key, int amount);

    /**
     * @note[short] Android
     */
    bool isDailyRecall(int p0);

    /**
     * @note[short] MacOS (Intel): 0x3d200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d2194
     * @note[short] Android
     */
    bool isGauntletChestUnlocked(int id);

    /**
     * @note[short] MacOS (ARM): 0x3833c
     * @note[short] MacOS (Intel): 0x3e700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d2bb8
     * @note[short] Android
     */
    bool isGauntletUnlocked(int id);

    /**
     * @note[short] MacOS (ARM): 0x37414
     * @note[short] MacOS (Intel): 0x3d860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d242c
     * @note[short] Android
     */
    bool isItemEnabled(UnlockType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x2aa28
     * @note[short] MacOS (Intel): 0x30f70
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3cb834
     * @note[short] Android
     */
    bool isItemUnlocked(UnlockType type, int id);

    /**
     * @note[short] MacOS (Intel): 0x3e7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d2c9c
     * @note[short] Android
     */
    bool isPathChestUnlocked(int path);

    /**
     * @note[short] MacOS (ARM): 0x2aa00
     * @note[short] MacOS (Intel): 0x30f50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isPathUnlocked(StatKey key);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x28364c
     * @note[short] Android
     */
    bool isSecretChestUnlocked(int id);

    /**
     * @note[short] MacOS (ARM): 0x2f9ac
     * @note[short] MacOS (Intel): 0x35db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSecretCoin(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x2f9dc
     * @note[short] MacOS (Intel): 0x35de0
     * @note[short] iOS: 0x3cdda4
     * @note[short] Android
     */
    bool isSecretCoinValid(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x373e8
     * @note[short] MacOS (Intel): 0x3d830
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSpecialChestLiteUnlockable(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x36f24
     * @note[short] MacOS (Intel): 0x3d3e0
     * @note[short] Windows: 0x2ebe40
     * @note[short] iOS: 0x3d22d8
     * @note[short] Android
     */
    bool isSpecialChestUnlocked(std::string key);

    /**
     * @note[short] iOS: 0x3c7a40
     * @note[short] Android
     */
    bool isStoreItemUnlocked(int index);

    /**
     * @note[short] MacOS (ARM): 0x36a2c
     * @note[short] MacOS (Intel): 0x3cf00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d1f58
     * @note[short] Android
     */
    int keyCostForSecretChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x37ab0
     * @note[short] MacOS (Intel): 0x3dec0
     * @note[short] Windows: 0x1be3b0
     * @note[short] iOS: 0x3d281c
     * @note[short] Android
     */
    void linkSpecialChestUnlocks(GJRewardItem* item, std::string key);

    /**
     * @note[short] MacOS (ARM): 0x4f2d8
     * @note[short] MacOS (Intel): 0x556f0
     * @note[short] Android
     */
    void logCoins();

    /**
     * @note[short] MacOS (ARM): 0x2d4e8
     * @note[short] iOS: 0x3cccc4
     * @note[short] Android
     */
    void markLevelAsCompletedAndClaimed(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn orbInfoForLevel(GJGameLevel* p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x4eec8
     * @note[short] MacOS (Intel): 0x55290
     * @note[short] iOS: 0x3dc12c
     * @note[short] Android
     */
    void postLoadGameStats();

    /**
     * @note[short] MacOS (ARM): 0x31f00
     * @note[short] MacOS (Intel): 0x38200
     * @note[short] Windows: 0x2e2b70
     * @note[short] iOS: 0x3cf454
     * @note[short] Android
     */
    void preProcessReward(GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x4dad8
     * @note[short] MacOS (Intel): 0x53c60
     * @note[short] iOS: 0x3db504
     * @note[short] Android
     */
    void preSaveGameStats();

    /**
     * @note[short] MacOS (ARM): 0x33318
     * @note[short] MacOS (Intel): 0x394a0
     * @note[short] Windows: 0x2e3a50
     * @note[short] iOS: 0x3cfe08
     * @note[short] Android
     */
    void processChallengeQueue(int position);

    /**
     * @note[short] MacOS (ARM): 0x4f118
     * @note[short] MacOS (Intel): 0x55510
     * @note[short] iOS: 0x3dc248
     * @note[short] Android
     */
    void processOnlineChests();

    /**
     * @note[short] MacOS (ARM): 0x26394
     * @note[short] MacOS (Intel): 0x2c070
     * @note[short] iOS: 0x3c7ac8
     * @note[short] Android
     */
    bool purchaseItem(int index);

    /**
     * @note[short] MacOS (Intel): 0x3bb80
     * @note[short] Windows: 0x2e55b0
     * @note[short] Android
     */
    void recountSpecialStats();

    /**
     * @note[short] MacOS (ARM): 0x2e774
     * @note[short] MacOS (Intel): 0x349a0
     * @note[short] Windows: 0x2e03d0
     * @note[short] iOS: 0x3cd548
     * @note[short] Android
     */
    void recountUserCoins(bool force);

    /**
     * @note[short] MacOS (ARM): 0x31e40
     * @note[short] MacOS (Intel): 0x38140
     * @note[short] Windows: 0x2f3790
     * @note[short] Android
     */
    void registerRewardsFromItem(GJRewardItem* item);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cf7fc
     * @note[short] Android
     */
    void removeChallenge(int position);

    /**
     * @note[short] MacOS (ARM): 0x3683c
     * @note[short] MacOS (Intel): 0x3cd00
     * @note[short] iOS: 0x3d1e08
     * @note[short] Android
     */
    void removeErrorFromSpecialChests();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cf900
     * @note[short] Android
     */
    void removeQueuedChallenge(int position);

    /**
     * @note[short] MacOS (ARM): 0x32b38
     * @note[short] MacOS (Intel): 0x38d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cfa08
     * @note[short] Android
     */
    void removeQueuedSecondaryChallenge(int position);

    /**
     * @note[short] MacOS (ARM): 0x325d0
     * @note[short] MacOS (Intel): 0x38800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cf75c
     * @note[short] Android
     */
    void resetChallengeTimer();

    /**
     * @note[short] MacOS (ARM): 0x4f2d0
     * @note[short] MacOS (Intel): 0x556d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetPreSync();

    /**
     * @note[short] MacOS (ARM): 0x2bd78
     * @note[short] MacOS (Intel): 0x32150
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetSpecialChest(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x36a80
     * @note[short] MacOS (Intel): 0x3cf60
     * @note[short] Windows: 0x2e6590
     * @note[short] iOS: 0x3d1fac
     * @note[short] Android
     */
    void resetSpecialStatAchievements();

    /**
     * @note[short] MacOS (ARM): 0x2e73c
     * @note[short] MacOS (Intel): 0x34960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetUserCoins();

    /**
     * @note[short] MacOS (ARM): 0x4f2d4
     * @note[short] MacOS (Intel): 0x556e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void restorePostSync();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAwardedBonusKeys(int keys);

    /**
     * @note[short] Windows: 0x2e0030
     * @note[short] Android
     */
    void setStarsForMapPack(int id, int stars);

    /**
     * @note[short] MacOS (ARM): 0x2672c
     * @note[short] MacOS (Intel): 0x2c3f0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3c7d54
     * @note[short] Android
     */
    void setStat(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): 0x2bf8c
     * @note[short] MacOS (Intel): 0x32380
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setStatIfHigher(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): 0x2a86e8
     * @note[short] MacOS (Intel): 0x3168d0
     * @note[short] Windows: 0x2c7250
     * @note[short] iOS: 0x6d778
     * @note[short] Android
     */
    void setupIconCredits();

    /**
     * @note[short] MacOS (ARM): 0x268c8
     * @note[short] MacOS (Intel): 0x2c5a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ShopType shopTypeForItemID(int index);

    /**
     * @note[short] MacOS (ARM): 0x4cf68
     * @note[short] MacOS (Intel): 0x52f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldAwardSecretKey();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cd120
     * @note[short] Android
     */
    int starsForMapPack(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void storeChallenge(int position, GJChallengeItem* challenge);

    /**
     * @note[short] MacOS (ARM): 0x32570
     * @note[short] MacOS (Intel): 0x387b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cf700
     * @note[short] Android
     */
    void storeChallengeTime(int remaining);

    /**
     * @note[short] MacOS (ARM): 0x336fc
     * @note[short] MacOS (Intel): 0x39880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d0054
     * @note[short] Android
     */
    void storeEventChest(int eventID, GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x34168
     * @note[short] MacOS (Intel): 0x3a310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d06cc
     * @note[short] Android
     */
    void storeOnlineChest(std::string key, GJRewardItem* item);

    /**
     * @note[short] MacOS (Intel): 0x35b90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cdcb4
     * @note[short] Android
     */
    void storePendingUserCoin(char const* key);

    /**
     * @note[short] Windows: 0x2e2e00
     * @note[short] Android
     */
    void storeQueuedChallenge(int position, GJChallengeItem* challenge);

    /**
     * @note[short] MacOS (ARM): 0x3188c
     * @note[short] MacOS (Intel): 0x37b50
     * @note[short] Windows: 0x2e2950
     * @note[short] iOS: 0x3cef68
     * @note[short] Android
     */
    void storeRewardState(GJRewardType type, int id, int remaining, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x32a20
     * @note[short] MacOS (Intel): 0x38c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cf97c
     * @note[short] Android
     */
    void storeSecondaryQueuedChallenge(int position, GJChallengeItem* challenge);

    /**
     * @note[short] MacOS (ARM): 0x2f89c
     * @note[short] MacOS (Intel): 0x35ca0
     * @note[short] Windows: 0x2e1040
     * @note[short] iOS: 0x3cdd20
     * @note[short] Android
     */
    void storeSecretCoin(char const* key);

    /**
     * @note[short] MacOS (Intel): 0x35aa0
     * @note[short] Windows: 0x2e0dc0
     * @note[short] iOS: 0x3cdc48
     * @note[short] Android
     */
    void storeUserCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x30038
     * @note[short] MacOS (Intel): 0x36380
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tempClear();

    /**
     * @note[short] MacOS (ARM): 0x374bc
     * @note[short] MacOS (Intel): 0x3d8f0
     * @note[short] Windows: 0x2e6ed0
     * @note[short] iOS: 0x3d24c4
     * @note[short] Android
     */
    void toggleEnableItem(UnlockType type, int id, bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x2b254
     * @note[short] MacOS (Intel): 0x31630
     * @note[short] Windows: 0xf1030
     * @note[short] iOS: 0x3cba94
     * @note[short] Android
     */
    void tryFixPathBug();

    /**
     * @note[short] MacOS (ARM): 0x2aca4
     * @note[short] MacOS (Intel): 0x311a0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3cb950
     * @note[short] Android
     */
    void trySelectActivePath();

    /**
     * @note[short] MacOS (ARM): 0x2d830
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3ccddc
     * @note[short] Android
     */
    void uncompleteLevel(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn unlockDailyRecall(int p0);

    /**
     * @note[short] MacOS (ARM): 0x381bc
     * @note[short] MacOS (Intel): 0x3e5b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockGauntlet(int id);

    /**
     * @note[short] MacOS (ARM): 0x38344
     * @note[short] MacOS (Intel): 0x3e710
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d2bc0
     * @note[short] Android
     */
    GJRewardItem* unlockGauntletChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x4ccf8
     * @note[short] MacOS (Intel): 0x52cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3da8a8
     * @note[short] Android
     */
    GJRewardItem* unlockGoldChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x34184
     * @note[short] MacOS (Intel): 0x3a340
     * @note[short] Windows: 0x42dd90
     * @note[short] iOS: 0x3d06e8
     * @note[short] Android
     */
    GJRewardItem* unlockOnlineChest(std::string key);

    /**
     * @note[short] MacOS (Intel): 0x3e8d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d2d58
     * @note[short] Android
     */
    GJRewardItem* unlockPathChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cb20
     * @note[short] MacOS (Intel): 0x52ad0
     * @note[short] Windows: 0x2ec400
     * @note[short] iOS: 0x3da748
     * @note[short] Android
     */
    GJRewardItem* unlockSecretChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x3806c
     * @note[short] MacOS (Intel): 0x3e490
     * @note[short] Windows: 0x2ebf50
     * @note[short] iOS: 0x3d2a84
     * @note[short] Android
     */
    GJRewardItem* unlockSpecialChest(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x2ac90
     * @note[short] MacOS (Intel): 0x31180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cb93c
     * @note[short] Android
     */
    void updateActivePath(StatKey key);

    /**
     * @note[short] MacOS (ARM): 0x2a8678
     * @note[short] MacOS (Intel): 0x316840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x6d704
     * @note[short] Android
     */
    std::string usernameForAccountID(int id);

    /**
     * @note[short] MacOS (ARM): 0x2bd80
     * @note[short] MacOS (Intel): 0x32170
     * @note[short] iOS: 0x3cc008
     * @note[short] Android
     */
    void verifyPathAchievements();

    /**
     * @note[short] MacOS (ARM): 0x2ecb4
     * @note[short] MacOS (Intel): 0x35040
     * @note[short] Windows: 0x1b05a0
     * @note[short] iOS: 0x3cd984
     * @note[short] Android
     */
    void verifyUserCoins();
    bool m_usePlayerStatsCCDictionary;
    cocos2d::CCString* m_trueString;
    cocos2d::CCDictionary* m_allStoreItems;
    cocos2d::CCDictionary* m_storeItems;
    cocos2d::CCDictionary* m_allTreasureRoomChests;
    cocos2d::CCDictionary* m_allTreasureRoomChestItems;
    cocos2d::CCDictionary* m_allSpecialChests;
    cocos2d::CCDictionary* m_allSpecialChestItems;
    std::unordered_map<std::string, std::string> m_specialRewardDescriptions;
    std::unordered_map<std::string, std::string> m_createSpecialChestItemsMap;
    cocos2d::CCDictionary* m_specialChestsLite;
    cocos2d::CCArray* m_storeItemArray;
    cocos2d::CCDictionary* m_rewardItems;
    cocos2d::CCDictionary* m_dailyChests;
    cocos2d::CCDictionary* m_worldAdvertChests;
    cocos2d::CCDictionary* m_activeChallenges;
    cocos2d::CCDictionary* m_upcomingChallenges;
    double m_challengeTime;
    cocos2d::CCDictionary* m_playerStats;
    std::unordered_map<int, int> m_playerStatsRandMap;
    std::unordered_map<int, int> m_playerStatsSeedMap;
    cocos2d::CCDictionary* m_completedLevels;
    cocos2d::CCDictionary* m_verifiedUserCoins;
    cocos2d::CCDictionary* m_pendingUserCoins;
    cocos2d::CCDictionary* m_purchasedItems;
    cocos2d::CCDictionary* m_onlineCurrencyScores;
    cocos2d::CCDictionary* m_mainCurrencyScores;
    cocos2d::CCDictionary* m_gauntletCurrencyScores;
    cocos2d::CCDictionary* m_timelyCurrencyScores;
    cocos2d::CCDictionary* m_onlineStars;
    cocos2d::CCDictionary* m_timelyStars;
    cocos2d::CCDictionary* m_gauntletDiamondScores;
    cocos2d::CCDictionary* m_timelyDiamondScores;
    cocos2d::CCDictionary* m_unusedCurrencyAwardDict;
    cocos2d::CCDictionary* m_challengeDiamonds;
    cocos2d::CCDictionary* m_completedMappacks;
    cocos2d::CCDictionary* m_completedLists;
    cocos2d::CCDictionary* m_weeklyChest;
    cocos2d::CCDictionary* m_eventChest;
    cocos2d::CCDictionary* m_treasureRoomChests;
    geode::SeedValueRSV m_bonusKey;
    cocos2d::CCDictionary* m_miscChests;
    cocos2d::CCDictionary* m_enabledItems;
    cocos2d::CCDictionary* m_wraithChests;
    bool m_skipIncrementChallenge;
    cocos2d::CCDictionary* m_unlockedGauntlets;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_unlockedItems;
    std::map<std::pair<int, UnlockType>, int> m_accountIDForIcon;
    std::map<int, std::string> m_usernameForAccountID;
    std::set<std::pair<UnlockType, int>> m_wraithIcons;
    bool m_pathBugFixed;
    bool m_tryFixPathBug;
    int m_activePath;
};
