#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CollisionBlockPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CollisionBlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CollisionBlockPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xa49a0
     * @note[short] Android: Rebinded
     */
    virtual  ~CollisionBlockPopup();

    /**
     * @note[short] iOS: 0x20b514
     * @note[short] Android
     */
    static CollisionBlockPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7f13a4
     * @note[short] MacOS (Intel): 0x90aae0
     * @note[short] Windows: 0x3a5900
     * @note[short] iOS: 0x4df974
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (Intel): 0x746a60
     * @note[short] Windows: 0x1250a0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x608f30
     * @note[short] iOS: 0x2d58f4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5b9a0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] Windows: 0x5bb00
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0xa5000
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4e5b28
     * @note[short] MacOS (Intel): 0x596110
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x6090f0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDynamicBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4674a0
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294114
     * @note[short] MacOS (Intel): 0x2fffe0
     * @note[short] Android
     */
    void onNextItemID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ca894
     * @note[short] MacOS (Intel): 0x21b560
     * @note[short] iOS: 0x1abf20
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] MacOS (ARM): 0x5d4598
     * @note[short] iOS: 0x250d00
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] MacOS (ARM): 0x29422c
     * @note[short] iOS: 0x41058
     * @note[short] Android
     */
    void updateTextInputLabel();
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    CCTextInputNode* m_blockIDInput;
    int m_blockID;
    bool m_dynamicBlock;
    bool m_disableDelegate;
};
