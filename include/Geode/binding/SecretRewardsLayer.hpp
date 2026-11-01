#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/binding/BoomScrollLayerDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class SecretRewardsLayer : public cocos2d::CCLayer, public DialogDelegate, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretRewardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretRewardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15b45c
     * @note[short] Android: Out of line
     */
     SecretRewardsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~SecretRewardsLayer();

    /**
     * @note[short] MacOS (ARM): 0x61b93c
     * @note[short] MacOS (Intel): 0x70acd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10df88
     * @note[short] Android
     */
    static SecretRewardsLayer* create(bool fromShop);

    /**
     * @note[short] MacOS (Intel): 0x70ac90
     * @note[short] Windows: 0x564190
     * @note[short] iOS: 0x10df3c
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x624abc
     * @note[short] MacOS (Intel): 0x715190
     * @note[short] Windows: 0x569ba0
     * @note[short] iOS: 0x387974
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x6249f0
     * @note[short] MacOS (Intel): 0x7150c0
     * @note[short] Windows: 0x569b90
     * @note[short] iOS: 0x387960
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6247e0
     * @note[short] MacOS (Intel): 0x714ed0
     * @note[short] Windows: 0x568600
     * @note[short] iOS: 0x3877cc
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x61e2bc
     * @note[short] MacOS (Intel): 0x70d790
     * @note[short] Windows: 0x566a80
     * @note[short] iOS: 0x383028
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x61eeac
     * @note[short] MacOS (Intel): 0x70e380
     * @note[short] Windows: 0x566fc0
     * @note[short] iOS: 0x3837dc
     * @note[short] Android
     */
    void createSecondaryLayer(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x624944
     * @note[short] MacOS (Intel): 0x715020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3878c0
     * @note[short] Android
     */
    void fadeInMusic();

    /**
     * @note[short] MacOS (ARM): 0x6249c4
     * @note[short] MacOS (Intel): 0x715090
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x387938
     * @note[short] Android
     */
    void fadeInOutMusic();

    /**
     * @note[short] MacOS (ARM): 0x61f2e0
     * @note[short] MacOS (Intel): 0x70e800
     * @note[short] Windows: 0x567420
     * @note[short] iOS: 0x383b84
     * @note[short] Android
     */
    cocos2d::CCArray* generateChestItems(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x61e484
     * @note[short] MacOS (Intel): 0x70d960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getPageColor(int page);

    /**
     * @note[short] MacOS (ARM): 0x61e268
     * @note[short] MacOS (Intel): 0x70d750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x382fd4
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x61ba28
     * @note[short] MacOS (Intel): 0x70ae00
     * @note[short] Windows: 0x5642f0
     * @note[short] iOS: 0x380e30
     * @note[short] Android
     */
    bool init(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x61ed8c
     * @note[short] MacOS (Intel): 0x70e230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3836bc
     * @note[short] Android
     */
    void moveToMainLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61e8b4
     * @note[short] MacOS (Intel): 0x70ddb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3834a0
     * @note[short] Android
     */
    void moveToSecondaryLayer(int page);

    /**
     * @note[short] MacOS (ARM): 0x61d8f0
     * @note[short] MacOS (Intel): 0x70ce50
     * @note[short] Windows: 0x5699b0
     * @note[short] iOS: 0x382824
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61d950
     * @note[short] MacOS (Intel): 0x70ceb0
     * @note[short] iOS: 0x382890
     * @note[short] Android
     */
    void onChestType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5f40b8
     * @note[short] MacOS (Intel): 0x706090
     * @note[short] Windows: 0x5690d0
     * @note[short] iOS: 0x382b70
     * @note[short] Android
     */
    void onGoldChest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61fdfc
     * @note[short] MacOS (Intel): 0x70f580
     * @note[short] Windows: 0x289360
     * @note[short] iOS: 0x3842ac
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4fc174
     * @note[short] MacOS (Intel): 0x70d590
     * @note[short] Windows: 0x5683e0
     * @note[short] iOS: 0x382e80
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61e4c4
     * @note[short] MacOS (Intel): 0x70d9b0
     * @note[short] Windows: 0x5687f0
     * @note[short] iOS: 0x3831f0
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61e1dc
     * @note[short] MacOS (Intel): 0x70d6e0
     * @note[short] iOS: 0x382f7c
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x620198
     * @note[short] MacOS (Intel): 0x70f8e0
     * @note[short] Windows: 0x569be0
     * @note[short] Android
     */
    void showDialog01();

    /**
     * @note[short] MacOS (ARM): 0x621974
     * @note[short] MacOS (Intel): 0x7115f0
     * @note[short] Android
     */
    void showDialog03();

    /**
     * @note[short] MacOS (ARM): 0x623c7c
     * @note[short] MacOS (Intel): 0x714130
     * @note[short] iOS: 0x386fb0
     * @note[short] Android
     */
    void showDialogDiamond();

    /**
     * @note[short] MacOS (ARM): 0x622b10
     * @note[short] MacOS (Intel): 0x712b90
     * @note[short] Windows: 0x56c780
     * @note[short] iOS: 0x38635c
     * @note[short] Android
     */
    void showDialogMechanic();

    /**
     * @note[short] MacOS (ARM): 0x61e9b0
     * @note[short] MacOS (Intel): 0x70dec0
     * @note[short] Android
     */
    void showLockedChest();

    /**
     * @note[short] MacOS (ARM): 0x624770
     * @note[short] MacOS (Intel): 0x714e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38775c
     * @note[short] Android
     */
    void showShop(int shop);

    /**
     * @note[short] MacOS (ARM): 0x61d9a4
     * @note[short] MacOS (Intel): 0x70cef0
     * @note[short] Windows: 0x568c10
     * @note[short] iOS: 0x3828e4
     * @note[short] Android
     */
    void switchToOpenedState(CCMenuItemSpriteExtra* button);

    /**
     * @note[short] MacOS (ARM): 0x61ec60
     * @note[short] MacOS (Intel): 0x70e100
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x38359c
     * @note[short] Android
     */
    void updateBackButton();

    /**
     * @note[short] MacOS (ARM): 0x61dfbc
     * @note[short] MacOS (Intel): 0x70d4d0
     * @note[short] iOS: 0x382dbc
     * @note[short] Android
     */
    void updateUnlockedGoldLabel();

    /**
     * @note[short] MacOS (ARM): 0x61da84
     * @note[short] MacOS (Intel): 0x70cfb0
     * @note[short] Windows: 0x568cf0
     * @note[short] iOS: 0x3829c4
     * @note[short] Android
     */
    void updateUnlockedLabel();
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCLayer* m_secondaryLayer;
    cocos2d::CCLabelBMFont* m_chestLabel;
    cocos2d::CCLabelBMFont* m_chestCounter;
    cocos2d::CCSprite* m_goldPriceSprite;
    cocos2d::CCDictionary* m_chestCounters;
    cocos2d::CCLabelBMFont* m_keysLabel;
    cocos2d::CCLabelBMFont* m_goldKeysLabel;
    cocos2d::CCSprite* m_keySprite;
    cocos2d::CCSprite* m_goldKeySprite;
    void* m_unknown;
    CCMenuItemSpriteExtra* m_leftButton;
    CCMenuItemSpriteExtra* m_rightButton;
    cocos2d::CCSprite* m_backSprite;
    int m_unkSize4_1;
    int m_unkSize4_2;
    BoomScrollLayer* m_mainScrollLayer;
    BoomScrollLayer* m_secondaryScrollLayer;
    cocos2d::CCSprite* m_backgroundSprite;
    int m_scratchDialogIndex;
    int m_potborDialogIndex;
    int m_diamondDialogIndex;
    int m_mechanicDialogIndex;
    bool m_inMainLayer;
    GJRewardType m_rewardType;
    int m_lockedDialogIndex;
};
