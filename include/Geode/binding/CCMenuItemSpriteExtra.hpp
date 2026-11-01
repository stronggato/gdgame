#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCMenuItemSprite.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCMenuItemSpriteExtra : public cocos2d::CCMenuItemSprite {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemSpriteExtra";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemSpriteExtra, cocos2d::CCMenuItemSprite)

    /**
     * @note[short] MacOS (ARM): 0x1edcfc
     * @note[short] MacOS (Intel): 0x243650
     * @note[short] Windows: 0x48740
     * @note[short] iOS: 0x13ae34
     * @note[short] Android: Rebinded
     */
     CCMenuItemSpriteExtra();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): 0x20a614
     * @note[short] MacOS (Intel): 0x263080
     * @note[short] Windows: 0x488a0
     * @note[short] iOS: 0x2ae0a8
     * @note[short] Android
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite, cocos2d::CCNode* selectedSprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): 0x20a85c
     * @note[short] MacOS (Intel): 0x2632a0
     * @note[short] Windows: 0x48aa0
     * @note[short] iOS: 0x1d67b0
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS (ARM): 0x20a9b0
     * @note[short] MacOS (Intel): 0x263420
     * @note[short] Windows: 0x48bb0
     * @note[short] iOS: 0x2ae3c4
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] MacOS (ARM): 0x20ac40
     * @note[short] MacOS (Intel): 0x2636f0
     * @note[short] Windows: 0x48e00
     * @note[short] iOS: 0x2ae5e8
     * @note[short] Android
     */
    virtual void unselected();

    /**
     * @note[short] Android
     */
    TodoReturn applyLargeMobileTouch();

    /**
     * @note[short] MacOS (ARM): 0x20a6cc
     * @note[short] MacOS (Intel): 0x263110
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2ae14c
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* sprite, cocos2d::CCNode* selectedSprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] Android
     */
    void setClickColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x20a850
     * @note[short] MacOS (Intel): 0x30cce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4681b8
     * @note[short] Android
     */
    void setSizeMult(float mult);

    /**
Set a new image for this button

 Prefer using this over `setNormalImage` as the latter does not actually

 handle any of the special sizing operations `CCMenuItemSpriteExtra` has

 @param sprite The sprite to replace this button's sprite with

 @note Geode additi     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setSprite(cocos2d::CCSprite* sprite);

    /**
Update the sizing of this button's image

 If you for example have a `ButtonSprite` on this button and change the

 text, you need to call `updateSprite` afterwards to fix the button's

 content size

 @note Geode additi     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateSprite();

    /**
     * @note[short] MacOS (ARM): 0x20a808
     * @note[short] MacOS (Intel): 0x263240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ae288
     * @note[short] Android
     */
    void useAnimationType(MenuAnimationType type);
    float m_scaleMultiplier;
    float m_baseScale;
    bool m_animationEnabled;
    bool m_colorEnabled;
    float m_volume;
    std::string m_activateSound;
    std::string m_selectSound;
    float m_colorDip;
    cocos2d::CCPoint m_offset;
    float m_duration;
    float m_unselectedDuration;
    MenuAnimationType m_animationType;
    cocos2d::CCPoint m_startPosition;
    IconType m_iconType;
};
