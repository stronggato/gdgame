#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/HSVWidgetDelegate.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
#include <Geode/binding/ColorSetupDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CustomizeObjectLayer : public FLAlertLayer, public HSVWidgetDelegate, public ColorSelectDelegate, public ColorSetupDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x13dbd0
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomizeObjectLayer();

    /**
     * @note[short] MacOS (ARM): 0x1fddfc
     * @note[short] Windows: 0x13dd50
     * @note[short] iOS: 0x208bb0
     * @note[short] Android
     */
    static CustomizeObjectLayer* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x18f95c
     * @note[short] MacOS (Intel): 0x1dba00
     * @note[short] Windows: 0x142d50
     * @note[short] iOS: 0x58f4c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x18db50
     * @note[short] MacOS (Intel): 0x1d9ad0
     * @note[short] Windows: 0x142280
     * @note[short] iOS: 0x58c68
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x18f6d4
     * @note[short] MacOS (Intel): 0x1db760
     * @note[short] Windows: 0x1250a0
     * @note[short] iOS: 0x58dc0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x18f6f0
     * @note[short] MacOS (Intel): 0x1db7a0
     * @note[short] Windows: 0x142430
     * @note[short] iOS: 0x58ddc
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x18f3b0
     * @note[short] MacOS (Intel): 0x1db400
     * @note[short] Windows: 0x141980
     * @note[short] iOS: 0x58a70
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value);

    /**
     * @note[short] MacOS (ARM): 0x18f174
     * @note[short] MacOS (Intel): 0x1db1a0
     * @note[short] Windows: 0x1412c0
     * @note[short] iOS: 0x58a64
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x18ed64
     * @note[short] MacOS (Intel): 0x1dad30
     * @note[short] Windows: 0x140f20
     * @note[short] iOS: 0x58740
     * @note[short] Android
     */
    virtual void colorSetupClosed(int id);

    /**
     * @note[short] MacOS (ARM): 0x18f180
     * @note[short] MacOS (Intel): 0x1db1d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1fd74c
     * @note[short] MacOS (Intel): 0x1d9670
     * @note[short] Windows: 0x1412d0
     * @note[short] iOS: 0x232e54
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x18e82c
     * @note[short] MacOS (Intel): 0x1da7c0
     * @note[short] iOS: 0x5833c
     * @note[short] Android
     */
    int getActiveMode(bool ignoreDefault);

    /**
     * @note[short] MacOS (ARM): 0x18f0dc
     * @note[short] MacOS (Intel): 0x1db100
     * @note[short] iOS: 0x589e4
     * @note[short] Android
     */
    ButtonSprite* getButtonByTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x18f39c
     * @note[short] MacOS (Intel): 0x1db3d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccHSVValue getHSV();

    /**
     * @note[short] MacOS (ARM): 0x18efc0
     * @note[short] MacOS (Intel): 0x1dafd0
     * @note[short] Windows: 0x142b40
     * @note[short] iOS: 0x588c8
     * @note[short] Android
     */
    void highlightSelected(ButtonSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x18b748
     * @note[short] MacOS (Intel): 0x1d73f0
     * @note[short] Windows: 0x13def0
     * @note[short] iOS: 0x557bc
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x18e490
     * @note[short] MacOS (Intel): 0x1da3f0
     * @note[short] Windows: 0x142770
     * @note[short] iOS: 0x580dc
     * @note[short] Android
     */
    void onBreakApart(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e7e8
     * @note[short] MacOS (Intel): 0x1da770
     * @note[short] iOS: 0x582f8
     * @note[short] Android
     */
    void onBrowse(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e540
     * @note[short] MacOS (Intel): 0x1da4c0
     * @note[short] Windows: 0xd7010
     * @note[short] iOS: 0x58114
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18d6cc
     * @note[short] MacOS (Intel): 0x1d95d0
     * @note[short] Windows: 0x142c70
     * @note[short] iOS: 0x5761c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e71c
     * @note[short] MacOS (Intel): 0x1da6a0
     * @note[short] iOS: 0x58274
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e1c8
     * @note[short] MacOS (Intel): 0x1da100
     * @note[short] Windows: 0x141000
     * @note[short] iOS: 0x57eb4
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x51240c
     * @note[short] MacOS (Intel): 0x3c16b0
     * @note[short] iOS: 0x110ea4
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e21c
     * @note[short] MacOS (Intel): 0x1da160
     * @note[short] Windows: 0x140a70
     * @note[short] iOS: 0x57f08
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e5f4
     * @note[short] MacOS (Intel): 0x1da570
     * @note[short] iOS: 0x581e0
     * @note[short] Android
     */
    void onNextColorChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e744
     * @note[short] MacOS (Intel): 0x1da6d0
     * @note[short] Windows: 0x140be0
     * @note[short] iOS: 0x5829c
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18df0c
     * @note[short] MacOS (Intel): 0x1d9e70
     * @note[short] Windows: 0x142910
     * @note[short] iOS: 0x57d18
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18d86c
     * @note[short] MacOS (Intel): 0x1d97a0
     * @note[short] Windows: 0x141be0
     * @note[short] iOS: 0x577a4
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x300d60
     * @note[short] Windows: 0x140d40
     * @note[short] iOS: 0x57960
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x1d9f20
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18ec10
     * @note[short] MacOS (Intel): 0x1dabc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x586a0
     * @note[short] Android
     */
    void recreateLayer();

    /**
     * @note[short] MacOS (ARM): 0x18e2d0
     * @note[short] MacOS (Intel): 0x1da230
     * @note[short] Windows: 0x140a20
     * @note[short] iOS: 0x57f48
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18f470
     * @note[short] MacOS (Intel): 0x1db4f0
     * @note[short] Windows: 0x141df0
     * @note[short] iOS: 0x58b28
     * @note[short] Android
     */
    void toggleVisible();

    /**
     * @note[short] MacOS (ARM): 0x18eaa8
     * @note[short] MacOS (Intel): 0x1daa40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x58548
     * @note[short] Android
     */
    void updateChannelLabel(int channel);

    /**
     * @note[short] MacOS (ARM): 0x18e9d8
     * @note[short] MacOS (Intel): 0x1da970
     * @note[short] iOS: 0x58478
     * @note[short] Android
     */
    void updateColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x18e910
     * @note[short] MacOS (Intel): 0x1da8b0
     * @note[short] Windows: 0x142150
     * @note[short] iOS: 0x58418
     * @note[short] Android
     */
    void updateCurrentSelection();

    /**
     * @note[short] MacOS (ARM): 0x18e0a8
     * @note[short] MacOS (Intel): 0x1d9ff0
     * @note[short] Windows: 0x1427f0
     * @note[short] iOS: 0x57e20
     * @note[short] Android
     */
    void updateCustomColorLabels();

    /**
     * @note[short] MacOS (ARM): 0x18dd78
     * @note[short] MacOS (Intel): 0x1d9cd0
     * @note[short] Windows: 0x141500
     * @note[short] iOS: 0x57b84
     * @note[short] Android
     */
    void updateHSVButtons();

    /**
     * @note[short] MacOS (ARM): 0xa7a74
     * @note[short] MacOS (Intel): 0x1da2a0
     * @note[short] iOS: 0x57f94
     * @note[short] Android
     */
    void updateKerningLabel();

    /**
     * @note[short] MacOS (ARM): 0x18ee78
     * @note[short] MacOS (Intel): 0x1dae40
     * @note[short] Windows: 0x1429d0
     * @note[short] iOS: 0x587b4
     * @note[short] Android
     */
    void updateSelected(int id);
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_colorButtons;
    cocos2d::CCArray* m_colorTabNodes;
    cocos2d::CCArray* m_textTabNodes;
    cocos2d::CCArray* m_unkArray;
    cocos2d::CCArray* m_detailTabNodes;
    int m_selectedMode;
    int m_customColorChannel;
    bool m_hasBaseColor;
    bool m_hasDetailColor;
    bool m_glowDisabled;
    CCMenuItemSpriteExtra* m_baseButton;
    CCMenuItemSpriteExtra* m_detailButton;
    CCMenuItemSpriteExtra* m_textButton;
    CCMenuItemSpriteExtra* m_baseColorHSV;
    CCMenuItemSpriteExtra* m_detailColorHSV;
    cocos2d::CCLabelBMFont* m_titleLabel;
    cocos2d::CCLabelBMFont* m_selectedColorLabel;
    CCTextInputNode* m_customColorInput;
    CCTextInputNode* m_textInput;
    int m_kerningAmount;
    cocos2d::CCLabelBMFont* m_kerningLabel;
    Slider* m_kerningSlider;
    ButtonSprite* m_customColorButtonSprite;
    CCMenuItemSpriteExtra* m_customColorButton;
    CCMenuItemSpriteExtra* m_arrowDown;
    CCMenuItemSpriteExtra* m_arrowUp;
    cocos2d::extension::CCScale9Sprite* m_customColorInputBG;
    ColorChannelSprite* m_colorSprite;
    CCMenuItemSpriteExtra* m_colorSpriteButton;
    CCMenuItemSpriteExtra* m_liveSelectButton;
    bool m_showTextInput;
    bool m_customColorSelected;
    bool m_disableTextDelegate;
};
