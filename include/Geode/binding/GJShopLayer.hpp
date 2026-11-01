#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/GJPurchaseDelegate.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/binding/RewardedVideoDelegate.hpp>

class GJShopLayer : public cocos2d::CCLayer, public GJPurchaseDelegate, public DialogDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJShopLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJShopLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJShopLayer();

    /**
     * @note[short] MacOS (Intel): 0x30dd40
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~GJShopLayer();

    /**
     * @note[short] MacOS (ARM): 0x2a0c34
     * @note[short] MacOS (Intel): 0x30e010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c72c0
     * @note[short] Android
     */
    static GJShopLayer* create(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a0b30
     * @note[short] MacOS (Intel): 0x30ded0
     * @note[short] Windows: 0x3acd70
     * @note[short] iOS: 0x1c7274
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a28ec
     * @note[short] MacOS (Intel): 0x30fd90
     * @note[short] Windows: 0x3af0b0
     * @note[short] iOS: 0x1c8b4c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2a4ac0
     * @note[short] MacOS (Intel): 0x312410
     * @note[short] Windows: 0x3b2240
     * @note[short] iOS: 0x1ca4b4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2a4e70
     * @note[short] MacOS (Intel): 0x3127a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ca7ac
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2a4e78
     * @note[short] MacOS (Intel): 0x3127c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ca7b4
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2a4e80
     * @note[short] MacOS (Intel): 0x3127e0
     * @note[short] Windows: 0x83d80
     * @note[short] iOS: 0x1ca7bc
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2a3814
     * @note[short] MacOS (Intel): 0x310e30
     * @note[short] Windows: 0x3b0830
     * @note[short] iOS: 0x1c9678
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2a31a8
     * @note[short] MacOS (Intel): 0x310730
     * @note[short] Windows: 0x3afe10
     * @note[short] iOS: 0x1c9178
     * @note[short] Android
     */
    virtual void didPurchaseItem(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2a2bc4
     * @note[short] MacOS (Intel): 0x3100a0
     * @note[short] Windows: 0x3af4b0
     * @note[short] iOS: 0x1c8ce8
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x2a48dc
     * @note[short] MacOS (Intel): 0x312250
     * @note[short] Windows: 0x3b1f00
     * @note[short] iOS: 0x1ca2f4
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2a2afc
     * @note[short] MacOS (Intel): 0x30ffd0
     * @note[short] Android
     */
    void exitVideoAdItems();

    /**
     * @note[short] MacOS (ARM): 0x1ae98c
     * @note[short] MacOS (Intel): 0x30e120
     * @note[short] Windows: 0x3acef0
     * @note[short] iOS: 0x1c7398
     * @note[short] Android
     */
    bool init(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a2604
     * @note[short] MacOS (Intel): 0x30fac0
     * @note[short] Windows: 0x3b0600
     * @note[short] iOS: 0x1c88b4
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a258c
     * @note[short] MacOS (Intel): 0x30fa40
     * @note[short] iOS: 0x1c8888
     * @note[short] Android
     */
    void onCommunityCredits(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a2588
     * @note[short] MacOS (Intel): 0x30fa30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c8884
     * @note[short] Android
     */
    void onPlushies(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a27b8
     * @note[short] MacOS (Intel): 0x30fc80
     * @note[short] iOS: 0x1c8a3c
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a25b8
     * @note[short] MacOS (Intel): 0x30fa70
     * @note[short] Android
     */
    void onVideoAd(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2a3820
     * @note[short] MacOS (Intel): 0x310e60
     * @note[short] Windows: 0x3b0840
     * @note[short] iOS: 0x1c9684
     * @note[short] Android
     */
    void showReactMessage();

    /**
     * @note[short] MacOS (ARM): 0x2a2c20
     * @note[short] MacOS (Intel): 0x3100f0
     * @note[short] iOS: 0x1c8d44
     * @note[short] Android
     */
    void updateCurrencyCounter();
    bool m_closing;
    CCCounterLabel* m_currencyLabel;
    cocos2d::CCDictionary* m_shopItems;
    ShopType m_type;
    std::string m_sheetName;
    cocos2d::CCNode* m_unkNode1;
    cocos2d::CCNode* m_unkNode2;
    bool m_videoPlaying;
    bool m_unkBool;
    AnimatedShopKeeper* m_shopKeeper;
    int m_zolgurothDialogIndex;
    int m_affordDialogIndex;
};
