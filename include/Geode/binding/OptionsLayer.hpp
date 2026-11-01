#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/VolumeChangeDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class OptionsLayer : public GJDropDownLayer, public FLAlertLayerProtocol, public VolumeChangeDelegate {
public:
    static constexpr auto CLASS_NAME = "OptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x4c7600
     * @note[short] Android: Rebinded
     */
    virtual  ~OptionsLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     OptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x76e2cc
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c1a80
     * @note[short] Android
     */
    static OptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x76e7fc
     * @note[short] MacOS (Intel): 0x878f20
     * @note[short] Windows: 0x4c7c70
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x6433fc
     * @note[short] MacOS (Intel): 0x87a740
     * @note[short] Windows: 0x4c93a0
     * @note[short] iOS: 0x112ddc
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x76fec4
     * @note[short] MacOS (Intel): 0x87a7b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x112e68
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Windows: 0x4c7bb0
     * @note[short] Android
     */
    virtual void volumeChanged();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x76f890
     * @note[short] MacOS (Intel): 0x879fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x76f798
     * @note[short] MacOS (Intel): 0x879ec0
     * @note[short] Windows: 0x4c8930
     * @note[short] iOS: 0x112a94
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x76f1c8
     * @note[short] MacOS (Intel): 0x879930
     * @note[short] iOS: 0x1127fc
     * @note[short] Android
     */
    void onAccount(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x30562c
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x509848
     * @note[short] MacOS (Intel): 0x8799d0
     * @note[short] Windows: 0x11ca70
     * @note[short] iOS: 0x112880
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onParental(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x87a650
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onProgressBar(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4c9300
     * @note[short] iOS: 0x11284c
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x879c70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x76f550
     * @note[short] MacOS (Intel): 0x879ca0
     * @note[short] Windows: 0x4c8b40
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x76f880
     * @note[short] iOS: 0x112860
     * @note[short] Android
     */
    void onSoundtracks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x76f298
     * @note[short] MacOS (Intel): 0x879a30
     * @note[short] iOS: 0x1ed378
     * @note[short] Android
     */
    void onSupport(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x76f218
     * @note[short] MacOS (Intel): 0x879990
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x76f808
     * @note[short] MacOS (Intel): 0x879f30
     * @note[short] Windows: 0x180db0
     * @note[short] iOS: 0x112b00
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x87a680
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryEnableRecord();
    cocos2d::CCMenu* m_optionsMenu;
    void* m_unknown;
    int m_layerChoice;
    bool m_recordReplays;
    Slider* m_musicSlider;
    Slider* m_sfxSlider;
    int m_lastVaultDialog;
};
