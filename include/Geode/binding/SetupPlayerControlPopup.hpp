#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupPlayerControlPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPlayerControlPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPlayerControlPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5f7f20
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupPlayerControlPopup();

    /**
     * @note[short] Android
     */
    static SetupPlayerControlPopup* create(PlayerControlGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f5468
     * @note[short] iOS: 0x487760
     * @note[short] Android
     */
    bool init(PlayerControlGameObject* object, cocos2d::CCArray* objects);
};
