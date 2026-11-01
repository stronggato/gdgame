#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupRotateGameplayPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotateGameplayPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotateGameplayPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupRotateGameplayPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupRotateGameplayPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupRotateGameplayPopup* create(RotateGameplayGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x76cb78
     * @note[short] MacOS (Intel): 0x876e90
     * @note[short] Windows: 0x5d31c0
     * @note[short] iOS: 0x231ea8
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x76cc14
     * @note[short] MacOS (Intel): 0x876f40
     * @note[short] Windows: 0x5d3340
     * @note[short] iOS: 0x231f1c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x76c298
     * @note[short] Windows: 0x5d27f0
     * @note[short] Android
     */
    bool init(RotateGameplayGameObject* object, cocos2d::CCArray* objects);
};
