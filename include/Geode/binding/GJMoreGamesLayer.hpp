#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>

class GJMoreGamesLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "GJMoreGamesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMoreGamesLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    static GJMoreGamesLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x76a16c
     * @note[short] MacOS (Intel): 0x874020
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x769ddc
     * @note[short] MacOS (Intel): 0x873c80
     * @note[short] iOS: 0xa5acc
     * @note[short] Android
     */
    cocos2d::CCArray* getMoreGamesList();
    cocos2d::CCArray* m_moreGamesList;
};
