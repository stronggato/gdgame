#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class AudioLineGuideGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "AudioLineGuideGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AudioLineGuideGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633d00
     * @note[short] Android: Rebinded
     */
    virtual  ~AudioLineGuideGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AudioLineGuideGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1cbbd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AudioLineGuideGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x18205c
     * @note[short] MacOS (Intel): 0x1cbcb0
     * @note[short] Windows: 0x65e2c0
     * @note[short] iOS: 0x43ab94
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (Intel): 0x1cca60
     * @note[short] Windows: 0x65e610
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x65e330
     * @note[short] iOS: 0x43abe4
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    int m_beatsPerMinute;
    int m_beatsPerBar;
    Speed m_speed;
    bool m_disabled;
};
