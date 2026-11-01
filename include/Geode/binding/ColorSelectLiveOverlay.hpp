#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class ColorSelectLiveOverlay : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ColorSelectLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ColorSelectLiveOverlay, FLAlertLayer)

    /**
     * @note[short] Windows: 0x123670
     * @note[short] Android: Rebinded
     */
    virtual  ~ColorSelectLiveOverlay();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* create(ColorAction* baseAction, ColorAction* detailAction, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x650198
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x118bd4
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* createWithActions(ColorAction* baseAction, ColorAction* detailAction);

    /**
     * @note[short] MacOS (ARM): 0x70238c
     * @note[short] MacOS (Intel): 0x801d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x118b38
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* createWithObject(EffectGameObject* object);

    /**
     * @note[short] Windows: 0x124d70
     * @note[short] iOS: 0x2330f4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4e5e7c
     * @note[short] MacOS (Intel): 0x596470
     * @note[short] Windows: 0x124dc0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (Intel): 0x595b20
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e5dc0
     * @note[short] MacOS (Intel): 0x5963b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void colorValueChanged(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x4e5b28
     * @note[short] MacOS (Intel): 0x596110
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (Intel): 0x595720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x119898
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue();

    /**
     * @note[short] MacOS (ARM): 0x4e45d8
     * @note[short] MacOS (Intel): 0x5948c0
     * @note[short] Windows: 0xbcfd0
     * @note[short] iOS: 0x118bdc
     * @note[short] Android
     */
    bool init(ColorAction* baseAction, ColorAction* detailAction, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4e57e0
     * @note[short] MacOS (Intel): 0x595e00
     * @note[short] Windows: 0x124c20
     * @note[short] iOS: 0x119d5c
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e561c
     * @note[short] MacOS (Intel): 0x595b70
     * @note[short] iOS: 0x119ba0
     * @note[short] Android
     */
    void selectColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x4e5370
     * @note[short] MacOS (Intel): 0x5957d0
     * @note[short] iOS: 0x119908
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e5eec
     * @note[short] MacOS (Intel): 0x596520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4e5ef0
     * @note[short] MacOS (Intel): 0x596530
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4e5ef4
     * @note[short] iOS: 0x11a094
     * @note[short] Android
     */
    void toggleControls(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x4e592c
     * @note[short] MacOS (Intel): 0x595f30
     * @note[short] iOS: 0x119ea8
     * @note[short] Android
     */
    void updateColorLabel();

    /**
     * @note[short] MacOS (ARM): 0x4e5d68
     * @note[short] MacOS (Intel): 0x596340
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateColorValue();

    /**
     * @note[short] MacOS (ARM): 0x4e5d28
     * @note[short] MacOS (Intel): 0x5962e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateOpacity();
    EffectGameObject* m_effectGameObject;
    cocos2d::CCArray* m_barSprites;
    cocos2d::CCArray* m_12buttons;
    ColorAction* m_baseColorAction;
    ColorAction* m_detailColorAction;
    cocos2d::ccColor3B m_mainColor;
    cocos2d::ccColor3B m_detailColor;
    cocos2d::ccColor3B m_targetColor;
    float m_unk2ac;
    int m_unk2b0;
    int m_unk2b4;
    float m_opacity;
    ColorSelectDelegate* m_delegate;
    bool m_disableTextDelegate;
    bool m_unk2c9;
    bool m_updateColor;
    Slider* m_hueSlider;
    Slider* m_saturationSlider;
    Slider* m_valueSlider;
    Slider* m_opacitySlider;
    cocos2d::CCSprite* m_colorSprite;
    cocos2d::CCSprite* m_oldColorSprite;
    cocos2d::CCSprite* m_saturationSprite;
    cocos2d::CCSprite* m_valueSprite;
    cocos2d::CCSprite* m_opacitySprite;
    double m_hue;
    double m_saturation;
    double m_value;
    cocos2d::CCLabelBMFont* m_colorLabel;
    bool m_detailColorSelected;
    bool m_closeButtonPressed;
};
