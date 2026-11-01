#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class EditGameObjectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditGameObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditGameObjectPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x396c90
     * @note[short] Android: Rebinded
     */
    virtual  ~EditGameObjectPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditGameObjectPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3787a8
     * @note[short] Android
     */
    static EditGameObjectPopup* create(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x23b20c
     * @note[short] MacOS (Intel): 0x297760
     * @note[short] Windows: 0x3a2640
     * @note[short] iOS: 0x378888
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);
};
