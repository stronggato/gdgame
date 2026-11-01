#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ParticlePreviewLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ParticlePreviewLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ParticlePreviewLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Windows: 0x5bd400
     * @note[short] Android: Rebinded
     */
    virtual  ~ParticlePreviewLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ParticlePreviewLayer();

    /**
     * @note[short] MacOS (ARM): 0x3d2fb8
     * @note[short] MacOS (Intel): 0x466fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36a690
     * @note[short] Android
     */
    static ParticlePreviewLayer* create(cocos2d::CCParticleSystemQuad* particleSystem);

    /**
     * @note[short] MacOS (ARM): 0x3d73d8
     * @note[short] MacOS (Intel): 0x46ba60
     * @note[short] Windows: 0x5c7460
     * @note[short] iOS: 0x36e3bc
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1ebabc
     * @note[short] MacOS (Intel): 0x46b8e0
     * @note[short] Windows: 0x5c7380
     * @note[short] iOS: 0x36e2dc
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x3d71d8
     * @note[short] MacOS (Intel): 0x46b880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36e264
     * @note[short] Android
     */
    bool init(cocos2d::CCParticleSystemQuad* particleSystem);

    /**
     * @note[short] MacOS (ARM): 0x3d73d0
     * @note[short] MacOS (Intel): 0x46ba50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void postVisit();

    /**
     * @note[short] MacOS (ARM): 0x3d7330
     * @note[short] MacOS (Intel): 0x46b9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void preVisitWithClippingRect(cocos2d::CCRect rect);
    int m_particleMode;
    int m_drawMode;
    cocos2d::CCParticleSystemQuad* m_particleSystem;
    bool m_gravityMode;
};
