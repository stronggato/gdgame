#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GravityEffectSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GravityEffectSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GravityEffectSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x517940
     * @note[short] Android: Rebinded
     */
    virtual  ~GravityEffectSprite();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GravityEffectSprite();

    /**
     * @note[short] MacOS (ARM): 0x7177c
     * @note[short] MacOS (Intel): 0x79f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13df08
     * @note[short] Android
     */
    static GravityEffectSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x83178
     * @note[short] MacOS (Intel): 0x8dcd0
     * @note[short] Windows: 0x517980
     * @note[short] iOS: 0x14bc38
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (Intel): 0x8df30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x7cee0
     * @note[short] MacOS (Intel): 0x86d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x146648
     * @note[short] Android
     */
    void updateSpritesColor(cocos2d::ccColor3B color);
};
