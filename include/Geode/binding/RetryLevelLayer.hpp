#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/RewardedVideoDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class RetryLevelLayer : public GJDropDownLayer, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "RetryLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RetryLevelLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RetryLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~RetryLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x245fe8
     * @note[short] Android
     */
    static RetryLevelLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x454efc
     * @note[short] MacOS (Intel): 0x4f8130
     * @note[short] Windows: 0x55da80
     * @note[short] iOS: 0x246c74
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x454e60
     * @note[short] MacOS (Intel): 0x4f8060
     * @note[short] Windows: 0x55d910
     * @note[short] iOS: 0x246c28
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x453f58
     * @note[short] MacOS (Intel): 0x4f7100
     * @note[short] Windows: 0x55cc60
     * @note[short] iOS: 0x246170
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x454954
     * @note[short] MacOS (Intel): 0x4f7b20
     * @note[short] Windows: 0x55d6c0
     * @note[short] iOS: 0x246ad4
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x454a64
     * @note[short] MacOS (Intel): 0x4f7c20
     * @note[short] Windows: 0x55d7e0
     * @note[short] iOS: 0x246bdc
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x454e50
     * @note[short] MacOS (Intel): 0x4f8040
     * @note[short] Windows: 0x55d830
     * @note[short] iOS: 0x246c18
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool shouldOffsetRewardCurrency();

    /**
     * @note[short] MacOS (ARM): 0x454ef4
     * @note[short] MacOS (Intel): 0x4f8110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x246c6c
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x4548f8
     * @note[short] MacOS (Intel): 0x4f7ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getEndText();

    /**
     * @note[short] MacOS (ARM): 0x454aa0
     * @note[short] MacOS (Intel): 0x4f7c50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x454aa4
     * @note[short] MacOS (Intel): 0x4f7c60
     * @note[short] Android
     */
    void onFullVersion(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45483c
     * @note[short] MacOS (Intel): 0x4f7a30
     * @note[short] iOS: 0x246a30
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4547e8
     * @note[short] MacOS (Intel): 0x4f79e0
     * @note[short] iOS: 0x2469dc
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x454ac8
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd550b
     * @note[short] Android
     */
    void setupLastProgress();
    cocos2d::CCMenu* m_mainMenu;
    bool m_exitingMenu;
    bool m_unk1e9;
};
