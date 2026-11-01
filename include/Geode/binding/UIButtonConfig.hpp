#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>

class UIButtonConfig {
public:
    static constexpr auto CLASS_NAME = "UIButtonConfig";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x273290
     * @note[short] iOS: 0x3b61d4
     * @note[short] Android: Out of line
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3b624c
     * @note[short] Android: Out of line
     */
    void resetOneBtn();
    int m_width;
    int m_height;
    float m_deadzone;
    float m_scale;
    int m_opacity;
    float m_radius;
    bool m_modeB;
    bool m_snap;
    cocos2d::CCPoint m_position;
    bool m_oneButton;
    bool m_player2;
    bool m_split;
};
