#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupReverbPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupReverbPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupReverbPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupReverbPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupReverbPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupReverbPopup* create(SFXTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x416040
     * @note[short] MacOS (Intel): 0x4b1050
     * @note[short] Windows: 0x5d8780
     * @note[short] iOS: 0x210a30
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4158e4
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x210380
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x415ff0
     * @note[short] MacOS (Intel): 0x4b0ff0
     * @note[short] iOS: 0x2109e0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x415ea0
     * @note[short] MacOS (Intel): 0x4b0ec0
     * @note[short] Windows: 0x5d8590
     * @note[short] iOS: 0x2108a8
     * @note[short] Android
     */
    void onReverb(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x415f1c
     * @note[short] MacOS (Intel): 0x4b0f40
     * @note[short] iOS: 0x210924
     * @note[short] Android
     */
    void updateReverbLabel();
    cocos2d::CCLabelBMFont* m_reverbLabel;
};
