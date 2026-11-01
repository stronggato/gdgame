#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupInteractObjectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInteractObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInteractObjectPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5b5060
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupInteractObjectPopup();

    /**
     * @note[short] Android
     */
    static SetupInteractObjectPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x50f8a0
     * @note[short] Windows: 0x5b5b70
     * @note[short] iOS: 0x491790
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x50f810
     * @note[short] Windows: 0x5b5b40
     * @note[short] iOS: 0x49176c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x46acbc
     * @note[short] iOS: 0x4916f8
     * @note[short] Android
     */
    void updateItems();
};
