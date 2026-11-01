#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupEnterTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEnterTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEnterTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x396400
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupEnterTriggerPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupEnterTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupEnterTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x22b1c4
     * @note[short] MacOS (Intel): 0x286400
     * @note[short] Windows: 0x397ec0
     * @note[short] iOS: 0x36f330
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x36ee2c
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x22b0f0
     * @note[short] MacOS (Intel): 0x286330
     * @note[short] iOS: 0x36f264
     * @note[short] Android
     */
    void onEnterType(cocos2d::CCObject* sender);
    CCMenuItemToggler* m_enterOnlyToggler;
    CCMenuItemToggler* m_exitOnlyToggler;
    int m_enterType;
};
