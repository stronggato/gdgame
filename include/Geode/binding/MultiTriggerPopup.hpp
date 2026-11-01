#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class MultiTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "MultiTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MultiTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~MultiTriggerPopup();

    /**
     * @note[short] Android
     */
    static MultiTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f6b0c
     * @note[short] Windows: 0x5fbbe0
     * @note[short] iOS: 0x488b30
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
