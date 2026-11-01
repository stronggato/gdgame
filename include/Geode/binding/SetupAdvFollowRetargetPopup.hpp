#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAdvFollowRetargetPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowRetargetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowRetargetPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAdvFollowRetargetPopup();

    /**
     * @note[short] Android
     */
    static SetupAdvFollowRetargetPopup* create(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x598d50
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (Intel): 0x4a6fa0
     * @note[short] Windows: 0x59c290
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Android
     */
    bool init(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);
};
