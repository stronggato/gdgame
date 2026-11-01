#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DialogDelegate.hpp>

class SecretLayer4 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer4";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer4, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f3ae0
     * @note[short] Android: Out of line
     */
     SecretLayer4();

    /**
     * @note[short] MacOS (ARM): 0x322204
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f12a8
     * @note[short] Android: Rebinded
     */
     ~SecretLayer4();

    /**
     * @note[short] MacOS (ARM): 0x22716c
     * @note[short] MacOS (Intel): 0x3999f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x156214
     * @note[short] Android
     */
    static SecretLayer4* create();

    /**
     * @note[short] MacOS (ARM): 0x1faafc
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f1350
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x322558
     * @note[short] Windows: 0x5815f0
     * @note[short] iOS: 0x3f1408
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3267d0
     * @note[short] MacOS (Intel): 0x39dfc0
     * @note[short] Windows: 0x57b7a0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x3266dc
     * @note[short] MacOS (Intel): 0x39ded0
     * @note[short] Windows: 0x585070
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
     * @note[short] MacOS (ARM): 0x324ed0
     * @note[short] MacOS (Intel): 0x39c780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f309c
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x325b18
     * @note[short] MacOS (Intel): 0x39d340
     * @note[short] iOS: 0x3f36ac
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
     * @note[short] MacOS (ARM): 0x325f7c
     * @note[short] MacOS (Intel): 0x39d760
     * @note[short] Windows: 0x583f00
     * @note[short] iOS: 0x3f372c
     * @note[short] Android
     */
    std::string getThreadMessage();

    /**
     * @note[short] MacOS (ARM): 0x32318c
     * @note[short] MacOS (Intel): 0x39a730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3238d4
     * @note[short] MacOS (Intel): 0x39af10
     * @note[short] iOS: 0x3f2410
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3245d8
     * @note[short] MacOS (Intel): 0x39bd30
     * @note[short] Windows: 0x582760
     * @note[short] iOS: 0x3f2fb8
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x32394c
     * @note[short] MacOS (Intel): 0x39af80
     * @note[short] Windows: 0x20e3b0
     * @note[short] iOS: 0x3f2488
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] MacOS (ARM): 0x325a48
     * @note[short] MacOS (Intel): 0x39d250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f35f0
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] Android
     */
    void showDialog(int index);

    /**
     * @note[short] MacOS (ARM): 0x3231c4
     * @note[short] MacOS (Intel): 0x39a760
     * @note[short] iOS: 0x3f1ebc
     * @note[short] Android
     */
    void showFirstDialog();

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
};
