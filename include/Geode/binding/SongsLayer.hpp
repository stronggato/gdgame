#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>

class SongsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "SongsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongsLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x632aa0
     * @note[short] Android: Rebinded
     */
    virtual  ~SongsLayer();

    /**
     * @note[short] Windows: 0x632b40
     * @note[short] iOS: 0x3e3328
     * @note[short] Android
     */
    static SongsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x46d674
     * @note[short] MacOS (Intel): 0x5127e0
     * @note[short] Windows: 0x632c10
     * @note[short] iOS: 0x3e3410
     * @note[short] Android
     */
    virtual void customSetup();
};
