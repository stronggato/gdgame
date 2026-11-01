#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>

class FindObjectOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "FindObjectOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindObjectOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] Windows: 0x398080
     * @note[short] Android: Rebinded
     */
    virtual  ~FindObjectOptionsLayer();

    /**
     * @note[short] Android
     */
    static FindObjectOptionsLayer* create();

    /**
     * @note[short] Windows: 0x17f640
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x17f680
     * @note[short] Android
     */
    virtual void setupOptions();
};
