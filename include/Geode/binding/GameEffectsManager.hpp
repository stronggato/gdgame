#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GameEffectsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameEffectsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameEffectsManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x197a88
     * @note[short] MacOS (Intel): 0x1e4690
     * @note[short] Android
     */
    static GameEffectsManager* create(PlayLayer* playLayer);

    /**
     * @note[short] MacOS (ARM): 0x197c98
     * @note[short] MacOS (Intel): 0x1e4840
     * @note[short] Android
     */
    void addParticleEffect(cocos2d::CCParticleSystemQuad* particle, int unused);

    /**
     * @note[short] MacOS (ARM): 0x197ae4
     * @note[short] MacOS (Intel): 0x1e46f0
     * @note[short] Android
     */
    bool init(PlayLayer* playLayer);

    /**
     * @note[short] MacOS (ARM): 0x197af0
     * @note[short] MacOS (Intel): 0x1e4700
     * @note[short] Android
     */
    void scaleParticle(cocos2d::CCParticleSystemQuad* particle, float scale);
    PlayLayer* m_playLayer;
};
