#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/SeedValue.hpp>

class GJChallengeItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJChallengeItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChallengeItem, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x2d3ec0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJChallengeItem();

    /**
     * @note[short] MacOS (ARM): 0x4fe0c
     * @note[short] MacOS (Intel): 0x56260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dcac0
     * @note[short] Android
     */
    static GJChallengeItem* create();

    /**
     * @note[short] MacOS (ARM): 0x4fcbc
     * @note[short] MacOS (Intel): 0x56100
     * @note[short] Windows: 0x2f6fc0
     * @note[short] iOS: 0x122894
     * @note[short] Android
     */
    static GJChallengeItem* create(GJChallengeType challengeType, int goal, int reward, int timeLeft, std::string questName);

    /**
     * @note[short] MacOS (ARM): 0x4fabc
     * @note[short] MacOS (Intel): 0x55ef0
     * @note[short] Windows: 0x2f6d50
     * @note[short] iOS: 0x3dc860
     * @note[short] Android
     */
    static GJChallengeItem* createFromString(std::string string);

    /**
     * @note[short] MacOS (ARM): 0x4fed0
     * @note[short] MacOS (Intel): 0x56320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dcbc8
     * @note[short] Android
     */
    static GJChallengeItem* createWithCoder(DS_Dictionary* dsdict);

    /**
     * @note[short] MacOS (ARM): 0x50078
     * @note[short] MacOS (Intel): 0x564c0
     * @note[short] Windows: 0x2f7140
     * @note[short] iOS: 0x3dcd4c
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dsdict);

    /**
     * @note[short] MacOS (ARM): 0x50154
     * @note[short] MacOS (Intel): 0x56590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dce28
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4ff24
     * @note[short] MacOS (Intel): 0x56360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dcbf8
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dsdict);

    /**
     * @note[short] MacOS (ARM): 0x32f84
     * @note[short] MacOS (Intel): 0x39120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cfc18
     * @note[short] Android
     */
    void incrementCount(int add);

    /**
     * @note[short] MacOS (ARM): 0x4fe44
     * @note[short] MacOS (Intel): 0x56290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dcb3c
     * @note[short] Android
     */
    bool init(GJChallengeType challengeType, int goal, int reward, int timeLeft, std::string questName);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setCount(int value);
    GJChallengeType m_challengeType;
    geode::SeedValueRSV m_count;
    geode::SeedValueRSV m_reward;
    geode::SeedValueRSV m_goal;
    int m_timeLeft;
    bool m_canClaim;
    int m_position;
    std::string m_name;
};
