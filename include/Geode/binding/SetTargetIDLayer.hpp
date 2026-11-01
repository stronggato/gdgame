#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetTargetIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetTargetIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTargetIDLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x594dc0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetTargetIDLayer();

    /**
     * @note[short] MacOS (ARM): 0x249b80
     * @note[short] MacOS (Intel): 0x2a7be0
     * @note[short] Windows: 0x594e90
     * @note[short] iOS: 0x2adb38
     * @note[short] Android
     */
    static SetTargetIDLayer* create(EffectGameObject* object, cocos2d::CCArray* objects, std::string title, std::string label, int minimum, int maximum, int objectID);

    /**
     * @note[short] MacOS (ARM): 0x24a10c
     * @note[short] MacOS (Intel): 0x2a8200
     * @note[short] Windows: 0x3978c0
     * @note[short] iOS: 0x2ae004
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x24a110
     * @note[short] MacOS (Intel): 0x2a8210
     * @note[short] Windows: 0x595530
     * @note[short] iOS: 0x2ae008
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Windows: 0x2c3e40
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, std::string title, std::string label, int minimum, int maximum, int objectID);
    int m_objectID;
    int m_minimumID;
    int m_maximumID;
};
