#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJLocalScore : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJLocalScore";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJLocalScore, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x14d3b0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJLocalScore();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJLocalScore();

    /**
     * @note[short] MacOS (ARM): 0x4dc2ec
     * @note[short] MacOS (Intel): 0x58bb60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd41ac
     * @note[short] Android
     */
    static GJLocalScore* create(int points, int type);

    /**
     * @note[short] MacOS (ARM): 0x4dc35c
     * @note[short] MacOS (Intel): 0x58bbd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int points, int type);
    int m_points;
    LevelLeaderboardType m_type;
    bool m_currentScore;
};
