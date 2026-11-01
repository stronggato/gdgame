#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class RingObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RingObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RingObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x634070
     * @note[short] Android: Rebinded
     */
    virtual  ~RingObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RingObject();

    /**
     * @note[short] MacOS (ARM): 0x154bd0
     * @note[short] MacOS (Intel): 0x194610
     * @note[short] Windows: 0x63fb80
     * @note[short] iOS: 0x42620c
     * @note[short] Android
     */
    static RingObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x154e64
     * @note[short] MacOS (Intel): 0x1948c0
     * @note[short] Windows: 0x63ff10
     * @note[short] iOS: 0x426444
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x154ec4
     * @note[short] MacOS (Intel): 0x194920
     * @note[short] Windows: 0x4fe4f0
     * @note[short] iOS: 0x426494
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x154e38
     * @note[short] MacOS (Intel): 0x1948a0
     * @note[short] Windows: 0x63fef0
     * @note[short] iOS: 0x426418
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x154ed8
     * @note[short] MacOS (Intel): 0x194950
     * @note[short] Windows: 0x63ffd0
     * @note[short] iOS: 0x4264a8
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x6400f0
     * @note[short] iOS: 0x4265a8
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x154e94
     * @note[short] MacOS (Intel): 0x1948f0
     * @note[short] Windows: 0x63ff40
     * @note[short] iOS: 0x42646c
     * @note[short] Android
     */
    virtual void setRScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x154cec
     * @note[short] MacOS (Intel): 0x194740
     * @note[short] Windows: 0x63fc30
     * @note[short] iOS: 0x4262cc
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x154ec8
     * @note[short] MacOS (Intel): 0x194930
     * @note[short] Windows: 0x63ffc0
     * @note[short] iOS: 0x426498
     * @note[short] Android
     */
    virtual bool shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS (ARM): 0x154cf8
     * @note[short] MacOS (Intel): 0x194750
     * @note[short] Windows: 0x63fc40
     * @note[short] iOS: 0x4262d8
     * @note[short] Android
     */
    virtual void powerOnObject(int state);

    /**
     * @note[short] MacOS (ARM): 0x154c9c
     * @note[short] MacOS (Intel): 0x1946e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x154d50
     * @note[short] MacOS (Intel): 0x1947b0
     * @note[short] Windows: 0x63fce0
     * @note[short] iOS: 0x426330
     * @note[short] Android
     */
    void spawnCircle();
    bool m_claimTouch;
    bool m_isSpawnOnly;
};
