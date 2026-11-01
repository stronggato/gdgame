#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/HSVWidgetDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class SetupEnterEffectPopup : public SetupTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupEnterEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEnterEffectPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5af560
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupEnterEffectPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupEnterEffectPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupEnterEffectPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x35e20c
     * @note[short] MacOS (Intel): 0x3dfd40
     * @note[short] Windows: 0x5b18f0
     * @note[short] iOS: 0x47f49c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x35e5e0
     * @note[short] MacOS (Intel): 0x3e0170
     * @note[short] Windows: 0x5b2020
     * @note[short] iOS: 0x47f6f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35e768
     * @note[short] MacOS (Intel): 0x3e0310
     * @note[short] Windows: 0x5a1910
     * @note[short] iOS: 0x47f854
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x35e734
     * @note[short] MacOS (Intel): 0x3e02e0
     * @note[short] Windows: 0x5a18e0
     * @note[short] iOS: 0x47f820
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x35e37c
     * @note[short] MacOS (Intel): 0x3dff30
     * @note[short] Windows: 0x5b1ac0
     * @note[short] iOS: 0x47f608
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (Intel): 0x3e0270
     * @note[short] Windows: 0x5a1880
     * @note[short] iOS: 0x47f798
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x35e700
     * @note[short] MacOS (Intel): 0x3e02b0
     * @note[short] Windows: 0x5a18b0
     * @note[short] iOS: 0x47f7ec
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] Windows: 0x5b1f20
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value);

    /**
     * @note[short] Windows: 0x392ff0
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x35e138
     * @note[short] MacOS (Intel): 0x3dfc70
     * @note[short] iOS: 0x47f3d0
     * @note[short] Android
     */
    void onEnterType(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextFreeEnterChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35e09c
     * @note[short] MacOS (Intel): 0x306270
     * @note[short] iOS: 0x47f35c
     * @note[short] Android
     */
    void onNextFreeEnterEffectID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35dfd4
     * @note[short] MacOS (Intel): 0x3dfb00
     * @note[short] iOS: 0x47f294
     * @note[short] Android
     */
    void updateHSVButton();
    int m_objectID;
    CCMenuItemToggler* m_enterOnlyToggler;
    CCMenuItemToggler* m_exitOnlyToggler;
    int m_enterType;
    CCMenuItemSpriteExtra* m_hsvButton;
    cocos2d::ccHSVValue m_hsvValue;
    bool m_hsvChanged;
};
