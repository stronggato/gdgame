#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/binding/TextAreaDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class DialogLayer : public cocos2d::CCLayerColor, public TextAreaDelegate {
public:
    static constexpr auto CLASS_NAME = "DialogLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x90748
     * @note[short] Android: Out of line
     */
     DialogLayer();

    /**
     * @note[short] MacOS (Intel): 0x3afdb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f62c
     * @note[short] Android: Rebinded
     */
     ~DialogLayer();

    /**
     * @note[short] MacOS (ARM): 0x336fc0
     * @note[short] MacOS (Intel): 0x3b0100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f6f0
     * @note[short] Android
     */
    static DialogLayer* create(DialogObject* object, int background);

    /**
     * @note[short] MacOS (ARM): 0x336fcc
     * @note[short] MacOS (Intel): 0x2b2960
     * @note[short] Windows: 0x1735b0
     * @note[short] iOS: 0x8f6fc
     * @note[short] Android
     */
    static DialogLayer* createDialogLayer(DialogObject* object, cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x3370dc
     * @note[short] MacOS (Intel): 0x3b0250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f788
     * @note[short] Android
     */
    static DialogLayer* createWithObjects(cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x338078
     * @note[short] MacOS (Intel): 0x3b1280
     * @note[short] Windows: 0x5bb80
     * @note[short] iOS: 0x90394
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x337f4c
     * @note[short] MacOS (Intel): 0x3b1130
     * @note[short] Windows: 0x174220
     * @note[short] iOS: 0x90278
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x337ff4
     * @note[short] MacOS (Intel): 0x3b11d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x90310
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x337fbc
     * @note[short] MacOS (Intel): 0x3b1190
     * @note[short] Windows: 0x174250
     * @note[short] iOS: 0x902d8
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x337ffc
     * @note[short] MacOS (Intel): 0x3b11f0
     * @note[short] Windows: 0x174270
     * @note[short] iOS: 0x90318
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x338040
     * @note[short] MacOS (Intel): 0x3b1240
     * @note[short] Windows: 0x5b940
     * @note[short] iOS: 0x9035c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x337e28
     * @note[short] MacOS (Intel): 0x3b1000
     * @note[short] Windows: 0x174190
     * @note[short] iOS: 0x9026c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3383cc
     * @note[short] MacOS (Intel): 0x3b15f0
     * @note[short] Windows: 0x174750
     * @note[short] iOS: 0x90650
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x33807c
     * @note[short] MacOS (Intel): 0x3b1290
     * @note[short] Windows: 0x174290
     * @note[short] iOS: 0x90398
     * @note[short] Android
     */
    virtual void fadeInTextFinished(TextArea* textArea);

    /**
     * @note[short] MacOS (ARM): 0x337dd0
     * @note[short] MacOS (Intel): 0x3b0fb0
     * @note[short] Windows: 0x174130
     * @note[short] iOS: 0x90214
     * @note[short] Android
     */
    void addToMainScene();

    /**
     * @note[short] MacOS (ARM): 0x3381c4
     * @note[short] MacOS (Intel): 0x3b13d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x90464
     * @note[short] Android
     */
    void animateIn(DialogAnimationType type);

    /**
     * @note[short] MacOS (ARM): 0x3383c4
     * @note[short] MacOS (Intel): 0x3b15e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void animateInDialog();

    /**
     * @note[short] MacOS (ARM): 0x33816c
     * @note[short] MacOS (Intel): 0x3b1380
     * @note[short] iOS: 0x90414
     * @note[short] Android
     */
    void animateInRandomSide();

    /**
     * @note[short] MacOS (ARM): 0x337664
     * @note[short] MacOS (Intel): 0x3b0800
     * @note[short] iOS: 0x8fc28
     * @note[short] Android
     */
    void displayDialogObject(DialogObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3375c4
     * @note[short] MacOS (Intel): 0x3b0750
     * @note[short] Windows: 0x173b80
     * @note[short] iOS: 0x8fbc8
     * @note[short] Android
     */
    void displayNextObject();

    /**
     * @note[short] MacOS (ARM): 0x337ca8
     * @note[short] MacOS (Intel): 0x3b0e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9012c
     * @note[short] Android
     */
    void finishCurrentAnimation();

    /**
     * @note[short] Android
     */
    void handleDialogTap();

    /**
     * @note[short] MacOS (ARM): 0x3370ec
     * @note[short] MacOS (Intel): 0x3b0270
     * @note[short] iOS: 0x8f798
     * @note[short] Android
     */
    bool init(DialogObject* object, cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x337d40
     * @note[short] MacOS (Intel): 0x3b0f20
     * @note[short] Windows: 0x1741a0
     * @note[short] iOS: 0x90184
     * @note[short] Android
     */
    void onClose();

    /**
     * @note[short] MacOS (ARM): 0x337a94
     * @note[short] MacOS (Intel): 0x3b0c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8ffac
     * @note[short] Android
     */
    void updateChatPlacement(DialogChatPlacement placement);

    /**
     * @note[short] MacOS (ARM): 0x337a34
     * @note[short] MacOS (Intel): 0x3b0bf0
     * @note[short] Windows: 0x173f30
     * @note[short] iOS: 0x8ff4c
     * @note[short] Android
     */
    void updateNavButtonFrame();
    float m_animateTime;
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCLabelBMFont* m_characterLabel;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_characterSprite;
    cocos2d::CCArray* m_dialogObjects;
    int m_touchID;
    cocos2d::CCSprite* m_navButtonSprite;
    bool m_animating;
    bool m_skippable;
    DialogDelegate* m_delegate;
    bool m_handleTap;
    DialogAnimationType m_animationType;
    bool m_noRemove;
};
