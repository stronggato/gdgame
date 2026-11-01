#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class TransformTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TransformTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TransformTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633ca0
     * @note[short] Android: Rebinded
     */
    virtual  ~TransformTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TransformTriggerGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1ba3c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TransformTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1744f4
     * @note[short] MacOS (Intel): 0x1ba4f0
     * @note[short] Windows: 0x659390
     * @note[short] iOS: 0x4358fc
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x174514
     * @note[short] MacOS (Intel): 0x1ba520
     * @note[short] Windows: 0x6593b0
     * @note[short] iOS: 0x435920
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x659780
     * @note[short] iOS: 0x435c40
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1744ac
     * @note[short] MacOS (Intel): 0x1ba4a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_objectScaleX;
    float m_objectScaleY;
    float m_property450;
    float m_property451;
    bool m_onlyMove;
    bool m_divideX;
    bool m_divideY;
    bool m_relativeRotation;
    bool m_relativeScale;
};
