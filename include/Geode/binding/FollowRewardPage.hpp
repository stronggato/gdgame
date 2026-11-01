#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GameRateDelegate.hpp>
#include <Geode/binding/RewardedVideoDelegate.hpp>

class FollowRewardPage : public FLAlertLayer, public FLAlertLayerProtocol, public GameRateDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "FollowRewardPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FollowRewardPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x208c20
     * @note[short] Android: Rebinded
     */
    virtual  ~FollowRewardPage();

    /**
     * @note[short] iOS: 0x45c5b8
     * @note[short] Android
     */
    static FollowRewardPage* create();

    /**
     * @note[short] MacOS (ARM): 0x384d58
     * @note[short] MacOS (Intel): 0x40be00
     * @note[short] Windows: 0x208ec0
     * @note[short] iOS: 0x4a4444
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x386ef4
     * @note[short] MacOS (Intel): 0x40e1e0
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9ed50
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x386db4
     * @note[short] MacOS (Intel): 0x40e0b0
     * @note[short] Windows: 0x20cbb0
     * @note[short] iOS: 0x4a5e88
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x386c1c
     * @note[short] MacOS (Intel): 0x40df10
     * @note[short] Windows: 0x20b650
     * @note[short] iOS: 0x4a5d00
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (Intel): 0x40d7a0
     * @note[short] Windows: 0x20b030
     * @note[short] Android
     */
    virtual void updateRate();

    /**
     * @note[short] MacOS (ARM): 0x385d90
     * @note[short] MacOS (Intel): 0x40d040
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x4a52b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x385dcc
     * @note[short] MacOS (Intel): 0x40d070
     * @note[short] iOS: 0x4a52ec
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3863f4
     * @note[short] MacOS (Intel): 0x40d6d0
     * @note[short] Windows: 0x20cad0
     * @note[short] iOS: 0x4a5848
     * @note[short] Android
     */
    void switchToOpenedState(CCMenuItemSpriteExtra* button);
    cocos2d::CCArray* m_chests;
    bool m_videoPlaying;
};
