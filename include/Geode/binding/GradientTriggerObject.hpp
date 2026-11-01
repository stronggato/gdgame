#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class GradientTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "GradientTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GradientTriggerObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633dc0
     * @note[short] Android: Rebinded
     */
    virtual  ~GradientTriggerObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GradientTriggerObject();

    /**
     * @note[short] MacOS (Intel): 0x17afb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GradientTriggerObject* create();

    /**
     * @note[short] MacOS (ARM): 0x140914
     * @note[short] MacOS (Intel): 0x17b090
     * @note[short] Windows: 0x6372a0
     * @note[short] iOS: 0x41da70
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x637840
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x637320
     * @note[short] iOS: 0x41dac4
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    int m_blendingLayer;
    int m_blendingMode;
    int m_gradientID;
    int m_upBottomLeftID;
    int m_downBottomRightID;
    int m_leftTopLeftID;
    int m_rightTopRightID;
    bool m_vertexMode;
    bool m_disable;
    bool m_disableAll;
    float m_previewOpacity;
};
