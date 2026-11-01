#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNodeRGBA.hpp>

class AchievementBar : public cocos2d::CCNodeRGBA {
public:
    static constexpr auto CLASS_NAME = "AchievementBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementBar, cocos2d::CCNodeRGBA)

    /**
     * @note[short] Windows: 0x95ae0
     * @note[short] Android: Rebinded
     */
    virtual  ~AchievementBar();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AchievementBar();

    /**
     * @note[short] MacOS (ARM): 0x6059a4
     * @note[short] MacOS (Intel): 0x6f37a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x306200
     * @note[short] Android
     */
    static AchievementBar* create(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x607270
     * @note[short] MacOS (Intel): 0x6f5100
     * @note[short] Windows: 0x97440
     * @note[short] iOS: 0x307530
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x605a74
     * @note[short] MacOS (Intel): 0x6f3860
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3062bc
     * @note[short] Android
     */
    bool init(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x607030
     * @note[short] MacOS (Intel): 0x6f4eb0
     * @note[short] Windows: 0x971c0
     * @note[short] iOS: 0x307310
     * @note[short] Android
     */
    void show();
    cocos2d::CCLayerColor* m_layerColor;
    float m_offsetUnused;
    cocos2d::CCScene* m_nextScene;
    cocos2d::extension::CCScale9Sprite* m_bg;
    cocos2d::extension::CCScale9Sprite* m_bg2;
    cocos2d::CCSprite* m_achievementGlowSprite;
    cocos2d::CCSprite* m_achievementSprite;
    cocos2d::CCLabelBMFont* m_titleLabel;
    TextArea* m_achievementDescription;
};
