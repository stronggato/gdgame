#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCLightStrip : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCLightStrip";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCLightStrip, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCLightStrip();

    /**
     * @note[short] Windows: 0x47080
     * @note[short] Android: Rebinded
     */
    virtual  ~CCLightStrip();

    /**
     * @note[short] MacOS (ARM): 0x45e298
     * @note[short] MacOS (Intel): 0x5027e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x346f8
     * @note[short] Android
     */
    static CCLightStrip* create(float width, float toWidth, float toHeight, float duration, float delay);

    /**
     * @note[short] MacOS (ARM): 0x45e834
     * @note[short] MacOS (Intel): 0x502df0
     * @note[short] Windows: 0x479a0
     * @note[short] iOS: 0x34c3c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x45e98c
     * @note[short] MacOS (Intel): 0x502f80
     * @note[short] Windows: 0x47b60
     * @note[short] iOS: 0x34d94
     * @note[short] Android
     */
    virtual void updateTweenAction(float value, char const* keyword);

    /**
     * @note[short] MacOS (ARM): 0x45e71c
     * @note[short] MacOS (Intel): 0x502cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x34b24
     * @note[short] Android
     */
    bool init(float width, float toWidth, float toHeight, float duration, float delay);
    float m_objectWidth;
    float m_toWidth;
    float m_toHeight;
    float m_duration;
    cocos2d::ccColor4B m_color;
    float m_opacity;
    float m_width;
    float m_height;
};
