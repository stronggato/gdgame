#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class CCNodeContainer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCNodeContainer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCNodeContainer, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3505d0
     * @note[short] Android: Rebinded
     */
    virtual  ~CCNodeContainer();

    /**
     * @note[short] MacOS (ARM): 0xd0850
     * @note[short] MacOS (Intel): 0xefd10
     * @note[short] Windows: 0xa3d50
     * @note[short] iOS: 0x270d50
     * @note[short] Android
     */
    static CCNodeContainer* create();

    /**
     * @note[short] MacOS (ARM): 0x1179a4
     * @note[short] MacOS (Intel): 0x144750
     * @note[short] Windows: 0x8aef0
     * @note[short] iOS: 0x2a44cc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1179a8
     * @note[short] MacOS (Intel): 0x144760
     * @note[short] Windows: 0x350610
     * @note[short] iOS: 0x2a44d0
     * @note[short] Android
     */
    virtual void visit();
};
