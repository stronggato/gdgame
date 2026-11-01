#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>

class RateStarsLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateStarsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateStarsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x55a650
     * @note[short] Android: Rebinded
     */
    virtual  ~RateStarsLayer();

    /**
     * @note[short] Windows: 0xea980
     * @note[short] iOS: 0x2e1450
     * @note[short] Android
     */
    static RateStarsLayer* create(int levelID, bool platformer, bool moderator);

    /**
     * @note[short] Windows: 0x55b5b0
     * @note[short] iOS: 0x88efc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (Intel): 0x277b70
     * @note[short] Windows: 0x55b3b0
     * @note[short] iOS: 0x88d5c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x21dad8
     * @note[short] MacOS (Intel): 0x277c60
     * @note[short] Windows: 0x55b430
     * @note[short] iOS: 0x88de8
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] Windows: 0x55b4f0
     * @note[short] iOS: 0x88e7c
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int stars, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (ARM): 0x21cb80
     * @note[short] MacOS (Intel): 0x276d10
     * @note[short] Windows: 0x55a790
     * @note[short] iOS: 0x88400
     * @note[short] Android
     */
    bool init(int levelID, bool platformer, bool moderator);

    /**
     * @note[short] MacOS (ARM): 0x21d808
     * @note[short] MacOS (Intel): 0x2779e0
     * @note[short] iOS: 0x88bd8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21d7ac
     * @note[short] MacOS (Intel): 0x277990
     * @note[short] Windows: 0x55af70
     * @note[short] iOS: 0x88bc0
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45f8c0
     * @note[short] MacOS (Intel): 0x277b20
     * @note[short] iOS: 0x88c34
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21d794
     * @note[short] MacOS (Intel): 0x277960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    bool m_uploadFinished;
    bool m_moderator;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_buttons;
    int m_levelID;
    int m_starsRate;
    bool m_coinsToggled;
    cocos2d::CCSprite* m_coinSprite;
    UploadActionPopup* m_popup;
    GJDifficultySprite* m_difficultySprite;
    int m_featureState;
    RateLevelDelegate* m_delegate;
};
