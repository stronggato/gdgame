#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCameraOffsetTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraOffsetTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraOffsetTrigger, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5a88e0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCameraOffsetTrigger();

    /**
     * @note[short] MacOS (ARM): 0x18794
     * @note[short] iOS: 0x264b0
     * @note[short] Android
     */
    static SetupCameraOffsetTrigger* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x64df8c
     * @note[short] MacOS (Intel): 0x740920
     * @note[short] Windows: 0x5a9d80
     * @note[short] iOS: 0x221a0c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x64e9c4
     * @note[short] MacOS (Intel): 0x7414e0
     * @note[short] Windows: 0x5ab2b0
     * @note[short] iOS: 0x2222b4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64e75c
     * @note[short] MacOS (Intel): 0x7411b0
     * @note[short] Windows: 0x5aac70
     * @note[short] iOS: 0x22208c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5aa190
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] MacOS (ARM): 0x64c39c
     * @note[short] iOS: 0x220238
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] iOS: 0x2215dc
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5aa0c0
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64db64
     * @note[short] MacOS (Intel): 0x740500
     * @note[short] Windows: 0x5aab90
     * @note[short] iOS: 0x2216f0
     * @note[short] Android
     */
    void onTargetMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int posFromSliderValue(float value);

    /**
     * @note[short] Windows: 0x5aa800
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64db10
     * @note[short] MacOS (Intel): 0x740490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float sliderValueFromPos(int pos);

    /**
     * @note[short] MacOS (ARM): 0x64da60
     * @note[short] MacOS (Intel): 0x7403f0
     * @note[short] iOS: 0x221640
     * @note[short] Android
     */
    void sliderXChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64dab8
     * @note[short] MacOS (Intel): 0x740440
     * @note[short] iOS: 0x221698
     * @note[short] Android
     */
    void sliderYChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void toggleEasingRateVisibility();

    /**
     * @note[short] MacOS (ARM): 0x64e53c
     * @note[short] MacOS (Intel): 0x740f50
     * @note[short] iOS: 0x221e94
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x64de9c
     * @note[short] MacOS (Intel): 0x740860
     * @note[short] iOS: 0x221930
     * @note[short] Android
     */
    void updateEasingLabel();

    /**
     * @note[short] Android
     */
    void updateEasingRateLabel();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMoveCommandEasing();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMoveCommandEasingRate();

    /**
     * @note[short] MacOS (ARM): 0x64e5ac
     * @note[short] MacOS (Intel): 0x740fd0
     * @note[short] Windows: 0x5ab050
     * @note[short] iOS: 0x221efc
     * @note[short] Android
     */
    void updateMoveCommandPosX();

    /**
     * @note[short] Android
     */
    void updateMoveCommandPosY();

    /**
     * @note[short] iOS: 0x2217c0
     * @note[short] Android
     */
    void updateValueXLabel();

    /**
     * @note[short] Android
     */
    void updateValueYLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_cameraEasingLabel;
    EasingType m_cameraEasingType;
    float m_cameraEasingRate;
    CCMenuItemSpriteExtra* m_cameraEasingRateButton;
    cocos2d::CCLabelBMFont* m_cameraEasingRateLabel;
    CCTextInputNode* m_offsetXInput;
    CCTextInputNode* m_offsetYInput;
    Slider* m_offsetXSlider;
    Slider* m_offsetYSlider;
    int m_offsetX;
    int m_offsetY;
    int m_targetMode;
    CCMenuItemToggler* m_xOnlyToggler;
    CCMenuItemToggler* m_yOnlyToggler;
};
