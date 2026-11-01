#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAreaTintTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SetupAreaAnimTriggerPopup : public SetupAreaTintTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaAnimTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaAnimTriggerPopup, SetupAreaTintTriggerPopup)

    /**
     * @note[short] Windows: 0x59e990
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAreaAnimTriggerPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaAnimTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x235c30
     * @note[short] Android
     */
    static SetupAreaAnimTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x4379a8
     * @note[short] MacOS (Intel): 0x4d6dc0
     * @note[short] Windows: 0x5a6180
     * @note[short] iOS: 0x3db88
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x437b64
     * @note[short] MacOS (Intel): 0x4d6f60
     * @note[short] Windows: 0x5a6350
     * @note[short] iOS: 0x3dcf4
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x4376fc
     * @note[short] MacOS (Intel): 0x4d6b60
     * @note[short] Windows: 0x5a5f70
     * @note[short] iOS: 0x3d8f4
     * @note[short] Android
     */
    void createValueControlAdvancedAnim(int property, std::string label, cocos2d::CCPoint position, float scale, bool noSlider, InputValueType valueType, int length, bool arrows, float min, float max, int page, int group, GJInputStyle inputStyle);

    /**
     * @note[short] MacOS (ARM): 0x435f7c
     * @note[short] MacOS (Intel): 0x3dd420
     * @note[short] Windows: 0x3be050
     * @note[short] iOS: 0x3c218
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x4378fc
     * @note[short] MacOS (Intel): 0x4d6d40
     * @note[short] Windows: 0x5a62e0
     * @note[short] iOS: 0x3daf0
     * @note[short] Android
     */
    void onDeactivateAnimValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x437af0
     * @note[short] MacOS (Intel): 0x4d6ef0
     * @note[short] Windows: 0x5a6260
     * @note[short] iOS: 0x3dc80
     * @note[short] Android
     */
    void updateTargetIDLabel();
};
