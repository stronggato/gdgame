#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAudioTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAudioTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAudioTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5d66c0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAudioTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x4156d0
     * @note[short] MacOS (Intel): 0x4b06a0
     * @note[short] Windows: 0x5d7d30
     * @note[short] iOS: 0x2101e4
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x84e530
     * @note[short] MacOS (Intel): 0x4af860
     * @note[short] Android
     */
    void addProxVolControls(int page);

    /**
     * @note[short] MacOS (ARM): 0x414690
     * @note[short] MacOS (Intel): 0x4af4c0
     * @note[short] Windows: 0x5d6780
     * @note[short] iOS: 0x20f35c
     * @note[short] Android
     */
    void addTimeControls(int page, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x415580
     * @note[short] MacOS (Intel): 0x4b0560
     * @note[short] Windows: 0x5d7bd0
     * @note[short] iOS: 0x210094
     * @note[short] Android
     */
    void onProxMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41564c
     * @note[short] MacOS (Intel): 0x4b0620
     * @note[short] Windows: 0x5d7cb0
     * @note[short] iOS: 0x210160
     * @note[short] Android
     */
    void updateSpecialGroup();
    cocos2d::CCArray* m_proximityButtons;
};
