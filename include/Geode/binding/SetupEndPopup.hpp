#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupEndPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEndPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEndPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5adfa0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupEndPopup();

    /**
     * @note[short] Windows: 0x5ae140
     * @note[short] Android
     */
    static SetupEndPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x653620
     * @note[short] MacOS (Intel): 0x746930
     * @note[short] Windows: 0x5aea00
     * @note[short] iOS: 0x34a5f4
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x653890
     * @note[short] MacOS (Intel): 0x746c50
     * @note[short] Windows: 0x5a7550
     * @note[short] iOS: 0x34a7e8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x653718
     * @note[short] MacOS (Intel): 0x746a60
     * @note[short] Windows: 0x1250a0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5aec60
     * @note[short] iOS: 0x2d58f4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x850a80
     * @note[short] MacOS (Intel): 0x7460a0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x298458
     * @note[short] MacOS (Intel): 0x7468a0
     * @note[short] iOS: 0x442bc
     * @note[short] Android
     */
    void onLockY(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x653510
     * @note[short] MacOS (Intel): 0x7467e0
     * @note[short] iOS: 0x34a4e4
     * @note[short] Android
     */
    void onMultiActivate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2983dc
     * @note[short] iOS: 0x44248
     * @note[short] Android
     */
    void onReversed(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] iOS: 0x34a454
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    bool m_reversed;
    bool m_lockY;
    int m_groupID;
    bool m_multiActivate;
};
