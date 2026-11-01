#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class SecretLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SecretLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer();

    /**
     * @note[short] MacOS (ARM): 0x61b6e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x380cd0
     * @note[short] Android: Rebinded
     */
     ~SecretLayer();

    /**
     * @note[short] MacOS (Intel): 0x6cf7e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd9cb0
     * @note[short] Android
     */
    static SecretLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x227078
     * @note[short] MacOS (Intel): 0x6cf6c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4616c4
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x5e6b64
     * @note[short] MacOS (Intel): 0x6cf8e0
     * @note[short] Windows: 0x56e740
     * @note[short] iOS: 0x4617d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5ea4e0
     * @note[short] MacOS (Intel): 0x6d3730
     * @note[short] Windows: 0x573d10
     * @note[short] iOS: 0x464744
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x5716c0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x571820
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x571820
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x5e9058
     * @note[short] MacOS (Intel): 0x6d21c0
     * @note[short] iOS: 0x46392c
     * @note[short] Android
     */
    std::string getBasicMessage();

    /**
     * @note[short] MacOS (ARM): 0x5e7738
     * @note[short] MacOS (Intel): 0x6d0500
     * @note[short] iOS: 0x46223c
     * @note[short] Android
     */
    std::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x5e9a7c
     * @note[short] MacOS (Intel): 0x6d2b60
     * @note[short] Windows: 0x571e30
     * @note[short] iOS: 0x463c5c
     * @note[short] Android
     */
    std::string getThreadMessage();

    /**
     * @note[short] MacOS (ARM): 0x5e76ac
     * @note[short] MacOS (Intel): 0x6d0480
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x5e7a28
     * @note[short] MacOS (Intel): 0x6d0820
     * @note[short] Windows: 0x573c70
     * @note[short] iOS: 0x462470
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5e7a94
     * @note[short] MacOS (Intel): 0x6d0890
     * @note[short] iOS: 0x4624dc
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] MacOS (ARM): 0x5e99ac
     * @note[short] MacOS (Intel): 0x6d2a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x463ba0
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] MacOS (ARM): 0x5e76e4
     * @note[short] MacOS (Intel): 0x6d04b0
     * @note[short] iOS: 0x4621ec
     * @note[short] Android
     */
    void updateMessageLabel(std::string text);

    /**
     * @note[short] Android
     */
    void updateSearchLabel(char const* text);
    int m_basicMessageIndex;
    int m_selectedThread;
    int m_threadMessageIndex;
    int m_basicMessageCount;
    int m_doomedIndex;
    CCTextInputNode* m_searchInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCDictionary* m_messageThreads;
    int m_threadTag;
};
