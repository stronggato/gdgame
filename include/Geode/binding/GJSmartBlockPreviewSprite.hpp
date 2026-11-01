#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJSmartBlockPreviewSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreviewSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreviewSprite, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3b40e0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSmartBlockPreviewSprite();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJSmartBlockPreviewSprite();

    /**
     * @note[short] MacOS (ARM): 0x38da98
     * @note[short] MacOS (Intel): 0x415970
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x90ec
     * @note[short] Android
     */
    static GJSmartBlockPreviewSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x38e07c
     * @note[short] MacOS (Intel): 0x415f60
     * @note[short] Windows: 0x8aef0
     * @note[short] iOS: 0x962c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x38e080
     * @note[short] MacOS (Intel): 0x415f70
     * @note[short] Windows: 0x3ba430
     * @note[short] iOS: 0x9630
     * @note[short] Android
     */
    virtual void visit();
};
