#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class AchievementManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x9db0
     * @note[short] Android: Rebinded
     */
    virtual  ~AchievementManager();

    /**
     * @note[short] MacOS (ARM): 0x708770
     * @note[short] MacOS (Intel): 0x808860
     * @note[short] Windows: 0xa000
     * @note[short] iOS: 0xdbc78
     * @note[short] Android
     */
    static AchievementManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x708860
     * @note[short] MacOS (Intel): 0x808970
     * @note[short] Windows: 0xa0c0
     * @note[short] iOS: 0xdbcf8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x7574c8
     * @note[short] MacOS (Intel): 0x862660
     * @note[short] Windows: 0x3ca10
     * @note[short] iOS: 0x4e624
     * @note[short] Android
     */
    std::string achievementForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x756c08
     * @note[short] MacOS (Intel): 0x861e50
     * @note[short] Windows: 0xa150
     * @note[short] iOS: 0x10d274
     * @note[short] Android
     */
    void addAchievement(std::string identifier, std::string title, std::string achievedDescription, std::string unachievedDescription, std::string icon, int limits);

    /**
     * @note[short] MacOS (Intel): 0x808a00
     * @note[short] Windows: 0xa6d0
     * @note[short] iOS: 0x5a2af0
     * @note[short] Android
     */
    void addManualAchievements();

    /**
     * @note[short] MacOS (ARM): 0x757088
     * @note[short] MacOS (Intel): 0x8622a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool areAchievementsEarned(cocos2d::CCArray* achievements);

    /**
     * @note[short] MacOS (ARM): 0x756ff8
     * @note[short] MacOS (Intel): 0x8621d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void checkAchFromUnlock(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x756f70
     * @note[short] MacOS (Intel): 0x862130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10d598
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x756fdc
     * @note[short] MacOS (Intel): 0x8621a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10d5e8
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x756f24
     * @note[short] MacOS (Intel): 0x8620e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10d528
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x757dd8
     * @note[short] MacOS (Intel): 0x8630c0
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAchievementRewardDict();

    /**
     * @note[short] MacOS (Intel): 0x862460
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x10d720
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAchievementsWithID(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x757260
     * @note[short] MacOS (Intel): 0x862450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10d718
     * @note[short] Android
     */
    cocos2d::CCArray* getAllAchievements();

    /**
     * @note[short] MacOS (ARM): 0x75655c
     * @note[short] MacOS (Intel): 0x680b0
     * @note[short] iOS: 0x10cf20
     * @note[short] Android
     */
    cocos2d::CCArray* getAllAchievementsSorted(bool available);

    /**
     * @note[short] MacOS (ARM): 0x75736c
     * @note[short] MacOS (Intel): 0x862540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isAchievementAvailable(std::string id);

    /**
     * @note[short] MacOS (ARM): 0x757114
     * @note[short] MacOS (Intel): 0x862310
     * @note[short] Windows: 0x3c230
     * @note[short] iOS: 0x10d68c
     * @note[short] Android
     */
    bool isAchievementEarned(char const* ach);

    /**
     * @note[short] MacOS (ARM): 0x757414
     * @note[short] MacOS (Intel): 0x8625c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10d78c
     * @note[short] Android
     */
    int limitForAchievement(std::string id);

    /**
     * @note[short] MacOS (ARM): 0x757b24
     * @note[short] MacOS (Intel): 0x862de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10dbec
     * @note[short] Android
     */
    void notifyAchievement(char const* title, char const* description, char const* icon);

    /**
     * @note[short] MacOS (ARM): 0x757928
     * @note[short] MacOS (Intel): 0x129600
     * @note[short] iOS: 0x10daa8
     * @note[short] Android
     */
    void notifyAchievementWithID(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x757238
     * @note[short] MacOS (Intel): 0x862420
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int percentageForCount(int count, int total);

    /**
     * @note[short] MacOS (Intel): 0x862330
     * @note[short] Windows: 0x3c250
     * @note[short] iOS: 0x10d6a8
     * @note[short] Android
     */
    int percentForAchievement(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x757c68
     * @note[short] MacOS (Intel): 0x862f10
     * @note[short] iOS: 0xa5310
     * @note[short] Android
     */
    void reportAchievementWithID(char const* id, int percent, bool dontNotify);

    /**
     * @note[short] MacOS (ARM): 0x556884
     * @note[short] MacOS (Intel): 0x863090
     * @note[short] iOS: 0x10dd8c
     * @note[short] Android
     */
    void reportPlatformAchievementWithID(char const* id, int percent);

    /**
     * @note[short] MacOS (ARM): 0x757b70
     * @note[short] MacOS (Intel): 0x862e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10dc38
     * @note[short] Android
     */
    void resetAchievement(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x757dd0
     * @note[short] MacOS (Intel): 0x8630a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAchievements();

    /**
     * @note[short] MacOS (ARM): 0x756ff4
     * @note[short] MacOS (Intel): 0x8621c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setup();

    /**
     * @note[short] MacOS (ARM): 0x7567fc
     * @note[short] MacOS (Intel): 0x8619e0
     * @note[short] iOS: 0x10d080
     * @note[short] Android
     */
    void storeAchievementUnlocks();
    cocos2d::CCArray* m_allAchievements;
    cocos2d::CCDictionary* m_platformAchievements;
    cocos2d::CCDictionary* m_achievementUnlocks;
    void* m_unkPtrUnused;
    cocos2d::CCDictionary* m_reportedAchievements;
    bool m_dontNotify;
    cocos2d::CCArray* m_allAchievementsSorted;
    int m_order;
    cocos2d::CCDictionary* m_unAchieved;
};
