#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJDropDownLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJDropDownLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDropDownLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x92760
     * @note[short] iOS: 0xa908
     * @note[short] Android: Out of line
     */
     GJDropDownLayer();

    /**
     * @note[short] MacOS (ARM): 0x5d2558
     * @note[short] Windows: 0x35ce60
     * @note[short] Android: Rebinded
     */
     ~GJDropDownLayer();

    /**
     * @note[short] MacOS (ARM): 0x5d2cdc
     * @note[short] MacOS (Intel): 0x6b9aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJDropDownLayer* create(const char* title);

    /**
     * @note[short] MacOS (ARM): 0x5d27b8
     * @note[short] MacOS (Intel): 0x6b9560
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJDropDownLayer* create(const char* title, float height, bool noBack);

    /**
     * @note[short] MacOS (ARM): 0x5d3078
     * @note[short] Windows: 0x463c0
     * @note[short] iOS: 0x457360
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5d30b4
     * @note[short] MacOS (Intel): 0x6b9ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45739c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5d30d4
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4573bc
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5d30c4
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4573ac
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5d30cc
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4573b4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5d2d60
     * @note[short] MacOS (Intel): 0x6b9b60
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x457048
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x5d2d98
     * @note[short] MacOS (Intel): 0x6b9ba0
     * @note[short] Windows: 0x35d390
     * @note[short] iOS: 0x457080
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5d2cfc
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x456fe4
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x5d2d28
     * @note[short] MacOS (Intel): 0x6b9b30
     * @note[short] Windows: 0x46260
     * @note[short] iOS: 0x457010
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x5d2dbc
     * @note[short] MacOS (Intel): 0x6b9be0
     * @note[short] Windows: 0x35d3b0
     * @note[short] iOS: 0x4570a4
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d2e08
     * @note[short] MacOS (Intel): 0x6b9c20
     * @note[short] Windows: 0x35d3f0
     * @note[short] iOS: 0x4570f0
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x5d2f0c
     * @note[short] MacOS (Intel): 0x6b9d20
     * @note[short] Windows: 0x35d540
     * @note[short] iOS: 0x4571f4
     * @note[short] Android
     */
    virtual void hideLayer(bool instant);

    /**
     * @note[short] Windows: 0x46370
     * @note[short] iOS: 0x4572fc
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] Windows: 0x35d690
     * @note[short] iOS: 0x45730c
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4572f8
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x5d2d00
     * @note[short] Windows: 0x35d350
     * @note[short] iOS: 0x456fe8
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x5d2d14
     * @note[short] MacOS (Intel): 0x6b9b10
     * @note[short] Windows: 0x35d370
     * @note[short] iOS: 0x456ffc
     * @note[short] Android
     */
    virtual void enableUI();

    /**
     * @note[short] MacOS (ARM): 0x5d2cec
     * @note[short] MacOS (Intel): 0x6b9ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x456fd4
     * @note[short] Android
     */
    bool init(char const* title);

    /**
     * @note[short] MacOS (ARM): 0x5d28dc
     * @note[short] MacOS (Intel): 0x6b96a0
     * @note[short] Windows: 0x35cf10
     * @note[short] iOS: 0x456bd8
     * @note[short] Android
     */
    bool init(char const* title, float height, bool noBack);
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    cocos2d::CCLayer* m_mainLayer;
    bool m_closeOnHide;
    GJDropDownLayerDelegate* m_delegate;
    bool m_fastMenu;
};
