#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/CurrencyRewardDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class RewardUnlockLayer : public FLAlertLayer, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardUnlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardUnlockLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x55ddf0
     * @note[short] Android: Rebinded
     */
    virtual  ~RewardUnlockLayer();

    /**
     * @note[short] Windows: 0x271990
     * @note[short] Android
     */
    static RewardUnlockLayer* create(int type, RewardsPage* page);

    /**
     * @note[short] MacOS (ARM): 0x1b3bf8
     * @note[short] MacOS (Intel): 0x202e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25befc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1b3bd0
     * @note[short] MacOS (Intel): 0x202e10
     * @note[short] Windows: 0x5631a0
     * @note[short] iOS: 0x25bed4
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1b14d8
     * @note[short] MacOS (Intel): 0x200540
     * @note[short] Windows: 0x560780
     * @note[short] iOS: 0x259b4c
     * @note[short] Android
     */
    void connectionTimeout();

    /**
     * @note[short] MacOS (ARM): 0x1b054c
     * @note[short] MacOS (Intel): 0x1ff520
     * @note[short] Windows: 0x55f970
     * @note[short] iOS: 0x26598
     * @note[short] Android
     */
    bool init(int type, RewardsPage* page);

    /**
     * @note[short] MacOS (ARM): 0x1b3bcc
     * @note[short] MacOS (Intel): 0x202e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25bed0
     * @note[short] Android
     */
    void labelEnterFinishedO(cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1b1480
     * @note[short] MacOS (Intel): 0x2004e0
     * @note[short] Windows: 0x5631b0
     * @note[short] iOS: 0x259af4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1b1324
     * @note[short] MacOS (Intel): 0x2003a0
     * @note[short] Windows: 0x5607e0
     * @note[short] iOS: 0x2599c4
     * @note[short] Android
     */
    void playDropSound();

    /**
     * @note[short] MacOS (ARM): 0x1b3488
     * @note[short] MacOS (Intel): 0x2026b0
     * @note[short] Windows: 0x562110
     * @note[short] iOS: 0x25b7b0
     * @note[short] Android
     */
    void playLabelEffect(int count, int type, cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float delay);

    /**
     * @note[short] MacOS (ARM): 0x1b153c
     * @note[short] MacOS (Intel): 0x2005a0
     * @note[short] Windows: 0x5609a0
     * @note[short] iOS: 0x259bac
     * @note[short] Android
     */
    void playRewardEffect();

    /**
     * @note[short] MacOS (ARM): 0x1afe74
     * @note[short] MacOS (Intel): 0x1fed00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool readyToCollect(GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x1b3b54
     * @note[short] MacOS (Intel): 0x202d80
     * @note[short] Windows: 0x562090
     * @note[short] iOS: 0x25be58
     * @note[short] Android
     */
    void showCloseButton();

    /**
     * @note[short] MacOS (ARM): 0x1afe94
     * @note[short] MacOS (Intel): 0x1fed20
     * @note[short] Windows: 0x5606c0
     * @note[short] iOS: 0x25899c
     * @note[short] Android
     */
    bool showCollectReward(GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x1b13b0
     * @note[short] MacOS (Intel): 0x200410
     * @note[short] Windows: 0x560880
     * @note[short] iOS: 0x259a34
     * @note[short] Android
     */
    void step2();

    /**
     * @note[short] MacOS (ARM): 0x1b346c
     * @note[short] MacOS (Intel): 0x65750
     * @note[short] Windows: 0x560980
     * @note[short] iOS: 0x25b794
     * @note[short] Android
     */
    void step3();
    cocos2d::CCArray* m_backgroundObjects;
    RewardsPage* m_rewardsPage;
    GJChestSprite* m_chestSprite;
    int m_chestType;
    bool m_rewardCollected;
    bool m_animationPlayed;
    GJRewardItem* m_rewardItem;
    cocos2d::CCLabelBMFont* m_wrongLabel;
    CCMenuItemSpriteExtra* m_closeBtn;
    CCMenuItemSpriteExtra* m_rewardBtn;
    float m_unkFloat;
};
