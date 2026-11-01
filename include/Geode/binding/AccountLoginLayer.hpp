#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/GJAccountLoginDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCPoint.hpp>

class AccountLoginLayer : public FLAlertLayer, public GJAccountLoginDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLoginLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLoginLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x8bea0
     * @note[short] Android: Rebinded
     */
    virtual  ~AccountLoginLayer();

    /**
     * @note[short] Windows: 0x907f0
     * @note[short] Android
     */
    static AccountLoginLayer* create(std::string username);

    /**
     * @note[short] MacOS (ARM): 0x3fb140
     * @note[short] MacOS (Intel): 0x492950
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x8d5d0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3faff0
     * @note[short] MacOS (Intel): 0x492810
     * @note[short] Windows: 0x91ef0
     * @note[short] iOS: 0x8d4e4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3faddc
     * @note[short] MacOS (Intel): 0x492650
     * @note[short] Windows: 0x91a50
     * @note[short] iOS: 0x8d3ec
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8d788
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3fb178
     * @note[short] MacOS (Intel): 0x492990
     * @note[short] Windows: 0x91fc0
     * @note[short] iOS: 0x8d608
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x647a5c
     * @note[short] MacOS (Intel): 0x739f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x460468
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3fa6e8
     * @note[short] MacOS (Intel): 0x491fb0
     * @note[short] Windows: 0x915f0
     * @note[short] iOS: 0x8cfe8
     * @note[short] Android
     */
    virtual void loginAccountFinished(int accountID, int userID);

    /**
     * @note[short] Windows: 0x91850
     * @note[short] iOS: 0x8d1f4
     * @note[short] Android
     */
    virtual void loginAccountFailed(AccountError errorType);

    /**
     * @note[short] MacOS (ARM): 0x3fa408
     * @note[short] MacOS (Intel): 0x491cf0
     * @note[short] iOS: 0x8cd10
     * @note[short] Android
     */
    cocos2d::extension::CCScale9Sprite* createTextBackground(cocos2d::CCPoint position, char const* text, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3fa5b4
     * @note[short] MacOS (Intel): 0x491e90
     * @note[short] Windows: 0x914f0
     * @note[short] iOS: 0x8ceb8
     * @note[short] Android
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint position, cocos2d::CCSize size, char const* text, int tag);

    /**
     * @note[short] MacOS (ARM): 0x3fa4cc
     * @note[short] MacOS (Intel): 0x491db0
     * @note[short] Windows: 0x91410
     * @note[short] iOS: 0x8cdd4
     * @note[short] Android
     */
    cocos2d::CCLabelBMFont* createTextLabel(cocos2d::CCPoint position, char const* text, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3faef8
     * @note[short] MacOS (Intel): 0x492730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void disableNodes();

    /**
     * @note[short] MacOS (ARM): 0x3fa9c0
     * @note[short] MacOS (Intel): 0x492280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3f93e4
     * @note[short] MacOS (Intel): 0x490bf0
     * @note[short] Windows: 0x1582a0
     * @note[short] iOS: 0x8c25c
     * @note[short] Android
     */
    bool init(std::string username);

    /**
     * @note[short] MacOS (ARM): 0x3f9f48
     * @note[short] MacOS (Intel): 0x491830
     * @note[short] Windows: 0x91ea0
     * @note[short] iOS: 0x8c9a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fa6c4
     * @note[short] MacOS (Intel): 0x491f90
     * @note[short] iOS: 0x8cfc4
     * @note[short] Android
     */
    void onForgotPassword(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fa6a0
     * @note[short] MacOS (Intel): 0x491f70
     * @note[short] iOS: 0x8cfa0
     * @note[short] Android
     */
    void onForgotUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f9fb0
     * @note[short] MacOS (Intel): 0x491890
     * @note[short] iOS: 0x8ca08
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fad60
     * @note[short] MacOS (Intel): 0x4925f0
     * @note[short] Windows: 0x919d0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetLabel(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3face8
     * @note[short] MacOS (Intel): 0x492580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8d374
     * @note[short] Android
     */
    void resetLabels();

    /**
     * @note[short] MacOS (ARM): 0x3faf38
     * @note[short] MacOS (Intel): 0x492770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8d484
     * @note[short] Android
     */
    void showLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3fb0c4
     * @note[short] MacOS (Intel): 0x4928e0
     * @note[short] Windows: 0x91f50
     * @note[short] iOS: 0x8d554
     * @note[short] Android
     */
    void toggleUI(bool enable);

    /**
     * @note[short] Android
     */
    void updateLabel(AccountError type);
    CCTextInputNode* m_usernameInput;
    CCTextInputNode* m_passwordInput;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    cocos2d::CCLabelBMFont* m_passwordLabel;
    LoadingCircle* m_loadingCircle;
    std::string m_username;
    std::string m_password;
};
