#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class CameraTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CameraTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CameraTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x634820
     * @note[short] Android: Rebinded
     */
    virtual  ~CameraTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CameraTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x177e60
     * @note[short] MacOS (Intel): 0x1bece0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x436f00
     * @note[short] Android
     */
    static CameraTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x177f88
     * @note[short] MacOS (Intel): 0x1bee20
     * @note[short] Windows: 0x65a8f0
     * @note[short] iOS: 0x436fd4
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x17b2dc
     * @note[short] MacOS (Intel): 0x1c3360
     * @note[short] Windows: 0x65b910
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x65ac50
     * @note[short] iOS: 0x437190
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x177f40
     * @note[short] MacOS (Intel): 0x1bedd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    bool m_exitStatic;
    bool m_followObject;
    float m_followEasing;
    int m_edgeDirection;
    bool m_smoothVelocity;
    float m_velocityModifier;
    bool m_exitInstant;
    float m_previewOpacity;
};
