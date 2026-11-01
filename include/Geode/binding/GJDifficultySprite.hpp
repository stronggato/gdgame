#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>

class GJDifficultySprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJDifficultySprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDifficultySprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x7e610
     * @note[short] Android: Rebinded
     */
    virtual  ~GJDifficultySprite();

    /**
     * @note[short] MacOS (ARM): 0x247310
     * @note[short] MacOS (Intel): 0x2a4a00
     * @note[short] Windows: 0x3a8450
     * @note[short] iOS: 0x37e260
     * @note[short] Android
     */
    static GJDifficultySprite* create(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x2474bc
     * @note[short] MacOS (Intel): 0x2a4b50
     * @note[short] Windows: 0x3a8540
     * @note[short] iOS: 0x37e38c
     * @note[short] Android
     */
    static std::string getDifficultyFrame(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x247424
     * @note[short] MacOS (Intel): 0x2a4ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37e308
     * @note[short] Android
     */
    bool init(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x2475fc
     * @note[short] MacOS (Intel): 0x2a4c80
     * @note[short] iOS: 0x37e44c
     * @note[short] Android
     */
    void updateDifficultyFrame(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x247778
     * @note[short] MacOS (Intel): 0x2a4e00
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x37e5c8
     * @note[short] Android
     */
    void updateFeatureState(GJFeatureState state);

    /**
     * @note[short] MacOS (ARM): 0x24773c
     * @note[short] MacOS (Intel): 0x2a4db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37e58c
     * @note[short] Android
     */
    void updateFeatureStateFromLevel(GJGameLevel* level);
    GJFeatureState m_featureState;
};
