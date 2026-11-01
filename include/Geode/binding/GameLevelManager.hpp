#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/vector.hpp>

class GameLevelManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameLevelManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GameLevelManager* get();

    /**
     * @note[short] MacOS (ARM): 0x4987c8
     * @note[short] MacOS (Intel): 0x541f50
     * @note[short] iOS: 0xa86bc
     * @note[short] Android
     */
    static cocos2d::CCDictionary* responseToDict(std::string response, bool colon);

    /**
     * @note[short] Windows: 0x2195e0
     * @note[short] Android: Rebinded
     */
    virtual  ~GameLevelManager();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GameLevelManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x494054
     * @note[short] MacOS (Intel): 0x53cfe0
     * @note[short] Windows: 0x219860
     * @note[short] iOS: 0xa5634
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4c130c
     * @note[short] MacOS (Intel): 0x56e7b0
     * @note[short] iOS: 0xc2608
     * @note[short] Android
     */
    bool acceptFriendRequest(int accountID, int requestID);

    /**
     * @note[short] MacOS (ARM): 0x496a6c
     * @note[short] MacOS (Intel): 0x53fd70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa7028
     * @note[short] Android
     */
    int accountIDForUserID(int userID);

    /**
     * @note[short] iOS: 0xad2e8
     * @note[short] Android
     */
    void addDLToActive(char const* key);

    /**
     * @note[short] Android
     */
    TodoReturn addThreadMembers(int p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminClearReportedContent(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminCloseCase(int p0, int p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn adminCommentBan(int p0, bool p1, int p2, std::string const& p3, std::vector<int> const& p4);

    /**
     * @note[short] Android
     */
    TodoReturn adminCommentUnban(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminDeleteUserComments(int p0, AdminDeleteScope p1, std::string const& p2, std::vector<int> const& p3);

    /**
     * @note[short] Android
     */
    TodoReturn adminFreezeAccount(int p0, bool p1, int p2, std::string const& p3, std::vector<int> const& p4);

    /**
     * @note[short] Android
     */
    TodoReturn adminGetAbuseInfo(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn adminGetAccountReview(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn adminGetReportedContent(int p0, int p1, int p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn adminGetReportQueue(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn adminGetUserHistory(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminMessageBan(int p0, bool p1, int p2, std::string const& p3, std::vector<int> const& p4);

    /**
     * @note[short] Android
     */
    TodoReturn adminMessageUnban(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminNameLock(int p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn adminNameUnlock(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminThreadAction(int p0, std::string const& p1, long long p2);

    /**
     * @note[short] Android
     */
    TodoReturn adminTrendingBan(int p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn adminTrendingUnban(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminUnfreezeAccount(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminUploadBan(int p0, bool p1, int p2, std::string const& p3, std::vector<int> const& p4);

    /**
     * @note[short] Android
     */
    TodoReturn adminUploadUnban(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn appendModReason(std::string& p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn applyDeathBlob(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn applyLevelControlsSection(GJGameLevel* p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn applyThreadAddReply(int p0, std::string const& p1);

    /**
     * @note[short] MacOS (ARM): 0x4b1a10
     * @note[short] MacOS (Intel): 0x55d810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb893c
     * @note[short] Android
     */
    bool areGauntletsLoaded();

    /**
     * @note[short] MacOS (ARM): 0x4b5538
     * @note[short] MacOS (Intel): 0x561b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xbaf74
     * @note[short] Android
     */
    void banUser(int accountID);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool blockUser(int accountID);

    /**
     * @note[short] Android
     */
    TodoReturn claimNotificationReward(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4a308c
     * @note[short] MacOS (Intel): 0x54d4d0
     * @note[short] Android
     */
    void cleanupDailyLevels();

    /**
     * @note[short] Android
     */
    TodoReturn clearDeathDataInstances(GJGameLevel* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn clearPlatformerSaveJournal();

    /**
     * @note[short] Android
     */
    TodoReturn clearPlatformerSaves(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn collectPlatformerJournalKeys(bool p0);

    /**
     * @note[short] MacOS (Intel): 0x569cb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetAccountComments(std::string str, int accountID);

    /**
     * @note[short] Windows: 0x23b3a0
     * @note[short] iOS: 0x4e2d8
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetCommentsFull(std::string p0, int p1, bool p2, CommentKeyType p3);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetEditorSoundConfigs(std::string p0);

    /**
     * @note[short] MacOS (Intel): 0x569cb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevelComments(std::string p0, int p1, CommentKeyType p2);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevelLists(std::string str);

    /**
     * @note[short] iOS: 0xa71f0
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevels(std::string str);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetMapPacks(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x49a23c
     * @note[short] MacOS (Intel): 0x543bd0
     * @note[short] Windows: 0x21cb00
     * @note[short] iOS: 0xa97a8
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetScores(std::string str, GJScoreType type);

    /**
     * @note[short] Windows: 0x219eb0
     * @note[short] Android
     */
    GJGameLevel* createNewLevel();

    /**
     * @note[short] MacOS (ARM): 0x495548
     * @note[short] MacOS (Intel): 0x53e770
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xa6400
     * @note[short] Android
     */
    GJLevelList* createNewLevelList();

    /**
     * @note[short] MacOS (ARM): 0x10c00c
     * @note[short] MacOS (Intel): 0x549bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4eaa0
     * @note[short] Android
     */
    std::string createPageInfo(int total, int start, int count);

    /**
     * @note[short] MacOS (ARM): 0x4a3e70
     * @note[short] MacOS (Intel): 0x54e320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb0088
     * @note[short] Android
     */
    GJSmartTemplate* createSmartTemplate();

    /**
     * @note[short] MacOS (ARM): 0x4a46e8
     * @note[short] MacOS (Intel): 0x54ecc0
     * @note[short] iOS: 0xb0a68
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (Intel): 0x56d680
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteAccountComment(int id, int accountID);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void deleteComment(int id, CommentType type, int parentID);

    /**
     * @note[short] Android
     */
    TodoReturn deleteComments(CommentType p0, std::vector<BulkCommentKey> const& p1, std::string const& p2, std::vector<int> const& p3);

    /**
     * @note[short] MacOS (ARM): 0x4cb7e8
     * @note[short] MacOS (Intel): 0x579700
     * @note[short] Windows: 0x252ac0
     * @note[short] iOS: 0xc90dc
     * @note[short] Android
     */
    bool deleteFriendRequests(int accountID, cocos2d::CCArray* accounts, bool sent);

    /**
     * @note[short] MacOS (Intel): 0x53e3c0
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void deleteLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4bfaac
     * @note[short] MacOS (Intel): 0x56ce00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xc1664
     * @note[short] Android
     */
    void deleteLevelComment(int id, int levelID);

    /**
     * @note[short] Android
     */
    TodoReturn deleteLevelControls(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4959ec
     * @note[short] MacOS (Intel): 0x53ecc0
     * @note[short] Windows: 0x21afe0
     * @note[short] iOS: 0xa6750
     * @note[short] Android
     */
    void deleteLevelList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4cb7dc
     * @note[short] MacOS (Intel): 0x5796e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xc90d0
     * @note[short] Android
     */
    bool deleteSentFriendRequest(int accountID);

    /**
     * @note[short] Android
     */
    TodoReturn deleteServerEditorSound(int p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] MacOS (ARM): 0x4c8618
     * @note[short] Windows: 0x19a6c0
     * @note[short] iOS: 0xcc65c
     * @note[short] Android
     */
    TodoReturn deleteServerLevel(int p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] MacOS (ARM): 0x4137b8
     * @note[short] MacOS (Intel): 0x906550
     * @note[short] Windows: 0x244a90
     * @note[short] iOS: 0x433f78
     * @note[short] Android
     */
    TodoReturn deleteServerLevelList(int p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] MacOS (ARM): 0x4a3eb4
     * @note[short] MacOS (Intel): 0x54e360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb00cc
     * @note[short] Android
     */
    void deleteSmartTemplate(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x4bb848
     * @note[short] MacOS (Intel): 0x568920
     * @note[short] iOS: 0xbed30
     * @note[short] Android
     */
    bool deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender);

    /**
     * @note[short] Android
     */
    TodoReturn downloadEditorSoundConfig(int p0);

    /**
     * @note[short] MacOS (ARM): 0x10ad5c
     * @note[short] MacOS (Intel): 0x358f80
     * @note[short] Android
     */
    void downloadLevel(int id, bool gauntletLevel, int dailyID);

    /**
     * @note[short] MacOS (ARM): 0x4baf00
     * @note[short] MacOS (Intel): 0x567f70
     * @note[short] Windows: 0x2390c0
     * @note[short] iOS: 0xbeb54
     * @note[short] Android
     */
    void downloadUserMessage(int id, bool sent);

    /**
     * @note[short] Android
     */
    TodoReturn dropIgnoredRequestLists();

    /**
     * @note[short] Android
     */
    TodoReturn dtShouldUploadLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a4240
     * @note[short] MacOS (Intel): 0x54e7a0
     * @note[short] Windows: 0x2228a0
     * @note[short] iOS: 0xb06ac
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] Android
     */
    TodoReturn evictDeathDataCache(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4a3f14
     * @note[short] MacOS (Intel): 0x54e3e0
     * @note[short] Windows: 0x2224e0
     * @note[short] iOS: 0xb012c
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x4a3540
     * @note[short] MacOS (Intel): 0x54d9e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xafd2c
     * @note[short] Android
     */
    void followUser(int id);

    /**
     * @note[short] Android
     */
    TodoReturn followUserOnline(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn forceDeathDataRefetch(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4ba078
     * @note[short] MacOS (Intel): 0x566fb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJFriendRequest* friendRequestFromAccountID(int id);

    /**
     * @note[short] Android
     */
    void friendRequestWasRemoved(int accountID, bool sent);

    /**
     * @note[short] MacOS (ARM): 0x4bcb54
     * @note[short] MacOS (Intel): 0x569c90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xbf9dc
     * @note[short] Android
     */
    const char* getAccountCommentKey(int accountID, int page);

    /**
     * @note[short] MacOS (ARM): 0x4bc824
     * @note[short] MacOS (Intel): 0x569940
     * @note[short] Windows: 0x23ac00
     * @note[short] iOS: 0xbf800
     * @note[short] Android
     */
    void getAccountComments(int accountID, int page, int total);

    /**
     * @note[short] MacOS (ARM): 0x4d1cc0
     * @note[short] MacOS (Intel): 0x5800c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xccad8
     * @note[short] Android
     */
    int getActiveDailyID(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x4a3d90
     * @note[short] MacOS (Intel): 0x54e230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaffc4
     * @note[short] Android
     */
    GJSmartTemplate* getActiveSmartTemplate();

    /**
     * @note[short] MacOS (ARM): 0x4a3ee4
     * @note[short] MacOS (Intel): 0x54e3b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb00fc
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSmartTemplates();

    /**
     * @note[short] MacOS (ARM): 0x4d32d4
     * @note[short] MacOS (Intel): 0x5816b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xcd2a8
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllUsedSongIDs();

    /**
     * @note[short] MacOS (ARM): 0x4a63cc
     * @note[short] MacOS (Intel): 0x550f60
     * @note[short] Windows: 0x224220
     * @note[short] iOS: 0x4ec38
     * @note[short] Android
     */
    std::string getBasePostString();

    /**
     * @note[short] MacOS (Intel): 0x5815c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xcd1d4
     * @note[short] Android
     */
    bool getBoolForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4bc570
     * @note[short] MacOS (Intel): 0x5696f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xbf67c
     * @note[short] Android
     */
    std::string getCommentKey(int ID, int page, int mode, CommentKeyType keytype);

    /**
     * @note[short] MacOS (ARM): 0x49dfa0
     * @note[short] MacOS (Intel): 0x548010
     * @note[short] Windows: 0x21e190
     * @note[short] iOS: 0xac09c
     * @note[short] Android
     */
    int getCompletedDailyLevels();

    /**
     * @note[short] MacOS (ARM): 0x49e16c
     * @note[short] MacOS (Intel): 0x548210
     * @note[short] Windows: 0x21e3a0
     * @note[short] iOS: 0xac204
     * @note[short] Android
     */
    int getCompletedEventLevels(int minStars, int maxStars);

    /**
     * @note[short] MacOS (ARM): 0x49e34c
     * @note[short] MacOS (Intel): 0x548420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xac378
     * @note[short] Android
     */
    int getCompletedGauntletDemons();

    /**
     * @note[short] MacOS (ARM): 0x49e424
     * @note[short] MacOS (Intel): 0x5484e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xac430
     * @note[short] Android
     */
    int getCompletedGauntletLevels();

    /**
     * @note[short] MacOS (ARM): 0x49c56c
     * @note[short] MacOS (Intel): 0x546230
     * @note[short] iOS: 0xab1dc
     * @note[short] Android
     */
    cocos2d::CCArray* getCompletedLevels(bool useOrbCompletion);

    /**
     * @note[short] MacOS (ARM): 0x49ddcc
     * @note[short] MacOS (Intel): 0x547e10
     * @note[short] Windows: 0x21df70
     * @note[short] iOS: 0xabf2c
     * @note[short] Android
     */
    int getCompletedWeeklyLevels();

    /**
     * @note[short] MacOS (ARM): 0x4d1cc0
     * @note[short] MacOS (Intel): 0x5800c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xccad8
     * @note[short] Android
     */
    int getDailyID(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x4d1cf4
     * @note[short] MacOS (Intel): 0x5800f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xccb0c
     * @note[short] Android
     */
    int getDailyTimer(GJTimedLevelType type);

    /**
     * @note[short] Android
     */
    TodoReturn getDeathData(int p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn getDeathDataVersion(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDeathDisplayData(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4bde74
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDeleteCommentKey(int parentID, int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x4bbd3c
     * @note[short] MacOS (Intel): 0x568e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDeleteMessageKey(int id, bool sent);

    /**
     * @note[short] MacOS (ARM): 0x49c810
     * @note[short] MacOS (Intel): 0x546400
     * @note[short] Windows: 0x21d420
     * @note[short] iOS: 0xab300
     * @note[short] Android
     */
    std::string getDemonLevelsString();

    /**
     * @note[short] MacOS (ARM): 0x4bde24
     * @note[short] MacOS (Intel): 0x56b020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDescKey(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4aaecc
     * @note[short] MacOS (Intel): 0x5565a0
     * @note[short] Windows: 0x2280f0
     * @note[short] iOS: 0xb4a68
     * @note[short] Android
     */
    std::string getDifficultyStr(bool isNA, bool isEasy, bool isNormal, bool isHard, bool isHarder, bool isInsane, bool isDemon, bool isAuto);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDiffKey(int diff);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool getDiffVal(int diff);

    /**
     * @note[short] Android
     */
    TodoReturn getEditorSoundConfigs(GJSearchObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a3ad4
     * @note[short] MacOS (Intel): 0x54df60
     * @note[short] iOS: 0xafe7c
     * @note[short] Android
     */
    std::string getFolderName(int id, bool local);

    /**
     * @note[short] Android
     */
    TodoReturn getFollowing();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getFriendRequestKey(bool p0, int p1, std::string const& p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x4ba0cc
     * @note[short] Android
     */
    TodoReturn getFriendRequests(bool p0, int p1, int p2, std::string const& p3, bool p4);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getGauntletKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4b1478
     * @note[short] MacOS (Intel): 0x55d1f0
     * @note[short] Windows: 0x22f630
     * @note[short] iOS: 0xb8630
     * @note[short] Android
     */
    void getGauntletLevels(int id);

    /**
     * @note[short] MacOS (ARM): 0x4b0d48
     * @note[short] MacOS (Intel): 0x55cab0
     * @note[short] iOS: 0xb81bc
     * @note[short] Android
     */
    void getGauntlets();

    /**
     * @note[short] MacOS (ARM): 0x4b0c88
     * @note[short] MacOS (Intel): 0x55c9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb817c
     * @note[short] Android
     */
    std::string getGauntletSearchKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d12a0
     * @note[short] MacOS (Intel): 0x575990
     * @note[short] Windows: 0x25bc40
     * @note[short] iOS: 0xcc374
     * @note[short] Android
     */
    bool getGJChallenges();

    /**
     * @note[short] Android
     */
    TodoReturn getGJContentStatus();

    /**
     * @note[short] MacOS (Intel): 0x57fb10
     * @note[short] Android
     */
    bool getGJDailyLevelState(GJTimedLevelType type);

    /**
     * @note[short] MacOS (Intel): 0xa0b00
     * @note[short] Android
     */
    bool getGJRewards(int type);

    /**
     * @note[short] MacOS (Intel): 0x57ec60
     * @note[short] Windows: 0x8ffd0
     * @note[short] Android
     */
    bool getGJSecretReward(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x4b97c0
     * @note[short] MacOS (Intel): 0x738890
     * @note[short] iOS: 0xbdd44
     * @note[short] Android
     */
    void getGJUserInfo(int id);

    /**
     * @note[short] MacOS (ARM): 0x49c30c
     * @note[short] MacOS (Intel): 0x545fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xab018
     * @note[short] Android
     */
    int getHighestLevelOrder();

    /**
     * @note[short] MacOS (Intel): 0x5813d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xcd0d8
     * @note[short] Android
     */
    int getIntForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4b553c
     * @note[short] MacOS (Intel): 0x561b90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xbaf78
     * @note[short] Android
     */
    std::string getLeaderboardKey(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x4b7b5c
     * @note[short] Windows: 0x235df0
     * @note[short] iOS: 0xbc8ec
     * @note[short] Android
     */
    void getLeaderboardScores(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x4ab458
     * @note[short] MacOS (Intel): 0x556b80
     * @note[short] Windows: 0x2283a0
     * @note[short] iOS: 0xb4c98
     * @note[short] Android
     */
    std::string getLengthStr(bool isTiny, bool isShort, bool isMedium, bool isLong, bool isXL, bool isPlat);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLenKey(int len);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool getLenVal(int len);

    /**
     * @note[short] MacOS (ARM): 0x4bc0ac
     * @note[short] MacOS (Intel): 0x5691d0
     * @note[short] Windows: 0x23a010
     * @note[short] iOS: 0xbf2e0
     * @note[short] Android
     */
    void getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype);

    /**
     * @note[short] Android
     */
    TodoReturn getLevelControls(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4b1a38
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLevelDownloadKey(int levelID, bool isGauntlet, int dailyID);

    /**
     * @note[short] MacOS (ARM): 0x494568
     * @note[short] MacOS (Intel): 0x53d660
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLevelKey(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4b817c
     * @note[short] MacOS (Intel): 0x564cd0
     * @note[short] iOS: 0xbccfc
     * @note[short] Android
     */
    void getLevelLeaderboard(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x4b8f84
     * @note[short] MacOS (Intel): 0x565e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xbd878
     * @note[short] Android
     */
    const char* getLevelLeaderboardKey(int levelID, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x495b30
     * @note[short] MacOS (Intel): 0x53edf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLevelListKey(int listID);

    /**
     * @note[short] MacOS (Intel): 0x55a320
     * @note[short] Windows: 0x179160
     * @note[short] Android
     */
    void getLevelLists(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4afb28
     * @note[short] MacOS (Intel): 0x55b720
     * @note[short] Windows: 0x22d130
     * @note[short] iOS: 0xb786c
     * @note[short] Android
     */
    void getLevelRateInfo(int id);

    /**
     * @note[short] MacOS (ARM): 0x4acc7c
     * @note[short] MacOS (Intel): 0x558760
     * @note[short] iOS: 0xb5c40
     * @note[short] Android
     */
    void getLevelSaveData();

    /**
     * @note[short] MacOS (ARM): 0x4d0654
     * @note[short] MacOS (Intel): 0x57e940
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLikeAccountItemKey(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4cff74
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLikeItemKey(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] Android
     */
    GJGameLevel* getLocalLevel(int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0x494590
     * @note[short] MacOS (Intel): 0x53d680
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJGameLevel* getLocalLevelByName(std::string name);

    /**
     * @note[short] MacOS (ARM): 0x494694
     * @note[short] MacOS (Intel): 0x53d7c0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xa6394
     * @note[short] Android
     */
    GJLevelList* getLocalLevelList(int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0x49c348
     * @note[short] MacOS (Intel): 0x545fe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xab054
     * @note[short] Android
     */
    int getLowestLevelOrder();

    /**
     * @note[short] MacOS (ARM): 0x494194
     * @note[short] MacOS (Intel): 0x53d1c0
     * @note[short] Windows: 0x219a60
     * @note[short] iOS: 0xa5774
     * @note[short] Android
     */
    GJGameLevel* getMainLevel(int levelID, bool dontGetLevelString);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getMapPackKey(int pack);

    /**
     * @note[short] MacOS (ARM): 0x4acf2c
     * @note[short] MacOS (Intel): 0x5589f0
     * @note[short] Windows: 0x22a430
     * @note[short] iOS: 0xb5de0
     * @note[short] Android
     */
    void getMapPacks(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4bb23c
     * @note[short] MacOS (Intel): 0x5682c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getMessageKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4ba410
     * @note[short] MacOS (Intel): 0x5673c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xbe494
     * @note[short] Android
     */
    const char* getMessagesKey(bool sent, int page);

    /**
     * @note[short] MacOS (ARM): 0x4bc098
     * @note[short] MacOS (Intel): 0x5691b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void getNews();

    /**
     * @note[short] MacOS (ARM): 0x4a3da0
     * @note[short] MacOS (Intel): 0x54e250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaffcc
     * @note[short] Android
     */
    int getNextFreeTemplateID();

    /**
     * @note[short] MacOS (ARM): 0x494bb8
     * @note[short] MacOS (Intel): 0x53dd20
     * @note[short] Windows: 0x21a1c0
     * @note[short] iOS: 0xa5d94
     * @note[short] Android
     */
    std::string getNextLevelName(std::string name);

    /**
     * @note[short] Android
     */
    TodoReturn getNotifications(int p0, int p1);

    /**
     * @note[short] Windows: 0x409bd0
     * @note[short] Android
     */
    void getOnlineLevels(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x49f840
     * @note[short] MacOS (Intel): 0x549ae0
     * @note[short] iOS: 0xad1a4
     * @note[short] Android
     */
    const char* getPageInfo(char const* key);

    /**
     * @note[short] Android
     */
    TodoReturn getPlatformerSaveStats(int p0, int& p1, unsigned long& p2);

    /**
     * @note[short] MacOS (ARM): 0x4bde4c
     * @note[short] MacOS (Intel): 0x56b040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xc06ec
     * @note[short] Android
     */
    const char* getPostCommentKey(int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4b4d1c
     * @note[short] MacOS (Intel): 0x5612b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getRateStarsKey(int levelID);

    /**
     * @note[short] MacOS (Intel): 0x5682c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getReportKey(int levelID);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevel(int dailyID);

    /**
     * @note[short] MacOS (ARM): 0x49e838
     * @note[short] MacOS (Intel): 0x5488a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xac674
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevelFromLevelID(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb88b8
     * @note[short] Android
     */
    GJMapPack* getSavedGauntlet(int id);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    GJGameLevel* getSavedGauntletLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x498c80
     * @note[short] MacOS (Intel): 0x5424c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa89d4
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(GJGameLevel* level);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xac5f0
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJLevelList* getSavedLevelList(int listID);

    /**
     * @note[short] MacOS (ARM): 0x49c244
     * @note[short] MacOS (Intel): 0x545ed0
     * @note[short] Windows: 0x1747a0
     * @note[short] iOS: 0xaaf84
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevelLists(int folder);

    /**
     * @note[short] MacOS (ARM): 0x49c070
     * @note[short] MacOS (Intel): 0x545ce0
     * @note[short] iOS: 0xaae3c
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevels(bool favorite, int folder);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJMapPack* getSavedMapPack(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a00c8
     * @note[short] MacOS (Intel): 0x54a300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xad5e4
     * @note[short] Android
     */
    cocos2d::CCScene* getSearchScene(char const* key);

    /**
     * @note[short] Android
     */
    TodoReturn getSongUsage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4b5adc
     * @note[short] MacOS (Intel): 0x562150
     * @note[short] Windows: 0x23bb00
     * @note[short] iOS: 0xbb220
     * @note[short] Android
     */
    int getSplitIntFromKey(char const* key, int index);

    /**
     * @note[short] MacOS (ARM): 0x49caf0
     * @note[short] MacOS (Intel): 0x5467a0
     * @note[short] Windows: 0x21d620
     * @note[short] iOS: 0xab4d4
     * @note[short] Android
     */
    std::string getStarLevelsString();

    /**
     * @note[short] MacOS (ARM): 0x4be218
     * @note[short] iOS: 0xc08d0
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredLevelComments(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x49f5e4
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xad04c
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredOnlineLevels(char const* key);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredUserList(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x4ba098
     * @note[short] MacOS (Intel): 0x566ff0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessage(int id);

    /**
     * @note[short] MacOS (ARM): 0x4ba0c0
     * @note[short] MacOS (Intel): 0x567040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xbe29c
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessageReply(int id);

    /**
     * @note[short] Android
     */
    TodoReturn getThreadInvites();

    /**
     * @note[short] Android
     */
    TodoReturn getThreadMembers(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getThreadMessages(int p0, long long p1, long long p2, int p3, long long p4, std::string const& p5);

    /**
     * @note[short] Android
     */
    TodoReturn getThreadPastMembers(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getThreadPendingInvites(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getThreads(int p0, std::string const& p1, int p2, std::string const& p3);

    /**
     * @note[short] Android
     */
    int getTimeLeft(char const* key, float length);

    /**
     * @note[short] MacOS (ARM): 0x4b904c
     * @note[short] MacOS (Intel): 0x565ec0
     * @note[short] Windows: 0x237470
     * @note[short] iOS: 0xbd8b4
     * @note[short] Android
     */
    void getTopArtists(int page, int total);

    /**
     * @note[short] MacOS (ARM): 0x4b93f4
     * @note[short] MacOS (Intel): 0x566290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xbdaf0
     * @note[short] Android
     */
    const char* getTopArtistsKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x4bb264
     * @note[short] MacOS (Intel): 0x5682e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getUploadMessageKey(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x4b9798
     * @note[short] MacOS (Intel): 0x566670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getUserInfoKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x91724
     * @note[short] Android
     */
    void getUserList(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x4ba0cc
     * @note[short] Android
     */
    void getUserMessages(bool sent, int page, int total);

    /**
     * @note[short] MacOS (Intel): 0x5662b0
     * @note[short] Windows: 0x237c50
     * @note[short] Android
     */
    void getUsers(GJSearchObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn getUserSearch(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x49f04c
     * @note[short] MacOS (Intel): 0x549360
     * @note[short] iOS: 0xacd18
     * @note[short] Android
     */
    void gotoLevelPage(GJGameLevel* level);

    /**
     * @note[short] Windows: 0x9999999
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
     * @note[short] MacOS (ARM): 0x4d1c74
     * @note[short] MacOS (Intel): 0x580080
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xcca9c
     * @note[short] Android
     */
    bool hasDailyStateBeenLoaded(GJTimedLevelType type);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool hasDownloadedLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x4acc74
     * @note[short] MacOS (Intel): 0x558750
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool hasDownloadedList(int id);

    /**
     * @note[short] Windows: 0x259740
     * @note[short] Android
     */
    bool hasLikedAccountItem(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] Windows: 0x259740
     * @note[short] iOS: 0xcbc44
     * @note[short] Android
     */
    bool hasLikedItem(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4cfdc8
     * @note[short] MacOS (Intel): 0x57e170
     * @note[short] Windows: 0x2596b0
     * @note[short] iOS: 0xcb6d4
     * @note[short] Android
     */
    TodoReturn hasLikedItemFullCheck(LikeItemType p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn hasNewDaily(GJTimedLevelType p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasNewGauntlets();

    /**
     * @note[short] iOS: 0xbac14
     * @note[short] Android
     */
    bool hasRatedDemon(int id);

    /**
     * @note[short] Android
     */
    bool hasRatedLevelStars(int id);

    /**
     * @note[short] Android
     */
    bool hasReportedLevel(int id);

    /**
     * @note[short] Android
     */
    void invalidateMessages(bool sent, bool reload);

    /**
     * @note[short] Android
     */
    void invalidateRequests(bool sent, bool reload);

    /**
     * @note[short] MacOS (ARM): 0x4c7758
     * @note[short] MacOS (Intel): 0x575210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xc68a8
     * @note[short] Android
     */
    void invalidateUserList(UserListType type, bool reload);

    /**
     * @note[short] Android
     */
    bool isDeathDataFetched(int p0);

    /**
     * @note[short] MacOS (Intel): 0x549c90
     * @note[short] iOS: 0xad278
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] iOS: 0xafca4
     * @note[short] Android
     */
    bool isFollowingUser(int id);

    /**
     * @note[short] Android
     */
    bool isPastDailyCopy(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool isTimeValid(char const* key, float length);

    /**
     * @note[short] MacOS (ARM): 0x4b3ff4
     * @note[short] MacOS (Intel): 0x5603f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xba2e8
     * @note[short] Android
     */
    bool isUpdateValid(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int itemIDFromLikeKey(char const* key);

    /**
     * @note[short] iOS: 0xad4a8
     * @note[short] Android
     */
    bool keyHasTimer(char const* key);

    /**
     * @note[short] Android
     */
    TodoReturn levelControlInstances(int p0);

    /**
     * @note[short] Windows: 0xfeb80
     * @note[short] iOS: 0xc083c
     * @note[short] Android
     */
    int levelIDFromCommentKey(char const* key);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int levelIDFromPostCommentKey(char const* key);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xcb998
     * @note[short] Android
     */
    int likeFromLikeKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4cf5a0
     * @note[short] MacOS (Intel): 0x57d7e0
     * @note[short] Windows: 0x297740
     * @note[short] iOS: 0xcb1b0
     * @note[short] Android
     */
    void likeItem(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] Windows: 0x2200e0
     * @note[short] Android
     */
    void limitSavedLevels();

    /**
     * @note[short] MacOS (ARM): 0x1942d8
     * @note[short] MacOS (Intel): 0x549790
     * @note[short] Windows: 0x21faf0
     * @note[short] iOS: 0xacf98
     * @note[short] Android
     */
    void makeTimeStamp(char const* key);

    /**
     * @note[short] Android
     */
    TodoReturn markGauntletsSeen();

    /**
     * @note[short] MacOS (ARM): 0x4cfe74
     * @note[short] MacOS (Intel): 0x57e200
     * @note[short] Windows: 0x21f440
     * @note[short] iOS: 0xcb788
     * @note[short] Android
     */
    void markItemAsLiked(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] Windows: 0x231690
     * @note[short] Android
     */
    void markLevelAsDownloaded(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void markLevelAsRatedDemon(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xbaa74
     * @note[short] Android
     */
    void markLevelAsRatedStars(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void markLevelAsReported(int id);

    /**
     * @note[short] MacOS (ARM): 0x4b3fec
     * @note[short] MacOS (Intel): 0x5603e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xba2e0
     * @note[short] Android
     */
    void markListAsDownloaded(int id);

    /**
     * @note[short] Android
     */
    TodoReturn markTimedLevelSeen(GJTimedLevelType p0);

    /**
     * @note[short] Android
     */
    void messageWasRemoved(int id, bool sent);

    /**
     * @note[short] Android
     */
    TodoReturn muteUser(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn notificationMask();

    /**
     * @note[short] Windows: 0x239b10
     * @note[short] iOS: 0x99b34
     * @note[short] Android
     */
    void onAcceptFriendRequestCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminClearReportedContentCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminCloseCaseCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminCommentBanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminCommentUnbanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminDeleteUserCommentsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminFreezeCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminGetAbuseInfoCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminGetAccountReviewCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminGetReportedContentCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminGetReportQueueCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminGetUserHistoryCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminMessageBanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminMessageUnbanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminNameLockCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminNameUnlockCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminThreadActionCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminTrendingBanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminTrendingUnbanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminUnfreezeCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminUploadBanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminUploadUnbanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x483f6c
     * @note[short] MacOS (Intel): 0x52b090
     * @note[short] Windows: 0x232cb0
     * @note[short] iOS: 0x9b5ec
     * @note[short] Android
     */
    void onBanUserCompleted(std::string response, std::string tag);

    /**
     * @note[short] iOS: 0x99ec8
     * @note[short] Android
     */
    void onBlockUserCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onClaimNotificationRewardCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47f800
     * @note[short] MacOS (Intel): 0x5267c0
     * @note[short] Windows: 0x23e510
     * @note[short] iOS: 0x98820
     * @note[short] Android
     */
    void onDeleteCommentCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onDeleteCommentsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47f9ac
     * @note[short] iOS: 0x999b8
     * @note[short] Android
     */
    void onDeleteFriendRequestCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onDeleteLevelControlsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onDeleteServerEditorSoundCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47d93c
     * @note[short] MacOS (Intel): 0x5246d0
     * @note[short] iOS: 0x973e0
     * @note[short] Android
     */
    void onDeleteServerLevelCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x487e74
     * @note[short] MacOS (Intel): 0x52f570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9dfa0
     * @note[short] Android
     */
    void onDeleteServerLevelListCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (Intel): 0x52a670
     * @note[short] Windows: 0x253440
     * @note[short] iOS: 0x9af60
     * @note[short] Android
     */
    void onDeleteUserMessagesCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onDownloadEditorSoundCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (Intel): 0x524380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x97128
     * @note[short] Android
     */
    void onDownloadLevelCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x483728
     * @note[short] MacOS (Intel): 0x52a830
     * @note[short] Windows: 0x239300
     * @note[short] iOS: 0x9b0a8
     * @note[short] Android
     */
    void onDownloadUserMessageCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onFollowUserCompleted(std::string p0, std::string p1, bool p2);

    /**
     * @note[short] Android
     */
    void onGetAccountCommentsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onGetContentStatusCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onGetDeathDataCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onGetEditorSoundsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onGetFollowingCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x48261c
     * @note[short] MacOS (Intel): 0x529600
     * @note[short] iOS: 0x9a628
     * @note[short] Android
     */
    void onGetFriendRequestsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x7f89a8
     * @note[short] MacOS (Intel): 0x576440
     * @note[short] Windows: 0x22bad0
     * @note[short] iOS: 0x51ebd0
     * @note[short] Android
     */
    void onGetGauntletsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x25c0d0
     * @note[short] iOS: 0x9c438
     * @note[short] Android
     */
    void onGetGJChallengesCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x85cd98
     * @note[short] Windows: 0x229390
     * @note[short] Android
     */
    void onGetGJDailyLevelStateCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x484980
     * @note[short] iOS: 0x9bcf0
     * @note[short] Android
     */
    void onGetGJRewardsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (Intel): 0x7350b0
     * @note[short] Android
     */
    void onGetGJSecretRewardCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x480c58
     * @note[short] MacOS (Intel): 0x527be0
     * @note[short] Android
     */
    void onGetGJUserInfoCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47ddb8
     * @note[short] MacOS (Intel): 0x524b30
     * @note[short] Windows: 0x236200
     * @note[short] iOS: 0x97748
     * @note[short] Android
     */
    void onGetLeaderboardScoresCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    void onGetLevelCommentsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onGetLevelControlsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4867cc
     * @note[short] MacOS (Intel): 0x52ddc0
     * @note[short] Windows: 0x238570
     * @note[short] iOS: 0x9d0e4
     * @note[short] Android
     */
    void onGetLevelLeaderboardCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x487610
     * @note[short] MacOS (Intel): 0x52ec00
     * @note[short] iOS: 0x9dabc
     * @note[short] Android
     */
    void onGetLevelListsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x488e50
     * @note[short] MacOS (Intel): 0x530760
     * @note[short] Windows: 0x1c3cd0
     * @note[short] iOS: 0x9ea1c
     * @note[short] Android
     */
    void onGetLevelRateInfoCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4844b4
     * @note[short] MacOS (Intel): 0x52b5f0
     * @note[short] Windows: 0x229fd0
     * @note[short] iOS: 0x9b960
     * @note[short] Android
     */
    void onGetLevelSaveDataCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47cc28
     * @note[short] MacOS (Intel): 0x523870
     * @note[short] Windows: 0x22a640
     * @note[short] iOS: 0x96b68
     * @note[short] Android
     */
    void onGetMapPacksCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (Intel): 0x490360
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onGetNewsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onGetNotificationsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47c138
     * @note[short] MacOS (Intel): 0x522b80
     * @note[short] Windows: 0x240ea0
     * @note[short] iOS: 0x9644c
     * @note[short] Android
     */
    void onGetOnlineLevelsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onGetSongUsageCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onGetThreadInvitesCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onGetThreadMessagesCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onGetThreadsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x486f90
     * @note[short] MacOS (Intel): 0x52e540
     * @note[short] Windows: 0x22ed30
     * @note[short] iOS: 0x9d718
     * @note[short] Android
     */
    void onGetTopArtistsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x481e20
     * @note[short] Windows: 0x254e50
     * @note[short] Android
     */
    void onGetUserListCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x482dec
     * @note[short] MacOS (Intel): 0x529e80
     * @note[short] iOS: 0x9aafc
     * @note[short] Android
     */
    void onGetUserMessagesCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x483ab8
     * @note[short] MacOS (Intel): 0x52abe0
     * @note[short] iOS: 0x9b320
     * @note[short] Android
     */
    void onGetUsersCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onGetUserSearchCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47fb30
     * @note[short] MacOS (Intel): 0x526ae0
     * @note[short] iOS: 0x98a40
     * @note[short] Android
     */
    void onLikeItemCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onMuteUserCompleted(std::string p0, std::string p1, bool p2);

    /**
     * @note[short] Windows: 0x217520
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x486524
     * @note[short] MacOS (Intel): 0x52dad0
     * @note[short] iOS: 0x9cf1c
     * @note[short] Android
     */
    void onRateDemonCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onRateEditorSoundAdminCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x756ff8
     * @note[short] MacOS (Intel): 0x8621d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onRateLevelAdminCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onRateLevelListAdminCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47d7a8
     * @note[short] MacOS (Intel): 0x524550
     * @note[short] Windows: 0x232300
     * @note[short] iOS: 0x972f0
     * @note[short] Android
     */
    void onRateStarsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x481498
     * @note[short] MacOS (Intel): 0x528410
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x99c9c
     * @note[short] Android
     */
    void onReadFriendRequestCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x256620
     * @note[short] iOS: 0x99d10
     * @note[short] Android
     */
    void onRemoveFriendCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onReportContentCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47ff2c
     * @note[short] MacOS (Intel): 0x526e60
     * @note[short] iOS: 0x98d48
     * @note[short] Android
     */
    void onReportLevelCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onRequestThreadMembersCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4842d8
     * @note[short] MacOS (Intel): 0x52b440
     * @note[short] Windows: 0x259380
     * @note[short] iOS: 0x9b7c0
     * @note[short] Android
     */
    void onRequestUserAccessCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47fd18
     * @note[short] MacOS (Intel): 0x526c90
     * @note[short] Windows: 0x25e1f0
     * @note[short] iOS: 0x98b80
     * @note[short] Android
     */
    void onRestoreItemsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onSearchThreadMessagesCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onSendThreadMessageCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47dc3c
     * @note[short] MacOS (Intel): 0x5249c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x975c8
     * @note[short] Android
     */
    void onSetLevelFeaturedCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47dab8
     * @note[short] MacOS (Intel): 0x524840
     * @note[short] iOS: 0x974d0
     * @note[short] Android
     */
    void onSetLevelStarsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47ff28
     * @note[short] MacOS (Intel): 0x526e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x98d10
     * @note[short] Android
     */
    void onSubmitUserInfoCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x484790
     * @note[short] MacOS (Intel): 0x52b8e0
     * @note[short] Windows: 0x233380
     * @note[short] iOS: 0x9bb88
     * @note[short] Android
     */
    void onSuggestLevelStarsCompleted(std::string response, std::string tag);

    /**
     * @note[short] iOS: 0x9a064
     * @note[short] Android
     */
    void onUnblockUserCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4800a0
     * @note[short] MacOS (Intel): 0x526fd0
     * @note[short] Windows: 0x6bf10
     * @note[short] iOS: 0x98e60
     * @note[short] Android
     */
    void onUpdateDescriptionCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onUpdateEditorSoundDescriptionCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (Intel): 0x524460
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9720c
     * @note[short] Android
     */
    void onUpdateLevelCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onUpdateThreadCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47dc40
     * @note[short] MacOS (Intel): 0x5249d0
     * @note[short] Windows: 0x6f950
     * @note[short] iOS: 0x97600
     * @note[short] Android
     */
    void onUpdateUserScoreCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47eb3c
     * @note[short] MacOS (Intel): 0x525960
     * @note[short] Windows: 0x237eb0
     * @note[short] Android
     */
    void onUploadCommentCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onUploadDeathDataCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onUploadEditorSoundCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x480ea4
     * @note[short] MacOS (Intel): 0x527e00
     * @note[short] Windows: 0x2528e0
     * @note[short] iOS: 0x99870
     * @note[short] Android
     */
    void onUploadFriendRequestCompleted(std::string response, std::string tag);

    /**
     * @note[short] iOS: 0x973e0
     * @note[short] Android
     */
    void onUploadLevelCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onUploadLevelControlsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x487cd0
     * @note[short] MacOS (Intel): 0x52f380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9dec0
     * @note[short] Android
     */
    void onUploadLevelListCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x239480
     * @note[short] iOS: 0x9b1e4
     * @note[short] Android
     */
    void onUploadUserMessageCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int pageFromCommentKey(char const* key);

    /**
     * @note[short] Android
     */
    TodoReturn parseEventReward(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x3f8c8c
     * @note[short] MacOS (Intel): 0x580400
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void parseRestoreData(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x476298
     * @note[short] MacOS (Intel): 0x348c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x90ad4
     * @note[short] Android
     */
    void performNetworkTest();

    /**
     * @note[short] Android
     */
    void ProcessHttpRequest(std::string endpoint, std::string params, std::string tag, GJHttpType httpType);

    /**
     * @note[short] Windows: 0x22ff60
     * @note[short] Android
     */
    void processOnDownloadLevelCompleted(std::string response, std::string tag, bool update);

    /**
     * @note[short] Android
     */
    TodoReturn prunePlatformerJournalKeys(std::vector<std::pair<std::string, int>> const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn purgeFriendRequestSearchCache(bool p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4a0c58
     * @note[short] MacOS (Intel): 0x54afd0
     * @note[short] iOS: 0xadd68
     * @note[short] Android
     */
    void purgeUnusedLevels();

    /**
     * @note[short] MacOS (ARM): 0x4b5c1c
     * @note[short] MacOS (Intel): 0x562260
     * @note[short] Windows: 0x233630
     * @note[short] iOS: 0xbb2bc
     * @note[short] Android
     */
    bool rateDemon(int id, int diff, bool moderator);

    /**
     * @note[short] Android
     */
    TodoReturn rateEditorSoundAdmin(int p0, int p1, int p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x4cae44
     * @note[short] MacOS (Intel): 0x578c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool rateLevelAdmin(int id, int stars, int feature, int rank, bool coins, bool updateRank);

    /**
     * @note[short] Android
     */
    TodoReturn rateLevelListAdmin(int p0, int p1, int p2, int p3, int p4, bool p5);

    /**
     * @note[short] MacOS (ARM): 0x4b4384
     * @note[short] MacOS (Intel): 0x560790
     * @note[short] iOS: 0xba514
     * @note[short] Android
     */
    void rateStars(int id, int diff);

    /**
     * @note[short] Android
     */
    void readFriendRequest(int id);

    /**
     * @note[short] Android
     */
    TodoReturn readFriendRequests(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4aa294
     * @note[short] MacOS (Intel): 0x555850
     * @note[short] iOS: 0xb43dc
     * @note[short] Android
     */
    void removeDelimiterChars(std::string str, bool colon);

    /**
     * @note[short] MacOS (ARM): 0x49fc20
     * @note[short] MacOS (Intel): 0x549e60
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xad368
     * @note[short] Android
     */
    void removeDLFromActive(char const* key);

    /**
     * @note[short] Android
     */
    bool removeFriend(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x4a37d0
     * @note[short] MacOS (Intel): 0x54dc30
     * @note[short] Android
     */
    void removeLevelDownloadedKeysFromDict(cocos2d::CCDictionary* dict);

    /**
     * @note[short] Android
     */
    TodoReturn removePlatformerSaveJournalEntry(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x4cd5c4
     * @note[short] MacOS (Intel): 0x57b680
     * @note[short] Windows: 0x254b70
     * @note[short] iOS: 0xca15c
     * @note[short] Android
     */
    void removeUserFromList(int id, UserListType type);

    /**
     * @note[short] Android
     */
    TodoReturn replaceFollowedUsers(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn replayPlatformerSaveJournal();

    /**
     * @note[short] Android
     */
    TodoReturn reportContent(int p0, int p1, int p2, std::vector<int> const& p3, long long p4);

    /**
     * @note[short] MacOS (ARM): 0x4d2014
     * @note[short] MacOS (Intel): 0x580410
     * @note[short] Android
     */
    void reportLevel(int id);

    /**
     * @note[short] Android
     */
    TodoReturn requestThreadMembers(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4d0318
     * @note[short] MacOS (Intel): 0x574700
     * @note[short] iOS: 0xc61b8
     * @note[short] Android
     */
    bool requestUserAccess();

    /**
     * @note[short] Android
     */
    TodoReturn resetAccountCaches();

    /**
     * @note[short] MacOS (ARM): 0x4bdb04
     * @note[short] MacOS (Intel): 0x56aca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xc04d0
     * @note[short] Android
     */
    void resetAccountComments(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x5fb17c
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAllTimers();

    /**
     * @note[short] MacOS (Intel): 0x56cca0
     * @note[short] Windows: 0x23de00
     * @note[short] iOS: 0xc1584
     * @note[short] Android
     */
    void resetCommentTimersForAccountID(int id);

    /**
     * @note[short] MacOS (Intel): 0x56c680
     * @note[short] Windows: 0x23dc20
     * @note[short] iOS: 0xc1470
     * @note[short] Android
     */
    void resetCommentTimersForLevelID(int id, CommentKeyType type);

    /**
     * @note[short] MacOS (Intel): 0x580040
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetDailyLevelState(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x4b1a30
     * @note[short] MacOS (Intel): 0x55d830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb895c
     * @note[short] Android
     */
    void resetGauntlets();

    /**
     * @note[short] MacOS (ARM): 0x4ba06c
     * @note[short] MacOS (Intel): 0x566f90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetStoredUserInfo(int id);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void resetStoredUserList(UserListType type);

    /**
     * @note[short] MacOS (Intel): 0x54a170
     * @note[short] Android
     */
    void resetTimerForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x90124
     * @note[short] MacOS (Intel): 0x580120
     * @note[short] Android
     */
    void restoreItems();

    /**
     * @note[short] Android
     */
    TodoReturn rewardItemFromResponse(std::string const& p0, int& p1);

    /**
     * @note[short] Android
     */
    TodoReturn rewardSessionToken();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void saveFetchedLevelLists(cocos2d::CCArray* lists);

    /**
     * @note[short] MacOS (ARM): 0x498a70
     * @note[short] MacOS (Intel): 0x542210
     * @note[short] Windows: 0x21c2c0
     * @note[short] iOS: 0xa8818
     * @note[short] Android
     */
    void saveFetchedLevels(cocos2d::CCArray* levels);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa96bc
     * @note[short] Android
     */
    void saveFetchedMapPacks(cocos2d::CCArray* packs);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveGauntlet(GJMapPack* gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x49e870
     * @note[short] MacOS (Intel): 0x5488f0
     * @note[short] iOS: 0xac6ac
     * @note[short] Android
     */
    void saveLevel(GJGameLevel* level);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xa8ff0
     * @note[short] Android
     */
    void saveLevelList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4a3d8c
     * @note[short] MacOS (Intel): 0x54e220
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void saveLocalScore(int id, int value, int type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa9720
     * @note[short] Android
     */
    void saveMapPack(GJMapPack* pack);

    /**
     * @note[short] Android
     */
    TodoReturn searchThreadMessages(int p0, std::string const& p1, long long p2);

    /**
     * @note[short] Android
     */
    TodoReturn searchTypeIsCurated(SearchType p0);

    /**
     * @note[short] Android
     */
    TodoReturn sendAdminAction(char const* p0, char const* p1, GJHttpType p2, int p3, std::string const& p4, std::string const& p5, std::vector<int> const& p6);

    /**
     * @note[short] Android
     */
    TodoReturn sendThreadMessage(int p0, int p1, std::string const& p2, std::string const& p3, uint64_t p4, std::string const& p5, bool p6, std::string const& p7, std::string const& p8);

    /**
     * @note[short] MacOS (ARM): 0x4a3d98
     * @note[short] MacOS (Intel): 0x54e240
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setActiveSmartTemplate(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xcd148
     * @note[short] Android
     */
    void setBoolForKey(bool value, char const* key);

    /**
     * @note[short] Android
     */
    void setDiffVal(int diff, bool value);

    /**
     * @note[short] MacOS (ARM): 0x4a3c60
     * @note[short] MacOS (Intel): 0x54e100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaff1c
     * @note[short] Android
     */
    void setFolderName(int id, std::string name, bool local);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xcd04c
     * @note[short] Android
     */
    void setIntForKey(int value, char const* key);

    /**
     * @note[short] iOS: 0xccfac
     * @note[short] Android
     */
    void setLenVal(int diff, bool value);

    /**
     * @note[short] Android
     */
    void setLevelControlsTemplate(int p0, std::string const& p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x4b60d8
     * @note[short] MacOS (Intel): 0x562780
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setLevelFeatured(int id, int rank, bool epic);

    /**
     * @note[short] MacOS (ARM): 0x4b60d0
     * @note[short] MacOS (Intel): 0x562770
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool setLevelStars(int id, int stars, bool coins);

    /**
     * @note[short] Android
     */
    void setNotificationMask(int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int specialFromLikeKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4bac58
     * @note[short] MacOS (Intel): 0x567cf0
     * @note[short] iOS: 0xbea3c
     * @note[short] Android
     */
    void storeCommentsResult(cocos2d::CCArray* comments, std::string pageInfo, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4d1aac
     * @note[short] MacOS (Intel): 0x57fee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xcc900
     * @note[short] Android
     */
    void storeDailyLevelState(int id, int remaining, GJTimedLevelType type);

    /**
     * @note[short] Android
     */
    TodoReturn storedFriendForAccountID(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4ba050
     * @note[short] MacOS (Intel): 0x566f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeFriendRequest(GJFriendRequest* request);

    /**
     * @note[short] MacOS (ARM): 0x49f1fc
     * @note[short] MacOS (Intel): 0x5494f0
     * @note[short] iOS: 0xace7c
     * @note[short] Android
     */
    void storeSearchResult(cocos2d::CCArray* levels, std::string pageInfo, char const* searchKey);

    /**
     * @note[short] Android
     */
    TodoReturn storeThreadManifest(int p0, std::string const& p1);

    /**
     * @note[short] MacOS (ARM): 0x4b9b68
     * @note[short] MacOS (Intel): 0x566a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeUserInfo(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x4ba084
     * @note[short] MacOS (Intel): 0x566fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeUserMessage(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x4ba0a4
     * @note[short] MacOS (Intel): 0x567010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d06cc
     * @note[short] Android
     */
    void storeUserMessageReply(int id, GJUserMessage* message);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xc3698
     * @note[short] Android
     */
    void storeUserName(int userID, int accountID, std::string userName);

    /**
     * @note[short] MacOS (ARM): 0x495b58
     * @note[short] MacOS (Intel): 0x53ee10
     * @note[short] iOS: 0xa6800
     * @note[short] Android
     */
    void storeUserNames(std::string usernameString);

    /**
     * @note[short] MacOS (ARM): 0x4b752c
     * @note[short] MacOS (Intel): 0x563f10
     * @note[short] Windows: 0x25e4f0
     * @note[short] iOS: 0xbc530
     * @note[short] Android
     */
    void submitUserInfo();

    /**
     * @note[short] Windows: 0x233010
     * @note[short] Android
     */
    TodoReturn suggestLevelStars(int p0, int p1, int p2, bool p3, int p4);

    /**
     * @note[short] Android
     */
    TodoReturn syncFollowing();

    /**
     * @note[short] Android
     */
    TodoReturn syncFollowListIfNeeded();

    /**
     * @note[short] MacOS (ARM): 0x4967d8
     * @note[short] MacOS (Intel): 0x53fa30
     * @note[short] iOS: 0xa6e70
     * @note[short] Android
     */
    std::string tryGetUsername(int accountID);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xc083c
     * @note[short] Android
     */
    CommentType typeFromCommentKey(char const* key);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    LikeItemType typeFromLikeKey(char const* key);

    /**
     * @note[short] Android
     */
    bool unblockUser(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xafe00
     * @note[short] Android
     */
    void unfollowUser(int id);

    /**
     * @note[short] Android
     */
    TodoReturn unrateEditorSoundAdmin(int p0);

    /**
     * @note[short] MacOS (Intel): 0x578c70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool unrateLevelAdmin(int id);

    /**
     * @note[short] Android
     */
    TodoReturn unrateLevelListAdmin(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4ce2d8
     * @note[short] MacOS (Intel): 0x57c430
     * @note[short] iOS: 0xca890
     * @note[short] Android
     */
    bool updateDescription(int id, std::string description);

    /**
     * @note[short] Android
     */
    TodoReturn updateEditorSoundDescription(int p0, std::string p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn updateEditorSoundRankAdmin(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x62f70
     * @note[short] MacOS (Intel): 0x560430
     * @note[short] Windows: 0x2318a0
     * @note[short] iOS: 0xba330
     * @note[short] Android
     */
    void updateLevel(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelListRankAdmin(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x49c384
     * @note[short] MacOS (Intel): 0x546020
     * @note[short] Windows: 0x6605a0
     * @note[short] iOS: 0xab090
     * @note[short] Android
     */
    void updateLevelOrders();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool updateLevelRankAdmin(int id, int rank);

    /**
     * @note[short] MacOS (ARM): 0x496c00
     * @note[short] MacOS (Intel): 0x53ff60
     * @note[short] Windows: 0x21bca0
     * @note[short] iOS: 0xa712c
     * @note[short] Android
     */
    void updateLevelRewards(GJGameLevel* level);

    /**
     * @note[short] iOS: 0xb6e34
     * @note[short] Android
     */
    void updateSavedLevelList(GJLevelList* list);

    /**
     * @note[short] Android
     */
    TodoReturn updateThread(int p0, int p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x3ec2f4
     * @note[short] MacOS (Intel): 0x54d7d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xafbd4
     * @note[short] Android
     */
    void updateUsernames();

    /**
     * @note[short] MacOS (Intel): 0x562790
     * @note[short] Windows: 0x233fb0
     * @note[short] iOS: 0xbb534
     * @note[short] Android
     */
    void updateUserScore();

    /**
     * @note[short] MacOS (ARM): 0x4bf298
     * @note[short] MacOS (Intel): 0x56c4e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xc12a8
     * @note[short] Android
     */
    void uploadAccountComment(std::string content);

    /**
     * @note[short] MacOS (Intel): 0x56b510
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void uploadComment(std::string content, CommentType type, int levelID, int percent);

    /**
     * @note[short] Android
     */
    TodoReturn uploadDeathData();

    /**
     * @note[short] Android
     */
    TodoReturn uploadEditorSoundComment(int p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn uploadEditorSoundConfig(std::string const& p0, std::string const& p1, std::string const& p2, int p3, int p4, int p5, int p6, std::string const& p7);

    /**
     * @note[short] MacOS (ARM): 0x4cb2d4
     * @note[short] MacOS (Intel): 0x579150
     * @note[short] iOS: 0xc8df8
     * @note[short] Android
     */
    bool uploadFriendRequest(int accountID, std::string content);

    /**
     * @note[short] MacOS (ARM): 0x4a9124
     * @note[short] MacOS (Intel): 0x5544b0
     * @note[short] iOS: 0xb3844
     * @note[short] Android
     */
    void uploadLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4be334
     * @note[short] MacOS (Intel): 0x56b480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xc0960
     * @note[short] Android
     */
    void uploadLevelComment(int levelID, std::string content, int percent);

    /**
     * @note[short] Android
     */
    TodoReturn uploadLevelControls(int p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4ad384
     * @note[short] MacOS (Intel): 0x11b580
     * @note[short] Windows: 0x5439c0
     * @note[short] Android
     */
    void uploadLevelList(GJLevelList* list);

    /**
     * @note[short] Android
     */
    TodoReturn uploadModRoomComment(int p0, std::string p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x4bb28c
     * @note[short] MacOS (Intel): 0x561530
     * @note[short] Android
     */
    void uploadUserMessage(int accountID, std::string subject, std::string content);

    /**
     * @note[short] MacOS (ARM): 0x496a44
     * @note[short] MacOS (Intel): 0x53fd30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa7000
     * @note[short] Android
     */
    int userIDForAccountID(int id);

    /**
     * @note[short] MacOS (ARM): 0x496a60
     * @note[short] MacOS (Intel): 0x53fd50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa701c
     * @note[short] Android
     */
    GJUserScore* userInfoForAccountID(int id);

    /**
     * @note[short] MacOS (ARM): 0x496638
     * @note[short] MacOS (Intel): 0x53f890
     * @note[short] Windows: 0x21b6a0
     * @note[short] iOS: 0xa6da0
     * @note[short] Android
     */
    std::string userNameForUserID(int id);

    /**
     * @note[short] Android
     */
    TodoReturn vaultTimedType(SearchType p0, GJTimedLevelType& p1);

    /**
     * @note[short] MacOS (ARM): 0x4a44a8
     * @note[short] MacOS (Intel): 0x54ea40
     * @note[short] iOS: 0xb0914
     * @note[short] Android
     */
    bool verifyContainerOnlyHasLevels(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x496a88
     * @note[short] MacOS (Intel): 0x53fd90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa7044
     * @note[short] Android
     */
    void verifyLevelState(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn writePlatformerSaveJournal(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x4abb38
     * @note[short] MacOS (Intel): 0x5572f0
     * @note[short] Windows: 0x2285f0
     * @note[short] iOS: 0xb4e7c
     * @note[short] Android
     */
    std::string writeSpecialFilters(GJSearchObject* object);
    std::set<std::string> m_queuedLists;
    cocos2d::CCDictionary* m_mainLevels;
    cocos2d::CCDictionary* m_searchFilters;
    cocos2d::CCDictionary* m_onlineLevels;
    cocos2d::CCDictionary* m_storedLevelData;
    cocos2d::CCDictionary* m_followedCreators;
    cocos2d::CCDictionary* m_favoriteLists;
    cocos2d::CCDictionary* m_downloadedLevels;
    cocos2d::CCDictionary* m_likedLevels;
    cocos2d::CCDictionary* m_ratedLevels;
    cocos2d::CCDictionary* m_ratedDemons;
    cocos2d::CCDictionary* m_reportedLevels;
    cocos2d::CCDictionary* m_onlineFolders;
    cocos2d::CCDictionary* m_localLevelsFolders;
    cocos2d::CCDictionary* m_dailyLevels;
    int m_dailyTimeLeft;
    int m_dailyID;
    int m_activeDailyID;
    int m_weeklyTimeLeft;
    int m_weeklyID;
    int m_activeWeeklyID;
    int m_eventTimeLeft;
    int m_eventID;
    int m_activeEventID;
    cocos2d::CCDictionary* m_gauntletLevels;
    std::map<std::string, bool> m_availableFilters;
    cocos2d::CCDictionary* m_timerDict;
    cocos2d::CCDictionary* m_knownUsers;
    cocos2d::CCDictionary* m_accountIDtoUserIDDict;
    cocos2d::CCDictionary* m_userIDtoAccountIDDict;
    cocos2d::CCDictionary* m_storedLevels;
    cocos2d::CCDictionary* m_pageInfo;
    cocos2d::CCDictionary* m_unkDict20;
    cocos2d::CCDictionary* m_savedPacks;
    cocos2d::CCDictionary* m_savedGauntlets;
    cocos2d::CCDictionary* m_downloadObjects;
    cocos2d::CCDictionary* m_friendReqAndUserBlocks;
    cocos2d::CCDictionary* m_storedUserInfo;
    cocos2d::CCDictionary* m_friendRequests;
    cocos2d::CCDictionary* m_userMessages;
    cocos2d::CCDictionary* m_userReplies;
    cocos2d::CCDictionary* m_localLeaderboardLevels;
    std::string m_searchKey;
    std::string m_mapPackKey;
    LeaderboardType m_leaderboardType;
    LeaderboardStat m_leaderboardStat;
    bool m_returnToLocalLevels;
    LevelManagerDelegate* m_levelManagerDelegate;
    LevelDownloadDelegate* m_levelDownloadDelegate;
    LevelCommentDelegate* m_levelCommentDelegate;
    CommentUploadDelegate* m_commentUploadDelegate;
    LevelUploadDelegate* m_levelUploadDelegate;
    ListUploadDelegate* m_listUploadDelegate;
    LevelUpdateDelegate* m_levelUpdateDelegate;
    LeaderboardManagerDelegate* m_leaderboardManagerDelegate;
    LevelDeleteDelegate* m_levelDeleteDelegate;
    LevelListDeleteDelegate* m_levelListDeleteDelegate;
    UserInfoDelegate* m_userInfoDelegate;
    UploadActionDelegate* m_uploadActionDelegate;
    UserListDelegate* m_userListDelegate;
    FriendRequestDelegate* m_friendRequestDelegate;
    MessageListDelegate* m_messageListDelegate;
    DownloadMessageDelegate* m_downloadMessageDelegate;
    UploadMessageDelegate* m_uploadMessageDelegate;
    GJRewardDelegate* m_GJRewardDelegate;
    GJOnlineRewardDelegate* m_GJOnlineRewardDelegate;
    GJChallengeDelegate* m_GJChallengeDelegate;
    GJDailyLevelDelegate* m_GJDailyLevelDelegate;
    OnlineListDelegate* m_onlineListDelegate;
    LevelRateInfoDelegate* m_levelRateInfoDelegate;
    SearchType m_searchType;
    int m_mapPack;
    std::string m_tempSave;
    cocos2d::CCString* m_trueString;
    cocos2d::CCArray* m_smartTemplates;
    GJSmartTemplate* m_smartTemplate;
    bool m_testedNetwork;
};
