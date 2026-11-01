#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAudioTriggerPopup.hpp>

class SetupSFXEditPopup : public SetupAudioTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSFXEditPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXEditPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] Windows: 0x5d65f0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSFXEditPopup();

    /**
     * @note[short] Android
     */
    static SetupSFXEditPopup* create(SFXTriggerGameObject* object, cocos2d::CCArray* objects, bool songTrigger);

    /**
     * @note[short] MacOS (ARM): 0x418394
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* object, cocos2d::CCArray* objects, bool songTrigger);
};
