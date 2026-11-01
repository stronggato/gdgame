#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>

class URLViewLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "URLViewLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(URLViewLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x397330
     * @note[short] Android: Rebinded
     */
    virtual  ~URLViewLayer();

    /**
     * @note[short] MacOS (ARM): 0x24692c
     * @note[short] MacOS (Intel): 0x2a3f60
     * @note[short] Windows: 0x3a7f50
     * @note[short] iOS: 0x37dacc
     * @note[short] Android
     */
    static URLViewLayer* create(std::string title, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x246adc
     * @note[short] MacOS (Intel): 0x2a4150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37dbe8
     * @note[short] Android
     */
    bool init(std::string title, cocos2d::CCArray* objects);
    cocos2d::CCArray* m_urlObjects;
};
