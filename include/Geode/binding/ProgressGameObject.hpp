#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class ProgressGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ProgressGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ProgressGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x634070
     * @note[short] Android: Rebinded
     */
    virtual  ~ProgressGameObject();

    /**
     * @note[short] Android
     */
    static ProgressGameObject* create();

    /**
     * @note[short] Windows: 0x65fdd0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x660110
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);

    /**
     * @note[short] Windows: 0x65fe40
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* p0);
};
