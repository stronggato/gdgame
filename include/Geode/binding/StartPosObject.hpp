#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class StartPosObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "StartPosObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StartPosObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     StartPosObject();

    /**
     * @note[short] MacOS (ARM): 0x15cc8c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42b464
     * @note[short] Android: Rebinded
     */
     ~StartPosObject();

    /**
     * @note[short] MacOS (ARM): 0x15cd74
     * @note[short] MacOS (Intel): 0x19deb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42b4c8
     * @note[short] Android
     */
    static StartPosObject* create();

    /**
     * @note[short] MacOS (ARM): 0x15ce80
     * @note[short] MacOS (Intel): 0x19dfc0
     * @note[short] Windows: 0x64f5a0
     * @note[short] iOS: 0x42b554
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x15cfc4
     * @note[short] MacOS (Intel): 0x19e110
     * @note[short] Windows: 0x64f750
     * @note[short] iOS: 0x42b650
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x15cfc8
     * @note[short] MacOS (Intel): 0x19e120
     * @note[short] Windows: 0x64f760
     * @note[short] iOS: 0x42b654
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] Android
     */
    TodoReturn getDisplayName();

    /**
     * @note[short] MacOS (ARM): 0x15cf64
     * @note[short] MacOS (Intel): 0x19e0b0
     * @note[short] Windows: 0x64f6b0
     * @note[short] iOS: 0x42b614
     * @note[short] Android
     */
    void loadSettingsFromString(std::string objectString);

    /**
     * @note[short] MacOS (ARM): 0x15cf1c
     * @note[short] MacOS (Intel): 0x19e060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10d550
     * @note[short] Android
     */
    void setSettings(LevelSettingsObject* settings);
    LevelSettingsObject* m_startSettings;
};
