#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CCSpritePlus : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpritePlus";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpritePlus, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x49400
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpritePlus();

    /**
     * @note[short] MacOS (ARM): 0x3e07d4
     * @note[short] Windows: 0x49460
     * @note[short] iOS: 0x24ba18
     * @note[short] Android: Rebinded
     */
     ~CCSpritePlus();

    /**
Creates a sprite by a given sprite frame

 @param frame the frame to give to the specific sprite

 @return CCSpritePlus object and returns null if initialization fai     * @note[short] MacOS (ARM): 0x3e08bc
     * @note[short] MacOS (Intel): 0x475e80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24ba7c
     * @note[short] Android
     */
    static CCSpritePlus* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
Creates a sprite by a given sprite's frame name

 @param frame the frame or filename to give to the specific sprite

 @return CCSpritePlus object and returns null if initialization fai     * @note[short] MacOS (ARM): 0x3e096c
     * @note[short] MacOS (Intel): 0x475f20
     * @note[short] Windows: 0x4be20
     * @note[short] iOS: 0x24bb20
     * @note[short] Android
     */
    static CCSpritePlus* createWithSpriteFrameName(char const* frame);

    /**
Sets X's scale on itself and it's followers

 @param scaleX the scale of X to s     * @note[short] Windows: 0x4c2e0
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
Sets Y's scale on itself and it's followers

 @param scaleY the scale of Y to s     * @note[short] Windows: 0x4c370
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
Sets the Scale of itself and it's followers

 @param scale the scale value to s     * @note[short] MacOS (ARM): 0x3e0ea4
     * @note[short] MacOS (Intel): 0x4764b0
     * @note[short] Windows: 0x4c400
     * @note[short] iOS: 0x24bfc0
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
Sets the position where the sprite will be at and it's followers

 @param position the position to place to the sprite and it's followe     * @note[short] MacOS (ARM): 0x3e0a4c
     * @note[short] MacOS (Intel): 0x476010
     * @note[short] Windows: 0x4bee0
     * @note[short] iOS: 0x24bb68
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
Sets the sprite's given rotation and it's followers

 @param rotation the rotation value to s     * @note[short] MacOS (ARM): 0x3e0ac4
     * @note[short] Windows: 0x4bf70
     * @note[short] iOS: 0x24bbe0
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
Sets the sprite's given rotation of X and it's followers

 @param rotationX the rotation of X to se     * @note[short] MacOS (ARM): 0x3e0b3c
     * @note[short] Windows: 0x4c000
     * @note[short] iOS: 0x24bc58
     * @note[short] Android
     */
    virtual void setRotationX(float rotationX);

    /**
Sets the sprite's given rotation of Y and it's followers

 @param rotationY the rotation of Y to s     * @note[short] MacOS (ARM): 0x3e0bb4
     * @note[short] MacOS (Intel): 0x476190
     * @note[short] Windows: 0x4c090
     * @note[short] iOS: 0x24bcd0
     * @note[short] Android
     */
    virtual void setRotationY(float rotationY);

    /**
Initalizes the sprite using a texture

 @param texture the texture to initalize the sprite with

 @return true if initalization succeede     * @note[short] MacOS (ARM): 0x3e0a38
     * @note[short] MacOS (Intel): 0x475ff0
     * @note[short] Windows: 0x4bec0
     * @note[short] iOS: 0x24bb54
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);

    /**
Initalizes the sprite with a frame name

 @param frameName the frame to initalize the sprite with

 @return true if initalization succeed     * @note[short] MacOS (ARM): 0x3e0a2c
     * @note[short] MacOS (Intel): 0x475fd0
     * @note[short] Windows: 0x4beb0
     * @note[short] iOS: 0x24bb48
     * @note[short] Android
     */
    virtual bool initWithSpriteFrameName(char const* frameName);

    /**
Sets flipX to itself and it's followers

 @param flipX the direction that the sprite should be flipped      * @note[short] MacOS (ARM): 0x3e0c2c
     * @note[short] MacOS (Intel): 0x476210
     * @note[short] Windows: 0x4c120
     * @note[short] iOS: 0x24bd48
     * @note[short] Android
     */
    virtual void setFlipX(bool flipX);

    /**
Sets flipY to itself and it's followers

 @param flipY the direction that the sprite should be flipped      * @note[short] MacOS (ARM): 0x3e0ce4
     * @note[short] MacOS (Intel): 0x4762e0
     * @note[short] Windows: 0x4c200
     * @note[short] iOS: 0x24be00
     * @note[short] Android
     */
    virtual void setFlipY(bool flipY);

    /**
Adds a follower to the sprite

 @param follower Something that will follow this spri     * @note[short] MacOS (ARM): 0x3e0f28
     * @note[short] MacOS (Intel): 0x476530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24c044
     * @note[short] Android
     */
    void addFollower(cocos2d::CCNode* follower);

    /**
Attaches a sprite to the sprite. and other way around

 you can think of this as attaching 2 lego blocks together and letting

 it drag along.

 @param sprite the sprite to attach to the main sprite and vice ver     * @note[short] MacOS (ARM): 0x3e0fc0
     * @note[short] MacOS (Intel): 0x4765d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24c0c4
     * @note[short] Android
     */
    void followSprite(CCSpritePlus* sprite);

    /**
Obtains the first following sprite if it has a follower on hand

 @return nullptr if there is no follower avalib     * @note[short] MacOS (ARM): 0x3e1068
     * @note[short] MacOS (Intel): 0x476670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24c0ec
     * @note[short] Android
     */
    CCSpritePlus* getFollower();

    /**
Removes a specific following sprite from this sprite.

 @param sprite follower sprite that will be remove     * @note[short] MacOS (ARM): 0x3e0f78
     * @note[short] MacOS (Intel): 0x476580
     * @note[short] Windows: 0x4c490
     * @note[short] iOS: 0x24c088
     * @note[short] Android
     */
    void removeFollower(cocos2d::CCNode* sprite);

    /**
Stops this child sprite from following it's given pare     * @note[short] MacOS (ARM): 0x3e1018
     * @note[short] MacOS (Intel): 0x476620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24c0d8
     * @note[short] Android
     */
    void stopFollow();
    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
};
