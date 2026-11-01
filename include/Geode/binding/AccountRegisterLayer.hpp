#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/GJAccountRegisterDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCPoint.hpp>

class AccountRegisterLayer : public FLAlertLayer, public GJAccountRegisterDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountRegisterLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountRegisterLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21fb00
     * @note[short] Android: Out of line
     */
     AccountRegisterLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21efe4
     * @note[short] Android: Rebinded
     */
     ~AccountRegisterLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AccountRegisterLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x3f4fcc
     * @note[short] MacOS (Intel): 0x48c080
     * @note[short] Windows: 0x8cb90
     * @note[short] iOS: 0x89240
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3f85f4
     * @note[short] MacOS (Intel): 0x48fba0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x8b700
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3f83f0
     * @note[short] MacOS (Intel): 0x48f9d0
     * @note[short] Windows: 0x8edf0
     * @note[short] iOS: 0x8b5bc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f7130
     * @note[short] MacOS (Intel): 0x48e620
     * @note[short] Windows: 0x8e270
     * @note[short] iOS: 0x8aa7c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3dd77c
     * @note[short] MacOS (Intel): 0x3ac0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f862c
     * @note[short] MacOS (Intel): 0x48fbe0
     * @note[short] Windows: 0x8ef50
     * @note[short] iOS: 0x8b738
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5b9a0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] Windows: 0x5bb00
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f90b8
     * @note[short] MacOS (Intel): 0x4907a0
     * @note[short] Windows: 0x90730
     * @note[short] iOS: 0x8c008
     * @note[short] Android
     */
    virtual bool allowTextInput(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f6870
     * @note[short] MacOS (Intel): 0x48dc60
     * @note[short] Windows: 0x8dc30
     * @note[short] iOS: 0x8a4bc
     * @note[short] Android
     */
    virtual void registerAccountFinished();

    /**
     * @note[short] Windows: 0x8de70
     * @note[short] iOS: 0x8d1f4
     * @note[short] Android
     */
    virtual void registerAccountFailed(AccountError errorType);

    /**
     * @note[short] MacOS (ARM): 0x3f65b8
     * @note[short] MacOS (Intel): 0x48d9c0
     * @note[short] iOS: 0x8a20c
     * @note[short] Android
     */
    cocos2d::extension::CCScale9Sprite* createTextBackground(cocos2d::CCPoint position, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3f6770
     * @note[short] MacOS (Intel): 0x48db70
     * @note[short] Windows: 0x8db00
     * @note[short] iOS: 0x8a3c0
     * @note[short] Android
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint position, cocos2d::CCSize size, std::string text, int tag);

    /**
     * @note[short] MacOS (ARM): 0x3f667c
     * @note[short] MacOS (Intel): 0x48da80
     * @note[short] Windows: 0x8d9f0
     * @note[short] iOS: 0x8a2d0
     * @note[short] Android
     */
    cocos2d::CCLabelBMFont* createTextLabel(cocos2d::CCPoint position, std::string text, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3f72c4
     * @note[short] MacOS (Intel): 0x48e780
     * @note[short] Windows: 0x8ee30
     * @note[short] iOS: 0x8aaf4
     * @note[short] Android
     */
    void disableNodes();

    /**
     * @note[short] MacOS (ARM): 0x3f6cf4
     * @note[short] MacOS (Intel): 0x48e200
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3f5ecc
     * @note[short] MacOS (Intel): 0x48d180
     * @note[short] Windows: 0x8edc0
     * @note[short] iOS: 0x89da4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4b2a00
     * @note[short] iOS: 0x89de8
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f6fe4
     * @note[short] Windows: 0x8e120
     * @note[short] Android
     */
    void resetLabel(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3f6e98
     * @note[short] MacOS (Intel): 0x48e3a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8d374
     * @note[short] Android
     */
    void resetLabels();

    /**
     * @note[short] MacOS (ARM): 0x3f82c0
     * @note[short] MacOS (Intel): 0x48f8c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8b580
     * @note[short] Android
     */
    void showLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3f853c
     * @note[short] MacOS (Intel): 0x48fb00
     * @note[short] Windows: 0x8eea0
     * @note[short] iOS: 0x8b648
     * @note[short] Android
     */
    void toggleUI(bool enable);

    /**
     * @note[short] Windows: 0x8deb0
     * @note[short] Android
     */
    void updateLabel(AccountError type);

    /**
     * @note[short] Android
     */
    TodoReturn updatePasswordInfo(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x3f8200
     * @note[short] MacOS (Intel): 0x48f730
     * @note[short] Windows: 0x90740
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool validEmail(std::string email);

    /**
     * @note[short] MacOS (ARM): 0x3f800c
     * @note[short] MacOS (Intel): 0x48f510
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool validPassword(std::string password);

    /**
     * @note[short] MacOS (ARM): 0x3f800c
     * @note[short] MacOS (Intel): 0x48f510
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool validUser(std::string username);
    CCTextInputNode* m_usernameField;
    CCTextInputNode* m_passwordField;
    CCTextInputNode* m_confirmPasswordField;
    CCTextInputNode* m_emailField;
    CCTextInputNode* m_verifyEmailField;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    cocos2d::CCLabelBMFont* m_passwordLabel;
    cocos2d::CCLabelBMFont* m_confirmPasswordLabel;
    cocos2d::CCLabelBMFont* m_emailLabel;
    cocos2d::CCLabelBMFont* m_verifyEmailLabel;
    LoadingCircle* m_loadingCircle;
    bool m_lockInput;
};
