#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class CCAlertCircle : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCAlertCircle";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAlertCircle, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x124048
     * @note[short] MacOS (Intel): 0x158240
     * @note[short] Android
     */
    static CCAlertCircle* create();

    /**
     * @note[short] MacOS (ARM): 0x12412c
     * @note[short] MacOS (Intel): 0x158320
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1241d8
     * @note[short] MacOS (Intel): 0x1583b0
     * @note[short] Android
     */
    virtual void draw();
    CCCircleAlert* m_circleAlert;
};
