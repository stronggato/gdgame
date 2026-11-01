#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAnimationPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimationPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimationPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x59c560
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAnimationPopup();

    /**
     * @note[short] Android
     */
    static SetupAnimationPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x343774
     * @note[short] MacOS (Intel): 0x3be700
     * @note[short] Windows: 0x59d4b0
     * @note[short] iOS: 0x46b090
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (Intel): 0x1dca0
     * @note[short] Windows: 0x59d990
     * @note[short] iOS: 0x46b344
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3438d0
     * @note[short] MacOS (Intel): 0x3be890
     * @note[short] Windows: 0x59d5f0
     * @note[short] iOS: 0x46b1e4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] iOS: 0x44a980
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3434cc
     * @note[short] Android
     */
    void onAnimationIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d4598
     * @note[short] iOS: 0x46b164
     * @note[short] Android
     */
    void updateAnimationID();

    /**
     * @note[short] Android
     */
    void updateAnimationTextInputLabel();

    /**
     * @note[short] MacOS (Intel): 0x6472c0
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_targetIDInput;
    CCTextInputNode* m_animationIDInput;
    int m_targetID;
    int m_animationID;
};
