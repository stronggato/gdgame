#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCountTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCountTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCountTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5ad750
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCountTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupCountTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x6b7db0
     * @note[short] Windows: 0x608ab0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5d1850
     * @note[short] MacOS (Intel): 0x6b8390
     * @note[short] Windows: 0x6090f0
     * @note[short] iOS: 0x260efc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d4358
     * @note[short] MacOS (Intel): 0x6bb3c0
     * @note[short] Windows: 0x608f30
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5adf80
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x84e530
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x7468a0
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMultiActivate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x6bac90
     * @note[short] Android
     */
    void onTargetCountArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d3ce4
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateCountTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x5d4598
     * @note[short] MacOS (Intel): 0x6bb670
     * @note[short] iOS: 0x250d00
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] Android
     */
    void updateItemIDInputLabel();

    /**
     * @note[short] Android
     */
    void updateTargetCount();

    /**
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Android
     */
    void updateTargetIDInputLabel();
    CCTextInputNode* m_itemIDInput;
    CCTextInputNode* m_targetIDInput;
    CCTextInputNode* m_targetCountInput;
    int m_itemID;
    int m_targetID;
    int m_targetCount;
    bool m_activateGroup;
    bool m_multiActivate;
};
