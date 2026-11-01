#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupPlatformerEndPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPlatformerEndPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPlatformerEndPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5ae070
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupPlatformerEndPopup();

    /**
     * @note[short] Android
     */
    static SetupPlatformerEndPopup* create(EndTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fc858
     * @note[short] Windows: 0x5ab460
     * @note[short] iOS: 0x219dfc
     * @note[short] Android
     */
    bool init(EndTriggerGameObject* object, cocos2d::CCArray* objects);
};
