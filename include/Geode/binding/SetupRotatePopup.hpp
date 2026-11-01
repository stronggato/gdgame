#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupRotatePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotatePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotatePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupRotatePopup();

    /**
     * @note[short] iOS: 0x303714
     * @note[short] Android
     */
    static SetupRotatePopup* create(EnhancedGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5a4388
     * @note[short] MacOS (Intel): 0x66c8f0
     * @note[short] Windows: 0x5d4370
     * @note[short] iOS: 0x303c20
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5a4404
     * @note[short] MacOS (Intel): 0x66c970
     * @note[short] Windows: 0x5d4410
     * @note[short] iOS: 0x303c9c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4d3730
     * @note[short] Windows: 0x5d3e10
     * @note[short] iOS: 0x1c016c
     * @note[short] Android
     */
    bool init(EnhancedGameObject* object, cocos2d::CCArray* objects);
};
