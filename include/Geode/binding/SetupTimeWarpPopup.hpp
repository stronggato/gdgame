#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupTimeWarpPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimeWarpPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimeWarpPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5f5620
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupTimeWarpPopup();

    /**
     * @note[short] Windows: 0x5f56f0
     * @note[short] iOS: 0x1c4ab8
     * @note[short] Android
     */
    static SetupTimeWarpPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x45d7d4
     * @note[short] MacOS (Intel): 0x501a30
     * @note[short] Windows: 0x5f5cc0
     * @note[short] iOS: 0x1c4fc4
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x45d924
     * @note[short] MacOS (Intel): 0x501bc0
     * @note[short] Windows: 0x3978d0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45d288
     * @note[short] iOS: 0x1c4b98
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x45d6a8
     * @note[short] MacOS (Intel): 0x5018d0
     * @note[short] Windows: 0x5f5dd0
     * @note[short] iOS: 0x1c4f18
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45d8b8
     * @note[short] MacOS (Intel): 0x501b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c5094
     * @note[short] Android
     */
    void updateTimeWarp();

    /**
     * @note[short] MacOS (ARM): 0x45d784
     * @note[short] MacOS (Intel): 0x5019e0
     * @note[short] iOS: 0x1c4f74
     * @note[short] Android
     */
    void updateTimeWarpLabel();
    cocos2d::CCLabelBMFont* m_timeWarpLabel;
    Slider* m_timeWarpSlider;
    float m_timeWarpMod;
};
