#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCAnimatedSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJRobotSprite : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "GJRobotSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRobotSprite, CCAnimatedSprite)

    /**
     * @note[short] Windows: 0x3a9bd0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJRobotSprite();

    /**
     * @note[short] MacOS (ARM): 0x5c5bfc
     * @note[short] MacOS (Intel): 0x6ab690
     * @note[short] Windows: 0x184890
     * @note[short] iOS: 0x2da000
     * @note[short] Android
     */
    static GJRobotSprite* create(int frame);

    /**
     * @note[short] MacOS (ARM): 0x5c6d50
     * @note[short] MacOS (Intel): 0x6aca50
     * @note[short] Windows: 0x3aaa00
     * @note[short] iOS: 0x2dae04
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x5c6e34
     * @note[short] MacOS (Intel): 0x6acb60
     * @note[short] Windows: 0x3ab0f0
     * @note[short] iOS: 0x2daee8
     * @note[short] Android
     */
    virtual void hideSecondary();

    /**
     * @note[short] MacOS (ARM): 0x5c6a08
     * @note[short] MacOS (Intel): 0x6ac660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2daac0
     * @note[short] Android
     */
    void hideGlow();

    /**
     * @note[short] MacOS (ARM): 0x5c5d34
     * @note[short] MacOS (Intel): 0x6ab7d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2da0c8
     * @note[short] Android
     */
    bool init(int frame);

    /**
     * @note[short] MacOS (ARM): 0x5c5dc4
     * @note[short] MacOS (Intel): 0x6ab840
     * @note[short] Windows: 0x3a9d30
     * @note[short] iOS: 0x2da14c
     * @note[short] Android
     */
    bool init(int frame, std::string animName);

    /**
     * @note[short] MacOS (ARM): 0x5c69f4
     * @note[short] MacOS (Intel): 0x6ac640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2daaac
     * @note[short] Android
     */
    void showGlow();

    /**
     * @note[short] MacOS (ARM): 0x5c6a1c
     * @note[short] MacOS (Intel): 0x6ac680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2daad4
     * @note[short] Android
     */
    void updateColor01(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x5c6cc4
     * @note[short] MacOS (Intel): 0x6ac9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2dad78
     * @note[short] Android
     */
    void updateColor02(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x5c6a30
     * @note[short] MacOS (Intel): 0x6ac6a0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2daae8
     * @note[short] Android
     */
    void updateColors();

    /**
     * @note[short] MacOS (ARM): 0x5c62f4
     * @note[short] MacOS (Intel): 0x6abde0
     * @note[short] Windows: 0x3aab00
     * @note[short] iOS: 0x2da5f8
     * @note[short] Android
     */
    void updateFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x5c6cd4
     * @note[short] MacOS (Intel): 0x6ac9d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2dad88
     * @note[short] Android
     */
    void updateGlowColor(cocos2d::ccColor3B color, bool simple);
    cocos2d::CCArray* m_unkArray;
    bool m_hasExtra;
    cocos2d::ccColor3B m_color;
    cocos2d::ccColor3B m_secondColor;
    cocos2d::CCArray* m_secondArray;
    cocos2d::CCSprite* m_glowSprite;
    cocos2d::CCSprite* m_extraSprite;
    IconType m_iconType;
    int m_iconRequestID;
    CCSpritePart* m_headSprite;
    CCSpritePart* m_footSprite;
};
