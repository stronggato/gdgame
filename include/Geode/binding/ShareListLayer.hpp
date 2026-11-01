#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ShareListLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareListLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShareListLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x88194
     * @note[short] Android: Rebinded
     */
     ~ShareListLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36a690
     * @note[short] Android
     */
    static ShareListLayer* create(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x79a024
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x230b18
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2dd570
     * @note[short] MacOS (Intel): 0x26c8b0
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x234990
     * @note[short] MacOS (Intel): 0x34e500
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x2311ac
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2de75c
     * @note[short] iOS: 0x2e3e9c
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNotifyFollowers(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNotifyFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2de644
     * @note[short] MacOS (Intel): 0x34e530
     * @note[short] Windows: 0x430130
     * @note[short] iOS: 0x2e3dac
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x779520
     * @note[short] Windows: 0x42fee0
     * @note[short] iOS: 0x2e3f34
     * @note[short] Android
     */
    void onUnlisted(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateNotifyToggles();

    /**
     * @note[short] Android
     */
    void updateUnlistedF();
    GJLevelList* m_list;
    CCMenuItemToggler* m_friendsOnlyToggler;
    cocos2d::CCLabelBMFont* m_friendsOnlyLabel;
    cocos2d::CCLabelBMFont* m_notifyLabel;
    cocos2d::CCSprite* m_notifySprite;
    CCMenuItemToggler* m_friendsToggler;
    CCMenuItemToggler* m_followersToggler;
    cocos2d::CCSprite* m_friendsSprite;
    cocos2d::CCSprite* m_followersSprite;
    cocos2d::CCLabelBMFont* m_friendsLabel;
    cocos2d::CCLabelBMFont* m_followersLabel;
};
