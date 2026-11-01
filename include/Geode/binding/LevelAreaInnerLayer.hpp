#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/DialogDelegate.hpp>

class LevelAreaInnerLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaInnerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaInnerLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x3daa10
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelAreaInnerLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelAreaInnerLayer();

    /**
     * @note[short] MacOS (ARM): 0x20d578
     * @note[short] MacOS (Intel): 0x266140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e1ad0
     * @note[short] Android
     */
    static LevelAreaInnerLayer* create(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x20d330
     * @note[short] MacOS (Intel): 0x265e70
     * @note[short] Windows: 0x3dcc40
     * @note[short] iOS: 0x3e19ec
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x20f3cc
     * @note[short] MacOS (Intel): 0x2680d0
     * @note[short] Windows: 0x3defd0
     * @note[short] iOS: 0x3e3254
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x20f1a4
     * @note[short] MacOS (Intel): 0x267ea0
     * @note[short] Windows: 0x3de420
     * @note[short] iOS: 0x3e30b0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x20f378
     * @note[short] MacOS (Intel): 0x268080
     * @note[short] Windows: 0x3def80
     * @note[short] iOS: 0x3e3200
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x20d638
     * @note[short] MacOS (Intel): 0x266220
     * @note[short] Windows: 0x3dcd50
     * @note[short] iOS: 0x3e1b84
     * @note[short] Android
     */
    bool init(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x20e404
     * @note[short] MacOS (Intel): 0x267060
     * @note[short] Windows: 0x3def20
     * @note[short] iOS: 0x3e26b0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20e454
     * @note[short] MacOS (Intel): 0x2670b0
     * @note[short] Windows: 0x3dea30
     * @note[short] iOS: 0x3e2700
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20e70c
     * @note[short] MacOS (Intel): 0x267340
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20e588
     * @note[short] MacOS (Intel): 0x2671e0
     * @note[short] Windows: 0x3ddd40
     * @note[short] iOS: 0x3e282c
     * @note[short] Android
     */
    void onNextFloor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20e648
     * @note[short] MacOS (Intel): 0x267290
     * @note[short] Windows: 0x3ded40
     * @note[short] iOS: 0x3e28c4
     * @note[short] Android
     */
    void onOnlineVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20f2bc
     * @note[short] MacOS (Intel): 0x267fb0
     * @note[short] Windows: 0x179ff0
     * @note[short] iOS: 0x22bbb4
     * @note[short] Android
     */
    bool playStep1();

    /**
     * @note[short] MacOS (ARM): 0x20ec98
     * @note[short] MacOS (Intel): 0x267940
     * @note[short] iOS: 0x3e2d30
     * @note[short] Android
     */
    void showFloor1CompleteDialog();

    /**
     * @note[short] MacOS (ARM): 0x20e67c
     * @note[short] MacOS (Intel): 0x2672d0
     * @note[short] Windows: 0x3de990
     * @note[short] iOS: 0x3e28f8
     * @note[short] Android
     */
    void tryResumeTowerMusic();

    /**
     * @note[short] MacOS (ARM): 0x20f184
     * @note[short] MacOS (Intel): 0x267e80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd();
    CCMenuItemSpriteExtra* m_nextFloorButton;
    bool m_enteringLevel;
    int m_levelID;
    bool m_exiting;
};
