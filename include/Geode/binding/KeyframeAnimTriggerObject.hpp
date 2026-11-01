#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class KeyframeAnimTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeAnimTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeAnimTriggerObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633ca0
     * @note[short] Android: Rebinded
     */
    virtual  ~KeyframeAnimTriggerObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     KeyframeAnimTriggerObject();

    /**
     * @note[short] MacOS (Intel): 0x19bc20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static KeyframeAnimTriggerObject* create();

    /**
     * @note[short] Windows: 0x64eb50
     * @note[short] iOS: 0x42a94c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x15bed4
     * @note[short] MacOS (Intel): 0x19cda0
     * @note[short] Windows: 0x64ef40
     * @note[short] iOS: 0x42693c
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x64ebc0
     * @note[short] iOS: 0x42a99c
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    float m_timeMod;
    float m_positionXMod;
    float m_positionYMod;
    float m_rotationMod;
    float m_scaleXMod;
    float m_scaleYMod;
};
