#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class RateLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "RateLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateLevelLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RateLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x88194
     * @note[short] Android: Rebinded
     */
     ~RateLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36a690
     * @note[short] Android
     */
    static RateLevelLayer* create(int levelID);

    /**
     * @note[short] Windows: 0x55a5f0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4e3998
     * @note[short] MacOS (Intel): 0x593c90
     * @note[short] Windows: 0x559ef0
     * @note[short] iOS: 0x66d1c
     * @note[short] Android
     */
    bool init(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4e4150
     * @note[short] MacOS (Intel): 0x594430
     * @note[short] iOS: 0x671a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e41ac
     * @note[short] MacOS (Intel): 0x594480
     * @note[short] Windows: 0x55a560
     * @note[short] iOS: 0x671fc
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e4034
     * @note[short] MacOS (Intel): 0x594350
     * @note[short] Windows: 0x45c850
     * @note[short] iOS: 0x670ac
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_difficulties;
    int m_levelID;
    int m_levelRate;
    RateLevelDelegate* m_delegate;
};
