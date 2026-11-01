#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAreaMoveTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaMoveTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaMoveTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x19b620
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaMoveTriggerPopup();

    /**
     * @note[short] Windows: 0x59eca0
     * @note[short] Android: Rebinded
     */
     ~SetupAreaMoveTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c4ab8
     * @note[short] Android
     */
    static SetupAreaMoveTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x431ee8
     * @note[short] MacOS (Intel): 0x4d0130
     * @note[short] Windows: 0x5a1910
     * @note[short] iOS: 0x39824
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x431a7c
     * @note[short] MacOS (Intel): 0x4cfcc0
     * @note[short] Windows: 0x5a1290
     * @note[short] iOS: 0x394cc
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x431eb4
     * @note[short] MacOS (Intel): 0x4d0100
     * @note[short] Windows: 0x5a18e0
     * @note[short] iOS: 0x397f0
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x431d90
     * @note[short] MacOS (Intel): 0x4cffd0
     * @note[short] Windows: 0x5a1760
     * @note[short] iOS: 0x396e0
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (Intel): 0x4d0090
     * @note[short] Windows: 0x5a1880
     * @note[short] iOS: 0x39768
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x431e80
     * @note[short] MacOS (Intel): 0x4d00d0
     * @note[short] Windows: 0x5a18b0
     * @note[short] iOS: 0x397bc
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (Intel): 0x4ce5b0
     * @note[short] iOS: 0x383ac
     * @note[short] Android
     */
    void addAreaDefaultControls(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x43186c
     * @note[short] MacOS (Intel): 0x4cfad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void getModeValues(int mode, int& direction, bool& inbound, bool& twoDirections);

    /**
     * @note[short] MacOS (ARM): 0x42f874
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4318c0
     * @note[short] MacOS (Intel): 0x4cfb30
     * @note[short] Windows: 0x314d40
     * @note[short] iOS: 0x39338
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextFreeEffectID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43179c
     * @note[short] MacOS (Intel): 0x4cfa00
     * @note[short] iOS: 0x392a8
     * @note[short] Android
     */
    void onSpecialTarget(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x431ad0
     * @note[short] MacOS (Intel): 0x4cfd10
     * @note[short] iOS: 0x39520
     * @note[short] Android
     */
    void updateEnterTargetIDState();
    cocos2d::CCArray* m_modeButtons;
    cocos2d::CCArray* m_targetButtons;
};
