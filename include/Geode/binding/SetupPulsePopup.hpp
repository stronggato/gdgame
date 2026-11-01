#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/ColorPickerDelegate.hpp>
#include <Geode/binding/GJSpecialColorSelectDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class SetupPulsePopup : public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupPulsePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPulsePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5c8e80
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupPulsePopup();

    /**
     * @note[short] MacOS (ARM): 0x83ada8
     * @note[short] Windows: 0x5c8f90
     * @note[short] iOS: 0x519ce8
     * @note[short] Android
     */
    static SetupPulsePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x398d30
     * @note[short] Windows: 0x5cdc20
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x320ac8
     * @note[short] MacOS (Intel): 0x397930
     * @note[short] Windows: 0x5ccb70
     * @note[short] iOS: 0x45b210
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x3214f8
     * @note[short] MacOS (Intel): 0x398590
     * @note[short] Windows: 0x5cd930
     * @note[short] iOS: 0x45ba74
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x321ba8
     * @note[short] MacOS (Intel): 0x398db0
     * @note[short] Windows: 0x5cdd00
     * @note[short] iOS: 0x45bec8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5cdb10
     * @note[short] Android
     */
    virtual void colorValueChanged(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x321ba0
     * @note[short] MacOS (Intel): 0x398d90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45bec0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5cd3a0
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* select, int id);

    /**
     * @note[short] MacOS (ARM): 0x32131c
     * @note[short] MacOS (Intel): 0x398310
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue();

    /**
     * @note[short] MacOS (ARM): 0x31cd24
     * @note[short] iOS: 0x457d30
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x397200
     * @note[short] Windows: 0x128820
     * @note[short] iOS: 0x45ad8c
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x396e80
     * @note[short] Android
     */
    void onExclusive(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupMainOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupSecondaryOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x397170
     * @note[short] Android
     */
    void onHSVLegacyMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x32041c
     * @note[short] MacOS (Intel): 0x397240
     * @note[short] Windows: 0xa1530
     * @note[short] iOS: 0x45adc0
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31ff4c
     * @note[short] MacOS (Intel): 0x396c60
     * @note[short] Windows: 0x5cc6f0
     * @note[short] iOS: 0x45aa48
     * @note[short] Android
     */
    void onSelectPulseMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x320550
     * @note[short] MacOS (Intel): 0x397380
     * @note[short] iOS: 0x45ae78
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31ff00
     * @note[short] MacOS (Intel): 0x396c20
     * @note[short] iOS: 0x45a9fc
     * @note[short] Android
     */
    void onSelectSpecialTargetID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31fca0
     * @note[short] MacOS (Intel): 0x396970
     * @note[short] Windows: 0x5cc920
     * @note[short] iOS: 0x45a81c
     * @note[short] Android
     */
    void onSelectTargetMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3204a0
     * @note[short] MacOS (Intel): 0x3972b0
     * @note[short] iOS: 0x45ae0c
     * @note[short] Android
     */
    void onUpdateCopyColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x320468
     * @note[short] MacOS (Intel): 0x397280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void selectColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x31f6ac
     * @note[short] MacOS (Intel): 0x396350
     * @note[short] Windows: 0x5cd540
     * @note[short] iOS: 0x45a498
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateColorLabels();

    /**
     * @note[short] MacOS (ARM): 0x321744
     * @note[short] MacOS (Intel): 0x398870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45bc08
     * @note[short] Android
     */
    void updateColorValue();

    /**
     * @note[short] MacOS (ARM): 0x3212a8
     * @note[short] MacOS (Intel): 0x398270
     * @note[short] iOS: 0x45b838
     * @note[short] Android
     */
    void updateCopyColor();

    /**
     * @note[short] Android
     */
    void updateCopyColorTextInputLabel();

    /**
     * @note[short] Android
     */
    void updateFadeInLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x321330
     * @note[short] iOS: 0x45b8ac
     * @note[short] Android
     */
    void updateFadeInTime();

    /**
     * @note[short] Android
     */
    void updateFadeOutLabel(bool decimals);

    /**
     * @note[short] Android
     */
    void updateFadeOutTime();

    /**
     * @note[short] MacOS (ARM): 0x320f10
     * @note[short] MacOS (Intel): 0x397e60
     * @note[short] iOS: 0x45b5fc
     * @note[short] Android
     */
    void updateGroupMainOnly();

    /**
     * @note[short] MacOS (ARM): 0x320ea4
     * @note[short] MacOS (Intel): 0x397de0
     * @note[short] iOS: 0x45b590
     * @note[short] Android
     */
    void updateGroupSecondaryOnly();

    /**
     * @note[short] Android
     */
    void updateHoldLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x321330
     * @note[short] iOS: 0x45b8ac
     * @note[short] Android
     */
    void updateHoldTime();

    /**
     * @note[short] MacOS (Intel): 0x3984e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateHSVValue();

    /**
     * @note[short] MacOS (ARM): 0x320980
     * @note[short] MacOS (Intel): 0x3977b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45b0c8
     * @note[short] Android
     */
    void updatePulseMode();

    /**
     * @note[short] MacOS (ARM): 0x320a5c
     * @note[short] MacOS (Intel): 0x3978b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45b1a4
     * @note[short] Android
     */
    void updatePulseTargetType();

    /**
     * @note[short] MacOS (ARM): 0x3209ec
     * @note[short] MacOS (Intel): 0x397830
     * @note[short] Windows: 0x5ce6f0
     * @note[short] iOS: 0x45b134
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x32059c
     * @note[short] MacOS (Intel): 0x3973c0
     * @note[short] Windows: 0x5ce840
     * @note[short] Android
     */
    void updateTextInputLabel();
    cocos2d::extension::CCControlColourPicker* m_colorPicker;
    bool m_unk3c0;
    cocos2d::CCArray* m_colorObjects;
    cocos2d::CCArray* m_hsvObjects;
    Slider* m_fadeInSlider;
    Slider* m_holdSlider;
    Slider* m_fadeOutSlider;
    CCMenuItemSpriteExtra* m_channelButton;
    CCMenuItemSpriteExtra* m_groupButton;
    cocos2d::CCLabelBMFont* m_idLabel;
    cocos2d::ccColor3B m_originalColor;
    cocos2d::CCSprite* m_currentColorSprite;
    cocos2d::CCSprite* m_originalColorSprite;
    cocos2d::ccColor3B m_currentColor;
    CCMenuItemSpriteExtra* m_colorButton;
    CCMenuItemSpriteExtra* m_hsvButton;
    ConfigureHSVWidget* m_hsvWidget;
    CCMenuItemSpriteExtra* m_specialColorButton;
    CCTextInputNode* m_fadeInInput;
    CCTextInputNode* m_holdInput;
    CCTextInputNode* m_fadeOutInput;
    CCTextInputNode* m_idInput;
    CCTextInputNode* m_colorIDInput;
    CCMenuItemToggler* m_mainOnlyToggler;
    CCMenuItemToggler* m_secondaryOnlyToggler;
    CCMenuItemToggler* m_staticHSVToggler;
    cocos2d::CCLabelBMFont* m_mainOnlyLabel;
    cocos2d::CCLabelBMFont* m_secondaryOnlyLabel;
    cocos2d::CCLabelBMFont* m_staticHSVLabel;
    bool m_groupMainOnly;
    bool m_groupSecondaryOnly;
    bool m_staticHSV;
    int m_targetGroupID;
    int m_copyColorID;
    bool m_colorInitializing;
    float m_fadeInTime;
    float m_holdTime;
    float m_fadeOutTime;
    int m_pulseMode;
    int m_pulseTargetType;
    bool m_modesInitializing;
    bool m_pulseExclusive;
    cocos2d::ccHSVValue m_hsv;
    CCTextInputNode* m_rInput;
    CCTextInputNode* m_gInput;
    CCTextInputNode* m_bInput;
    CCTextInputNode* m_hexInput;
};
