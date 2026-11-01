#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>

class ColorChannelSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ColorChannelSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorChannelSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x35fa50
     * @note[short] Android: Rebinded
     */
    virtual  ~ColorChannelSprite();

    /**
     * @note[short] MacOS (ARM): 0x262c24
     * @note[short] MacOS (Intel): 0x2c32e0
     * @note[short] Windows: 0x360330
     * @note[short] iOS: 0xd13c
     * @note[short] Android
     */
    static ColorChannelSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x262ccc
     * @note[short] MacOS (Intel): 0x2c3380
     * @note[short] Windows: 0x3603f0
     * @note[short] iOS: 0xd1d8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x262fc8
     * @note[short] MacOS (Intel): 0x2c36b0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xd4c8
     * @note[short] Android
     */
    void updateBlending(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x262cd8
     * @note[short] MacOS (Intel): 0x2c33a0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xd1e4
     * @note[short] Android
     */
    void updateCopyLabel(int channelID, bool copyColorLoop);

    /**
     * @note[short] MacOS (ARM): 0x262e80
     * @note[short] MacOS (Intel): 0x2c3560
     * @note[short] Windows: 0x3605d0
     * @note[short] iOS: 0xd384
     * @note[short] Android
     */
    void updateOpacity(float alpha);

    /**
     * @note[short] MacOS (ARM): 0x2630d4
     * @note[short] MacOS (Intel): 0x2c37c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd5d0
     * @note[short] Android
     */
    void updateValues(ColorAction* action);
    cocos2d::CCLabelBMFont* m_copyLabel;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    cocos2d::CCLabelBMFont* m_blendingLabel;
};
