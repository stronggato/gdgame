#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJGroundLayer.hpp>
#include <Geode/binding/GameToolbox.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class MenuGameLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MenuGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x46c820
     * @note[short] Android: Rebinded
     */
    virtual  ~MenuGameLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MenuGameLayer();

    /**
     * @note[short] MacOS (ARM): 0x454fd4
     * @note[short] MacOS (Intel): 0x4f8270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43f554
     * @note[short] Android
     */
    static MenuGameLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x456090
     * @note[short] MacOS (Intel): 0x4f9550
     * @note[short] Windows: 0x46d700
     * @note[short] iOS: 0x4403f0
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x4550bc
     * @note[short] MacOS (Intel): 0x4f8380
     * @note[short] Windows: 0x46c8b0
     * @note[short] iOS: 0x43f5c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x456580
     * @note[short] MacOS (Intel): 0x4f9ac0
     * @note[short] Windows: 0x46e740
     * @note[short] iOS: 0x44087c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x456698
     * @note[short] MacOS (Intel): 0x4f9be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x440994
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4566a0
     * @note[short] MacOS (Intel): 0x4f9c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x44099c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4566a8
     * @note[short] MacOS (Intel): 0x4f9c20
     * @note[short] Windows: 0x83d80
     * @note[short] iOS: 0x4409a4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4566c4
     * @note[short] MacOS (Intel): 0x4f9c60
     * @note[short] Windows: 0x46eb80
     * @note[short] iOS: 0x4409c0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x456384
     * @note[short] MacOS (Intel): 0x4f98c0
     * @note[short] Windows: 0x46e480
     * @note[short] iOS: 0x41244
     * @note[short] Android
     */
    void destroyPlayer();

    /**
     * @note[short] MacOS (ARM): 0x4554b8
     * @note[short] MacOS (Intel): 0x4f87e0
     * @note[short] Windows: 0x46d150
     * @note[short] iOS: 0x43f9c8
     * @note[short] Android
     */
    cocos2d::ccColor3B getBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x455a50
     * @note[short] MacOS (Intel): 0x4f8d00
     * @note[short] Windows: 0x10fc60
     * @note[short] iOS: 0x43fe10
     * @note[short] Android
     */
    void resetPlayer();

    /**
     * @note[short] MacOS (ARM): 0x4555f4
     * @note[short] MacOS (Intel): 0x4f8880
     * @note[short] Windows: 0x46d430
     * @note[short] iOS: 0x43faa4
     * @note[short] Android
     */
    void tryJump(float dt);

    /**
     * @note[short] MacOS (ARM): 0x45586c
     * @note[short] MacOS (Intel): 0x4f8b00
     * @note[short] Windows: 0x46d000
     * @note[short] iOS: 0x43fcf8
     * @note[short] Android
     */
    void updateColor(float dt);

    /**
     * @note[short] MacOS (ARM): 0x456018
     * @note[short] MacOS (Intel): 0x4f94e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x440378
     * @note[short] Android
     */
    void updateColors();
    bool m_videoOptionsOpen;
    float m_deltaCount;
    bool m_isDestroyingPlayer;
    int m_initCount;
    cocos2d::CCPoint m_realBackgroundPosition;
    PlayerObject* m_playerObject;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    float m_backgroundWrapPosition;
};
