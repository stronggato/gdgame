#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/BoomScrollLayerDelegate.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>
#include <Geode/binding/RewardedVideoDelegate.hpp>

class GauntletSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public LevelManagerDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x226d98
     * @note[short] MacOS (Intel): 0x59d480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd9ba0
     * @note[short] Android: Rebinded
     */
     ~GauntletSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x22716c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x48041c
     * @note[short] Android
     */
    static GauntletSelectLayer* create(int unused);

    /**
     * @note[short] MacOS (ARM): 0x4ec75c
     * @note[short] MacOS (Intel): 0x59d610
     * @note[short] iOS: 0x252290
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int unused);

    /**
     * @note[short] MacOS (ARM): 0x4eec48
     * @note[short] MacOS (Intel): 0x59fc80
     * @note[short] Windows: 0x2fd620
     * @note[short] iOS: 0x2542b8
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x4ee540
     * @note[short] MacOS (Intel): 0x59f5e0
     * @note[short] Windows: 0x2fcd20
     * @note[short] iOS: 0x253d88
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4ee66c
     * @note[short] MacOS (Intel): 0x59f710
     * @note[short] Windows: 0x2fd5b0
     * @note[short] iOS: 0x253dd4
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x4ee4a0
     * @note[short] MacOS (Intel): 0x59f540
     * @note[short] Windows: 0x2fcc20
     * @note[short] iOS: 0x253ce8
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (ARM): 0x4ee400
     * @note[short] MacOS (Intel): 0x59f4a0
     * @note[short] Windows: 0x2fcc20
     * @note[short] iOS: 0x253c48
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (ARM): 0x4ed99c
     * @note[short] MacOS (Intel): 0x59e9c0
     * @note[short] Windows: 0x2fbef0
     * @note[short] iOS: 0x25341c
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* gauntlets, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x4edb44
     * @note[short] MacOS (Intel): 0x59eb90
     * @note[short] Windows: 0x2fc0c0
     * @note[short] iOS: 0x253534
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x4ee304
     * @note[short] MacOS (Intel): 0x59f3a0
     * @note[short] Windows: 0x2fcab0
     * @note[short] iOS: 0x253b50
     * @note[short] Android
     */
    void goToPage(int page, bool instant);

    /**
     * @note[short] MacOS (ARM): 0x4ec890
     * @note[short] MacOS (Intel): 0x59d770
     * @note[short] Windows: 0x2fb0f0
     * @note[short] iOS: 0x2523b8
     * @note[short] Android
     */
    bool init(int unused);

    /**
     * @note[short] MacOS (ARM): 0x4ed2cc
     * @note[short] MacOS (Intel): 0x59e280
     * @note[short] Windows: 0x2fcc60
     * @note[short] iOS: 0x252dd4
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ed340
     * @note[short] MacOS (Intel): 0x1fb380
     * @note[short] iOS: 0x252e50
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ed2b8
     * @note[short] MacOS (Intel): 0x59e260
     * @note[short] Windows: 0x2fca70
     * @note[short] iOS: 0x252dc0
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4edd94
     * @note[short] MacOS (Intel): 0x59ede0
     * @note[short] iOS: 0x2536cc
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ed2a4
     * @note[short] MacOS (Intel): 0x59e240
     * @note[short] Windows: 0x2fca90
     * @note[short] iOS: 0x252dac
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ed3fc
     * @note[short] MacOS (Intel): 0x59e3a0
     * @note[short] Windows: 0x2fbdc0
     * @note[short] iOS: 0x252ee8
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63ed4
     * @note[short] MacOS (Intel): 0x59f770
     * @note[short] Windows: 0x3a8730
     * @note[short] iOS: 0x19456c
     * @note[short] Android
     */
    void playUnlockAnimation();

    /**
     * @note[short] MacOS (Intel): 0x59e460
     * @note[short] Windows: 0x2fc260
     * @note[short] iOS: 0x2e0074
     * @note[short] Android
     */
    void setupGauntlets();

    /**
     * @note[short] MacOS (ARM): 0x4eeb10
     * @note[short] MacOS (Intel): 0x59fb40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showUnlockGauntlet();

    /**
     * @note[short] MacOS (ARM): 0x4ee3f8
     * @note[short] MacOS (Intel): 0x59f490
     * @note[short] iOS: 0x253c40
     * @note[short] Android
     */
    void unblockPlay();

    /**
     * @note[short] MacOS (Intel): 0x5a0050
     * @note[short] Windows: 0x2fe770
     * @note[short] iOS: 0x1fd700
     * @note[short] Android
     */
    void unlockAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x4eed88
     * @note[short] MacOS (Intel): 0x59fdc0
     * @note[short] iOS: 0x2543f8
     * @note[short] Android
     */
    void unlockAnimationStep2();

    /**
     * @note[short] MacOS (ARM): 0x4ef0a8
     * @note[short] MacOS (Intel): 0x23a8e0
     * @note[short] Windows: 0x2fdca0
     * @note[short] iOS: 0x2546ac
     * @note[short] Android
     */
    void unlockAnimationStep3();

    /**
     * @note[short] MacOS (ARM): 0x4ed94c
     * @note[short] MacOS (Intel): 0x59e970
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateArrows();
    cocos2d::CCSprite* m_backgroundSprite;
    BoomScrollLayer* m_scrollLayer;
    CCMenuItemSpriteExtra* m_leftButton;
    CCMenuItemSpriteExtra* m_rightButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    bool m_exiting;
    bool m_playing;
    TextArea* m_tryAgainText;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCDictionary* m_gauntlets;
    bool m_playBlocked;
    int m_gauntletID;
    bool m_videoPlaying;
    bool m_locked;
};
