#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ScrollingLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ScrollingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ScrollingLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Windows: 0x83700
     * @note[short] Android: Rebinded
     */
    virtual  ~ScrollingLayer();

    /**
     * @note[short] MacOS (ARM): 0x6feaa0
     * @note[short] MacOS (Intel): 0x7fdea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24cbc8
     * @note[short] Android: Out of line
     */
     ScrollingLayer();

    /**
     * @note[short] MacOS (ARM): 0x6fe3c0
     * @note[short] MacOS (Intel): 0x7fd680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24c670
     * @note[short] Android
     */
    static ScrollingLayer* create(cocos2d::CCSize size, cocos2d::CCPoint position, float factor);

    /**
     * @note[short] MacOS (ARM): 0x6fe64c
     * @note[short] MacOS (Intel): 0x7fd940
     * @note[short] Windows: 0x83a50
     * @note[short] iOS: 0x24c89c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x6fe6f0
     * @note[short] MacOS (Intel): 0x7fda10
     * @note[short] Windows: 0x83b10
     * @note[short] iOS: 0x24c940
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x6fe804
     * @note[short] MacOS (Intel): 0x7fdb60
     * @note[short] Windows: 0x83b60
     * @note[short] iOS: 0x24c9c8
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x6fe95c
     * @note[short] MacOS (Intel): 0x7fdd00
     * @note[short] Windows: 0x83c50
     * @note[short] iOS: 0x24ca84
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x6fea4c
     * @note[short] MacOS (Intel): 0x7fde20
     * @note[short] Windows: 0x83d60
     * @note[short] iOS: 0x24cb74
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x6fea84
     * @note[short] MacOS (Intel): 0x7fde60
     * @note[short] Windows: 0x83d80
     * @note[short] iOS: 0x24cbac
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x6fe590
     * @note[short] MacOS (Intel): 0x7fd850
     * @note[short] Windows: 0x83960
     * @note[short] iOS: 0x1fd0dc
     * @note[short] Android
     */
    cocos2d::CCRect getViewRect();

    /**
     * @note[short] MacOS (ARM): 0x6fe4d4
     * @note[short] MacOS (Intel): 0x7fd790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24c724
     * @note[short] Android
     */
    bool init(cocos2d::CCSize size, cocos2d::CCPoint position, float factor);

    /**
     * @note[short] MacOS (ARM): 0x6fe7cc
     * @note[short] MacOS (Intel): 0x7fdb20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24c990
     * @note[short] Android
     */
    void setStartOffset(cocos2d::CCPoint offset);
    cocos2d::CCPoint m_position;
    cocos2d::CCSize m_size;
    cocos2d::CCPoint m_touchStartPosition;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_startOffset;
    float m_scrollFactor;
    int m_touchID;
    cocos2d::CCLayer* m_contentLayer;
    cocos2d::CCLayer* m_parentLayer;
};
