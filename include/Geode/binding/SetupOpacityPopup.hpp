#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupOpacityPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOpacityPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOpacityPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5bbd30
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupOpacityPopup();

    /**
     * @note[short] Windows: 0x5bbe00
     * @note[short] Android
     */
    static SetupOpacityPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x19580
     * @note[short] MacOS (Intel): 0x1d6a0
     * @note[short] Windows: 0x5bca00
     * @note[short] iOS: 0x26ff4
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x19a50
     * @note[short] MacOS (Intel): 0x1dca0
     * @note[short] Windows: 0x59d990
     * @note[short] iOS: 0x27400
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x197b0
     * @note[short] MacOS (Intel): 0x1d960
     * @note[short] Windows: 0x1250a0
     * @note[short] iOS: 0x271fc
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x197cc
     * @note[short] MacOS (Intel): 0x1d9a0
     * @note[short] Windows: 0x5bcda0
     * @note[short] iOS: 0x27218
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x191f0
     * @note[short] MacOS (Intel): 0x1d2e0
     * @note[short] Windows: 0x5bcb90
     * @note[short] iOS: 0x26db0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19744
     * @note[short] MacOS (Intel): 0x1d8d0
     * @note[short] iOS: 0x27190
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x196d8
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27124
     * @note[short] Android
     */
    void updateOpacity();

    /**
     * @note[short] MacOS (ARM): 0x19530
     * @note[short] MacOS (Intel): 0x1d650
     * @note[short] iOS: 0x26fa4
     * @note[short] Android
     */
    void updateOpacityLabel();

    /**
     * @note[short] MacOS (ARM): 0x5d1740
     * @note[short] MacOS (Intel): 0x6b8230
     * @note[short] iOS: 0x260dec
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] iOS: 0x26d20
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_fadeTimeInput;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    Slider* m_fadeTimeSlider;
    Slider* m_opacitySlider;
    float m_opacity;
    float m_fadeTime;
    int m_groupID;
};
