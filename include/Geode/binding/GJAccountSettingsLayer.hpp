#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/map.hpp>

class GJAccountSettingsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJAccountSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJAccountSettingsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJAccountSettingsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~GJAccountSettingsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJAccountSettingsLayer* create(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x232154
     * @note[short] MacOS (Intel): 0x28dbe0
     * @note[short] Windows: 0x39c830
     * @note[short] iOS: 0x373838
     * @note[short] Android
     */
    virtual void keyBackClicked();

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
     * @note[short] MacOS (ARM): 0x231378
     * @note[short] MacOS (Intel): 0x28cc60
     * @note[short] Windows: 0x189590
     * @note[short] iOS: 0x372fa4
     * @note[short] Android
     */
    void closeAccInputNodes(cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (ARM): 0x230548
     * @note[short] MacOS (Intel): 0x28bcd0
     * @note[short] Windows: 0x39bcd0
     * @note[short] iOS: 0x2cfafc
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, float width, float scale);

    /**
     * @note[short] MacOS (Intel): 0x702570
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x383ac
     * @note[short] Android
     */
    bool init(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x2309d4
     * @note[short] MacOS (Intel): 0x28c130
     * @note[short] Windows: 0x39c300
     * @note[short] iOS: 0x372a80
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCommentSetting(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFriendRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMessageSetting(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSocialLinks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x28c170
     * @note[short] Windows: 0x39c340
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2319e4
     * @note[short] MacOS (Intel): 0x28d410
     * @note[short] Windows: 0x39c530
     * @note[short] iOS: 0x373440
     * @note[short] Android
     */
    void updateScoreValues();
    int m_accountID;
    int m_messageStatus;
    int m_friendStatus;
    int m_commentHistoryStatus;
    cocos2d::CCArray* m_inputs;
    std::map<int, std::string> m_links;
    cocos2d::CCArray* m_messageSettings;
    cocos2d::CCArray* m_friendRequestSettings;
    cocos2d::CCArray* m_commentSettings;
};
