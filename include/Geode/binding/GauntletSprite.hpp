#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GauntletSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSprite, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x80c50
     * @note[short] Android: Rebinded
     */
    virtual  ~GauntletSprite();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletSprite();

    /**
     * @note[short] MacOS (ARM): 0x30a2c4
     * @note[short] MacOS (Intel): 0x37ef00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2cd744
     * @note[short] Android
     */
    static GauntletSprite* create(GauntletType type, bool locked);

    /**
     * @note[short] MacOS (ARM): 0x30acd4
     * @note[short] MacOS (Intel): 0x37f810
     * @note[short] iOS: 0x2cddb0
     * @note[short] Android
     */
    void addLockedSprite();

    /**
     * @note[short] MacOS (ARM): 0x30abd8
     * @note[short] MacOS (Intel): 0x37f740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2cdcc8
     * @note[short] Android
     */
    void addNormalSprite();

    /**
     * @note[short] MacOS (ARM): 0x30b0d8
     * @note[short] MacOS (Intel): 0xfee50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x30ab44
     * @note[short] MacOS (Intel): 0x37f6b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2cdc4c
     * @note[short] Android
     */
    bool init(GauntletType type, bool locked);

    /**
     * @note[short] MacOS (Intel): 0x46b160
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float luminanceForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x30aa70
     * @note[short] MacOS (Intel): 0x37f5e0
     * @note[short] Windows: 0x1acbf0
     * @note[short] iOS: 0x2cdc00
     * @note[short] Android
     */
    void toggleLockedSprite(bool locked);
    GauntletType m_gauntletType;
};
