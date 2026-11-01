#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>

class UIPOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIPOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIPOptionsLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~UIPOptionsLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37f674
     * @note[short] Android: Out of line
     */
     UIPOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UIPOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x247ac0
     * @note[short] Windows: 0x3a8e40
     * @note[short] iOS: 0x37e818
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2481b8
     * @note[short] MacOS (Intel): 0x2a5810
     * @note[short] Windows: 0x3a97d0
     * @note[short] iOS: 0x37eef4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2482d4
     * @note[short] MacOS (Intel): 0x2a5930
     * @note[short] Windows: 0x3a98e0
     * @note[short] iOS: 0x37efbc
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x248430
     * @note[short] MacOS (Intel): 0x2a5aa0
     * @note[short] Windows: 0x3a9990
     * @note[short] iOS: 0x37f070
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x428654
     * @note[short] Windows: 0x83d80
     * @note[short] iOS: 0x52b5c
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x428670
     * @note[short] MacOS (Intel): 0x4c57a0
     * @note[short] Windows: 0x133890
     * @note[short] iOS: 0x52b78
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x248000
     * @note[short] MacOS (Intel): 0x2a5630
     * @note[short] Windows: 0x3a9460
     * @note[short] iOS: 0x37ed3c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x248070
     * @note[short] MacOS (Intel): 0x2a56b0
     * @note[short] Windows: 0x3a9670
     * @note[short] iOS: 0x37edac
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x248124
     * @note[short] MacOS (Intel): 0x2a5780
     * @note[short] Windows: 0x3a9770
     * @note[short] iOS: 0x37ee60
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x248148
     * @note[short] MacOS (Intel): 0x2a57a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37ee84
     * @note[short] Android
     */
    cocos2d::CCRect getTouchRect();

    /**
     * @note[short] MacOS (ARM): 0x247f58
     * @note[short] MacOS (Intel): 0x2a5580
     * @note[short] Windows: 0x3a9550
     * @note[short] iOS: 0x37ec94
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);
    int m_touchID;
    cocos2d::CCNode* m_practiceNode;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_touchDelta;
};
