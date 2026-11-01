#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SetupPortalPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SetupPortalPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPortalPopup, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static SetupPortalPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4ebe48
     * @note[short] MacOS (Intel): 0x59cc30
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4eb738
     * @note[short] MacOS (Intel): 0x59c400
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x4eae4c
     * @note[short] MacOS (Intel): 0x26f0b0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4eb6e4
     * @note[short] MacOS (Intel): 0x59c3b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditCameraSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUnboundMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ebd60
     * @note[short] Android
     */
    void updateCameraEasing();

    /**
     * @note[short] Android
     */
    void updateCameraEasingLabel();

    /**
     * @note[short] MacOS (ARM): 0x4ebdd8
     * @note[short] MacOS (Intel): 0x59cbb0
     * @note[short] Android
     */
    void updateCameraPadding();

    /**
     * @note[short] MacOS (ARM): 0x4ebc74
     * @note[short] Android
     */
    void updateCameraPaddingLabel();

    /**
     * @note[short] MacOS (ARM): 0x4ebcc4
     * @note[short] MacOS (Intel): 0x59ca80
     * @note[short] Android
     */
    void updateItemVisibility();
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
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
    bool m_disableDelegate;
};
