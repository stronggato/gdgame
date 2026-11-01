#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class CountTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CountTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CountTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633d00
     * @note[short] Android: Rebinded
     */
    virtual  ~CountTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CountTriggerGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1b7910
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CountTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x172444
     * @note[short] MacOS (Intel): 0x1b7a30
     * @note[short] Windows: 0x658510
     * @note[short] iOS: 0x434c84
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x154ed8
     * @note[short] MacOS (Intel): 0x1b7ca0
     * @note[short] Windows: 0x658990
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x658d20
     * @note[short] iOS: 0x43514c
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1723fc
     * @note[short] MacOS (Intel): 0x1b79e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    int m_pickupCount;
    int m_pickupTriggerMode;
    bool m_multiActivate;
    bool m_isOverride;
    float m_pickupTriggerMultiplier;
};
