#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelAreaLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelAreaLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~LevelAreaLayer();

    /**
     * @note[short] MacOS (ARM): 0x20c518
     * @note[short] MacOS (Intel): 0x265100
     * @note[short] Windows: 0x3dc0d0
     * @note[short] iOS: 0x3e0fe4
     * @note[short] Android
     */
    static void addTorch(cocos2d::CCNode* parent, cocos2d::CCPoint position, int fireType, float scale, int zOrder, bool noTorch, int colorType, cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (Intel): 0x263d60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelAreaLayer* create();

    /**
     * @note[short] MacOS (Intel): 0x263c70
     * @note[short] Windows: 0x3daab0
     * @note[short] iOS: 0x3dff00
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x20b280
     * @note[short] MacOS (Intel): 0x263e30
     * @note[short] Windows: 0x3dabc0
     * @note[short] iOS: 0x3dffec
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x20d464
     * @note[short] MacOS (Intel): 0x265fd0
     * @note[short] Windows: 0x3dcc30
     * @note[short] iOS: 0x3e1a8c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x20d1dc
     * @note[short] MacOS (Intel): 0x265d30
     * @note[short] Windows: 0x3dbdf0
     * @note[short] iOS: 0x3e18a8
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x20d410
     * @note[short] MacOS (Intel): 0x265f80
     * @note[short] Windows: 0x3dcbe0
     * @note[short] iOS: 0x3e1a38
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x20c1fc
     * @note[short] MacOS (Intel): 0x264dd0
     * @note[short] Windows: 0x3c320
     * @note[short] iOS: 0x3e0cd4
     * @note[short] Android
     */
    void addGodRay(float startOpacity, float midOpacity, float endOpacity, float fadeDuration, float scaleY, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x20d1ec
     * @note[short] MacOS (Intel): 0x265d50
     * @note[short] iOS: 0x3e18b8
     * @note[short] Android
     */
    void fadeInsideTower();

    /**
     * @note[short] MacOS (ARM): 0x20c04c
     * @note[short] MacOS (Intel): 0x264c10
     * @note[short] Windows: 0x3dcb30
     * @note[short] iOS: 0x3e0b30
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20c0b4
     * @note[short] MacOS (Intel): 0x264c80
     * @note[short] Windows: 0x3dbe00
     * @note[short] iOS: 0x3e0b98
     * @note[short] Android
     */
    void onClickDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20d298
     * @note[short] MacOS (Intel): 0x265df0
     * @note[short] Windows: 0x3dc010
     * @note[short] iOS: 0x3e1960
     * @note[short] Android
     */
    bool onEnterTower();

    /**
     * @note[short] MacOS (ARM): 0x20cf8c
     * @note[short] MacOS (Intel): 0x265b00
     * @note[short] iOS: 0x3e16e8
     * @note[short] Android
     */
    void showDialog();
    cocos2d::CCSprite* m_towerSprite;
    cocos2d::CCArray* m_godRays;
    bool m_enteringTower;
    bool m_exiting;
};
