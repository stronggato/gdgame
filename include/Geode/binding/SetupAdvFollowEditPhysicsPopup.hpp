#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAdvFollowEditPhysicsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowEditPhysicsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowEditPhysicsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAdvFollowEditPhysicsPopup();

    /**
     * @note[short] Android
     */
    static SetupAdvFollowEditPhysicsPopup* create(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x59b940
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Android
     */
    bool init(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);
};
