#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class TriggerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TriggerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TriggerControlGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x634880
     * @note[short] Android: Rebinded
     */
    virtual  ~TriggerControlGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TriggerControlGameObject();

    /**
     * @note[short] MacOS (ARM): 0x17232c
     * @note[short] MacOS (Intel): 0x1d1210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x434bc0
     * @note[short] Android
     */
    static TriggerControlGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x18725c
     * @note[short] MacOS (Intel): 0x1d1ed0
     * @note[short] Windows: 0x660570
     * @note[short] iOS: 0x43cfa4
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x187004
     * @note[short] MacOS (Intel): 0x1d1c80
     * @note[short] Windows: 0x660480
     * @note[short] iOS: 0x43cdec
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x660260
     * @note[short] iOS: 0x43cba0
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x18681c
     * @note[short] MacOS (Intel): 0x66e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43cb44
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1870f4
     * @note[short] MacOS (Intel): 0x1d1d70
     * @note[short] iOS: 0x43cec8
     * @note[short] Android
     */
    void updateTriggerControlFrame();
    std::string m_triggerControlFrame;
    GJActionCommand m_customTriggerValue;
};
