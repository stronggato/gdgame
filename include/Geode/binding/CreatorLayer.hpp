#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCSceneTransitionDelegate.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/binding/GJContentStatusDelegate.hpp>

class CreatorLayer : public cocos2d::CCLayer, public cocos2d::CCSceneTransitionDelegate, public DialogDelegate, public GJContentStatusDelegate {
public:
    static constexpr auto CLASS_NAME = "CreatorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CreatorLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x133ed0
     * @note[short] Android: Rebinded
     */
    virtual  ~CreatorLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CreatorLayer();

    /**
     * @note[short] MacOS (ARM): 0x3de184
     * @note[short] MacOS (Intel): 0x4b7af0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a86f4
     * @note[short] Android
     */
    static CreatorLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x401620
     * @note[short] Windows: 0x133fe0
     * @note[short] iOS: 0xd9c58
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] Windows: 0x134180
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2299a8
     * @note[short] MacOS (Intel): 0x284910
     * @note[short] Windows: 0x138430
     * @note[short] iOS: 0xdbb38
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x1382b0
     * @note[short] iOS: 0x65a28
     * @note[short] Android
     */
    virtual void sceneWillResume();

    /**
     * @note[short] MacOS (ARM): 0x2297b0
     * @note[short] MacOS (Intel): 0x284710
     * @note[short] Windows: 0x138190
     * @note[short] iOS: 0xdba54
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] Windows: 0x138180
     * @note[short] Android
     */
    virtual void contentStatusFinished();

    /**
     * @note[short] MacOS (ARM): 0x229750
     * @note[short] MacOS (Intel): 0x284670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool canPlayOnlineLevels();

    /**
     * @note[short] MacOS (Intel): 0x3c19f0
     * @note[short] Windows: 0xeb270
     * @note[short] iOS: 0x504668
     * @note[short] Android
     */
    void checkQuestsStatus();

    /**
     * @note[short] Android
     */
    TodoReturn checkTimedStatus();

    /**
     * @note[short] MacOS (ARM): 0x22850c
     * @note[short] MacOS (Intel): 0x283400
     * @note[short] Windows: 0x136c10
     * @note[short] iOS: 0xdae8c
     * @note[short] Android
     */
    void onAdventureMap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2296f0
     * @note[short] MacOS (Intel): 0x284610
     * @note[short] iOS: 0x39ef28
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2285a0
     * @note[short] MacOS (Intel): 0x283470
     * @note[short] iOS: 0xdaf04
     * @note[short] Android
     */
    void onChallenge(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDailyLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x37c9b0
     * @note[short] Android
     */
    void onEventLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onFameLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22873c
     * @note[short] MacOS (Intel): 0x283620
     * @note[short] iOS: 0xdb0a0
     * @note[short] Android
     */
    void onFeaturedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGauntlets(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228104
     * @note[short] MacOS (Intel): 0x283040
     * @note[short] Windows: 0x136020
     * @note[short] iOS: 0xdab1c
     * @note[short] Android
     */
    void onLeaderboards(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228804
     * @note[short] MacOS (Intel): 0x283700
     * @note[short] iOS: 0xdb168
     * @note[short] Android
     */
    void onMapPacks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1922d0
     * @note[short] MacOS (Intel): 0x283090
     * @note[short] Windows: 0x136620
     * @note[short] iOS: 0xdab64
     * @note[short] Android
     */
    void onMultiplayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228850
     * @note[short] MacOS (Intel): 0x283760
     * @note[short] Windows: 0x1363d0
     * @note[short] iOS: 0xdb1b4
     * @note[short] Android
     */
    void onOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228968
     * @note[short] MacOS (Intel): 0x283890
     * @note[short] Android
     */
    void onOnlyFullVersion(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228788
     * @note[short] MacOS (Intel): 0x283680
     * @note[short] iOS: 0xdb0ec
     * @note[short] Android
     */
    void onPaths(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSavedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228f10
     * @note[short] MacOS (Intel): 0x283df0
     * @note[short] Windows: 0x136f70
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2287a4
     * @note[short] MacOS (Intel): 0x2836a0
     * @note[short] Windows: 0x136300
     * @note[short] iOS: 0xdb108
     * @note[short] Android
     */
    void onTopLists(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22915c
     * @note[short] MacOS (Intel): 0x284010
     * @note[short] Windows: 0x1377a0
     * @note[short] iOS: 0xdb520
     * @note[short] Android
     */
    void onTreasureRoom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x37c9b0
     * @note[short] Android
     */
    void onWeeklyLevel(cocos2d::CCObject* sender);
    cocos2d::CCSprite* m_secretDoorSprite;
    cocos2d::CCSprite* m_questsSprite;
    int m_vaultDialogIndex;
    int m_versusDialogIndex;
};
