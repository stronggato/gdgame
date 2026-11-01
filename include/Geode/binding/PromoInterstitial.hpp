#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class PromoInterstitial : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PromoInterstitial";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PromoInterstitial, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static PromoInterstitial* create(bool fullVersion);

    /**
     * @note[short] MacOS (ARM): 0x260e98
     * @note[short] MacOS (Intel): 0x2c12e0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (Intel): 0x2c1510
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (Intel): 0x2c13e0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (Intel): 0x2c1490
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (Intel): 0x2c1140
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (Intel): 0x2c1110
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x260a58
     * @note[short] MacOS (Intel): 0x2c0e60
     * @note[short] Android
     */
    bool init(bool fullVersion);

    /**
     * @note[short] MacOS (ARM): 0x260e1c
     * @note[short] MacOS (Intel): 0x2c1260
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2c11a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x260aac
     * @note[short] MacOS (Intel): 0x2c0eb0
     * @note[short] Android
     */
    void setup();
    bool m_fullVersion;
    cocos2d::CCMenu* m_closeMenu;
    bool m_promoTouched;
    std::string m_marketLink;
    bool m_showAdBanner;
};
