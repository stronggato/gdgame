#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class EditorWindowPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditorWindowPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorWindowPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android: Rebinded
     */
     EditorWindowPopup();

    /**
     * @note[short] Windows: 0x17e6e0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x17d750
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x17de10
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x17e270
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x17e3e0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x17e510
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] Windows: 0x17e6d0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x17e720
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x17e6a0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x17e5c0
     * @note[short] Android
     */
    virtual bool handleAction(int p0, bool p1, double p2);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void onWindowResized();

    /**
     * @note[short] Windows: 0x17e690
     * @note[short] Android
     */
    virtual TodoReturn onFieldEnter();

    /**
     * @note[short] Android
     */
    TodoReturn activeField();

    /**
     * @note[short] Android
     */
    TodoReturn applyWindowSize();

    /**
     * @note[short] Android
     */
    TodoReturn beginTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn blurField();

    /**
     * @note[short] Android
     */
    TodoReturn clampWindowCenter(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn clampWindowOnScreen(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn contentCenter();

    /**
     * @note[short] Android
     */
    TodoReturn dismissDropdowns();

    /**
     * @note[short] Android
     */
    TodoReturn fieldHoldsKeys();

    /**
     * @note[short] Android
     */
    TodoReturn getResizeCorner(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn initWindow(EditorUI* p0, float p1, float p2, int p3, int p4);

    /**
     * @note[short] Android
     */
    bool isInCloseButton(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    bool isInDragHandle(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn layoutWindow();

    /**
     * @note[short] Android
     */
    TodoReturn moveWindowTo(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setLockAspectRatio(bool p0);

    /**
     * @note[short] Android
     */
    void setWindowScaleBounds(float p0, float p1);

    /**
     * @note[short] Android
     */
    void setWindowSizeBounds(float p0, float p1, float p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn syncWindowCenter();

    /**
     * @note[short] Android
     */
    TodoReturn touchIsOnField(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn touchRect();
};
