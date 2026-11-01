#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCameraModePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraModePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraModePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5a75b0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCameraModePopup();

    /**
     * @note[short] Android
     */
    static SetupCameraModePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x409ba0
     * @note[short] MacOS (Intel): 0x4a2590
     * @note[short] Windows: 0x5a8290
     * @note[short] iOS: 0x44f82c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x409e4c
     * @note[short] MacOS (Intel): 0x4a28d0
     * @note[short] Windows: 0x3978d0
     * @note[short] iOS: 0x44fab0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x408eb8
     * @note[short] iOS: 0x44ed94
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    void onEditCameraSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUnboundMode(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x44f638
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x409d64
     * @note[short] Windows: 0x5a8760
     * @note[short] iOS: 0x44f9d8
     * @note[short] Android
     */
    void updateCameraEasing();

    /**
     * @note[short] iOS: 0x44f6f4
     * @note[short] Android
     */
    void updateCameraEasingLabel();

    /**
     * @note[short] MacOS (ARM): 0x409ddc
     * @note[short] MacOS (Intel): 0x4a2850
     * @note[short] iOS: 0x44fa48
     * @note[short] Android
     */
    void updateCameraPadding();

    /**
     * @note[short] MacOS (ARM): 0x409ab4
     * @note[short] iOS: 0x44f740
     * @note[short] Android
     */
    void updateCameraPaddingLabel();

    /**
     * @note[short] MacOS (ARM): 0x409b04
     * @note[short] MacOS (Intel): 0x4a24e0
     * @note[short] Windows: 0x5a85a0
     * @note[short] iOS: 0x44f790
     * @note[short] Android
     */
    void updateItemVisibility();
    cocos2d::CCArray* m_freeModeObjects;
    cocos2d::CCArray* m_cameraSettingsObjects;
    Slider* m_cameraEasingSlider;
    cocos2d::CCLabelBMFont* m_cameraEasingLabel;
    int m_cameraEasing;
    Slider* m_cameraPaddingSlider;
    cocos2d::CCLabelBMFont* m_cameraPaddingLabel;
    float m_cameraPadding;
    bool m_freeMode;
    bool m_cameraSettingsEnabled;
    bool m_cameraModeObjects;
};
