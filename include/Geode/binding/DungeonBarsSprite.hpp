#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class DungeonBarsSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "DungeonBarsSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DungeonBarsSprite, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x80c50
     * @note[short] Android: Rebinded
     */
    virtual  ~DungeonBarsSprite();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DungeonBarsSprite();

    /**
     * @note[short] MacOS (ARM): 0x405408
     * @note[short] MacOS (Intel): 0x49d690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a9994
     * @note[short] Android
     */
    static DungeonBarsSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x4088bc
     * @note[short] MacOS (Intel): 0x4a0f80
     * @note[short] Windows: 0x5812c0
     * @note[short] iOS: 0x3ac2e4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x408940
     * @note[short] MacOS (Intel): 0x4a1000
     * @note[short] Windows: 0x581340
     * @note[short] iOS: 0x3ac364
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x40745c
     * @note[short] MacOS (Intel): 0x49f960
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ab3a0
     * @note[short] Android
     */
    void animateOutBars();
    cocos2d::CCSprite* m_barsSprite;
};
