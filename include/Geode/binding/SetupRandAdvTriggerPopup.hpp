#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupRandAdvTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandAdvTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandAdvTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5cea70
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupRandAdvTriggerPopup();

    /**
     * @note[short] Windows: 0x5ceb70
     * @note[short] iOS: 0x318e8
     * @note[short] Android
     */
    static SetupRandAdvTriggerPopup* create(RandTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3053e8
     * @note[short] MacOS (Intel): 0x379920
     * @note[short] Windows: 0x5cf9c0
     * @note[short] iOS: 0x32a80
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3053e0
     * @note[short] MacOS (Intel): 0x379900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32a78
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x305454
     * @note[short] MacOS (Intel): 0x379990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32aec
     * @note[short] Android
     */
    void addChance(int id, int chance);

    /**
     * @note[short] MacOS (ARM): 0x3054f4
     * @note[short] MacOS (Intel): 0x379a30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32b7c
     * @note[short] Android
     */
    void addChanceToObject(RandTriggerGameObject* object, int id, int chance);

    /**
     * @note[short] MacOS (Intel): 0x379e70
     * @note[short] Windows: 0x5d0630
     * @note[short] Android
     */
    void callRemoveFromGroup(float dt);

    /**
     * @note[short] MacOS (ARM): 0x1164b8
     * @note[short] Android
     */
    bool init(RandTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x304a38
     * @note[short] MacOS (Intel): 0x378db0
     * @note[short] Windows: 0x524a10
     * @note[short] iOS: 0x323c4
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupIDScrollDown(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupIDScrollUp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x379db0
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x305640
     * @note[short] MacOS (Intel): 0x379ba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeGroupID(int id);

    /**
     * @note[short] MacOS (ARM): 0x305798
     * @note[short] MacOS (Intel): 0x379d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32d28
     * @note[short] Android
     */
    void removeGroupIDFromObject(RandTriggerGameObject* object, int id);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void updateGroupIDButtons();
    bool m_performedAction;
    cocos2d::CCArray* m_groupButtons;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_chanceInput;
    int m_groupToRemove;
    bool m_removingGroup;
};
