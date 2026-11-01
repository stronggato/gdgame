#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupInstantCountPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCountPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCountPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5b38e0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupInstantCountPopup();

    /**
     * @note[short] Android
     */
    static SetupInstantCountPopup* create(CountTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5d41b4
     * @note[short] MacOS (Intel): 0x6bb1e0
     * @note[short] Windows: 0x5b47f0
     * @note[short] iOS: 0x250a30
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5d46a4
     * @note[short] MacOS (Intel): 0x6bb7d0
     * @note[short] Windows: 0x5b4fc0
     * @note[short] iOS: 0x250e0c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d4358
     * @note[short] MacOS (Intel): 0x6bb3c0
     * @note[short] Windows: 0x5b4a30
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x414a00
     * @note[short] iOS: 0x16129c
     * @note[short] Android
     */
    bool init(CountTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5d40f8
     * @note[short] MacOS (Intel): 0x6bb100
     * @note[short] Windows: 0x5b4ef0
     * @note[short] iOS: 0x250974
     * @note[short] Android
     */
    void onCountType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d4080
     * @note[short] MacOS (Intel): 0x6bb070
     * @note[short] iOS: 0x2508fc
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x6bac90
     * @note[short] Android
     */
    void onTargetCountArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3434cc
     * @note[short] Android
     */
    void onTargetID2Arrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateCountTextInputLabel();

    /**
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
     * @note[short] MacOS (ARM): 0x58261c
     * @note[short] MacOS (Intel): 0x6472c0
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
    int m_mode;
    CCMenuItemToggler* m_equalsToggler;
    CCMenuItemToggler* m_largerToggler;
    CCMenuItemToggler* m_smallerToggler;
};
