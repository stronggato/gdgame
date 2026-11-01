#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GhostTrailEffect : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GhostTrailEffect";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GhostTrailEffect, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x768d0
     * @note[short] Android: Rebinded
     */
    virtual  ~GhostTrailEffect();

    /**
     * @note[short] Android
     */
    static GhostTrailEffect* create();

    /**
     * @note[short] MacOS (ARM): 0x707f8
     * @note[short] MacOS (Intel): 0x6ceaa0
     * @note[short] Windows: 0x76a00
     * @note[short] iOS: 0x204630
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5e6468
     * @note[short] MacOS (Intel): 0x6cf050
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5e6458
     * @note[short] MacOS (Intel): 0x6cf030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38fb74
     * @note[short] Android
     */
    void doBlendAdditive();

    /**
     * @note[short] MacOS (ARM): 0x5e5f5c
     * @note[short] MacOS (Intel): 0x6ceb00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38f67c
     * @note[short] Android
     */
    void runWithTarget(cocos2d::CCSprite* sprite, float snapshotInterval, float fadeInterval, float duration, float ghostScale, bool scaleTwice);

    /**
     * @note[short] MacOS (ARM): 0x5e6408
     * @note[short] MacOS (Intel): 0x6ceff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38fb24
     * @note[short] Android
     */
    void stopTrail();

    /**
     * @note[short] MacOS (ARM): 0x5e6010
     * @note[short] MacOS (Intel): 0x6ceba0
     * @note[short] Windows: 0x76a60
     * @note[short] iOS: 0x38f72c
     * @note[short] Android
     */
    void trailSnapshot(float dt);
    float m_snapshotInterval;
    float m_fadeInterval;
    float m_ghostScale;
    bool m_scaleTwice;
    float m_playerScale;
    cocos2d::ccBlendFunc m_blendFunc;
    cocos2d::CCSprite* m_iconSprite;
    PlayerObject* m_playerObject;
    cocos2d::CCLayer* m_objectLayer;
    float m_opacity;
    void* m_delegate;
    cocos2d::ccColor3B m_color;
    cocos2d::CCPoint m_position;
    bool m_unk194;
};
