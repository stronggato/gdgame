#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ShareLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShareLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x46b400
     * @note[short] Android: Rebinded
     */
     ~ShareLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c1874
     * @note[short] Android
     */
    static ShareLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x79a024
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x230b18
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x214bc8
     * @note[short] MacOS (Intel): 0x26db80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x311b4c
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int btnID, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (Intel): 0x26c8b0
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x214894
     * @note[short] MacOS (Intel): 0x26d8a0
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x3118c0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNotifyFollowers(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNotifyFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2148d0
     * @note[short] MacOS (Intel): 0x26d8d0
     * @note[short] Windows: 0x62c7a0
     * @note[short] iOS: 0x3118fc
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x214c90
     * @note[short] MacOS (Intel): 0x26dc50
     * @note[short] Windows: 0x62dc10
     * @note[short] iOS: 0x311c14
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupNotifyToggles(cocos2d::CCPoint p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x214148
     * @note[short] MacOS (Intel): 0x26d4d0
     * @note[short] iOS: 0x31159c
     * @note[short] Android
     */
    void setupStars();

    /**
     * @note[short] Android
     */
    TodoReturn updateNotifyToggles();
    GJGameLevel* m_level;
    int m_starsRequested;
    cocos2d::CCArray* m_starButtons;
    cocos2d::CCSprite* m_difficultySprite;
    cocos2d::CCLabelBMFont* m_notifyLabel;
    cocos2d::CCSprite* m_notifySprite;
    CCMenuItemToggler* m_friendsToggler;
    CCMenuItemToggler* m_followersToggler;
    cocos2d::CCSprite* m_friendsSprite;
    cocos2d::CCSprite* m_followersSprite;
    cocos2d::CCLabelBMFont* m_friendsLabel;
    cocos2d::CCLabelBMFont* m_followersLabel;
};
