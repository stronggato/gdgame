#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJGroundLayer.hpp>

class GJFlyGroundLayer : public GJGroundLayer {
public:
    static constexpr auto CLASS_NAME = "GJFlyGroundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJFlyGroundLayer, GJGroundLayer)

    /**
     * @note[short] MacOS (ARM): 0x5d5af8
     * @note[short] MacOS (Intel): 0x6bccd0
     * @note[short] Android
     */
    static GJFlyGroundLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x5d5bc4
     * @note[short] MacOS (Intel): 0x6bcdd0
     * @note[short] Android
     */
    virtual bool init();
};
