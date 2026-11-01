#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ShardsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShardsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShardsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x88194
     * @note[short] Android: Rebinded
     */
     ~ShardsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43ef14
     * @note[short] Android
     */
    static ShardsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x422fd0
     * @note[short] MacOS (Intel): 0x4bf9f0
     * @note[short] Windows: 0x626be0
     * @note[short] iOS: 0x446068
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x424cbc
     * @note[short] MacOS (Intel): 0x4c18e0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x447a68
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9ed50
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* alert, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x424968
     * @note[short] MacOS (Intel): 0x4c15a0
     * @note[short] Windows: 0x629c00
     * @note[short] iOS: 0x447730
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x237a68
     * @note[short] MacOS (Intel): 0x4c1500
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x3778e8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4248f0
     * @note[short] MacOS (Intel): 0x4c1530
     * @note[short] Windows: 0x629b80
     * @note[short] iOS: 0x4476b8
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x424928
     * @note[short] MacOS (Intel): 0x4c1560
     * @note[short] iOS: 0x4476f0
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
    cocos2d::CCDictionary* m_pages;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    cocos2d::CCSprite* m_tierSprite;
    int m_page;
};
