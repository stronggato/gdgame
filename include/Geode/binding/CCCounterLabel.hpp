#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLabelBMFont.hpp>

class CCCounterLabel : public cocos2d::CCLabelBMFont {
public:
    static constexpr auto CLASS_NAME = "CCCounterLabel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCounterLabel, cocos2d::CCLabelBMFont)

    /**
     * @note[short] Windows: 0x46de0
     * @note[short] Android: Rebinded
     */
    virtual  ~CCCounterLabel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCCounterLabel();

    /**
     * @note[short] MacOS (ARM): 0x46d074
     * @note[short] MacOS (Intel): 0x512100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ded4
     * @note[short] Android
     */
    static CCCounterLabel* create(int count, char const* font, FormatterType type);

    /**
     * @note[short] MacOS (ARM): 0x46d36c
     * @note[short] MacOS (Intel): 0x512430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void calculateStepSize(int steps);

    /**
     * @note[short] MacOS (ARM): 0x46d2d8
     * @note[short] MacOS (Intel): 0x512380
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void disableCounter();

    /**
     * @note[short] MacOS (ARM): 0x46d21c
     * @note[short] MacOS (Intel): 0x5122c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void enableCounter();

    /**
     * @note[short] MacOS (ARM): 0x46d210
     * @note[short] MacOS (Intel): 0x5122a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fastUpdateCounter();

    /**
     * @note[short] MacOS (ARM): 0x46d3a8
     * @note[short] MacOS (Intel): 0x512480
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getTargetCount();

    /**
     * @note[short] MacOS (ARM): 0x46d188
     * @note[short] MacOS (Intel): 0x512220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3df9c
     * @note[short] Android
     */
    bool init(int count, char const* font, FormatterType type);

    /**
     * @note[short] MacOS (ARM): 0x46d2f8
     * @note[short] MacOS (Intel): 0x5123b0
     * @note[short] Windows: 0x46e50
     * @note[short] iOS: 0x3e098
     * @note[short] Android
     */
    void setTargetCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x46d254
     * @note[short] MacOS (Intel): 0x512300
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3e024
     * @note[short] Android
     */
    void updateCounter(float dt);

    /**
     * @note[short] MacOS (ARM): 0x46d3b0
     * @note[short] MacOS (Intel): 0x512490
     * @note[short] Windows: 0x46f60
     * @note[short] iOS: 0x3e108
     * @note[short] Android
     */
    void updateString();
    int m_stepSize;
    int m_targetCount;
    int m_currentCount;
    bool m_counterEnabled;
    int m_stepCount;
    bool m_dontSchedule;
    FormatterType m_formatterType;
};
