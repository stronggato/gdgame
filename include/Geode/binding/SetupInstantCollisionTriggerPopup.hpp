#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupInstantCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCollisionTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupInstantCollisionTriggerPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x5abab0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupInstantCollisionTriggerPopup();

    /**
     * @note[short] Windows: 0x5ac740
     * @note[short] Android
     */
    static SetupInstantCollisionTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x30bc20
     * @note[short] MacOS (Intel): 0x380860
     * @note[short] Windows: 0x5ad1e0
     * @note[short] iOS: 0x1a53e0
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x30b8c8
     * @note[short] MacOS (Intel): 0x380f80
     * @note[short] Windows: 0x5acfb0
     * @note[short] iOS: 0x2ca5e4
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x54a778
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x30b8f8
     * @note[short] MacOS (Intel): 0x380520
     * @note[short] Windows: 0x5ac4d0
     * @note[short] iOS: 0x2ca614
     * @note[short] Android
     */
    void updateSpecialNodes();
};
