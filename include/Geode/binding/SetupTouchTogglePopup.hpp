#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupTouchTogglePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTouchTogglePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTouchTogglePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5f5f10
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupTouchTogglePopup();

    /**
     * @note[short] Windows: 0x5f5fe0
     * @note[short] Android
     */
    static SetupTouchTogglePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2497d0
     * @note[short] MacOS (Intel): 0x2a7760
     * @note[short] Windows: 0x5f6af0
     * @note[short] iOS: 0x2e6c74
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x249a8c
     * @note[short] MacOS (Intel): 0x2a7aa0
     * @note[short] Windows: 0x5f70c0
     * @note[short] iOS: 0x2e6eb4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x249914
     * @note[short] MacOS (Intel): 0x2a78e0
     * @note[short] Windows: 0x5f6f00
     * @note[short] iOS: 0x2e6d94
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x220248
     * @note[short] iOS: 0x11b8c8
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x249724
     * @note[short] MacOS (Intel): 0x2a7690
     * @note[short] Windows: 0x3d5290
     * @note[short] iOS: 0x2e6bc8
     * @note[short] Android
     */
    void onControlMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2a7600
     * @note[short] Android
     */
    void onDualTouchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2a74a0
     * @note[short] Android
     */
    void onHoldMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2495f4
     * @note[short] MacOS (Intel): 0x2a7530
     * @note[short] Windows: 0x5f6d70
     * @note[short] iOS: 0x2e6a98
     * @note[short] Android
     */
    void onTouchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    int m_groupID;
    bool m_holdMode;
    int m_toggleMode;
    int m_playerMode;
    CCMenuItemToggler* m_toggleOnToggler;
    CCMenuItemToggler* m_toggleOffToggler;
    bool m_dualMode;
    CCMenuItemToggler* m_p1OnlyToggler;
    CCMenuItemToggler* m_p2OnlyToggler;
};
