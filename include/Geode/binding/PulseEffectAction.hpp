#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/ccTypes.hpp>

class PulseEffectAction {
public:
    static constexpr auto CLASS_NAME = "PulseEffectAction";

    /**
     * @note[short] MacOS (ARM): 0x2634c0
     * @note[short] MacOS (Intel): 0x2c3bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isFinished();

    /**
     * @note[short] MacOS (ARM): 0x263408
     * @note[short] MacOS (Intel): 0x2c3af0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd888
     * @note[short] Android
     */
    void step(float delta);

    /**
     * @note[short] MacOS (ARM): 0x263478
     * @note[short] MacOS (Intel): 0x2c3b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float valueForDelta(float currentTime, float fadeInTime, float holdTime, float fadeOutTime);
    bool m_disabled;
    float m_fadeInTime;
    float m_holdTime;
    float m_fadeOutTime;
    float m_deltaTime;
    int m_targetGroupID;
    float m_currentValue;
    cocos2d::ccColor3B m_color;
    PulseEffectType m_pulseEffectType;
    cocos2d::ccHSVValue m_hsv;
    int m_colorIndex;
    bool m_mainOnly;
    bool m_detailOnly;
    bool m_isDynamicHsv;
    int m_triggerUniqueID;
    int m_controlID;
    float m_startTime;
};
