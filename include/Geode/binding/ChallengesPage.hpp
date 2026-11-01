#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GJChallengeDelegate.hpp>
#include <Geode/binding/CurrencyRewardDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ChallengesPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJChallengeDelegate, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "ChallengesPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChallengesPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ChallengesPage();

    /**
     * @note[short] MacOS (Intel): 0x93a400
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~ChallengesPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11430c
     * @note[short] Android
     */
    static ChallengesPage* create();

    /**
     * @note[short] MacOS (ARM): 0x3110b8
     * @note[short] MacOS (Intel): 0x386580
     * @note[short] Windows: 0x9d7f0
     * @note[short] iOS: 0x35198
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x31278c
     * @note[short] MacOS (Intel): 0x387c80
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x3628c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3126f0
     * @note[short] MacOS (Intel): 0x387bf0
     * @note[short] Windows: 0x9ef30
     * @note[short] iOS: 0x36280
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9ed50
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x3126e8
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36278
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x312014
     * @note[short] MacOS (Intel): 0x387550
     * @note[short] Windows: 0x9e340
     * @note[short] iOS: 0x35d88
     * @note[short] Android
     */
    virtual void challengeStatusFinished();

    /**
     * @note[short] MacOS (ARM): 0x3122d8
     * @note[short] MacOS (Intel): 0x387850
     * @note[short] Windows: 0x9e4d0
     * @note[short] iOS: 0x35f90
     * @note[short] Android
     */
    virtual void challengeStatusFailed();

    /**
     * @note[short] MacOS (ARM): 0x3128f4
     * @note[short] MacOS (Intel): 0x387de0
     * @note[short] Windows: 0x9f2a0
     * @note[short] iOS: 0x363f4
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* layer);

    /**
     * @note[short] Android
     */
    TodoReturn canCollectQuests();

    /**
     * @note[short] MacOS (ARM): 0x3127c4
     * @note[short] MacOS (Intel): 0x387cc0
     * @note[short] iOS: 0x362c4
     * @note[short] Android
     */
    void claimItem(ChallengeNode* node, GJChallengeItem* item, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x311d10
     * @note[short] MacOS (Intel): 0x387220
     * @note[short] Windows: 0x9e620
     * @note[short] iOS: 0x35af8
     * @note[short] Android
     */
    ChallengeNode* createChallengeNode(int number, bool skipAnimation, float animLength, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x3121f0
     * @note[short] MacOS (Intel): 0x387750
     * @note[short] Windows: 0x9e950
     * @note[short] iOS: 0x35eac
     * @note[short] Android
     */
    void exitNodeAtSlot(int position, float delay);

    /**
     * @note[short] MacOS (ARM): 0x311a88
     * @note[short] MacOS (Intel): 0x386f90
     * @note[short] Windows: 0x9eef0
     * @note[short] iOS: 0x358bc
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x312370
     * @note[short] MacOS (Intel): 0x3878e0
     * @note[short] Windows: 0x9e5a0
     * @note[short] iOS: 0x36028
     * @note[short] Android
     */
    void tryGetChallenges();

    /**
     * @note[short] MacOS (ARM): 0x311f6c
     * @note[short] MacOS (Intel): 0x387480
     * @note[short] Windows: 0x9e290
     * @note[short] iOS: 0x35d24
     * @note[short] Android
     */
    void updateDots();

    /**
     * @note[short] MacOS (ARM): 0x24ee24
     * @note[short] Windows: 0x9ea40
     * @note[short] iOS: 0x35908
     * @note[short] Android
     */
    void updateTimers(float dt);
    cocos2d::CCArray* m_dots;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    LoadingCircle* m_circle;
    bool m_triedToLoad;
    bool m_unkBool;
    CurrencyRewardLayer* m_currencyRewardLayer;
    cocos2d::CCDictionary* m_challengeNodes;
};
