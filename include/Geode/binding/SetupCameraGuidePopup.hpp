#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCameraGuidePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraGuidePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraGuidePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCameraGuidePopup();

    /**
     * @note[short] Android
     */
    static SetupCameraGuidePopup* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] iOS: 0x6cc28
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);
};
