#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class EndTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EndTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x634070
     * @note[short] Android: Rebinded
     */
    virtual  ~EndTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EndTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x176184
     * @note[short] MacOS (Intel): 0x1bc9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x436330
     * @note[short] Android
     */
    static EndTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x17624c
     * @note[short] MacOS (Intel): 0x1bcab0
     * @note[short] Windows: 0x659e10
     * @note[short] iOS: 0x4363ec
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x17629c
     * @note[short] MacOS (Intel): 0x1bcb00
     * @note[short] Windows: 0x659e80
     * @note[short] iOS: 0x43643c
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x176e18
     * @note[short] Windows: 0x65a250
     * @note[short] iOS: 0x4367d4
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x659f80
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    bool m_noEffects;
    bool m_noSFX;
    bool m_instant;
};
