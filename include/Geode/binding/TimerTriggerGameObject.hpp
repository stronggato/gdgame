#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class TimerTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TimerTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TimerTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x634820
     * @note[short] Android: Rebinded
     */
    virtual  ~TimerTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TimerTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x17bc34
     * @note[short] MacOS (Intel): 0x1c3dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4387b8
     * @note[short] Android
     */
    static TimerTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x17bd5c
     * @note[short] MacOS (Intel): 0x1c3f00
     * @note[short] Windows: 0x65c280
     * @note[short] iOS: 0x43888c
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x17d59c
     * @note[short] MacOS (Intel): 0x1c5e20
     * @note[short] Windows: 0x65c960
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x65c3a0
     * @note[short] iOS: 0x43893c
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x17bd14
     * @note[short] MacOS (Intel): 0x1c3eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    double m_startTime;
    double m_targetTime;
    bool m_stopTimeEnabled;
    bool m_dontOverride;
    bool m_ignoreTimeWarp;
    float m_timeMod;
    bool m_startPaused;
    bool m_multiActivate;
    int m_controlType;
};
