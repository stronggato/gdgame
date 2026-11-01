#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCPartAnimSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCPartAnimSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCPartAnimSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x87a64
     * @note[short] Android: Out of line
     */
     CCPartAnimSprite();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x87940
     * @note[short] Android: Rebinded
     */
     ~CCPartAnimSprite();

    /**
     * @note[short] MacOS (ARM): 0x2eb880
     * @note[short] MacOS (Intel): 0x35c9d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x867c0
     * @note[short] Android
     */
    static CCPartAnimSprite* createWithAnimDesc(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2ecef0
     * @note[short] MacOS (Intel): 0x35e1e0
     * @note[short] Windows: 0x4a460
     * @note[short] iOS: 0x87650
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x2ecf18
     * @note[short] MacOS (Intel): 0x35e200
     * @note[short] Windows: 0x4a480
     * @note[short] iOS: 0x87678
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x2ecec8
     * @note[short] MacOS (Intel): 0x35e1c0
     * @note[short] Windows: 0x4a440
     * @note[short] iOS: 0x87628
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x2ed1dc
     * @note[short] MacOS (Intel): 0x35e470
     * @note[short] Windows: 0x4a640
     * @note[short] iOS: 0x87864
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2ecf40
     * @note[short] MacOS (Intel): 0x35e220
     * @note[short] Windows: 0x4a4a0
     * @note[short] iOS: 0x876a0
     * @note[short] Android
     */
    virtual void setBlendFunc(cocos2d::ccBlendFunc blendFunc);

    /**
     * @note[short] MacOS (ARM): 0x2ecaa0
     * @note[short] MacOS (Intel): 0x35dd90
     * @note[short] Windows: 0x49e50
     * @note[short] iOS: 0x872f4
     * @note[short] Android
     */
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x2ecbf8
     * @note[short] MacOS (Intel): 0x35df00
     * @note[short] Windows: 0x4a0c0
     * @note[short] iOS: 0x87420
     * @note[short] Android
     */
    virtual bool isFrameDisplayed(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x2ecc10
     * @note[short] MacOS (Intel): 0x35df20
     * @note[short] Windows: 0x4a0e0
     * @note[short] iOS: 0x87438
     * @note[short] Android
     */
    virtual cocos2d::CCSpriteFrame* displayFrame();

    /**
     * @note[short] MacOS (ARM): 0x2ec70c
     * @note[short] MacOS (Intel): 0x35da30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void changeTextureOfID(char const* key, char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x2ed390
     * @note[short] MacOS (Intel): 0x35e600
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int countParts();

    /**
     * @note[short] MacOS (ARM): 0x2ed3ac
     * @note[short] MacOS (Intel): 0x35e620
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void dirtify();

    /**
     * @note[short] MacOS (Intel): 0x35dcb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x87288
     * @note[short] Android
     */
    CCSpritePart* getSpriteForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2eb96c
     * @note[short] MacOS (Intel): 0x35cab0
     * @note[short] Windows: 0x49670
     * @note[short] iOS: 0x8684c
     * @note[short] Android
     */
    bool initWithAnimDesc(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2ed0f0
     * @note[short] MacOS (Intel): 0x35e3a0
     * @note[short] Windows: 0x4a570
     * @note[short] iOS: 0x8777c
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2ece20
     * @note[short] MacOS (Intel): 0x35e130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x875d0
     * @note[short] Android
     */
    void setFlipX(bool flipX);

    /**
     * @note[short] MacOS (ARM): 0x2ece78
     * @note[short] MacOS (Intel): 0x35e180
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setFlipY(bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x2ec2c8
     * @note[short] MacOS (Intel): 0x35d5d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86e9c
     * @note[short] Android
     */
    void transformSprite(SpriteDescription* description);

    /**
     * @note[short] MacOS (ARM): 0x2ec564
     * @note[short] MacOS (Intel): 0x35d880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x870e0
     * @note[short] Android
     */
    void tweenSpriteTo(SpriteDescription* description, float duration);

    /**
     * @note[short] MacOS (ARM): 0x2ecc18
     * @note[short] MacOS (Intel): 0x35df30
     * @note[short] Windows: 0x4a0f0
     * @note[short] iOS: 0x87440
     * @note[short] Android
     */
    void tweenToFrame(cocos2d::CCSpriteFrame* frame, float duration);
    cocos2d::CCDictionary* m_spritePartIDs;
    cocos2d::CCSpriteFrame* m_spriteFrame;
    bool m_hasChanged;
    cocos2d::CCSize m_unkSize;
    cocos2d::CCArray* m_spriteParts;
};
