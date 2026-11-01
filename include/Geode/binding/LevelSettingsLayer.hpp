#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
#include <Geode/binding/SelectArtDelegate.hpp>
#include <Geode/binding/SelectSettingDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/CustomSongLayerDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelSettingsLayer : public FLAlertLayer, public ColorSelectDelegate, public SelectArtDelegate, public SelectSettingDelegate, public FLAlertLayerProtocol, public CustomSongLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x4544e0
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelSettingsLayer();

    /**
     * @note[short] MacOS (ARM): 0x290dc8
     * @note[short] iOS: 0x3e34c
     * @note[short] Android
     */
    static LevelSettingsLayer* create(LevelSettingsObject* object, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x7065c
     * @note[short] MacOS (Intel): 0x78b20
     * @note[short] Windows: 0x457390
     * @note[short] iOS: 0x20b774
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x458290
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x201474
     * @note[short] MacOS (Intel): 0x258ff0
     * @note[short] Windows: 0x1639d0
     * @note[short] iOS: 0x3a0ee0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2013bc
     * @note[short] MacOS (Intel): 0x258f10
     * @note[short] Windows: 0x457b10
     * @note[short] iOS: 0x20b8e0
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x2016c0
     * @note[short] MacOS (Intel): 0x2592d0
     * @note[short] Windows: 0x457f30
     * @note[short] iOS: 0x20bab8
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x200e78
     * @note[short] MacOS (Intel): 0x258980
     * @note[short] Windows: 0x457210
     * @note[short] iOS: 0x20b5e8
     * @note[short] Android
     */
    virtual void selectSettingClosed(SelectSettingLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x201080
     * @note[short] MacOS (Intel): 0x258bb0
     * @note[short] Windows: 0x1250a0
     * @note[short] iOS: 0x20b7c8
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x20109c
     * @note[short] MacOS (Intel): 0x258bf0
     * @note[short] Windows: 0x4576e0
     * @note[short] iOS: 0x20b7e4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x200850
     * @note[short] MacOS (Intel): 0x2582a0
     * @note[short] Windows: 0x457420
     * @note[short] iOS: 0x20b0ec
     * @note[short] Android
     */
    void createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1fde90
     * @note[short] MacOS (Intel): 0x255610
     * @note[short] Windows: 0x58a8e0
     * @note[short] iOS: 0x208c34
     * @note[short] Android
     */
    bool init(LevelSettingsObject* object, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2005f4
     * @note[short] MacOS (Intel): 0x258000
     * @note[short] Windows: 0x457cf0
     * @note[short] iOS: 0x20aef4
     * @note[short] Android
     */
    void onBGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200754
     * @note[short] MacOS (Intel): 0x258190
     * @note[short] Windows: 0xc59d0
     * @note[short] iOS: 0x20aff0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2000fc
     * @note[short] MacOS (Intel): 0x257ab0
     * @note[short] iOS: 0x20ad44
     * @note[short] Android
     */
    void onCol(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2584b0
     * @note[short] Android
     */
    void onDisable(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2006f8
     * @note[short] MacOS (Intel): 0x258130
     * @note[short] iOS: 0x20af94
     * @note[short] Android
     */
    void onFGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200474
     * @note[short] MacOS (Intel): 0x257e80
     * @note[short] Windows: 0x456fe0
     * @note[short] iOS: 0x20ae04
     * @note[short] Android
     */
    void onGameplayMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200630
     * @note[short] MacOS (Intel): 0x258040
     * @note[short] Windows: 0x457d40
     * @note[short] iOS: 0x20af30
     * @note[short] Android
     */
    void onGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200430
     * @note[short] MacOS (Intel): 0x257e40
     * @note[short] Windows: 0x457a20
     * @note[short] iOS: 0x20adc0
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200b64
     * @note[short] MacOS (Intel): 0x258580
     * @note[short] Windows: 0x4571b0
     * @note[short] iOS: 0x20b3ec
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200abc
     * @note[short] MacOS (Intel): 0x2584d0
     * @note[short] Windows: 0x4576a0
     * @note[short] iOS: 0x20b344
     * @note[short] Android
     */
    void onOptionToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200734
     * @note[short] MacOS (Intel): 0x258170
     * @note[short] iOS: 0x20afd0
     * @note[short] Android
     */
    void onSelectFont(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x201198
     * @note[short] MacOS (Intel): 0x258cf0
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x201258
     * @note[short] MacOS (Intel): 0x258db0
     * @note[short] Android
     */
    void onSelectSpeed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200ba0
     * @note[short] MacOS (Intel): 0x2585d0
     * @note[short] Windows: 0x4570f0
     * @note[short] iOS: 0x20b428
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2000a8
     * @note[short] MacOS (Intel): 0x257a50
     * @note[short] Windows: 0x457a70
     * @note[short] iOS: 0x20acf0
     * @note[short] Android
     */
    void onShowPicker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200b28
     * @note[short] MacOS (Intel): 0x258540
     * @note[short] iOS: 0x20b3b0
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x201388
     * @note[short] MacOS (Intel): 0x258ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showPicker(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x2013c8
     * @note[short] MacOS (Intel): 0x258f40
     * @note[short] Windows: 0x457b90
     * @note[short] iOS: 0x20b8ec
     * @note[short] Android
     */
    void updateColorSprite(ColorChannelSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x20011c
     * @note[short] MacOS (Intel): 0x257ad0
     * @note[short] Windows: 0x457b20
     * @note[short] iOS: 0x20ad64
     * @note[short] Android
     */
    void updateColorSprites();

    /**
     * @note[short] MacOS (ARM): 0x200544
     * @note[short] MacOS (Intel): 0x257f50
     * @note[short] Windows: 0x457020
     * @note[short] iOS: 0x20ae44
     * @note[short] Android
     */
    void updateGameplayModeButtons();
    SongSelectNode* m_songSelectNode;
    Speed m_speed;
    ColorChannelSprite* m_bgColorSprite;
    ColorChannelSprite* m_gColorSprite;
    ColorChannelSprite* m_g2ColorSprite;
    ColorChannelSprite* m_lineColorSprite;
    ColorChannelSprite* m_mgColorSprite;
    ColorChannelSprite* m_mg2ColorSprite;
    cocos2d::CCSprite* m_moreColorsSprite;
    cocos2d::CCSprite* m_backgroundSprite;
    cocos2d::CCSprite* m_groundSprite;
    cocos2d::CCSprite* m_middlegroundSprite;
    cocos2d::CCSprite* m_speedSprite;
    cocos2d::CCSprite* m_modeSprite;
    LevelSettingsObject* m_settingsObject;
    void* m_unkPtr;
    cocos2d::CCArray* m_modeToggles;
    cocos2d::CCArray* m_speedButtons;
    LevelSettingsDelegate* m_delegate;
    LevelEditorLayer* m_editorLayer;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    CCMenuItemSpriteExtra* m_classicButton;
    CCMenuItemSpriteExtra* m_platformerButton;
    bool m_disableInput;
};
