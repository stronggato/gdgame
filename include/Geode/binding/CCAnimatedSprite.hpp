#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCAnimatedSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCAnimatedSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimatedSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x43950
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCAnimatedSprite();

    /**
     * @note[short] MacOS (ARM): 0x2ce1c8
     * @note[short] MacOS (Intel): 0x33c2d0
     * @note[short] Windows: 0x44cc0
     * @note[short] iOS: 0x398654
     * @note[short] Android: Rebinded
     */
     ~CCAnimatedSprite();

    /**
     * @note[short] MacOS (ARM): 0x295708
     * @note[short] MacOS (Intel): 0x33afb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x397900
     * @note[short] Android
     */
    static CCAnimatedSprite* createWithType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2ce068
     * @note[short] MacOS (Intel): 0x33c160
     * @note[short] Windows: 0x44bf0
     * @note[short] iOS: 0x398594
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2ce118
     * @note[short] MacOS (Intel): 0x33c210
     * @note[short] Windows: 0x44c50
     * @note[short] iOS: 0x3985f4
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2ce050
     * @note[short] MacOS (Intel): 0x33c140
     * @note[short] Windows: 0x44bd0
     * @note[short] iOS: 0x39857c
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2ce01c
     * @note[short] MacOS (Intel): 0x33c110
     * @note[short] Windows: 0x44b90
     * @note[short] iOS: 0x398548
     * @note[short] Android
     */
    virtual void animationFinishedO(cocos2d::CCObject* str);

    /**
     * @note[short] MacOS (ARM): 0x2cd904
     * @note[short] MacOS (Intel): 0x33b9d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x397f98
     * @note[short] Android
     */
    void cleanupSprite();

    /**
     * @note[short] MacOS (ARM): 0x2cd01c
     * @note[short] MacOS (Intel): 0x33b090
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3979c4
     * @note[short] Android
     */
    bool initWithType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2cd20c
     * @note[short] MacOS (Intel): 0x33b280
     * @note[short] Windows: 0x43cd0
     * @note[short] iOS: 0x397b28
     * @note[short] Android
     */
    void loadType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2cdaa0
     * @note[short] MacOS (Intel): 0x33bb90
     * @note[short] Windows: 0x447e0
     * @note[short] iOS: 0x398134
     * @note[short] Android
     */
    void runAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x2cdb38
     * @note[short] MacOS (Intel): 0x33bc10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3981bc
     * @note[short] Android
     */
    void runAnimationForced(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x2cdfe0
     * @note[short] MacOS (Intel): 0x33c0d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39850c
     * @note[short] Android
     */
    void stopTween();

    /**
     * @note[short] MacOS (ARM): 0x2cd994
     * @note[short] MacOS (Intel): 0x33ba70
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x398028
     * @note[short] Android
     */
    void switchToMode(spriteMode mode);

    /**
     * @note[short] MacOS (ARM): 0x2cdc0c
     * @note[short] MacOS (Intel): 0x33bcd0
     * @note[short] Windows: 0x43a60
     * @note[short] iOS: 0x398280
     * @note[short] Android
     */
    void tweenToAnimation(std::string animation, float duration);

    /**
     * @note[short] MacOS (ARM): 0x2cdec4
     * @note[short] MacOS (Intel): 0x33bfc0
     * @note[short] Windows: 0x44b40
     * @note[short] iOS: 0x398470
     * @note[short] Android
     */
    void tweenToAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x2cdbdc
     * @note[short] MacOS (Intel): 0x33bca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398250
     * @note[short] Android
     */
    void willPlayAnimation();
    std::string m_unkString1;
    std::string m_activeTween;
    SpriteAnimationManager* m_animationManager;
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCSprite* m_fbfSprite;
    CCPartAnimSprite* m_paSprite;
    spriteMode m_spriteMode;
    std::string m_currentAnim;
    AnimatedSpriteDelegate* m_delegate;
};
