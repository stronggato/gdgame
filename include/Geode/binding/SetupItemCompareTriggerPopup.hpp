#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupItemCompareTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupItemCompareTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupItemCompareTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupItemCompareTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupItemCompareTriggerPopup* create(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fc300
     * @note[short] MacOS (Intel): 0x5ae540
     * @note[short] Windows: 0x602010
     * @note[short] iOS: 0x48d340
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Windows: 0x6013b0
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4fa39c
     * @note[short] iOS: 0x48b9a8
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fb418
     * @note[short] MacOS (Intel): 0x5ad720
     * @note[short] Windows: 0x600fa0
     * @note[short] iOS: 0x48c8cc
     * @note[short] Android
     */
    void onOpButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4fb75c
     * @note[short] MacOS (Intel): 0x5ada40
     * @note[short] iOS: 0x48caa4
     * @note[short] Android
     */
    void updateFormulaLabel();

    /**
     * @note[short] MacOS (ARM): 0x4fb4d4
     * @note[short] MacOS (Intel): 0x5ad7e0
     * @note[short] iOS: 0x48c988
     * @note[short] Android
     */
    void updateOpButton(CCMenuItemSpriteExtra* button, int key, int objectID);
    cocos2d::CCLabelBMFont* m_formulaLabel;
};
