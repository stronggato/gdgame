#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/binding/GJOnlineRewardDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class SecretLayer5 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate, public GJOnlineRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer5";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer5, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ac4b4
     * @note[short] Android: Out of line
     */
     SecretLayer5();

    /**
     * @note[short] MacOS (ARM): 0x4ec674
     * @note[short] MacOS (Intel): 0x26e430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2521a8
     * @note[short] Android: Rebinded
     */
     ~SecretLayer5();

    /**
     * @note[short] MacOS (Intel): 0x46e340
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7c174
     * @note[short] Android
     */
    static SecretLayer5* create();

    /**
     * @note[short] MacOS (ARM): 0x3d9824
     * @note[short] MacOS (Intel): 0x46e300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7c130
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3d9974
     * @note[short] MacOS (Intel): 0x46e490
     * @note[short] Windows: 0x585950
     * @note[short] iOS: 0x7c1e8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3ddbd0
     * @note[short] MacOS (Intel): 0x472d60
     * @note[short] Windows: 0x57b7a0
     * @note[short] iOS: 0x3f3a8c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x3dbb68
     * @note[short] MacOS (Intel): 0x470ad0
     * @note[short] Windows: 0x5870f0
     * @note[short] iOS: 0x7de38
     * @note[short] Android
     */
    virtual void updateTweenActionInt(float value, int tag);

    /**
     * @note[short] MacOS (ARM): 0x3ddac4
     * @note[short] MacOS (Intel): 0x472c70
     * @note[short] Windows: 0x589b50
     * @note[short] iOS: 0x3f3a80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x588f20
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x589080
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (Intel): 0x472b70
     * @note[short] Windows: 0x589080
     * @note[short] iOS: 0x7f14c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3dd77c
     * @note[short] MacOS (Intel): 0x472990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7efd0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x3dcce8
     * @note[short] MacOS (Intel): 0x471d90
     * @note[short] Windows: 0x588550
     * @note[short] iOS: 0x7edac
     * @note[short] Android
     */
    virtual void onlineRewardStatusFinished(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x3dce58
     * @note[short] MacOS (Intel): 0x471ee0
     * @note[short] Windows: 0x5886d0
     * @note[short] iOS: 0x7ef04
     * @note[short] Android
     */
    virtual void onlineRewardStatusFailed();

    /**
     * @note[short] MacOS (ARM): 0x3db858
     * @note[short] MacOS (Intel): 0x470770
     * @note[short] Windows: 0x586d30
     * @note[short] iOS: 0x2b140
     * @note[short] Android
     */
    void animateHead();

    /**
     * @note[short] MacOS (ARM): 0x3dca70
     * @note[short] MacOS (Intel): 0x471b30
     * @note[short] iOS: 0x7ebe4
     * @note[short] Android
     */
    void claimOnlineReward();

    /**
     * @note[short] MacOS (ARM): 0x3db6c8
     * @note[short] MacOS (Intel): 0x4705e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7d9d4
     * @note[short] Android
     */
    void fadeInMessage();

    /**
     * @note[short] MacOS (ARM): 0x3db634
     * @note[short] MacOS (Intel): 0x470560
     * @note[short] Windows: 0x586b30
     * @note[short] iOS: 0x7d958
     * @note[short] Android
     */
    void fadeInSubmitMessage();

    /**
     * @note[short] MacOS (ARM): 0x3db830
     * @note[short] MacOS (Intel): 0x470740
     * @note[short] Windows: 0x586d00
     * @note[short] iOS: 0x7db2c
     * @note[short] Android
     */
    void fadeOutMessage();

    /**
     * @note[short] MacOS (ARM): 0x3dbb7c
     * @note[short] MacOS (Intel): 0x470af0
     * @note[short] Windows: 0x587140
     * @note[short] iOS: 0x7de4c
     * @note[short] Android
     */
    void finishLoadingState();

    /**
     * @note[short] MacOS (ARM): 0x3da868
     * @note[short] MacOS (Intel): 0x46f580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    std::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x3dbb90
     * @note[short] MacOS (Intel): 0x470b10
     * @note[short] Windows: 0x587160
     * @note[short] iOS: 0x7de60
     * @note[short] Android
     */
    void handleSecretResponse();

    /**
     * @note[short] MacOS (ARM): 0x3dcef0
     * @note[short] MacOS (Intel): 0x471f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7ef58
     * @note[short] Android
     */
    void hideTextInput();

    /**
     * @note[short] MacOS (ARM): 0x3db524
     * @note[short] MacOS (Intel): 0x470430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7d8a8
     * @note[short] Android
     */
    void incrementChatIdx();

    /**
     * @note[short] MacOS (ARM): 0x3dda8c
     * @note[short] MacOS (Intel): 0x472c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3daad4
     * @note[short] MacOS (Intel): 0x46f830
     * @note[short] Windows: 0x589ad0
     * @note[short] iOS: 0x7d098
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dab58
     * @note[short] MacOS (Intel): 0x46f8a0
     * @note[short] iOS: 0x7d118
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dc9dc
     * @note[short] MacOS (Intel): 0x471ab0
     * @note[short] iOS: 0x7eb64
     * @note[short] Android
     */
    void playWinSFX();

    /**
     * @note[short] Android
     */
    void showDialog(int index);

    /**
     * @note[short] MacOS (ARM): 0x14948
     * @note[short] MacOS (Intel): 0x4714d0
     * @note[short] iOS: 0x7e670
     * @note[short] Android
     */
    void showFailAnimation();

    /**
     * @note[short] MacOS (ARM): 0x3db018
     * @note[short] MacOS (Intel): 0x46fe60
     * @note[short] Windows: 0x584320
     * @note[short] iOS: 0x7d518
     * @note[short] Android
     */
    void showFirstDialog();

    /**
     * @note[short] MacOS (ARM): 0x3dbc48
     * @note[short] MacOS (Intel): 0x470bd0
     * @note[short] Windows: 0x5877f0
     * @note[short] iOS: 0x7decc
     * @note[short] Android
     */
    void showSuccessAnimation();

    /**
     * @note[short] MacOS (ARM): 0x3dc970
     * @note[short] MacOS (Intel): 0x471a40
     * @note[short] Windows: 0x588720
     * @note[short] iOS: 0x7eafc
     * @note[short] Android
     */
    void showTextInput();

    /**
     * @note[short] MacOS (ARM): 0x3dcc78
     * @note[short] MacOS (Intel): 0x471d20
     * @note[short] iOS: 0x7eda4
     * @note[short] Android
     */
    void unlockUI();

    /**
     * @note[short] MacOS (ARM): 0x3da814
     * @note[short] MacOS (Intel): 0x46f530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7cea8
     * @note[short] Android
     */
    void updateMessageLabel(std::string text);

    /**
     * @note[short] Android
     */
    void updateSearchLabel(char const* text);
    int m_threadTag;
    int m_basicMessageIndex;
    int m_selectedThread;
    int m_threadMessageIndex;
    int m_basicMessageCount;
    int m_errorMessageIndex;
    CCTextInputNode* m_textInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_wraithButton;
    bool m_exiting;
    void* m_unk1f0;
    cocos2d::CCArray* m_torchFires;
    bool m_loading;
    int m_rewardStatus;
    std::string m_chestID;
    bool m_uiLocked;
    CCSpriteWithHue* m_wraithSprite;
    CCSpriteGrayscale* m_wraithGraySprite;
    cocos2d::CCSprite* m_eyesSprite;
    cocos2d::CCSprite* m_background;
    cocos2d::CCSprite* m_lockSprite;
    std::vector<int> m_soundEffects;
    int m_chatIndex;
    cocos2d::extension::CCScale9Sprite* m_inputBackground;
    LoadingCircleSprite* m_circleSprite;
    TextArea* m_messageArea;
};
