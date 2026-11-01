#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCoinLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCoinLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCoinLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCoinLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupCoinLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupCoinLayer* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fc420
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x48d450
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
