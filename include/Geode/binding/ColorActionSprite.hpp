#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class ColorActionSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ColorActionSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorActionSprite, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x47080
     * @note[short] Android: Rebinded
     */
    virtual  ~ColorActionSprite();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ColorActionSprite();

    /**
     * @note[short] MacOS (ARM): 0x2632bc
     * @note[short] MacOS (Intel): 0x2c39a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd748
     * @note[short] Android
     */
    static ColorActionSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x263368
     * @note[short] MacOS (Intel): 0x2c3a40
     * @note[short] Windows: 0x360850
     * @note[short] iOS: 0xd7e8
     * @note[short] Android
     */
    virtual bool init();
    float m_opacity;
    cocos2d::ccColor3B m_color;
    cocos2d::ccColor3B m_copyColor;
    int m_colorID;
    cocos2d::ccColor3B m_pulseColor;
    ColorAction* m_colorAction;
};
