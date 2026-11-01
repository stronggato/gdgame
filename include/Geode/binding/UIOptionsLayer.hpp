#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class UIOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIOptionsLayer, SetupTriggerPopup)

    /**
     * @note[short] iOS: 0x2ddea4
     * @note[short] Android
     */
    static UIOptionsLayer* create(bool dual);

    /**
     * @note[short] MacOS (ARM): 0x2454fc
     * @note[short] MacOS (Intel): 0x2a2b00
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2456c0
     * @note[short] MacOS (Intel): 0x2a2c40
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2458ac
     * @note[short] MacOS (Intel): 0x2a2d50
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2459e4
     * @note[short] MacOS (Intel): 0x2a2e90
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x245a00
     * @note[short] MacOS (Intel): 0x2a2ed0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x244e84
     * @note[short] MacOS (Intel): 0x2a22e0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x244fd4
     * @note[short] MacOS (Intel): 0x5bcd80
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2452d8
     * @note[short] MacOS (Intel): 0x2a2860
     * @note[short] Windows: 0x59ea70
     * @note[short] iOS: 0x410378
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x2454dc
     * @note[short] MacOS (Intel): 0x2a2ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJUINode* getNode(int type);

    /**
     * @note[short] MacOS (ARM): 0x2431e4
     * @note[short] MacOS (Intel): 0x2a01d0
     * @note[short] Android
     */
    bool init(bool dual);

    /**
     * @note[short] MacOS (ARM): 0x244a60
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x302dbc
     * @note[short] Android
     */
    void onSaveLoad(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x244c38
     * @note[short] MacOS (Intel): 0x2a20a0
     * @note[short] Android
     */
    void toggleUIGroup(int group);
    bool m_dual;
    GJUINode* m_uiNode1;
    GJUINode* m_uiNode2;
    GJUINode* m_uiNode3;
    GJUINode* m_uiNode4;
    cocos2d::CCLabelBMFont* m_nameLabel;
    int m_activeUIGroup;
};
