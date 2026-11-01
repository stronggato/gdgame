#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class SpawnParticleGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnParticleGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633dc0
     * @note[short] Android: Rebinded
     */
    virtual  ~SpawnParticleGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43ec3c
     * @note[short] Android: Out of line
     */
     SpawnParticleGameObject();

    /**
     * @note[short] MacOS (ARM): 0x187280
     * @note[short] MacOS (Intel): 0x1d1f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xa5c78
     * @note[short] Android
     */
    static SpawnParticleGameObject* create();

    /**
     * @note[short] Windows: 0x660790
     * @note[short] iOS: 0x43d03c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1888b8
     * @note[short] Windows: 0x660d70
     * @note[short] iOS: 0x1ad288
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x660800
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    cocos2d::CCPoint m_offset;
    cocos2d::CCPoint m_offsetVariance;
    bool m_matchRotation;
    float m_rotation;
    float m_rotationVariance;
    float m_scale;
    float m_scaleVariance;
};
