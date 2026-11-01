#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCMenuItemImage.hpp>
#include <Geode/mapping/CCObject.hpp>

class SliderThumb : public cocos2d::CCMenuItemImage {
public:
    static constexpr auto CLASS_NAME = "SliderThumb";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderThumb, cocos2d::CCMenuItemImage)

    /**
     * @note[short] Windows: 0x83da0
     * @note[short] Android: Rebinded
     */
    virtual  ~SliderThumb();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SliderThumb();

    /**
     * @note[short] MacOS (ARM): 0x283bf0
     * @note[short] MacOS (Intel): 0x2ede40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x387a88
     * @note[short] Android
     */
    static SliderThumb* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* normalFrame, char const* selectedFrame);

    /**
     * @note[short] MacOS (ARM): 0x283e4c
     * @note[short] MacOS (Intel): 0x2ee0e0
     * @note[short] Windows: 0x83e20
     * @note[short] iOS: 0x387ddc
     * @note[short] Android
     */
    float getRawValue();

    /**
     * @note[short] MacOS (ARM): 0x283e4c
     * @note[short] MacOS (Intel): 0x2ee0e0
     * @note[short] Windows: 0x83eb0
     * @note[short] Android
     */
    float getValue();

    /**
     * @note[short] MacOS (ARM): 0x283cf8
     * @note[short] MacOS (Intel): 0xb9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* normalFrame, char const* selectedFrame);

    /**
     * @note[short] MacOS (ARM): 0x284048
     * @note[short] MacOS (Intel): 0x2ee320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x387d70
     * @note[short] Android
     */
    void setMaxOffset(float offset);

    /**
     * @note[short] MacOS (ARM): 0xfed8
     * @note[short] MacOS (Intel): 0x2edf90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x387b7c
     * @note[short] Android
     */
    void setRotated(bool rotated);

    /**
     * @note[short] Android
     */
    void setSnap(float p0, float p1);

    /**
     * @note[short] Android
     */
    void setSnapStep(float p0);

    /**
     * @note[short] MacOS (ARM): 0x283f38
     * @note[short] MacOS (Intel): 0x2ee1e0
     * @note[short] Windows: 0x83f50
     * @note[short] iOS: 0x387c60
     * @note[short] Android
     */
    void setValue(float value);
    float m_length;
    bool m_vertical;
};
