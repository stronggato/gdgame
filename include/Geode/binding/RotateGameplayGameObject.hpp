#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class RotateGameplayGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RotateGameplayGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RotateGameplayGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x634820
     * @note[short] Android: Rebinded
     */
    virtual  ~RotateGameplayGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RotateGameplayGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1d3f60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static RotateGameplayGameObject* create();

    /**
     * @note[short] Windows: 0x6611e0
     * @note[short] iOS: 0x43db40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x18a5ec
     * @note[short] MacOS (Intel): 0x1d5e00
     * @note[short] Windows: 0x661a70
     * @note[short] iOS: 0x43e410
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS (ARM): 0x18a29c
     * @note[short] MacOS (Intel): 0x1d5a40
     * @note[short] Windows: 0x661780
     * @note[short] iOS: 0x43e104
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x661250
     * @note[short] iOS: 0x43db90
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x18a580
     * @note[short] MacOS (Intel): 0x1d5db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43e3b4
     * @note[short] Android
     */
    void updateGameplayRotation();
    int m_moveDirection;
    int m_groundDirection;
    bool m_editVelocity;
    bool m_overrideVelocity;
    float m_velocityModX;
    float m_velocityModY;
    bool m_changeChannel;
    bool m_channelOnly;
    int m_targetChannelID;
    bool m_instantOffset;
    bool m_dontSlide;
};
