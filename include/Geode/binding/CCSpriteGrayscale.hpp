#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCSpriteWithHue.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CCSpriteGrayscale : public CCSpriteWithHue {
public:
    static constexpr auto CLASS_NAME = "CCSpriteGrayscale";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpriteGrayscale, CCSpriteWithHue)

    /**
     * @note[short] Windows: 0x4c570
     * @note[short] Android: Rebinded
     */
    virtual  ~CCSpriteGrayscale();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpriteGrayscale();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* create(std::string const& file);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* create(std::string const& file, cocos2d::CCRect const& rect);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x5dad14
     * @note[short] MacOS (Intel): 0x6c2390
     * @note[short] iOS: 0x237004
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithSpriteFrameName(std::string const& frameName);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x5da83c
     * @note[short] MacOS (Intel): 0x6c1f30
     * @note[short] Windows: 0x4d0f0
     * @note[short] Android
     */
    virtual std::string getShaderName();

    /**
     * @note[short] MacOS (ARM): 0x5da6fc
     * @note[short] MacOS (Intel): 0x6c1d00
     * @note[short] Windows: 0x4cf10
     * @note[short] iOS: 0x236e2c
     * @note[short] Android
     */
    virtual const char* shaderBody();
};
