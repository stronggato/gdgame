#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCollisionTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5ab9e0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCollisionTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupCollisionTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x608ab0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] Windows: 0x6090f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x608f30
     * @note[short] iOS: 0x250bcc
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5ac720
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] Windows: 0x5ac4b0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x85270
     * @note[short] iOS: 0x45d078
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x396e80
     * @note[short] Android
     */
    void onActivateOnExit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onItemID2Arrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTargetP1(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTargetP2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTargetPP(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] MacOS (ARM): 0x5d4598
     * @note[short] MacOS (Intel): 0x6bb670
     * @note[short] iOS: 0x250d00
     * @note[short] Android
     */
    void updateItemID2();

    /**
     * @note[short] Android
     */
    void updateItemID2InputLabel();

    /**
     * @note[short] Android
     */
    void updateItemIDInputLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateSpecialNodes();

    /**
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Android
     */
    void updateTargetIDInputLabel();
    CCTextInputNode* m_blockAInput;
    CCTextInputNode* m_blockBInput;
    CCTextInputNode* m_targetIDInput;
    int m_blockAID;
    int m_blockBID;
    int m_targetID;
    bool m_activateGroup;
    bool m_triggerOnExit;
    bool m_targetP1;
    bool m_targetP2;
    bool m_targetPP;
};
