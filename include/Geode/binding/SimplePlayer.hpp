#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>

class SimplePlayer : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "SimplePlayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SimplePlayer, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SimplePlayer();

    /**
     * @note[short] MacOS (ARM): 0x2e800c
     * @note[short] MacOS (Intel): 0x358e00
     * @note[short] Windows: 0x37f120
     * @note[short] iOS: 0x3a19c0
     * @note[short] Android: Rebinded
     */
     ~SimplePlayer();

    /**
     * @note[short] MacOS (ARM): 0x1aa970
     * @note[short] MacOS (Intel): 0x353b30
     * @note[short] Windows: 0x37f2f0
     * @note[short] iOS: 0x39dbf4
     * @note[short] Android
     */
    static SimplePlayer* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x2e8d1c
     * @note[short] MacOS (Intel): 0x359c40
     * @note[short] Windows: 0x3807b0
     * @note[short] iOS: 0x3a22a8
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2e8958
     * @note[short] MacOS (Intel): 0x359880
     * @note[short] Windows: 0x37fbb0
     * @note[short] iOS: 0x3a1ef8
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2e872c
     * @note[short] MacOS (Intel): 0x359670
     * @note[short] Android
     */
    void asyncLoadIcon(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2e3150
     * @note[short] MacOS (Intel): 0x353bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39dca4
     * @note[short] Android
     */
    void createRobotSprite(int frame);

    /**
     * @note[short] MacOS (ARM): 0x2e31a8
     * @note[short] MacOS (Intel): 0x353c40
     * @note[short] Windows: 0x37fb20
     * @note[short] iOS: 0x39dcfc
     * @note[short] Android
     */
    void createSpiderSprite(int frame);

    /**
     * @note[short] MacOS (ARM): 0x2e6fd8
     * @note[short] MacOS (Intel): 0x357cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a0ed8
     * @note[short] Android
     */
    void disableCustomGlowColor();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void disableGlowOutline();

    /**
     * @note[short] MacOS (ARM): 0x2e6fb8
     * @note[short] MacOS (Intel): 0x357ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a0eb8
     * @note[short] Android
     */
    void enableCustomGlowColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2e8844
     * @note[short] MacOS (Intel): 0x359780
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideAll();

    /**
     * @note[short] MacOS (ARM): 0x2e8a44
     * @note[short] MacOS (Intel): 0x359960
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a1fd8
     * @note[short] Android
     */
    void hideSecondary();

    /**
     * @note[short] MacOS (ARM): 0x2e8908
     * @note[short] MacOS (Intel): 0x359830
     * @note[short] Android
     */
    void iconFinishedLoading(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2e813c
     * @note[short] MacOS (Intel): 0x358f80
     * @note[short] Windows: 0x37f3f0
     * @note[short] iOS: 0x3a1a3c
     * @note[short] Android
     */
    bool init(int id);

    /**
     * @note[short] MacOS (ARM): 0x2e6f70
     * @note[short] MacOS (Intel): 0x357c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setColors(cocos2d::ccColor3B const& color1, cocos2d::ccColor3B const& color2);

    /**
     * @note[short] MacOS (ARM): 0x2e8af8
     * @note[short] MacOS (Intel): 0x359a10
     * @note[short] iOS: 0x3a208c
     * @note[short] Android
     */
    void setFrames(char const* firstFrame, char const* secondFrame, char const* ufoFrame, char const* glowFrame, char const* extraFrame);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setGlowOutline(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2e89b8
     * @note[short] MacOS (Intel): 0x3598e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a1f58
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2e89e8
     * @note[short] MacOS (Intel): 0x359910
     * @note[short] Windows: 0x37fbe0
     * @note[short] iOS: 0x3a1f88
     * @note[short] Android
     */
    void tryEnableCustomGlowColor(int id);

    /**
     * @note[short] MacOS (ARM): 0x2e6a9c
     * @note[short] MacOS (Intel): 0x357720
     * @note[short] Windows: 0x37fc80
     * @note[short] iOS: 0x3a0a80
     * @note[short] Android
     */
    void updateColors();

    /**
     * @note[short] MacOS (ARM): 0x2e3360
     * @note[short] MacOS (Intel): 0x353df0
     * @note[short] Windows: 0x380030
     * @note[short] iOS: 0x39deb4
     * @note[short] Android
     */
    void updatePlayerFrame(int id, IconType type);
    cocos2d::CCSprite* m_firstLayer;
    cocos2d::CCSprite* m_secondLayer;
    cocos2d::CCSprite* m_birdDome;
    cocos2d::CCSprite* m_outlineSprite;
    cocos2d::CCSprite* m_detailSprite;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    int m_unknown;
    bool m_hasGlowOutline;
    int m_iconRequestID;
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    bool m_iconLoaded;
};
