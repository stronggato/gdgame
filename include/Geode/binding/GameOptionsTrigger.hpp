#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class GameOptionsTrigger : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "GameOptionsTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsTrigger, EffectGameObject)

    /**
     * @note[short] Windows: 0x634540
     * @note[short] Android: Rebinded
     */
    virtual  ~GameOptionsTrigger();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GameOptionsTrigger();

    /**
     * @note[short] MacOS (Intel): 0x18ed30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GameOptionsTrigger* create(char const* frame);

    /**
     * @note[short] MacOS (Intel): 0x190db0
     * @note[short] Windows: 0x63d3e0
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x63cdb0
     * @note[short] iOS: 0x423ac4
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    GameOptionsSetting m_streakAdditive;
    GameOptionsSetting m_unlinkDualGravity;
    GameOptionsSetting m_hideGround;
    GameOptionsSetting m_hideP1;
    GameOptionsSetting m_hideP2;
    GameOptionsSetting m_disableP1Controls;
    GameOptionsSetting m_disableP2Controls;
    GameOptionsSetting m_hideMG;
    GameOptionsSetting m_hideAttempts;
    GameOptionsSetting m_editRespawnTime;
    float m_respawnTime;
    GameOptionsSetting m_audioOnDeath;
    GameOptionsSetting m_noDeathSFX;
    GameOptionsSetting m_boostSlide;
};
