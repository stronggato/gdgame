#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/SeedValue.hpp>
#include <Geode/mapping/vector.hpp>

class GJGameLevel : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJGameLevel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLevel, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4e02f0
     * @note[short] MacOS (Intel): 0x58ff70
     * @note[short] Windows: 0x215760
     * @note[short] iOS: 0xd7558
     * @note[short] Android: Rebinded
     */
     GJGameLevel();

    /**
     * @note[short] MacOS (ARM): 0x4d33d0
     * @note[short] MacOS (Intel): 0x5817c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xcd3a0
     * @note[short] Android: Rebinded
     */
     ~GJGameLevel();

    /**
     * @note[short] MacOS (Intel): 0x6423f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJGameLevel* create();

    /**
     * @note[short] MacOS (ARM): 0x4d5dfc
     * @note[short] MacOS (Intel): 0x5402c0
     * @note[short] Android
     */
    static GJGameLevel* create(cocos2d::CCDictionary* dict, bool download);

    /**
     * @note[short] MacOS (Intel): 0x588030
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJGameLevel* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dbbe0
     * @note[short] MacOS (Intel): 0x58b3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd3d4c
     * @note[short] Android
     */
    static int demonIconForDifficulty(DemonDifficultyType type);

    /**
     * @note[short] MacOS (ARM): 0x4d45a0
     * @note[short] MacOS (Intel): 0x582fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xce314
     * @note[short] Android
     */
    static int getLengthKey(int length, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x4d45dc
     * @note[short] MacOS (Intel): 0x583000
     * @note[short] iOS: 0xce350
     * @note[short] Android
     */
    static std::string lengthKeyToString(int key);

    /**
     * @note[short] MacOS (ARM): 0x7ec32c
     * @note[short] Windows: 0x266a90
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4d3d5c
     * @note[short] MacOS (Intel): 0x582510
     * @note[short] Windows: 0x2618a0
     * @note[short] iOS: 0xcdbbc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    TodoReturn accumulateDeathsInRadius(std::vector<int> const& p0, int p1, int p2, int p3, float& p4, int& p5);

    /**
     * @note[short] Android
     */
    TodoReturn addPlaytime(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4dba70
     * @note[short] MacOS (Intel): 0x58b2a0
     * @note[short] Windows: 0x2687a0
     * @note[short] iOS: 0xd3be8
     * @note[short] Android
     */
    bool areCoinsVerified();

    /**
     * @note[short] Android
     */
    TodoReturn cellForPosition(cocos2d::CCPoint const& p0, int& p1, int& p2);

    /**
     * @note[short] Android
     */
    TodoReturn clearDeathMarkerData();

    /**
     * @note[short] Android
     */
    TodoReturn clearDeathsNear(std::vector<int>& p0, int p1, int p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn clearDeathTrackerData();

    /**
     * @note[short] Android
     */
    TodoReturn clearPlatformerSave();

    /**
     * @note[short] Windows: 0x524cc0
     * @note[short] Android
     */
    void copyLevelInfo(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn countDeathsNear(std::vector<int> const& p0, int p1, int p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn createFromFullSaveString(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x806c14
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] Android
     */
    TodoReturn dtAppendOrder(std::string& p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn dtBumpBucket(std::string& p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn dtBumpRun(std::string& p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn dtExpandOrder(std::string const& p0, std::vector<int>& p1);

    /**
     * @note[short] Android
     */
    TodoReturn dtParseGlobalBlob(std::string const& p0, std::vector<int>& p1);

    /**
     * @note[short] Android
     */
    TodoReturn dtSetCells(std::vector<int> const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn duplicate();

    /**
     * @note[short] Android
     */
    TodoReturn ensureSessionLog();

    /**
     * @note[short] Android
     */
    TodoReturn generateAutoSaveUID();

    /**
     * @note[short] MacOS (ARM): 0x4d4bdc
     * @note[short] MacOS (Intel): 0x5835a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    std::string generateSettingsString();

    /**
     * @note[short] MacOS (ARM): 0x4d49c4
     * @note[short] MacOS (Intel): 0x5833b0
     * @note[short] iOS: 0xce548
     * @note[short] Android
     */
    std::string getAudioFileName();

    /**
     * @note[short] MacOS (ARM): 0x4d46cc
     * @note[short] MacOS (Intel): 0x5830d0
     * @note[short] iOS: 0xce37c
     * @note[short] Android
     */
    int getAverageDifficulty();

    /**
     * @note[short] MacOS (ARM): 0x4b8fb0
     * @note[short] MacOS (Intel): 0x565e50
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    char const* getCoinKey(int coinNumber);

    /**
     * @note[short] Android
     */
    TodoReturn getCoinKey(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getExportSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getFullSaveString();

    /**
     * @note[short] iOS: 0xce420
     * @note[short] Android
     */
    int getLastBuildPageForTab(int tab);

    /**
     * @note[short] MacOS (Intel): 0x587c80
     * @note[short] Windows: 0x7fbd0
     * @note[short] iOS: 0xd0ee4
     * @note[short] Android
     */
    GJGameLevel* getListSnapshot();

    /**
     * @note[short] MacOS (Intel): 0x53e6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x71ed00
     * @note[short] Android
     */
    int getNormalPercent();

    /**
     * @note[short] Android
     */
    TodoReturn getSessionBest();

    /**
     * @note[short] MacOS (ARM): 0x4d4af4
     * @note[short] MacOS (Intel): 0x5834d0
     * @note[short] Windows: 0x262260
     * @note[short] iOS: 0xce5e8
     * @note[short] Android
     */
    std::string getSongName();

    /**
     * @note[short] MacOS (ARM): 0x4dbacc
     * @note[short] iOS: 0xd3c44
     * @note[short] Android
     */
    std::string getUnpackedLevelDescription();

    /**
     * @note[short] MacOS (ARM): 0x4a5998
     * @note[short] MacOS (Intel): 0x550300
     * @note[short] Windows: 0x268020
     * @note[short] iOS: 0xb169c
     * @note[short] Android
     */
    void handleStatsConflict(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x49ddbc
     * @note[short] MacOS (Intel): 0x547e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xabf1c
     * @note[short] Android
     */
    bool isPlatformer();

    /**
     * @note[short] Android
     */
    TodoReturn levelHasDiamonds();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void levelWasAltered();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void levelWasSubmitted();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void parseSettingsString(std::string str);

    /**
     * @note[short] Android
     */
    TodoReturn recordCompletion();

    /**
     * @note[short] Android
     */
    TodoReturn recordDeath(int p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn rollSession(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4d4d4c
     * @note[short] MacOS (Intel): 0x583700
     * @note[short] Windows: 0x2624e0
     * @note[short] iOS: 0xce6d0
     * @note[short] Android
     */
    void saveNewScore(int value, int type, int ticks, int clicks, int coins, std::string inputs, bool save);

    /**
     * @note[short] MacOS (ARM): 0x4d41d0
     * @note[short] MacOS (Intel): 0x582b30
     * @note[short] Windows: 0xab9b0
     * @note[short] iOS: 0xcdfac
     * @note[short] Android
     */
    void savePercentage(int percent, bool isPracticeMode, int clicks, int attempts, bool isChkValid);

    /**
     * @note[short] MacOS (ARM): 0x4d5398
     * @note[short] MacOS (Intel): 0x583ce0
     * @note[short] iOS: 0xce960
     * @note[short] Android
     */
    void scoreStringToVector(std::string& str, std::vector<int>& vec);

    /**
     * @note[short] MacOS (ARM): 0x4d55bc
     * @note[short] MacOS (Intel): 0x583f50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xcebbc
     * @note[short] Android
     */
    std::string scoreVectorToString(std::vector<int>& vec, int type);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAccountID(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAttempts(int attempts);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAttemptTime(int time);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setClicks(int clicks);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setCoinsVerified(int coinsVerified);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setDailyID(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setDemon(int demon);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setJumps(int jumps);

    /**
     * @note[short] MacOS (ARM): 0x4d48a0
     * @note[short] MacOS (Intel): 0x583290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xce4a8
     * @note[short] Android
     */
    void setLastBuildPageForTab(int tab, int page);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setLevelID(int levelID);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setNewNormalPercent(int percent);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setNewNormalPercent2(int percent);

    /**
     * @note[short] MacOS (ARM): 0x496bb8
     * @note[short] MacOS (Intel): 0x53ff10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setNormalPercent(int percent);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setObjectCount(int count);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setOriginalLevel(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPassword(int password);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setStars(int stars);

    /**
     * @note[short] Android
     */
    TodoReturn shippedControls();

    /**
     * @note[short] MacOS (ARM): 0x496b70
     * @note[short] MacOS (Intel): 0x53fed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldCheatReset();

    /**
     * @note[short] MacOS (ARM): 0x4d5138
     * @note[short] MacOS (Intel): 0x583b10
     * @note[short] iOS: 0xce834
     * @note[short] Android
     */
    void storeNewLocalScore(int value, int type);

    /**
     * @note[short] Android
     */
    TodoReturn syncUneditedControls();

    /**
     * @note[short] MacOS (ARM): 0x4d409c
     * @note[short] MacOS (Intel): 0x5829e0
     * @note[short] Windows: 0x268800
     * @note[short] iOS: 0xcdee0
     * @note[short] Android
     */
    void unverifyCoins();
    cocos2d::CCDictionary* m_lastBuildSave;
    geode::SeedValueRSV m_levelID;
    std::string m_levelName;
    std::string m_levelDesc;
    std::string m_levelString;
    std::string m_creatorName;
    std::string m_recordString;
    std::string m_uploadDate;
    std::string m_updateDate;
    std::string m_lockedEditorLayers;
    std::string m_savedCameraPositions;
    cocos2d::CCPoint m_previewLock;
    geode::SeedValueRSV m_userID;
    geode::SeedValueRSV m_accountID;
    GJDifficulty m_difficulty;
    int m_audioTrack;
    int m_songID;
    int m_levelRev;
    bool m_unlisted;
    bool m_friendsOnly;
    geode::SeedValueRSV m_objectCount;
    int m_levelIndex;
    int m_ratings;
    int m_ratingsSum;
    int m_downloads;
    bool m_isEditable;
    bool m_gauntletLevel;
    bool m_gauntletLevel2;
    int m_workingTime;
    int m_workingTime2;
    bool m_lowDetailMode;
    bool m_lowDetailModeToggled;
    bool m_disableShakeToggled;
    bool m_selected;
    bool m_localOrSaved;
    bool m_disableShake;
    geode::SeedValueRS m_isVerified;
    bool m_isVerifiedRaw;
    bool m_isUploaded;
    bool m_hasBeenModified;
    int m_levelVersion;
    int m_gameVersion;
    geode::SeedValueRSV m_attempts;
    geode::SeedValueRSV m_jumps;
    geode::SeedValueRSV m_clicks;
    geode::SeedValueRSV m_attemptTime;
    int m_chk;
    bool m_isChkValid;
    bool m_isCompletionLegitimate;
    geode::SeedValueVSR m_normalPercent;
    geode::SeedValueRSV m_orbCompletion;
    geode::SeedValueRSV m_newNormalPercent2;
    int m_practicePercent;
    int m_likes;
    int m_dislikes;
    int m_levelLength;
    int m_featured;
    int m_isEpic;
    bool m_levelFavorited;
    int m_levelFolder;
    geode::SeedValueRSV m_dailyID;
    geode::SeedValueRSV m_demon;
    int m_demonDifficulty;
    geode::SeedValueRSV m_stars;
    bool m_autoLevel;
    int m_coins;
    geode::SeedValueRSV m_coinsVerified;
    geode::SeedValueRS m_password;
    geode::SeedValueRSV m_originalLevel;
    bool m_twoPlayerMode;
    int m_failedPasswordAttempts;
    geode::SeedValueRSV m_firstCoinVerified;
    geode::SeedValueRSV m_secondCoinVerified;
    geode::SeedValueRSV m_thirdCoinVerified;
    int m_starsRequested;
    bool m_showedSongWarning;
    int m_starRatings;
    int m_starRatingsSum;
    int m_maxStarRatings;
    int m_minStarRatings;
    int m_demonVotes;
    int m_rateStars;
    bool m_rateFeature;
    std::string m_rateUser;
    bool m_dontSave;
    bool m_levelNotDownloaded;
    int m_requiredCoins;
    bool m_isUnlocked;
    cocos2d::CCPoint m_lastCameraPos;
    float m_lastEditorZoom;
    int m_lastBuildTab;
    int m_lastBuildPage;
    int m_lastBuildGroupID;
    GJLevelType m_levelType;
    int m_M_ID;
    std::string m_tempName;
    std::string m_capacityString;
    bool m_highObjectsEnabled;
    bool m_unlimitedObjectsEnabled;
    std::string m_personalBests;
    int m_timestamp;
    int m_listPosition;
    std::string m_songIDs;
    std::string m_sfxIDs;
    int m_songSize;
    int m_bestTime;
    int m_ticksTime;
    int m_clicksTime;
    int m_coinsTime;
    std::string m_inputsTime;
    int m_bestPoints;
    int m_ticksPoints;
    int m_clicksPoints;
    int m_coinsPoints;
    std::string m_inputsPoints;
    int m_platformerSeed;
    std::string m_localBestTimes;
    std::string m_localBestPoints;
    bool m_savedTime;
    bool m_savedPoints;
};
