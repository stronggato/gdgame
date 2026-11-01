#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class ObjectControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ObjectControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ObjectControlGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633c40
     * @note[short] Android: Rebinded
     */
    virtual  ~ObjectControlGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ObjectControlGameObject();

    /**
     * @note[short] MacOS (ARM): 0x185450
     * @note[short] MacOS (Intel): 0x1cfb30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43c264
     * @note[short] Android
     */
    static ObjectControlGameObject* create();

    /**
     * @note[short] Windows: 0x65fb80
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1859c4
     * @note[short] MacOS (Intel): 0x1d0160
     * @note[short] Windows: 0x65fd40
     * @note[short] iOS: 0x43c4f8
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x65fbf0
     * @note[short] iOS: 0x43c368
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
};
