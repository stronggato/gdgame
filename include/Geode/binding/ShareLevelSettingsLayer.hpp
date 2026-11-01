#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/NumberInputDelegate.hpp>

class ShareLevelSettingsLayer : public FLAlertLayer, public NumberInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareLevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x62c6e0
     * @note[short] Android: Rebinded
     */
    virtual  ~ShareLevelSettingsLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShareLevelSettingsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShareLevelSettingsLayer* create(GJGameLevel* p0, ShareLevelLayer* p1);

    /**
     * @note[short] Windows: 0x62fba0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1a9a08
     * @note[short] MacOS (Intel): 0x1f9c30
     * @note[short] Windows: 0x162770
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, ShareLevelLayer* p1);

    /**
     * @note[short] Windows: 0x62fb10
     * @note[short] iOS: 0x313440
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2168b0
     * @note[short] MacOS (Intel): 0x26fbe0
     * @note[short] Windows: 0x62f7f0
     * @note[short] iOS: 0x3134c8
     * @note[short] Android
     */
    void onUnlisted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x26fd90
     * @note[short] Android
     */
    void onUnlistedFriendsOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateSettingsState();
    cocos2d::CCLabelBMFont* m_passwordLabel;
    GJGameLevel* m_level;
    CCMenuItemToggler* m_friendsOnlyToggler;
    cocos2d::CCLabelBMFont* m_friendsOnlyLabel;
    ShareLevelLayer* m_shareLevelLayer;
};
