#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/CCKeyboardDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class UILayer : public cocos2d::CCLayerColor, public cocos2d::CCKeyboardDelegate {
public:
    static constexpr auto CLASS_NAME = "UILayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UILayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x53638
     * @note[short] Android: Out of line
     */
     UILayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x310928
     * @note[short] Android: Rebinded
     */
     ~UILayer();

    /**
     * @note[short] MacOS (ARM): 0x424d58
     * @note[short] MacOS (Intel): 0x4c1980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x50014
     * @note[short] Android
     */
    static UILayer* create(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static UILayer* get();

    /**
     * @note[short] MacOS (ARM): 0x427824
     * @note[short] MacOS (Intel): 0x4c4a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x52250
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x4278c4
     * @note[short] MacOS (Intel): 0x4c4ac0
     * @note[short] Windows: 0x66f3f0
     * @note[short] iOS: 0x522c0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x427b48
     * @note[short] MacOS (Intel): 0x4c4cc0
     * @note[short] Windows: 0x66f5e0
     * @note[short] iOS: 0x524f4
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x427c9c
     * @note[short] MacOS (Intel): 0x4c4dd0
     * @note[short] Windows: 0x66f600
     * @note[short] iOS: 0x52530
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
     * @note[short] MacOS (ARM): 0x4274ec
     * @note[short] MacOS (Intel): 0x4c4700
     * @note[short] Windows: 0x66f040
     * @note[short] iOS: 0x52118
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (Intel): 0x6fb790
     * @note[short] Windows: 0x66d3b0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] Windows: 0x66d5c0
     * @note[short] Android
     */
    virtual bool handleAction(int p0, bool p1, double p2);

    /**
     * @note[short] Android
     */
    TodoReturn announceLevelControls();

    /**
     * @note[short] Android
     */
    TodoReturn applyLevelBindings();

    /**
     * @note[short] MacOS (Intel): 0x707020
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void disableMenu();

    /**
     * @note[short] MacOS (ARM): 0x4275ac
     * @note[short] MacOS (Intel): 0x4c47c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x52198
     * @note[short] Android
     */
    void doPause();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void editorPlaytest(bool visible);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x51200
     * @note[short] Android
     */
    void enableEditorMode();

    /**
     * @note[short] MacOS (ARM): 0x42649c
     * @note[short] MacOS (Intel): 0x4c48d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x521e4
     * @note[short] Android
     */
    void enableMenu();

    /**
     * @note[short] Android
     */
    void handleKeypress(cocos2d::enumKeyCodes key, bool down, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x424e64
     * @note[short] MacOS (Intel): 0x4c1ac0
     * @note[short] Windows: 0x66c170
     * @note[short] iOS: 0x50088
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x427828
     * @note[short] MacOS (Intel): 0x4c4a60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x52254
     * @note[short] Android
     */
    bool isJumpButtonPressed();

    /**
     * @note[short] MacOS (ARM): 0x427878
     * @note[short] MacOS (Intel): 0x4c4a90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isJumpButtonPressed(bool player1);

    /**
     * @note[short] MacOS (Intel): 0x4c22f0
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4256a4
     * @note[short] MacOS (Intel): 0x4c2350
     * @note[short] iOS: 0x50674
     * @note[short] Android
     */
    void onDeleteCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x425604
     * @note[short] MacOS (Intel): 0x4c22a0
     * @note[short] Windows: 0x66f100
     * @note[short] iOS: 0x505d4
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4279e4
     * @note[short] MacOS (Intel): 0x4c4c00
     * @note[short] Windows: 0x66f6e0
     * @note[short] iOS: 0x52430
     * @note[short] Android
     */
    bool processUINodesTouch(GJUITouchEvent event, cocos2d::CCTouch* touch);

    /**
     * @note[short] Windows: 0x100ae0
     * @note[short] iOS: 0x2e58a8
     * @note[short] Android
     */
    bool processUINodeTouch(GJUITouchEvent event, int touchID, cocos2d::CCPoint position, GJUINode* node, double timestamp);

    /**
     * @note[short] Android
     */
    TodoReturn reapplyLevelControls();

    /**
     * @note[short] MacOS (Intel): 0x477bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d6be4
     * @note[short] Android
     */
    void refreshDpad();

    /**
     * @note[short] MacOS (ARM): 0x425d24
     * @note[short] MacOS (Intel): 0x4c2a10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x50bcc
     * @note[short] Android
     */
    void resetAllButtons();

    /**
     * @note[short] MacOS (ARM): 0x4262ec
     * @note[short] MacOS (Intel): 0x4c3000
     * @note[short] Windows: 0x66d2a0
     * @note[short] iOS: 0x51124
     * @note[short] Android
     */
    void resetUINodeState();

    /**
     * @note[short] Android
     */
    TodoReturn resolveLevelControls();

    /**
     * @note[short] Android
     */
    TodoReturn showTextAlert(std::string p0, bool p1, bool p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0x4256ec
     * @note[short] MacOS (Intel): 0x4c2390
     * @note[short] Windows: 0x66f080
     * @note[short] iOS: 0x506bc
     * @note[short] Android
     */
    void toggleCheckpointsMenu(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x4276c8
     * @note[short] MacOS (Intel): 0x4c48f0
     * @note[short] Windows: 0x66f310
     * @note[short] iOS: 0x521f8
     * @note[short] Android
     */
    void toggleMenuVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x4258ac
     * @note[short] MacOS (Intel): 0x4c2560
     * @note[short] Windows: 0xf0f50
     * @note[short] iOS: 0x50844
     * @note[short] Android
     */
    void togglePlatformerMode(bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x425730
     * @note[short] MacOS (Intel): 0x4c23d0
     * @note[short] Windows: 0x66ca70
     * @note[short] iOS: 0x506cc
     * @note[short] Android
     */
    void updateCheckState();

    /**
     * @note[short] MacOS (ARM): 0x643824
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateDualMode(bool dual);

    /**
     * @note[short] MacOS (ARM): 0xcd78
     * @note[short] MacOS (Intel): 0xe770
     * @note[short] iOS: 0x510a0
     * @note[short] Android
     */
    void updateUINodeVisibility(bool visible);
    void* m_pUnknown1;
    cocos2d::CCMenu* m_checkpointMenu;
    CCMenuItemSpriteExtra* m_pauseBtn;
    bool m_bUnknown2;
    bool m_bUnknown3;
    bool m_p1Jumping;
    bool m_p2Jumping;
    bool m_checkpointBtnDown;
    int m_p1TouchId;
    int m_p2TouchId;
    float m_clkTimer;
    bool m_inPlatformer;
    GJBaseGameLayer* m_gameLayer;
    bool m_initialized;
    cocos2d::CCArray* m_uiNodes;
    bool m_dualMode;
    bool m_dpadType;
    bool m_editorMode;
    cocos2d::CCArray* m_controllerButtons;
};
