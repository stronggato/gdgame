#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupShaderEffectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShaderEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShaderEffectPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupShaderEffectPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~SetupShaderEffectPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupShaderEffectPopup* create(EffectGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x25d540
     * @note[short] MacOS (Intel): 0x2bd300
     * @note[short] Windows: 0x5e64e0
     * @note[short] iOS: 0x21b2b4
     * @note[short] Android
     */
    virtual void toggleGroup(int group, bool visible);

    /**
     * @note[short] MacOS (ARM): 0x25d580
     * @note[short] MacOS (Intel): 0x2bd340
     * @note[short] Windows: 0x3978d0
     * @note[short] iOS: 0x21b2f4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25cc20
     * @note[short] Windows: 0x5dbf10
     * @note[short] iOS: 0x21ac98
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x25d210
     * @note[short] MacOS (Intel): 0x2bcfd0
     * @note[short] Windows: 0x5e60b0
     * @note[short] iOS: 0x21b01c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2539c8
     * @note[short] MacOS (Intel): 0x2b2a90
     * @note[short] Windows: 0x5dbc20
     * @note[short] iOS: 0x213044
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x72a8
     * @note[short] MacOS (Intel): 0x2bcf50
     * @note[short] Windows: 0x5e5a10
     * @note[short] iOS: 0x21afa8
     * @note[short] Android
     */
    void onResetColors(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25cf60
     * @note[short] MacOS (Intel): 0x2bcd00
     * @note[short] iOS: 0x21ae28
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x259564
     * @note[short] Windows: 0x593a60
     * @note[short] iOS: 0x217f5c
     * @note[short] Android
     */
    void setupBulge();

    /**
     * @note[short] MacOS (ARM): 0x2564f0
     * @note[short] Windows: 0x5df730
     * @note[short] Android
     */
    void setupChromatic();

    /**
     * @note[short] MacOS (ARM): 0x256a4c
     * @note[short] MacOS (Intel): 0x2b60f0
     * @note[short] Windows: 0x5dfcb0
     * @note[short] iOS: 0x215a40
     * @note[short] Android
     */
    void setupChromaticGlitch();

    /**
     * @note[short] MacOS (ARM): 0x25b8e4
     * @note[short] MacOS (Intel): 0x2bb6b0
     * @note[short] Windows: 0x5fb3f0
     * @note[short] iOS: 0x219dfc
     * @note[short] Android
     */
    void setupColorChange();

    /**
     * @note[short] MacOS (ARM): 0x255e90
     * @note[short] MacOS (Intel): 0x2b5500
     * @note[short] Windows: 0x395b90
     * @note[short] iOS: 0x215090
     * @note[short] Android
     */
    void setupGlitch();

    /**
     * @note[short] MacOS (ARM): 0x25a844
     * @note[short] MacOS (Intel): 0x2ba5b0
     * @note[short] Windows: 0x5e4150
     * @note[short] Android
     */
    void setupGrayscale();

    /**
     * @note[short] MacOS (ARM): 0x25b5dc
     * @note[short] MacOS (Intel): 0x2bb3a0
     * @note[short] Windows: 0x5e4fe0
     * @note[short] iOS: 0x219b7c
     * @note[short] Android
     */
    void setupHueShift();

    /**
     * @note[short] MacOS (ARM): 0x25afc0
     * @note[short] MacOS (Intel): 0x2bad50
     * @note[short] Windows: 0x5e4980
     * @note[short] Android
     */
    void setupInvertColor();

    /**
     * @note[short] MacOS (ARM): 0x257878
     * @note[short] Android
     */
    void setupLensCircle();

    /**
     * @note[short] MacOS (ARM): 0x258a70
     * @note[short] iOS: 0x2175d0
     * @note[short] Android
     */
    void setupMotionBlur();

    /**
     * @note[short] MacOS (ARM): 0x259d8c
     * @note[short] Windows: 0x5ad310
     * @note[short] iOS: 0x218678
     * @note[short] Android
     */
    void setupPinch();

    /**
     * @note[short] MacOS (ARM): 0x2571f8
     * @note[short] Windows: 0x5e0560
     * @note[short] Android
     */
    void setupPixelate();

    /**
     * @note[short] MacOS (ARM): 0x258120
     * @note[short] MacOS (Intel): 0x2b6fd0
     * @note[short] iOS: 0x216db4
     * @note[short] Android
     */
    void setupRadialBlur();

    /**
     * @note[short] MacOS (ARM): 0x25acd4
     * @note[short] MacOS (Intel): 0x2baa90
     * @note[short] Windows: 0x5e4650
     * @note[short] iOS: 0x2193cc
     * @note[short] Android
     */
    void setupSepia();

    /**
     * @note[short] MacOS (ARM): 0x25c3dc
     * @note[short] MacOS (Intel): 0x2bc1e0
     * @note[short] Windows: 0x5dc000
     * @note[short] iOS: 0x21a74c
     * @note[short] Android
     */
    void setupShaderTrigger();

    /**
     * @note[short] MacOS (ARM): 0x254dc0
     * @note[short] Android
     */
    void setupShockLine();

    /**
     * @note[short] MacOS (ARM): 0x253c30
     * @note[short] Android
     */
    void setupShockWave();

    /**
     * @note[short] MacOS (ARM): 0x25bf2c
     * @note[short] MacOS (Intel): 0x2bbd40
     * @note[short] Windows: 0x5e5bd0
     * @note[short] iOS: 0x21a374
     * @note[short] Android
     */
    void setupSplitScreen();

    /**
     * @note[short] MacOS (ARM): 0x25d0e4
     * @note[short] MacOS (Intel): 0x2bce90
     * @note[short] Windows: 0x5dcad0
     * @note[short] iOS: 0x21aef4
     * @note[short] Android
     */
    void updateZLayerButtons();

    /**
     * @note[short] MacOS (ARM): 0x25cdc0
     * @note[short] MacOS (Intel): 0x2bcbd0
     * @note[short] iOS: 0x21adf8
     * @note[short] Android
     */
    std::string zLayerToString(int zLayer);
    cocos2d::CCArray* m_zLayerSprites;
    int m_zLayerMin;
    int m_zLayerMax;
    bool m_changeMin;
    int m_objectID;
};
