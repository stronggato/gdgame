#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class FLAlertLayer : public cocos2d::CCLayerColor, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "FLAlertLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FLAlertLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x5a110
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     FLAlertLayer();

    /**
     * @note[short] MacOS (ARM): 0x3fb7c8
     * @note[short] MacOS (Intel): 0x4931e0
     * @note[short] Windows: 0x5a240
     * @note[short] Android: Rebinded
     */
     ~FLAlertLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FLAlertLayer* create(char const* title, const std::string& desc, char const* btn);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2);

    /**
     * @note[short] MacOS (ARM): 0x3fbd44
     * @note[short] MacOS (Intel): 0x493860
     * @note[short] Windows: 0x5a340
     * @note[short] iOS: 0x3487e0
     * @note[short] Android
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width);

    /**
     * @note[short] Windows: 0x5a4a0
     * @note[short] Android
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale);

    /**
     * @note[short] MacOS (ARM): 0x3fcd54
     * @note[short] MacOS (Intel): 0x4948d0
     * @note[short] Windows: 0x5b570
     * @note[short] iOS: 0x3495e0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3fd034
     * @note[short] MacOS (Intel): 0x494b50
     * @note[short] Windows: 0x5b6f0
     * @note[short] iOS: 0x349820
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3fceac
     * @note[short] MacOS (Intel): 0x4949f0
     * @note[short] Windows: 0x5b610
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3fcf70
     * @note[short] MacOS (Intel): 0x494aa0
     * @note[short] Windows: 0x5b680
     * @note[short] iOS: 0x349820
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x338040
     * @note[short] MacOS (Intel): 0x3fd2b0
     * @note[short] Windows: 0x5b940
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3fcc80
     * @note[short] MacOS (Intel): 0x4947f0
     * @note[short] Windows: 0x5b3e0
     * @note[short] iOS: 0x349580
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3fcb70
     * @note[short] MacOS (Intel): 0x4946d0
     * @note[short] Windows: 0x5b350
     * @note[short] iOS: 0x3494dc
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3fd0cc
     * @note[short] MacOS (Intel): 0x494bd0
     * @note[short] Windows: 0x5b730
     * @note[short] iOS: 0x34989c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void rebuildContent();

    /**
     * @note[short] MacOS (ARM): 0x28f4
     * @note[short] MacOS (Intel): 0x2bc0
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual TodoReturn ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x3fd348
     * @note[short] MacOS (Intel): 0x494e70
     * @note[short] Windows: 0x5b9a0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x3fd4a0
     * @note[short] MacOS (Intel): 0x495000
     * @note[short] Windows: 0x5bb00
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addCloseButton();

    /**
     * @note[short] Android
     */
    TodoReturn cancelKeyboardSlide();

    /**
     * @note[short] Android
     */
    TodoReturn containsNode(cocos2d::CCNode* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementForcePrio();

    /**
     * @note[short] Windows: 0x5a5b0
     * @note[short] iOS: 0x349278
     * @note[short] Android
     */
    bool init(int opacity);

    /**
     * @note[short] MacOS (ARM): 0x3fbe2c
     * @note[short] MacOS (Intel): 0x493920
     * @note[short] Windows: 0x5a6a0
     * @note[short] iOS: 0x3488a8
     * @note[short] Android
     */
    bool init(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale);

    /**
     * @note[short] Android
     */
    TodoReturn keyboardRaise(float p0, float p1);

    /**
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onButtonTag(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn ownedTouchPrio(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn rebuildContentDeferred(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn requestRebuild();
    cocos2d::CCMenu* m_buttonMenu;
    FLAlertLayerProtocol* m_alertProtocol;
    cocos2d::CCNode* m_scene;
    bool m_reverseKeyBack;
    cocos2d::ccColor3B m_color;
    cocos2d::CCLayer* m_mainLayer;
    int m_ZOrder;
    bool m_noElasticity;
    cocos2d::ccColor3B m_color2;
    cocos2d::CCPoint m_unk258;
    ButtonSprite* m_button1;
    ButtonSprite* m_button2;
    ScrollingLayer* m_scrollingLayer;
    int m_controlConnected;
    bool m_containsBorder;
    bool m_noAction;
    int m_joystickConnected;
    bool m_forcePrioRegistered;
    float m_width;
    float m_height;
    bool m_unk290;
};
