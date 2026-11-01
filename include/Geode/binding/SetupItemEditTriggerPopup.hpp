#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupItemEditTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupItemEditTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupItemEditTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupItemEditTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupItemEditTriggerPopup* create(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fa278
     * @note[short] MacOS (Intel): 0x5ac320
     * @note[short] Windows: 0x5ffa90
     * @note[short] iOS: 0x48b894
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (Intel): 0x5ac0d0
     * @note[short] Windows: 0x5ff790
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f7da4
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f8d60
     * @note[short] MacOS (Intel): 0x5aaef0
     * @note[short] Windows: 0x5fe4a0
     * @note[short] iOS: 0x48aa48
     * @note[short] Android
     */
    void onOpButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f902c
     * @note[short] MacOS (Intel): 0x5ab1c0
     * @note[short] iOS: 0x48ac3c
     * @note[short] Android
     */
    void updateFormulaLabel();

    /**
     * @note[short] MacOS (ARM): 0x4f8e20
     * @note[short] MacOS (Intel): 0x5aafc0
     * @note[short] iOS: 0x48ab08
     * @note[short] Android
     */
    void updateOpButton(CCMenuItemSpriteExtra* button, int key, int objectID);
    cocos2d::CCLabelBMFont* m_formulaLabel;
};
