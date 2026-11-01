#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/LevelRateInfoDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJRateLevelLayer : public SetupTriggerPopup, public UploadPopupDelegate, public UploadActionDelegate, public LevelRateInfoDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJRateLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRateLevelLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x245ea8
     * @note[short] Android: Out of line
     */
     GJRateLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x22b27c
     * @note[short] MacOS (Intel): 0x42b840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x162d20
     * @note[short] Android: Rebinded
     */
     ~GJRateLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x2421f8
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJRateLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] iOS: 0x245e84
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4623f0
     * @note[short] MacOS (Intel): 0x506820
     * @note[short] Windows: 0x3978d0
     * @note[short] iOS: 0x245e80
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x460a98
     * @note[short] MacOS (Intel): 0x504fc0
     * @note[short] Windows: 0x417270
     * @note[short] iOS: 0x244a64
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x506580
     * @note[short] Windows: 0x418ae0
     * @note[short] iOS: 0x245ca8
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x4621d8
     * @note[short] MacOS (Intel): 0x506690
     * @note[short] Windows: 0x418b70
     * @note[short] iOS: 0x245d40
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x462350
     * @note[short] MacOS (Intel): 0x506780
     * @note[short] Windows: 0x418c40
     * @note[short] iOS: 0x245de0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x461f54
     * @note[short] MacOS (Intel): 0x506440
     * @note[short] Windows: 0x418a20
     * @note[short] iOS: 0x245b8c
     * @note[short] Android
     */
    virtual void rateInfoFinished(int id, std::string info);

    /**
     * @note[short] MacOS (ARM): 0x462020
     * @note[short] MacOS (Intel): 0x506510
     * @note[short] Windows: 0x418ab0
     * @note[short] iOS: 0x245c48
     * @note[short] Android
     */
    virtual void rateInfoFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x460c64
     * @note[short] MacOS (Intel): 0x5051a0
     * @note[short] Windows: 0x417500
     * @note[short] iOS: 0x244c04
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x461c1c
     * @note[short] MacOS (Intel): 0x506130
     * @note[short] Windows: 0x418300
     * @note[short] iOS: 0x245858
     * @note[short] Android
     */
    void createStatPillar(int width, int height, int count, cocos2d::ccColor3B innerColor, cocos2d::ccColor3B outerColor, cocos2d::CCPoint position, std::string text);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int stars, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (Intel): 0x508a10
     * @note[short] Windows: 0x5a6a0
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x460964
     * @note[short] MacOS (Intel): 0x504e60
     * @note[short] Windows: 0x4176d0
     * @note[short] iOS: 0x244940
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4609b4
     * @note[short] MacOS (Intel): 0x504ec0
     * @note[short] iOS: 0x244990
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x504bf0
     * @note[short] Windows: 0x417660
     * @note[short] iOS: 0x2446bc
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x460d4c
     * @note[short] MacOS (Intel): 0x5052b0
     * @note[short] Windows: 0x417730
     * @note[short] iOS: 0x244cdc
     * @note[short] Android
     */
    void setupRateInfo(std::string info);
    GJGameLevel* m_level;
    bool m_uploadFinished;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_starButtons;
    int m_stars;
    bool m_coinsToggled;
    cocos2d::CCSprite* m_coinSprite;
    UploadActionPopup* m_uploadPopup;
    GJDifficultySprite* m_difficultySprite;
    GJFeatureState m_featureState;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCPoint m_center;
};
