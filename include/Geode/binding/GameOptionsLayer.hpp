#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>

class GameOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GameOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x2041e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GameOptionsLayer* create(GJBaseGameLayer* baseGameLayer);

    /**
     * @note[short] MacOS (ARM): 0x241674
     * @note[short] MacOS (Intel): 0x29e2d0
     * @note[short] Windows: 0x500d90
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x2423e8
     * @note[short] MacOS (Intel): 0x29f0d0
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void didToggle(int tag);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* baseGameLayer);

    /**
     * @note[short] MacOS (ARM): 0x241d20
     * @note[short] MacOS (Intel): 0x29e9b0
     * @note[short] iOS: 0x146a98
     * @note[short] Android
     */
    void onPracticeMusicSync(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x22d4d8
     * @note[short] Android
     */
    void onUIOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9acf0
     * @note[short] iOS: 0x1f1e24
     * @note[short] Android
     */
    void onUIPOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x241e80
     * @note[short] MacOS (Intel): 0x29eb70
     * @note[short] iOS: 0x16544c
     * @note[short] Android
     */
    void showPracticeMusicSyncUnlockInfo();
    GJBaseGameLayer* m_baseGameLayer;
    int m_practiceDialogIndex;
};
