#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/BoomScrollLayerDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class WorldSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "WorldSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(WorldSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x331d68
     * @note[short] MacOS (Intel): 0x3aab40
     * @note[short] Android
     */
    static WorldSelectLayer* create(int page);

    /**
     * @note[short] MacOS (ARM): 0x331c84
     * @note[short] MacOS (Intel): 0x3aaa30
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int page);

    /**
     * @note[short] MacOS (ARM): 0x333b38
     * @note[short] MacOS (Intel): 0x3ac8f0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x333a68
     * @note[short] MacOS (Intel): 0x3ac820
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (Intel): 0x3ac730
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (Intel): 0x3ac640
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (ARM): 0x333b8c
     * @note[short] MacOS (Intel): 0x3ac940
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x332b2c
     * @note[short] MacOS (Intel): 0x3ab9b0
     * @note[short] Android
     */
    void animateInActiveIsland();

    /**
     * @note[short] MacOS (ARM): 0x333e20
     * @note[short] MacOS (Intel): 0x3acbf0
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x333d2c
     * @note[short] MacOS (Intel): 0x3acae0
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue(int page1, int page2, float progress);

    /**
     * @note[short] MacOS (ARM): 0x332bf0
     * @note[short] MacOS (Intel): 0x3aba60
     * @note[short] Android
     */
    void goToPage(int page, bool instant);

    /**
     * @note[short] MacOS (ARM): 0x331e2c
     * @note[short] MacOS (Intel): 0x3aac30
     * @note[short] Android
     */
    bool init(int page);

    /**
     * @note[short] MacOS (ARM): 0x332688
     * @note[short] MacOS (Intel): 0x3ab4c0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x333774
     * @note[short] MacOS (Intel): 0x3ac5e0
     * @note[short] Android
     */
    void onFreeLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3325fc
     * @note[short] MacOS (Intel): 0x3ab410
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x332668
     * @note[short] MacOS (Intel): 0x3ab490
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x332648
     * @note[short] MacOS (Intel): 0x3ab460
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3326ec
     * @note[short] MacOS (Intel): 0x3ab520
     * @note[short] Android
     */
    void setupWorlds();

    /**
     * @note[short] MacOS (ARM): 0x332cd4
     * @note[short] MacOS (Intel): 0x3abb40
     * @note[short] Android
     */
    void showCompleteDialog();

    /**
     * @note[short] MacOS (ARM): 0x33367c
     * @note[short] MacOS (Intel): 0x3ac4e0
     * @note[short] Android
     */
    void tryShowAd();

    /**
     * @note[short] MacOS (ARM): 0x333664
     * @note[short] MacOS (Intel): 0x3ac4b0
     * @note[short] Android
     */
    void unblockButtons();

    /**
     * @note[short] MacOS (ARM): 0x332a88
     * @note[short] MacOS (Intel): 0x3ab930
     * @note[short] Android
     */
    void updateArrows();
    cocos2d::CCSprite* m_background;
    BoomScrollLayer* m_scrollLayer;
    CCMenuItemSpriteExtra* m_arrowLeft;
    CCMenuItemSpriteExtra* m_arrowRight;
    bool m_cleanupSprites;
    bool m_enteringLevel;
    GJWorldNode* m_worldNode;
    bool m_buttonsLocked;
};
