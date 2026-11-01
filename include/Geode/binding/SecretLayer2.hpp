#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DialogDelegate.hpp>

class SecretLayer2 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer2, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ac4b4
     * @note[short] Android: Out of line
     */
     SecretLayer2();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a402c
     * @note[short] Android: Rebinded
     */
     ~SecretLayer2();

    /**
     * @note[short] MacOS (Intel): 0x495b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a4124
     * @note[short] Android
     */
    static SecretLayer2* create();

    /**
     * @note[short] MacOS (ARM): 0x3fde7c
     * @note[short] Windows: 0x573f50
     * @note[short] iOS: 0x3a40e0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3fdfa8
     * @note[short] Windows: 0x5740d0
     * @note[short] iOS: 0x3a4198
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x403b20
     * @note[short] MacOS (Intel): 0x49bc20
     * @note[short] Windows: 0x57b7a0
     * @note[short] iOS: 0x3a85c8
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x403a34
     * @note[short] MacOS (Intel): 0x49bb30
     * @note[short] Windows: 0x57b790
     * @note[short] iOS: 0x3a85bc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x578d00
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x578e60
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x578e60
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x401558
     * @note[short] MacOS (Intel): 0x499700
     * @note[short] Windows: 0x576340
     * @note[short] iOS: 0x3a6f04
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x402d88
     * @note[short] MacOS (Intel): 0x49af10
     * @note[short] Windows: 0x579b60
     * @note[short] iOS: 0x3a7dac
     * @note[short] Android
     */
    std::string getBasicMessage();

    /**
     * @note[short] Windows: 0x57a660
     * @note[short] Android
     */
    std::string getErrorMessage();

    /**
     * @note[short] Android
     */
    std::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x403488
     * @note[short] MacOS (Intel): 0x49b5f0
     * @note[short] Windows: 0x579460
     * @note[short] iOS: 0x3a8038
     * @note[short] Android
     */
    std::string getThreadMessage();

    /**
     * @note[short] MacOS (ARM): 0x3fede8
     * @note[short] MacOS (Intel): 0x496ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3ff144
     * @note[short] MacOS (Intel): 0x496e80
     * @note[short] iOS: 0x3a5124
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x400614
     * @note[short] MacOS (Intel): 0x4985d0
     * @note[short] Windows: 0x576690
     * @note[short] iOS: 0x3a6358
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x400870
     * @note[short] MacOS (Intel): 0x498800
     * @note[short] Windows: 0x279790
     * @note[short] iOS: 0x3a6524
     * @note[short] Android
     */
    void onSecretLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ff1b8
     * @note[short] MacOS (Intel): 0x496ef0
     * @note[short] iOS: 0x3a5198
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] MacOS (ARM): 0x402cb8
     * @note[short] MacOS (Intel): 0x49ae20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a7cf0
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] MacOS (ARM): 0x400a30
     * @note[short] MacOS (Intel): 0x4989c0
     * @note[short] Windows: 0x575780
     * @note[short] iOS: 0x3a667c
     * @note[short] Android
     */
    void showCompletedLevel();

    /**
     * @note[short] MacOS (ARM): 0x401444
     * @note[short] MacOS (Intel): 0x4995d0
     * @note[short] Windows: 0x575610
     * @note[short] iOS: 0x3a6df4
     * @note[short] Android
     */
    void showSecretLevel();

    /**
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
    CCTextInputNode* m_searchInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCDictionary* m_messageThreads;
    bool m_exiting;
    int m_doorDialogIndex;
    CCMenuItemSpriteExtra* m_secretLevelButton;
    cocos2d::CCArray* m_secretLevelLabels;
    CCMenuItemSpriteExtra* m_secretDoorButton;
};
