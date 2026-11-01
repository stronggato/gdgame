#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/unordered_map.hpp>

class GJTransformControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJTransformControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJTransformControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x581564
     * @note[short] MacOS (Intel): 0x645e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15b4e8
     * @note[short] Android: Rebinded
     */
     GJTransformControl();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~GJTransformControl();

    /**
     * @note[short] MacOS (Intel): 0x6d3870
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJTransformControl* create();

    /**
     * @note[short] MacOS (ARM): 0x57c218
     * @note[short] Windows: 0x1a33a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x1a52d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x1a57b0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x580f7c
     * @note[short] MacOS (Intel): 0x6457d0
     * @note[short] Windows: 0x1a6030
     * @note[short] iOS: 0x15aedc
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x83d80
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn applyFreeRotation(float p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void applyRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x57f828
     * @note[short] MacOS (Intel): 0x643d70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void calculateRotationOffset();

    /**
     * @note[short] MacOS (ARM): 0x57cb2c
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void finishTouch();

    /**
     * @note[short] Android
     */
    TodoReturn getOppositeHandleTag(int p0);

    /**
     * @note[short] MacOS (ARM): 0x57f544
     * @note[short] MacOS (Intel): 0x643a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159b40
     * @note[short] Android
     */
    void loadFromState(GJTransformState& state);

    /**
     * @note[short] MacOS (ARM): 0x57f6b0
     * @note[short] MacOS (Intel): 0x643be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159cac
     * @note[short] Android
     */
    void loadValues(GameObject* object, cocos2d::CCArray* objects, std::unordered_map<int, GameObjectEditorState>& states);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void logCurrentZeroPos();

    /**
     * @note[short] Android
     */
    TodoReturn moveAnchorTo(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void onToggleFreeRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleGridSnap(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleLockScale(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleOppositeAnchor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x57e9fc
     * @note[short] MacOS (Intel): 0x642cd0
     * @note[short] iOS: 0x15903c
     * @note[short] Android
     */
    void refreshControl();

    /**
     * @note[short] MacOS (ARM): 0x57f5f0
     * @note[short] MacOS (Intel): 0x643b00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159bec
     * @note[short] Android
     */
    void saveToState(GJTransformState& state);

    /**
     * @note[short] MacOS (ARM): 0x57e92c
     * @note[short] iOS: 0x158f78
     * @note[short] Android
     */
    void scaleButtons(float scale);

    /**
     * @note[short] Android
     */
    TodoReturn snapAngleTo45(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn snapToGrid(cocos2d::CCPoint p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn snapToNearestVertex(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x3d38e4
     * @note[short] MacOS (Intel): 0x467960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCSprite* spriteByTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x581490
     * @note[short] MacOS (Intel): 0x645dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15b2f8
     * @note[short] Android
     */
    void updateAnchorSprite(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x57eb64
     * @note[short] Windows: 0x1a43a0
     * @note[short] iOS: 0x159198
     * @note[short] Android
     */
    void updateButtons(bool transform, bool skew);

    /**
     * @note[short] MacOS (ARM): 0x5813a4
     * @note[short] MacOS (Intel): 0x645cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateMinMaxPositions();
    cocos2d::CCNode* m_mainNodeParent;
    cocos2d::CCNode* m_mainNode;
    cocos2d::CCArray* m_objects;
    int m_touchID;
    short m_transformButtonType;
    GJTransformControlDelegate* m_delegate;
    cocos2d::CCPoint m_cursorDifference;
    cocos2d::CCPoint m_topRight;
    cocos2d::CCPoint m_bottomLeft;
    cocos2d::CCPoint m_topRightPosition;
    cocos2d::CCPoint m_bottomLeftPosition;
    cocos2d::CCPoint m_topRightOrigin;
    cocos2d::CCPoint m_bottomLeftOrigin;
    cocos2d::CCArray* m_warpSprites;
    cocos2d::CCPoint m_rotatePosition;
    CCMenuItemSpriteExtra* m_warpLockButton;
    float m_scaleX;
    float m_scaleY;
    bool m_warpLocked;
    float m_rotationX;
    float m_rotationY;
    float m_rotation;
    float m_buttonScale;
};
