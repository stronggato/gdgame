#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GJRewardDelegate.hpp>

class RewardsPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RewardsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~RewardsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45c5b8
     * @note[short] Android
     */
    static RewardsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x1af6b4
     * @note[short] MacOS (Intel): 0x1fe520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static char const* getRewardFrame(int type, int state);

    /**
     * @note[short] MacOS (ARM): 0x3090cc
     * @note[short] MacOS (Intel): 0x1fd6f0
     * @note[short] Windows: 0x55df40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1b0244
     * @note[short] MacOS (Intel): 0x1ff0b0
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1b01c8
     * @note[short] MacOS (Intel): 0x1ff040
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x258c40
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x555630
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1b01c0
     * @note[short] MacOS (Intel): 0x1ff020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x258c38
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1afcf8
     * @note[short] MacOS (Intel): 0x1feb60
     * @note[short] Windows: 0x55efd0
     * @note[short] iOS: 0x2588a0
     * @note[short] Android
     */
    virtual void rewardsStatusFinished(int type);

    /**
     * @note[short] MacOS (ARM): 0x1aff68
     * @note[short] MacOS (Intel): 0x1fedf0
     * @note[short] Windows: 0x55f230
     * @note[short] iOS: 0x258a68
     * @note[short] Android
     */
    virtual void rewardsStatusFailed();

    /**
     * @note[short] MacOS (ARM): 0x1af64c
     * @note[short] MacOS (Intel): 0x1fe4c0
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x258318
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1af688
     * @note[short] MacOS (Intel): 0x1fe4f0
     * @note[short] iOS: 0x258354
     * @note[short] Android
     */
    void onFreeStuff(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1af6dc
     * @note[short] MacOS (Intel): 0x1fe540
     * @note[short] Windows: 0x55ee90
     * @note[short] iOS: 0x258380
     * @note[short] Android
     */
    void onReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1affdc
     * @note[short] MacOS (Intel): 0x1fee50
     * @note[short] iOS: 0x258adc
     * @note[short] Android
     */
    void tryGetRewards();

    /**
     * @note[short] MacOS (ARM): 0x1b027c
     * @note[short] MacOS (Intel): 0x1ff0f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockLayerClosed(RewardUnlockLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1af7fc
     * @note[short] iOS: 0x25848c
     * @note[short] Android
     */
    void updateTimers(float dt);
    cocos2d::CCLabelBMFont* m_leftLabel;
    cocos2d::CCLabelBMFont* m_rightLabel;
    CCMenuItemSpriteExtra* m_leftChest;
    CCMenuItemSpriteExtra* m_rightChest;
    bool m_leftOpen;
    bool m_rightOpen;
    RewardUnlockLayer* m_openLayer;
};
