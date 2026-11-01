#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupObjectOptions2Popup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectOptions2Popup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectOptions2Popup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x58a7f0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupObjectOptions2Popup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupObjectOptions2Popup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupObjectOptions2Popup* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2996f4
     * @note[short] Windows: 0x593f80
     * @note[short] iOS: 0x452d4
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects);
};
