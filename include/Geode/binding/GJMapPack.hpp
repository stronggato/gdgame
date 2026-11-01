#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJMapPack : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMapPack";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMapPack, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd7f60
     * @note[short] Android: Out of line
     */
     GJMapPack();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd3d64
     * @note[short] Android: Rebinded
     */
     ~GJMapPack();

    /**
     * @note[short] MacOS (ARM): 0x4dbd5c
     * @note[short] MacOS (Intel): 0x58b560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd3dd8
     * @note[short] Android
     */
    static GJMapPack* create();

    /**
     * @note[short] MacOS (ARM): 0x499988
     * @note[short] MacOS (Intel): 0x543200
     * @note[short] iOS: 0xa91d8
     * @note[short] Android
     */
    static GJMapPack* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dc178
     * @note[short] MacOS (Intel): 0x58b9d0
     * @note[short] Windows: 0x269560
     * @note[short] iOS: 0xd4064
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4dc1d8
     * @note[short] MacOS (Intel): 0x58ba50
     * @note[short] Windows: 0x2698a0
     * @note[short] iOS: 0xd40c4
     * @note[short] Android
     */
    int completedMaps();

    /**
     * @note[short] MacOS (ARM): 0x4dc2a0
     * @note[short] MacOS (Intel): 0x58bb00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd4160
     * @note[short] Android
     */
    bool hasCompletedMapPack();

    /**
     * @note[short] MacOS (ARM): 0x4dbf08
     * @note[short] MacOS (Intel): 0x58b730
     * @note[short] Windows: 0x3c2930
     * @note[short] iOS: 0xd3ee0
     * @note[short] Android
     */
    void parsePackColors(std::string textColorStr, std::string barColorStr);

    /**
     * @note[short] MacOS (ARM): 0x4dbe00
     * @note[short] MacOS (Intel): 0x58b620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd3e4c
     * @note[short] Android
     */
    void parsePackLevels(std::string levelsStr);

    /**
     * @note[short] MacOS (ARM): 0x4dc1c8
     * @note[short] MacOS (Intel): 0x58ba30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd40b4
     * @note[short] Android
     */
    int totalMaps();
    cocos2d::CCArray* m_levels;
    int m_packID;
    GJDifficulty m_difficulty;
    int m_stars;
    int m_coins;
    std::string m_packName;
    std::string m_levelStrings;
    cocos2d::ccColor3B m_textColour;
    cocos2d::ccColor3B m_barColour;
    int m_MId;
    bool m_isGauntlet;
};
