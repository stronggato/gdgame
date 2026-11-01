#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupObjectControlPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectControlPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectControlPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupObjectControlPopup();

    /**
     * @note[short] Android
     */
    static SetupObjectControlPopup* create(ObjectControlGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x262950
     * @note[short] iOS: 0x48ff10
     * @note[short] Android
     */
    bool init(ObjectControlGameObject* object, cocos2d::CCArray* objects);
};
