#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>

class TouchControlEditLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "TouchControlEditLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TouchControlEditLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x44f320
     * @note[short] Android: Rebinded
     */
    virtual  ~TouchControlEditLayer();

    /**
     * @note[short] Android
     */
    static TouchControlEditLayer* create(bool p0, LevelControlConfig* p1);

    /**
     * @note[short] Windows: 0x453590
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] Windows: 0x453680
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x451040
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x451500
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x451960
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x83d80
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x133890
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x451e30
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x450a80
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x450dc0
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn activeNode();

    /**
     * @note[short] Android
     */
    TodoReturn beginDeadzoneDrag(GJUINode* p0, cocos2d::CCPoint const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn buildHud();

    /**
     * @note[short] Android
     */
    TodoReturn buildNodes();

    /**
     * @note[short] Android
     */
    TodoReturn clearNodes();

    /**
     * @note[short] Android
     */
    TodoReturn commitToTarget();

    /**
     * @note[short] Android
     */
    TodoReturn copyTouchFrom(LevelControlConfig* p0);

    /**
     * @note[short] Android
     */
    TodoReturn globalDpad(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hideSiblings();

    /**
     * @note[short] Android
     */
    bool init(bool p0, LevelControlConfig* p1);

    /**
     * @note[short] Android
     */
    void onApplyGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOK(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSlots(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshHud();

    /**
     * @note[short] Android
     */
    TodoReturn reloadNodes();

    /**
     * @note[short] Android
     */
    TodoReturn restoreSiblings();

    /**
     * @note[short] Android
     */
    TodoReturn saveTarget();

    /**
     * @note[short] Android
     */
    TodoReturn updateHandles();

    /**
     * @note[short] Android
     */
    TodoReturn updateHudVisibility();

    /**
     * @note[short] Android
     */
    TodoReturn updateJumpGuide();
};
