#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupSequenceTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSequenceTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSequenceTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5d45c0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSequenceTriggerPopup();

    /**
     * @note[short] Windows: 0x5d46b0
     * @note[short] Android
     */
    static SetupSequenceTriggerPopup* create(SequenceTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x439ff4
     * @note[short] MacOS (Intel): 0x4d9750
     * @note[short] Windows: 0x5d5b30
     * @note[short] iOS: 0x269804
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    bool init(SequenceTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x439ae8
     * @note[short] MacOS (Intel): 0x4d9270
     * @note[short] iOS: 0x269330
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x439c04
     * @note[short] MacOS (Intel): 0x4d9360
     * @note[short] Windows: 0x54770
     * @note[short] iOS: 0x269438
     * @note[short] Android
     */
    void onChangeOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x439bb8
     * @note[short] MacOS (Intel): 0x4d9310
     * @note[short] iOS: 0x2693ec
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43a0d4
     * @note[short] MacOS (Intel): 0x4d9850
     * @note[short] Windows: 0x9d3f0
     * @note[short] iOS: 0x166f6c
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x9c15c
     * @note[short] MacOS (Intel): 0x4d9400
     * @note[short] Windows: 0x5d5c20
     * @note[short] iOS: 0x2694ec
     * @note[short] Android
     */
    void updateGroupIDButtons();
    CCMenuItemSpriteExtra* m_selectedButton;
    bool m_unk3b0;
    bool m_unk3b1;
    cocos2d::CCArray* m_groupButtons;
    int m_unk3c0;
    bool m_unk3c4;
};
