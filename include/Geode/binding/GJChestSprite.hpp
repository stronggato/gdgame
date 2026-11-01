#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJChestSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJChestSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChestSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x55dee0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJChestSprite();

    /**
     * @note[short] MacOS (ARM): 0x1b1254
     * @note[short] MacOS (Intel): 0x2002e0
     * @note[short] Windows: 0x563200
     * @note[short] iOS: 0x259928
     * @note[short] Android
     */
    static GJChestSprite* create(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x1b3d50
     * @note[short] MacOS (Intel): 0x202ff0
     * @note[short] Windows: 0x563390
     * @note[short] iOS: 0x25c054
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x1b3c78
     * @note[short] MacOS (Intel): 0x202f00
     * @note[short] Windows: 0x5632d0
     * @note[short] iOS: 0x25bf80
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x1b3c1c
     * @note[short] MacOS (Intel): 0x202eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25bf1c
     * @note[short] Android
     */
    bool init(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x1b2660
     * @note[short] MacOS (Intel): 0x201900
     * @note[short] Windows: 0x10b970
     * @note[short] iOS: 0x25aac4
     * @note[short] Android
     */
    void switchToState(ChestSpriteState state, bool noGlow);
    int m_chestType;
    ChestSpriteState m_spriteState;
    bool m_dark;
};
