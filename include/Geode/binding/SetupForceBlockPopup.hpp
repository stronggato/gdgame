#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupForceBlockPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupForceBlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupForceBlockPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupForceBlockPopup();

    /**
     * @note[short] Android
     */
    static SetupForceBlockPopup* create(ForceBlockGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fe348
     * @note[short] MacOS (Intel): 0x5b0940
     * @note[short] Windows: 0x604340
     * @note[short] iOS: 0x48efa0
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x19bf8
     * @note[short] iOS: 0x48ea38
     * @note[short] Android
     */
    bool init(ForceBlockGameObject* object, cocos2d::CCArray* objects);
};
