#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCSpriteCOpacity.hpp>

class GJPathSprite : public CCSpriteCOpacity {
public:
    static constexpr auto CLASS_NAME = "GJPathSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathSprite, CCSpriteCOpacity)

    /**
     * @note[short] Windows: 0x7e610
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPathSprite();

    /**
     * @note[short] MacOS (ARM): 0x27f210
     * @note[short] MacOS (Intel): 0x2e8fc0
     * @note[short] Windows: 0x3943b0
     * @note[short] iOS: 0x45cb44
     * @note[short] Android
     */
    static GJPathSprite* create(int path);

    /**
     * @note[short] MacOS (ARM): 0x283428
     * @note[short] MacOS (Intel): 0x2ed6b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45fd64
     * @note[short] Android
     */
    void addRankLabel(int path);

    /**
     * @note[short] MacOS (ARM): 0x282ec0
     * @note[short] MacOS (Intel): 0x2ed180
     * @note[short] Windows: 0x394a40
     * @note[short] iOS: 0x45f9e8
     * @note[short] Android
     */
    void addShardSprite();

    /**
     * @note[short] MacOS (ARM): 0x282068
     * @note[short] MacOS (Intel): 0x2ec130
     * @note[short] Windows: 0x9c4a0
     * @note[short] iOS: 0x45f140
     * @note[short] Android
     */
    void changeToLockedArt();

    /**
     * @note[short] MacOS (ARM): 0x2832f0
     * @note[short] MacOS (Intel): 0x2ed590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45fcbc
     * @note[short] Android
     */
    bool init(int path);

    /**
     * @note[short] MacOS (ARM): 0x27f2bc
     * @note[short] MacOS (Intel): 0x2e9060
     * @note[short] Windows: 0x394560
     * @note[short] iOS: 0x45cbe4
     * @note[short] Android
     */
    void updateState();
    int m_pathNumber;
};
