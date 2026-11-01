#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupStopTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupStopTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupStopTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupStopTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupStopTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4ff2c8
     * @note[short] MacOS (Intel): 0x5b19e0
     * @note[short] Windows: 0x605b20
     * @note[short] iOS: 0x48fdb8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ff204
     * @note[short] MacOS (Intel): 0x2f3ee0
     * @note[short] Windows: 0x605a10
     * @note[short] iOS: 0x48fcf4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x605ac0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (Intel): 0x3c3c80
     * @note[short] iOS: 0x4993ec
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
