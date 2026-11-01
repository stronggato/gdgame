#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupProgressPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupProgressPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupProgressPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupProgressPopup();

    /**
     * @note[short] Android
     */
    static SetupProgressPopup* create(ProgressGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x606760
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Android
     */
    bool init(ProgressGameObject* p0, cocos2d::CCArray* p1);
};
