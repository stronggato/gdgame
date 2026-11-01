#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>

class GauntletLayer : public cocos2d::CCLayer, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletLayer();

    /**
     * @note[short] MacOS (Intel): 0x37ce80
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~GauntletLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GauntletLayer* create(GauntletType type);

    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x30aab0
     * @note[short] MacOS (Intel): 0x37f610
     * @note[short] Windows: 0x2fa940
     * @note[short] iOS: 0x2cdc40
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x309f98
     * @note[short] MacOS (Intel): 0x37ebc0
     * @note[short] Windows: 0x2f8d60
     * @note[short] iOS: 0x2cd5a0
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x30a12c
     * @note[short] MacOS (Intel): 0x37ed60
     * @note[short] Windows: 0x2f8fa0
     * @note[short] iOS: 0x2cd674
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x308a24
     * @note[short] MacOS (Intel): 0x37d480
     * @note[short] Windows: 0x2f8570
     * @note[short] iOS: 0x2cc098
     * @note[short] Android
     */
    bool init(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x309084
     * @note[short] MacOS (Intel): 0x37daf0
     * @note[short] Windows: 0x2fa8f0
     * @note[short] iOS: 0x2cc6bc
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30a3e8
     * @note[short] MacOS (Intel): 0x37efd0
     * @note[short] iOS: 0x2cd804
     * @note[short] Android
     */
    void onLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3090cc
     * @note[short] MacOS (Intel): 0x37db40
     * @note[short] Windows: 0x2f91d0
     * @note[short] iOS: 0x2cc704
     * @note[short] Android
     */
    void setupGauntlet(cocos2d::CCArray* levels);

    /**
     * @note[short] MacOS (ARM): 0x30a42c
     * @note[short] MacOS (Intel): 0x37f010
     * @note[short] iOS: 0x2cd848
     * @note[short] Android
     */
    void unlockActiveItem();
    cocos2d::CCArray* m_levels;
    LoadingCircle* m_loadingCircle;
    GauntletType m_gauntletType;
    cocos2d::CCSprite* m_backgroundSprite;
    void* m_unkPtr;
    CCMenuItemSpriteExtra* m_activeItemButton;
    cocos2d::CCArray* m_activeObjects;
    TextArea* m_tryAgainText;
};
