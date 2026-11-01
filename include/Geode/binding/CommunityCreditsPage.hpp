#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class CommunityCreditsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CommunityCreditsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommunityCreditsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CommunityCreditsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x88194
     * @note[short] Android: Rebinded
     */
     ~CommunityCreditsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43ef14
     * @note[short] Android
     */
    static CommunityCreditsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x29caf0
     * @note[short] MacOS (Intel): 0x309880
     * @note[short] Windows: 0x12bac0
     * @note[short] iOS: 0x233588
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x29edf8
     * @note[short] MacOS (Intel): 0x30bde0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x235b5c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x29ebf0
     * @note[short] MacOS (Intel): 0x30bbe0
     * @note[short] Windows: 0x12dd10
     * @note[short] iOS: 0x235968
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
     * @note[short] MacOS (ARM): 0x29eadc
     * @note[short] MacOS (Intel): 0x30bad0
     * @note[short] Windows: 0x60b150
     * @note[short] iOS: 0x23585c
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x29ea60
     * @note[short] MacOS (Intel): 0x30ba60
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x2357e0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29ea9c
     * @note[short] MacOS (Intel): 0x30ba90
     * @note[short] iOS: 0x23581c
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
    cocos2d::CCDictionary* m_pageObjects;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    int m_page;
};
