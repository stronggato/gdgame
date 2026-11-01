#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCContentLayer.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCTouchClipper.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCScrollLayerExt : public cocos2d::CCLayer, public cocos2d::CCTouchClipper {
public:
    static constexpr auto CLASS_NAME = "CCScrollLayerExt";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCScrollLayerExt, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3926ec
     * @note[short] MacOS (Intel): 0x41a5c0
     * @note[short] Windows: 0x4a880
     * @note[short] iOS: 0x39af20
     * @note[short] Android: Rebinded
     */
     CCScrollLayerExt(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x316d20
     * @note[short] MacOS (Intel): 0x392ed0
     * @note[short] Windows: 0x4ad40
     * @note[short] iOS: 0x3744c
     * @note[short] Android: Rebinded
     */
     ~CCScrollLayerExt();

    /**
     * @note[short] MacOS (ARM): 0x393b94
     * @note[short] MacOS (Intel): 0x41bc20
     * @note[short] Windows: 0x4baf0
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x393450
     * @note[short] MacOS (Intel): 0x41b450
     * @note[short] Windows: 0x4b410
     * @note[short] iOS: 0x39b9bc
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x393890
     * @note[short] MacOS (Intel): 0x41b900
     * @note[short] Windows: 0x4b820
     * @note[short] iOS: 0x39bde4
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3935ec
     * @note[short] MacOS (Intel): 0x41b600
     * @note[short] Windows: 0x4b560
     * @note[short] iOS: 0x39bb50
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x39382c
     * @note[short] MacOS (Intel): 0x41b8a0
     * @note[short] Windows: 0x4b7f0
     * @note[short] iOS: 0x39bd80
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x393418
     * @note[short] MacOS (Intel): 0x41b410
     * @note[short] Windows: 0x4b3b0
     * @note[short] iOS: 0x39b984
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x393e5c
     * @note[short] MacOS (Intel): 0x41bee0
     * @note[short] Windows: 0x4bcf0
     * @note[short] iOS: 0x39c24c
     * @note[short] Android
     */
    virtual void preVisitWithClippingRect(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x393ef0
     * @note[short] MacOS (Intel): 0x41bf60
     * @note[short] Windows: 0x4bda0
     * @note[short] iOS: 0x39c2e0
     * @note[short] Android
     */
    virtual void postVisit();

    /**
     * @note[short] MacOS (ARM): 0x393d64
     * @note[short] MacOS (Intel): 0x41bdd0
     * @note[short] Windows: 0x4bc20
     * @note[short] Android
     */
    virtual bool touchInsideClip(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x39318c
     * @note[short] MacOS (Intel): 0x41b160
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x39b714
     * @note[short] Android
     */
    void constraintContent();

    /**
     * @note[short] MacOS (ARM): 0x393194
     * @note[short] MacOS (Intel): 0x41b170
     * @note[short] iOS: 0x39b71c
     * @note[short] Android
     */
    void doConstraintContent(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x392d34
     * @note[short] MacOS (Intel): 0x41ac00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b6948
     * @note[short] Android
     */
    float getMaxY();

    /**
     * @note[short] MacOS (ARM): 0x392d3c
     * @note[short] MacOS (Intel): 0x41ac10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getMinY();

    /**
     * @note[short] MacOS (ARM): 0x392e38
     * @note[short] MacOS (Intel): 0x41ad00
     * @note[short] Windows: 0x41650
     * @note[short] iOS: 0x39b5c4
     * @note[short] Android
     */
    void moveToTop();

    /**
     * @note[short] MacOS (ARM): 0x392d90
     * @note[short] MacOS (Intel): 0x41ac60
     * @note[short] Windows: 0x5c7380
     * @note[short] iOS: 0x39b51c
     * @note[short] Android
     */
    void moveToTopWithOffset(float offset);

    /**
     * @note[short] Android
     */
    TodoReturn scissorRect();

    /**
     * @note[short] MacOS (Intel): 0x41b310
     * @note[short] Windows: 0x4b140
     * @note[short] Android
     */
    void scrollingEnd();

    /**
     * @note[short] MacOS (ARM): 0x393a08
     * @note[short] MacOS (Intel): 0x41ba80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void scrollLayer(float offset);

    /**
     * @note[short] MacOS (ARM): 0x39336c
     * @note[short] MacOS (Intel): 0x41b360
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setContentLayerSize(cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x39337c
     * @note[short] MacOS (Intel): 0x41b380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39b8ec
     * @note[short] Android
     */
    void setContentOffset(cocos2d::CCPoint offset, bool animate);

    /**
     * @note[short] MacOS (ARM): 0x392ae8
     * @note[short] MacOS (Intel): 0x41a9a0
     * @note[short] Windows: 0x4b180
     * @note[short] iOS: 0x39b29c
     * @note[short] Android
     */
    void updateIndicators(float dt);

    /**
     * @note[short] Android
     */
    TodoReturn updateScrollDecay(float p0);
    cocos2d::CCTouch* m_touch;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_touchStartPosition;
    cocos2d::cc_timeval m_timeValue;
    bool m_touchDown;
    bool m_notAtEndOfScroll;
    cocos2d::CCLayerColor* m_verticalScrollbar;
    cocos2d::CCLayerColor* m_horizontalScrollbar;
    CCScrollLayerExtDelegate* m_delegate;
    CCContentLayer* m_contentLayer;
    bool m_cutContent;
    bool m_vScrollbarVisible;
    bool m_hScrollbarVisible;
    bool m_disableHorizontal;
    bool m_disableVertical;
    bool m_disableMovement;
    float m_scrollLimitTop;
    float m_scrollLimitBottom;
    float m_peekLimitTop;
    float m_peekLimitBottom;
};
