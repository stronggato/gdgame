#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/GooglePlayDelegate.hpp>
#include <Geode/binding/GJDropDownLayerDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class MoreOptionsLayer : public FLAlertLayer, public GooglePlayDelegate, public GJDropDownLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MoreOptionsLayer();

    /**
     * @note[short] MacOS (Intel): 0x87a7d0
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~MoreOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x26351c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MoreOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x770150
     * @note[short] MacOS (Intel): 0x87ab70
     * @note[short] Windows: 0x110270
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x77330c
     * @note[short] MacOS (Intel): 0x87de40
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void googlePlaySignedIn();

    /**
     * @note[short] MacOS (ARM): 0x6478c0
     * @note[short] MacOS (Intel): 0x739d60
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x771560
     * @note[short] Android
     */
    void addToggle(char const* label, char const* key, char const* description);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x117014
     * @note[short] Android
     */
    void incrementCountForPage(int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* infoKey(int index);

    /**
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x7732b0
     * @note[short] MacOS (Intel): 0x87ddb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x772578
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x773288
     * @note[short] MacOS (Intel): 0x87dd90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* objectKey(int page);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x771aac
     * @note[short] MacOS (Intel): 0x87c530
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void offsetToNextPage();

    /**
     * @note[short] MacOS (ARM): 0x771ff0
     * @note[short] MacOS (Intel): 0x87ca90
     * @note[short] Windows: 0x6ffe0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x771d00
     * @note[short] MacOS (Intel): 0x87c7b0
     * @note[short] Android
     */
    void onFMODDebug(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x771e84
     * @note[short] MacOS (Intel): 0x87c900
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onGPSignIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x771ee0
     * @note[short] MacOS (Intel): 0x87c960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onGPSignOut(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x1170c0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x29eb50
     * @note[short] iOS: 0x302dbc
     * @note[short] Android
     */
    void onParental(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x771ca8
     * @note[short] MacOS (Intel): 0x87c750
     * @note[short] iOS: 0x1c15b4
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x77283c
     * @note[short] MacOS (Intel): 0x87d360
     * @note[short] iOS: 0x1152b0
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x773260
     * @note[short] MacOS (Intel): 0x87dd70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x771f58
     * @note[short] MacOS (Intel): 0x87c9e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGP();
    int m_page;
    int m_toggleCount;
    int m_pageCount;
    cocos2d::CCDictionary* m_variables;
    cocos2d::CCDictionary* m_objects;
    CCMenuItemSpriteExtra* m_leftBtn;
    CCMenuItemSpriteExtra* m_rightBtn;
    CCTextInputNode* m_offsetInput;
    CCMenuItemSpriteExtra* m_gpSignInBtn;
    CCMenuItemSpriteExtra* m_gpSignOutBtn;
    cocos2d::CCLabelBMFont* m_categoryLabel;
};
