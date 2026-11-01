#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class PlayerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "PlayerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerControlGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x634070
     * @note[short] Android: Rebinded
     */
    virtual  ~PlayerControlGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     PlayerControlGameObject();

    /**
     * @note[short] MacOS (ARM): 0x18455c
     * @note[short] MacOS (Intel): 0x1ce910
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43bc84
     * @note[short] Android
     */
    static PlayerControlGameObject* create();

    /**
     * @note[short] Windows: 0x65f650
     * @note[short] iOS: 0x43bd3c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1852ec
     * @note[short] MacOS (Intel): 0x18eb10
     * @note[short] Windows: 0x65fa00
     * @note[short] iOS: 0x43c100
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x65f6c0
     * @note[short] iOS: 0x43bd8c
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    bool m_stopJump;
    bool m_stopMove;
    bool m_stopRotation;
    bool m_stopSlide;
};
