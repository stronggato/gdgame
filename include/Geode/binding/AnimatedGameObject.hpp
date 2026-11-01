#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EnhancedGameObject.hpp>
#include <Geode/binding/AnimatedSpriteDelegate.hpp>
#include <Geode/binding/SpritePartDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class AnimatedGameObject : public EnhancedGameObject, public AnimatedSpriteDelegate, public SpritePartDelegate {
public:
    static constexpr auto CLASS_NAME = "AnimatedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedGameObject, EnhancedGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AnimatedGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1566e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x426e80
     * @note[short] Android: Rebinded
     */
     ~AnimatedGameObject();

    /**
     * @note[short] MacOS (ARM): 0x158e70
     * @note[short] MacOS (Intel): 0x199240
     * @note[short] Windows: 0x6433b0
     * @note[short] iOS: 0x428c38
     * @note[short] Android
     */
    static std::string animationForID(int type, int id);

    /**
     * @note[short] MacOS (ARM): 0x15685c
     * @note[short] MacOS (Intel): 0x1968c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x426f04
     * @note[short] Android
     */
    static AnimatedGameObject* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x1591dc
     * @note[short] MacOS (Intel): 0x1994e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float getTweenTime(int type, int id);

    /**
     * @note[short] MacOS (ARM): 0x157898
     * @note[short] MacOS (Intel): 0x197960
     * @note[short] Windows: 0x641c50
     * @note[short] iOS: 0x427cdc
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x159250
     * @note[short] MacOS (Intel): 0x199560
     * @note[short] Windows: 0x643860
     * @note[short] iOS: 0x428d04
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x1591ec
     * @note[short] MacOS (Intel): 0x1994f0
     * @note[short] Windows: 0x643360
     * @note[short] iOS: 0x428ca8
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x1577ac
     * @note[short] MacOS (Intel): 0x197850
     * @note[short] Windows: 0x641aa0
     * @note[short] iOS: 0x427bfc
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS (ARM): 0x1577f0
     * @note[short] MacOS (Intel): 0x197890
     * @note[short] Windows: 0x641b70
     * @note[short] iOS: 0x427c40
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x157964
     * @note[short] MacOS (Intel): 0x197a40
     * @note[short] Windows: 0x641d20
     * @note[short] iOS: 0x427da8
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x157998
     * @note[short] MacOS (Intel): 0x197a70
     * @note[short] Windows: 0x641d60
     * @note[short] iOS: 0x427ddc
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x1589d4
     * @note[short] MacOS (Intel): 0x198da0
     * @note[short] Windows: 0x6430c0
     * @note[short] iOS: 0x428818
     * @note[short] Android
     */
    virtual void displayFrameChanged(cocos2d::CCObject* sprite, std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x156980
     * @note[short] MacOS (Intel): 0x196a10
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x426fc8
     * @note[short] Android
     */
    bool init(int id);

    /**
     * @note[short] MacOS (ARM): 0x158cf4
     * @note[short] MacOS (Intel): 0x1990e0
     * @note[short] Windows: 0x643230
     * @note[short] iOS: 0x428ad4
     * @note[short] Android
     */
    void playAnimation(int type);

    /**
     * @note[short] MacOS (ARM): 0x156b1c
     * @note[short] MacOS (Intel): 0x196bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x427164
     * @note[short] Android
     */
    void setupAnimatedSize(int id);

    /**
     * @note[short] MacOS (ARM): 0x156cac
     * @note[short] MacOS (Intel): 0x196d70
     * @note[short] iOS: 0x4272f4
     * @note[short] Android
     */
    void setupChildSprites();

    /**
     * @note[short] MacOS (ARM): 0x157594
     * @note[short] MacOS (Intel): 0x197610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4279f0
     * @note[short] Android
     */
    void updateChildSpriteColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x157614
     * @note[short] MacOS (Intel): 0x197690
     * @note[short] Windows: 0xa8850
     * @note[short] iOS: 0x427a70
     * @note[short] Android
     */
    void updateObjectAnimation();
    CCAnimatedSprite* m_animatedSprite;
    cocos2d::CCSprite* m_childSprite;
    CCSpritePart* m_eyeSpritePart;
    bool m_finishedAnimating;
    bool m_playingAnimation;
    std::string m_currentAnimation;
    bool m_notGrounded;
    int m_animationID;
};
