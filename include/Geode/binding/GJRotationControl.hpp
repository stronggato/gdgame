#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJRotationControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJRotationControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRotationControl, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x1a08c0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJRotationControl();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15b3cc
     * @note[short] Android: Out of line
     */
     GJRotationControl();

    /**
     * @note[short] MacOS (Intel): 0x63f0e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJRotationControl* create();

    /**
     * @note[short] MacOS (Intel): 0x6cc00
     * @note[short] Windows: 0x1a0a70
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x57c0c0
     * @note[short] MacOS (Intel): 0x63ff90
     * @note[short] Windows: 0x1a1600
     * @note[short] iOS: 0x156d5c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x57bd60
     * @note[short] MacOS (Intel): 0x63fc20
     * @note[short] Windows: 0x1a12e0
     * @note[short] iOS: 0x156b40
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57bec4
     * @note[short] Windows: 0x1a1430
     * @note[short] iOS: 0x156c90
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57bfac
     * @note[short] MacOS (Intel): 0x63fe80
     * @note[short] Windows: 0x1a15e0
     * @note[short] iOS: 0x156d0c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57c0a4
     * @note[short] MacOS (Intel): 0x63ff50
     * @note[short] Windows: 0x83d80
     * @note[short] iOS: 0x156d40
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn applyFocusedInput();

    /**
     * @note[short] MacOS (ARM): 0x57bcec
     * @note[short] MacOS (Intel): 0x63fbb0
     * @note[short] Windows: 0x1ac620
     * @note[short] iOS: 0x156acc
     * @note[short] Android
     */
    void finishTouch();

    /**
     * @note[short] Android
     */
    TodoReturn hasActiveInput();

    /**
     * @note[short] Android
     */
    void onApplyAngle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleLockRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn releaseInputFocus();

    /**
     * @note[short] MacOS (ARM): 0x57b9ec
     * @note[short] MacOS (Intel): 0x63f870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x156874
     * @note[short] Android
     */
    void setAngle(float angle);

    /**
     * @note[short] Android
     */
    TodoReturn updateAngleInput(float p0);

    /**
     * @note[short] MacOS (ARM): 0x57bbf0
     * @note[short] MacOS (Intel): 0x63fa90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1569e8
     * @note[short] Android
     */
    void updateSliderPosition(cocos2d::CCPoint position);
    cocos2d::CCPoint m_cursorDifference;
    cocos2d::CCPoint m_controlPosition;
    cocos2d::CCSprite* m_controlSprite;
    float m_startingRotation;
    float m_currentRotation;
    int m_touchID;
    GJRotationControlDelegate* m_delegate;
};
