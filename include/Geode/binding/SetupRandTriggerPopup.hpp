#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupRandTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5d0f10
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupRandTriggerPopup();

    /**
     * @note[short] Windows: 0x5d0fe0
     * @note[short] Android
     */
    static SetupRandTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5d1354
     * @note[short] MacOS (Intel): 0x6b7db0
     * @note[short] Windows: 0x5d1c10
     * @note[short] iOS: 0x260b00
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5d1850
     * @note[short] MacOS (Intel): 0x6b8390
     * @note[short] Windows: 0x5d2630
     * @note[short] iOS: 0x260efc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d14d4
     * @note[short] MacOS (Intel): 0x6b7f60
     * @note[short] Windows: 0x5d1e70
     * @note[short] iOS: 0x260c70
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
    void onTargetID2Arrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d1158
     * @note[short] MacOS (Intel): 0x6b7ba0
     * @note[short] Windows: 0x5d1d60
     * @note[short] iOS: 0x2609e0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateChance();

    /**
     * @note[short] Android
     */
    void updateChanceLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x5d1740
     * @note[short] MacOS (Intel): 0x6b8230
     * @note[short] iOS: 0x260dec
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x58261c
     * @note[short] iOS: 0x2d5870
     * @note[short] Android
     */
    void updateTargetID2();

    /**
     * @note[short] iOS: 0x260820
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] iOS: 0x260900
     * @note[short] Android
     */
    void updateTextInputLabel2();
    CCTextInputNode* m_chanceInput;
    Slider* m_chanceSlider;
    float m_chancePercent;
    CCTextInputNode* m_groupID1Input;
    CCTextInputNode* m_groupID2Input;
    int m_groupID1;
    int m_groupID2;
};
