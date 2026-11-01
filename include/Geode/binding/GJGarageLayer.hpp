#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GameRateDelegate.hpp>
#include <Geode/binding/ListButtonBarDelegate.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/binding/CharacterColorDelegate.hpp>
#include <Geode/binding/RewardedVideoDelegate.hpp>
#include <Geode/mapping/map.hpp>

class GJGarageLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public GameRateDelegate, public ListButtonBarDelegate, public DialogDelegate, public CharacterColorDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJGarageLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGarageLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJGarageLayer();

    /**
     * @note[short] MacOS (ARM): 0x60dd90
     * @note[short] MacOS (Intel): 0x351db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398fec
     * @note[short] Android: Rebinded
     */
     ~GJGarageLayer();

    /**
     * @note[short] MacOS (ARM): 0x2e7a7c
     * @note[short] MacOS (Intel): 0x358810
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static std::string achievementForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e78e8
     * @note[short] MacOS (Intel): 0x358690
     * @note[short] iOS: 0x3a1500
     * @note[short] Android
     */
    static std::string descriptionForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e16e8
     * @note[short] MacOS (Intel): 0x351fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x158864
     * @note[short] Android: Out of line
     */
    static GJGarageLayer* node();

    /**
     * @note[short] MacOS (ARM): 0x2e16a4
     * @note[short] MacOS (Intel): 0x351f70
     * @note[short] Windows: 0x378bb0
     * @note[short] iOS: 0x39c4ac
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x2e775c
     * @note[short] MacOS (Intel): 0x358520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a1414
     * @note[short] Android
     */
    static std::string titleForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e17e8
     * @note[short] MacOS (Intel): 0x352120
     * @note[short] Windows: 0x378d70
     * @note[short] iOS: 0x39c564
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2e8000
     * @note[short] MacOS (Intel): 0x358dd0
     * @note[short] Windows: 0x37f110
     * @note[short] iOS: 0x3a19b4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2e4b9c
     * @note[short] MacOS (Intel): 0x3555e0
     * @note[short] Windows: 0x37aa50
     * @note[short] iOS: 0x39f118
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2e4d00
     * @note[short] MacOS (Intel): 0x355710
     * @note[short] Windows: 0x37ac50
     * @note[short] iOS: 0x39f248
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2e4ee0
     * @note[short] MacOS (Intel): 0x3558d0
     * @note[short] Windows: 0x163910
     * @note[short] iOS: 0x39f3b0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2e6fe0
     * @note[short] MacOS (Intel): 0x357ce0
     * @note[short] Windows: 0x1639d0
     * @note[short] Android
     */
    virtual void listButtonBarSwitchedPage(ListButtonBar* bar, int page);

    /**
     * @note[short] MacOS (ARM): 0x2e71ac
     * @note[short] MacOS (Intel): 0x357f20
     * @note[short] Windows: 0x37dbb0
     * @note[short] iOS: 0x3a0fd0
     * @note[short] Android
     */
    virtual void showUnlockPopup(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e7de4
     * @note[short] MacOS (Intel): 0x358b80
     * @note[short] Windows: 0x37e7d0
     * @note[short] iOS: 0x3a1824
     * @note[short] Android
     */
    virtual void updateRate();

    /**
     * @note[short] MacOS (ARM): 0x2e7bac
     * @note[short] MacOS (Intel): 0x358910
     * @note[short] Windows: 0x37e370
     * @note[short] iOS: 0x376d10
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2e7ca8
     * @note[short] MacOS (Intel): 0x358a20
     * @note[short] Windows: 0x37e590
     * @note[short] iOS: 0x3a16e8
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2e6efc
     * @note[short] MacOS (Intel): 0x357be0
     * @note[short] Windows: 0x37da00
     * @note[short] iOS: 0x3a0e48
     * @note[short] Android
     */
    virtual void playerColorChanged();

    /**
     * @note[short] MacOS (ARM): 0x2e4b8c
     * @note[short] MacOS (Intel): 0x3555c0
     * @note[short] Windows: 0x37aa40
     * @note[short] iOS: 0x39f108
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x2e622c
     * @note[short] MacOS (Intel): 0x356cb0
     * @note[short] Windows: 0x37c640
     * @note[short] iOS: 0x3a02d4
     * @note[short] Android
     */
    cocos2d::CCArray* getItems(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2e5ebc
     * @note[short] MacOS (Intel): 0x356930
     * @note[short] Windows: 0x37c700
     * @note[short] iOS: 0x3a008c
     * @note[short] Android
     */
    cocos2d::CCArray* getItems(int count, int page, IconType type, int current);

    /**
     * @note[short] MacOS (ARM): 0x2e6e64
     * @note[short] MacOS (Intel): 0x357b40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    std::string getLockFrame(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e4f94
     * @note[short] MacOS (Intel): 0x355960
     * @note[short] Windows: 0x37bcf0
     * @note[short] iOS: 0x39f41c
     * @note[short] Android
     */
    void onArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e43b0
     * @note[short] MacOS (Intel): 0x354dc0
     * @note[short] Windows: 0x37ef50
     * @note[short] iOS: 0x39edcc
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e45f4
     * @note[short] MacOS (Intel): 0x355020
     * @note[short] Windows: 0x37a840
     * @note[short] iOS: 0x39f00c
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e581c
     * @note[short] MacOS (Intel): 0x356240
     * @note[short] Windows: 0x37be00
     * @note[short] iOS: 0x39fb4c
     * @note[short] Android
     */
    void onNavigate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e459c
     * @note[short] MacOS (Intel): 0x354fc0
     * @note[short] iOS: 0x39efb4
     * @note[short] Android
     */
    void onPaint(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4804
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e62c4
     * @note[short] MacOS (Intel): 0x356d60
     * @note[short] iOS: 0x3a034c
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4f60
     * @note[short] MacOS (Intel): 0x355930
     * @note[short] iOS: 0x15b8f8
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4570
     * @note[short] MacOS (Intel): 0x354f90
     * @note[short] iOS: 0x39ef88
     * @note[short] Android
     */
    void onShards(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4510
     * @note[short] MacOS (Intel): 0x354f30
     * @note[short] iOS: 0x39ef28
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e6210
     * @note[short] MacOS (Intel): 0x356c90
     * @note[short] iOS: 0x3a02b8
     * @note[short] Android
     */
    void onSpecial(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e6930
     * @note[short] MacOS (Intel): 0x3575c0
     * @note[short] Windows: 0x37d7c0
     * @note[short] iOS: 0x3a09b0
     * @note[short] Android
     */
    void onToggleItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e6cc8
     * @note[short] MacOS (Intel): 0x3579a0
     * @note[short] Windows: 0x37ea30
     * @note[short] iOS: 0x3a0cac
     * @note[short] Android
     */
    void playRainbowEffect();

    /**
     * @note[short] MacOS (ARM): 0x2e7f74
     * @note[short] MacOS (Intel): 0x358d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playShadowEffect();

    /**
     * @note[short] MacOS (ARM): 0x2e50cc
     * @note[short] MacOS (Intel): 0x25e070
     * @note[short] Windows: 0x37be60
     * @note[short] iOS: 0x39f4e0
     * @note[short] Android
     */
    void selectTab(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2e38b0
     * @note[short] MacOS (Intel): 0x3542d0
     * @note[short] Windows: 0x37b030
     * @note[short] iOS: 0x39e348
     * @note[short] Android
     */
    void setupIconSelect();

    /**
     * @note[short] MacOS (ARM): 0x2e51f8
     * @note[short] MacOS (Intel): 0x355bf0
     * @note[short] Windows: 0x37bf20
     * @note[short] iOS: 0x39f5b8
     * @note[short] Android
     */
    void setupPage(int page, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2e5854
     * @note[short] MacOS (Intel): 0x356270
     * @note[short] Windows: 0x14b2c0
     * @note[short] iOS: 0x39fb84
     * @note[short] Android
     */
    void setupSpecialPage();

    /**
     * @note[short] MacOS (ARM): 0x2e7000
     * @note[short] MacOS (Intel): 0x357d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showUnlockPopupNew(int id, UnlockType type);

    /**
     * @note[short] MacOS (Intel): 0x357b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGlow();

    /**
     * @note[short] MacOS (ARM): 0x2e3234
     * @note[short] MacOS (Intel): 0x353cc0
     * @note[short] Windows: 0x37da30
     * @note[short] iOS: 0x39dd88
     * @note[short] Android
     */
    void updatePlayerColors();

    /**
     * @note[short] MacOS (ARM): 0x2e4cf8
     * @note[short] MacOS (Intel): 0x3556f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlayerName(char const* name);
    CCTextInputNode* m_usernameInput;
    SimplePlayer* m_playerObject;
    cocos2d::CCArray* m_tabButtons;
    cocos2d::CCArray* m_pageButtons;
    cocos2d::CCNode* m_unknown;
    cocos2d::CCSprite* m_supporter;
    bool m_hasClosed;
    IconType m_iconType;
    std::map<IconType, int> m_iconPages;
    cocos2d::CCSprite* m_cursor1;
    cocos2d::CCSprite* m_cursor2;
    CCMenuItemSpriteExtra* m_currentIcon;
    ListButtonBar* m_iconSelection;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_rightArrow;
    cocos2d::CCMenu* m_navDotMenu;
    int m_iconID;
    IconType m_selectedIconType;
    bool m_videoPlaying;
};
