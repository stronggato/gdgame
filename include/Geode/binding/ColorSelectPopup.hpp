#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/ColorPickerDelegate.hpp>
#include <Geode/binding/GJSpecialColorSelectDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class ColorSelectPopup : public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "ColorSelectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ColorSelectPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ColorSelectPopup();

    /**
     * @note[short] MacOS (Intel): 0x801a00
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~ColorSelectPopup();

    /**
     * @note[short] MacOS (ARM): 0x7066dc
     * @note[short] MacOS (Intel): 0x806860
     * @note[short] Windows: 0x12a140
     * @note[short] iOS: 0x49f528
     * @note[short] Android
     */
    static std::string colorToHex(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x70238c
     * @note[short] MacOS (Intel): 0x801d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49bc40
     * @note[short] Android
     */
    static ColorSelectPopup* create(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x70239c
     * @note[short] MacOS (Intel): 0x801d80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49bc50
     * @note[short] Android
     */
    static ColorSelectPopup* create(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x702228
     * @note[short] MacOS (Intel): 0x801b90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49bbac
     * @note[short] Android
     */
    static ColorSelectPopup* create(EffectGameObject* effect, cocos2d::CCArray* array);

    /**
     * @note[short] Windows: 0x125420
     * @note[short] Android
     */
    static ColorSelectPopup* create(EffectGameObject* effect, cocos2d::CCArray* array, ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x4a0864
     * @note[short] MacOS (Intel): 0x806db0
     * @note[short] Windows: 0x14d660
     * @note[short] iOS: 0x49f678
     * @note[short] Android
     */
    static cocos2d::ccColor3B hexToColor(std::string hex);

    /**
     * @note[short] MacOS (Intel): 0x807c80
     * @note[short] Windows: 0x12a640
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (Intel): 0x8059d0
     * @note[short] Windows: 0x127e50
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x707d2c
     * @note[short] MacOS (Intel): 0x807d70
     * @note[short] Windows: 0x12a730
     * @note[short] iOS: 0x49fcf0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x129200
     * @note[short] Android
     */
    virtual void colorValueChanged(cocos2d::ccColor3B color);

    /**
     * @note[short] Windows: 0x12b140
     * @note[short] iOS: 0x4a00fc
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* select, int id);

    /**
     * @note[short] MacOS (ARM): 0x7061b0
     * @note[short] MacOS (Intel): 0x806210
     * @note[short] Windows: 0x1291f0
     * @note[short] iOS: 0x49f228
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (Intel): 0x8044a0
     * @note[short] Windows: 0x128f50
     * @note[short] iOS: 0x49de40
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x706000
     * @note[short] MacOS (Intel): 0x805fe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue();

    /**
     * @note[short] MacOS (ARM): 0x7023d8
     * @note[short] MacOS (Intel): 0x801db0
     * @note[short] Windows: 0x125610
     * @note[short] iOS: 0x49bc8c
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, ColorAction* action);

    /**
     * @note[short] MacOS (Intel): 0x804ab0
     * @note[short] Windows: 0x128820
     * @note[short] iOS: 0x49e1b4
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x8051f0
     * @note[short] Android
     */
    void onCopyOpacity(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x704d98
     * @note[short] MacOS (Intel): 0x804b30
     * @note[short] Windows: 0x128920
     * @note[short] iOS: 0x25d2cc
     * @note[short] Android
     */
    void onDefault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x805290
     * @note[short] Android
     */
    void onHSVLegacyMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x704d4c
     * @note[short] MacOS (Intel): 0x804af0
     * @note[short] Windows: 0xa1530
     * @note[short] iOS: 0x49e1e8
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7050b0
     * @note[short] MacOS (Intel): 0x804ef0
     * @note[short] Windows: 0x128660
     * @note[short] iOS: 0x49e41c
     * @note[short] Android
     */
    void onPlayerColor1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x705164
     * @note[short] MacOS (Intel): 0x804fb0
     * @note[short] Windows: 0x128740
     * @note[short] iOS: 0x49e4c8
     * @note[short] Android
     */
    void onPlayerColor2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x805320
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6535a8
     * @note[short] MacOS (Intel): 0x805070
     * @note[short] iOS: 0x34a57c
     * @note[short] Android
     */
    void onTintGround(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7108
     * @note[short] MacOS (Intel): 0x8051b0
     * @note[short] Windows: 0x12afb0
     * @note[short] iOS: 0x46e764
     * @note[short] Android
     */
    void onToggleHSVMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x705294
     * @note[short] MacOS (Intel): 0x805100
     * @note[short] Windows: 0x128470
     * @note[short] iOS: 0x49e5f0
     * @note[short] Android
     */
    void onToggleTintMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7054e4
     * @note[short] MacOS (Intel): 0x805370
     * @note[short] iOS: 0x49e830
     * @note[short] Android
     */
    void onUpdateCopyColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x705788
     * @note[short] MacOS (Intel): 0x805640
     * @note[short] iOS: 0x49e998
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x704c7c
     * @note[short] MacOS (Intel): 0x804a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void selectColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x704954
     * @note[short] MacOS (Intel): 0x8046b0
     * @note[short] Windows: 0x128bf0
     * @note[short] iOS: 0x49df7c
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateColorLabels();

    /**
     * @note[short] MacOS (ARM): 0x7062b8
     * @note[short] MacOS (Intel): 0x806370
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49f2a8
     * @note[short] Android
     */
    void updateColorValue();

    /**
     * @note[short] MacOS (ARM): 0x708148
     * @note[short] MacOS (Intel): 0x808210
     * @note[short] iOS: 0x4a0040
     * @note[short] Android
     */
    void updateCopyColor();

    /**
     * @note[short] Android
     */
    void updateCopyColorTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x707cb4
     * @note[short] MacOS (Intel): 0x807ce0
     * @note[short] Windows: 0x12ad20
     * @note[short] iOS: 0x49fc78
     * @note[short] Android
     */
    void updateCustomColorIdx();

    /**
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] MacOS (Intel): 0x8048d0
     * @note[short] Android
     */
    void updateDurLabel();

    /**
     * @note[short] MacOS (ARM): 0x7057f4
     * @note[short] MacOS (Intel): 0x8056b0
     * @note[short] Windows: 0x12aff0
     * @note[short] iOS: 0x49ea04
     * @note[short] Android
     */
    void updateHSVMode();

    /**
     * @note[short] MacOS (Intel): 0x806140
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateHSVValue();

    /**
     * @note[short] MacOS (ARM): 0x706014
     * @note[short] MacOS (Intel): 0x806000
     * @note[short] Windows: 0x128d70
     * @note[short] iOS: 0x49f0a0
     * @note[short] Android
     */
    void updateOpacity();

    /**
     * @note[short] MacOS (ARM): 0x704cb4
     * @note[short] MacOS (Intel): 0x804a50
     * @note[short] iOS: 0x49e150
     * @note[short] Android
     */
    void updateOpacityLabel();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel();
    cocos2d::extension::CCControlColourPicker* m_colorPicker;
    bool m_unk3c0;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    Slider* m_fadeTimeSlider;
    Slider* m_opacitySlider;
    CCMenuItemToggler* m_playerColor1Toggle;
    CCMenuItemToggler* m_playerColor2Toggle;
    cocos2d::ccColor3B m_originalColor;
    cocos2d::CCSprite* m_currentColorSprite;
    cocos2d::CCSprite* m_originalColorSprite;
    cocos2d::ccColor3B m_currentColor;
    ColorSelectDelegate* m_delegate;
    float m_fadeTime;
    int m_playerColor;
    int m_blending;
    float m_opacity;
    ColorAction* m_colorAction;
    CCTextInputNode* m_colorInput;
    bool m_backgroundTrigger;
    bool m_tintGround;
    bool m_legacyHSV;
    bool m_colorTrigger;
    bool m_noChannel;
    bool m_newColorTrigger;
    int m_colorID;
    bool m_initializing;
    int m_copyColorID;
    bool m_copyOpacity;
    ConfigureHSVWidget* m_hsvWidget;
    cocos2d::ccHSVValue m_hsv;
    cocos2d::CCArray* m_colorObjects;
    cocos2d::CCArray* m_copyObjects;
    CCTextInputNode* m_copyColorInput;
    CCTextInputNode* m_fadeTimeInput;
    void* m_unk488;
    void* m_unk490;
    bool m_showCopyObjects;
    CCTextInputNode* m_rInput;
    CCTextInputNode* m_gInput;
    CCTextInputNode* m_bInput;
    CCTextInputNode* m_hexInput;
};
