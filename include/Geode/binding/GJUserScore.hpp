#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJUserScore : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUserScore";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUserScore, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x216490
     * @note[short] iOS: 0xd7fec
     * @note[short] Android: Out of line
     */
     GJUserScore();

    /**
     * @note[short] Windows: 0x216b00
     * @note[short] Android: Rebinded
     */
    virtual  ~GJUserScore();

    /**
     * @note[short] MacOS (ARM): 0x84364c
     * @note[short] MacOS (Intel): 0x574360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5202b4
     * @note[short] Android
     */
    static GJUserScore* create();

    /**
     * @note[short] MacOS (ARM): 0x49a534
     * @note[short] MacOS (Intel): 0x543ef0
     * @note[short] iOS: 0xa998c
     * @note[short] Android
     */
    static GJUserScore* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dc4ec
     * @note[short] MacOS (Intel): 0x58be20
     * @note[short] Windows: 0x26b8f0
     * @note[short] iOS: 0xd4330
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4dc560
     * @note[short] MacOS (Intel): 0x58beb0
     * @note[short] Windows: 0x26b940
     * @note[short] iOS: 0xd4378
     * @note[short] Android
     */
    bool isCurrentUser();

    /**
     * @note[short] MacOS (ARM): 0x4dc534
     * @note[short] MacOS (Intel): 0x58be70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void mergeWithScore(GJUserScore* score);
    std::string m_userName;
    std::string m_userUDID;
    int m_scoreType;
    int m_userID;
    int m_accountID;
    int m_stars;
    int m_moons;
    int m_diamonds;
    int m_demons;
    int m_playerRank;
    int m_creatorPoints;
    int m_secretCoins;
    int m_userCoins;
    int m_iconID;
    int m_color1;
    int m_color2;
    int m_color3;
    int m_special;
    IconType m_iconType;
    int m_messageState;
    int m_friendStatus;
    int m_commentHistoryStatus;
    std::string m_youtubeURL;
    std::string m_twitterURL;
    std::string m_twitchURL;
    std::string m_discordUsername;
    std::string m_instagramURL;
    std::string m_tiktokURL;
    std::string m_customString;
    int m_playerCube;
    int m_playerShip;
    int m_playerBall;
    int m_playerUfo;
    int m_playerWave;
    int m_playerRobot;
    int m_playerSpider;
    int m_playerSwing;
    int m_playerJetpack;
    int m_playerStreak;
    bool m_glowEnabled;
    int m_playerExplosion;
    int m_modBadge;
    int m_globalRank;
    int m_friendReqStatus;
    int m_newMsgCount;
    int m_friendReqCount;
    int m_newFriendCount;
    bool m_newFriendRequest;
    bool m_toggled;
    std::string m_unkString;
    double m_lobbyJoinTime;
    std::string m_demonInfo;
    std::string m_starsInfo;
    std::string m_platformerInfo;
    int m_levelMode;
    LevelLeaderboardMode m_leaderboardMode;
    LeaderboardStat m_leaderboardStat;
};
