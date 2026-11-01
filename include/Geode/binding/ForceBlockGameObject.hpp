#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class ForceBlockGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ForceBlockGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ForceBlockGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633ca0
     * @note[short] Android: Rebinded
     */
    virtual  ~ForceBlockGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ForceBlockGameObject();

    /**
     * @note[short] MacOS (ARM): 0x182c94
     * @note[short] MacOS (Intel): 0x1ccbf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43b064
     * @note[short] Android
     */
    static ForceBlockGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1839fc
     * @note[short] Windows: 0x65eaf0
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x65e790
     * @note[short] iOS: 0x43b128
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x183c78
     * @note[short] MacOS (Intel): 0x1cdf30
     * @note[short] Windows: 0x10cc10
     * @note[short] iOS: 0x43b708
     * @note[short] Android
     */
    cocos2d::CCPoint calculateForceToTarget(GameObject* target);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_force;
    float m_minForce;
    float m_maxForce;
    bool m_relativeForce;
    bool m_forceRange;
    int m_forceID;
};
