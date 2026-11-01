#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupGradientPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGradientPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGradientPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f6ea4
     * @note[short] Android: Out of line
     */
     SetupGradientPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dea44
     * @note[short] Android: Rebinded
     */
     ~SetupGradientPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupGradientPopup* create(GradientTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5dc688
     * @note[short] MacOS (Intel): 0x6c3fe0
     * @note[short] Windows: 0x5b3370
     * @note[short] iOS: 0x3dfb1c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5dc7b4
     * @note[short] MacOS (Intel): 0x6c4100
     * @note[short] Windows: 0x5b3480
     * @note[short] iOS: 0x3dfc2c
     * @note[short] Android
     */
    virtual void updateToggleItem(int value, bool toggled);

    /**
     * @note[short] MacOS (ARM): 0x5dc964
     * @note[short] MacOS (Intel): 0x6c42c0
     * @note[short] Windows: 0x5b38a0
     * @note[short] iOS: 0x3dfce4
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(GradientTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5dc3dc
     * @note[short] MacOS (Intel): 0x6c3d10
     * @note[short] iOS: 0x3df9b4
     * @note[short] Android
     */
    void onBlending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5dc50c
     * @note[short] MacOS (Intel): 0x6c3e30
     * @note[short] Windows: 0x5b3630
     * @note[short] iOS: 0x3dfa10
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5dc8c4
     * @note[short] MacOS (Intel): 0x6c4220
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5dc8f4
     * @note[short] MacOS (Intel): 0x6c4240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dfc7c
     * @note[short] Android
     */
    void updateBlending();

    /**
     * @note[short] MacOS (ARM): 0x5dc328
     * @note[short] MacOS (Intel): 0x6c3c80
     * @note[short] Windows: 0x5b3810
     * @note[short] iOS: 0x3df904
     * @note[short] Android
     */
    void updateBlendingLabel();

    /**
     * @note[short] MacOS (ARM): 0x5dc228
     * @note[short] MacOS (Intel): 0x6c3b70
     * @note[short] Windows: 0x5b3520
     * @note[short] iOS: 0x3df80c
     * @note[short] Android
     */
    void updateGradientLabels(bool vertex);

    /**
     * @note[short] MacOS (ARM): 0x5dc5f8
     * @note[short] MacOS (Intel): 0x6c3f40
     * @note[short] iOS: 0x3dfa8c
     * @note[short] Android
     */
    void updateZLayerButtons();
    cocos2d::CCLabelBMFont* m_blendingLabel;
    int m_blendingMode;
    cocos2d::CCArray* m_layerButtons;
    int m_blendingLayer;
    cocos2d::CCArray* m_gradientLabels;
};
