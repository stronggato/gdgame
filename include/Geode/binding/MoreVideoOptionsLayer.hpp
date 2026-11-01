#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class MoreVideoOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "MoreVideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreVideoOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MoreVideoOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~MoreVideoOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x26351c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MoreVideoOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x7752ac
     * @note[short] MacOS (Intel): 0x880230
     * @note[short] Windows: 0x4cb7a0
     * @note[short] iOS: 0x114614
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x7772d8
     * @note[short] MacOS (Intel): 0x882370
     * @note[short] Windows: 0x4ce1b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    void addToggle(char const* label, char const* key, char const* description);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x115954
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] Windows: Out of line
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
     * @note[short] MacOS (ARM): 0x777074
     * @note[short] MacOS (Intel): 0x882110
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x77704c
     * @note[short] MacOS (Intel): 0x8820f0
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
     * @note[short] MacOS (ARM): 0x777124
     * @note[short] MacOS (Intel): 0x6e6900
     * @note[short] Windows: 0x57b90
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onApplyFPS(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x775c44
     * @note[short] MacOS (Intel): 0x880c40
     * @note[short] Windows: 0xcbbf0
     * @note[short] iOS: 0x114dcc
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x77638c
     * @note[short] MacOS (Intel): 0x881430
     * @note[short] iOS: 0x1152b0
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x777024
     * @note[short] MacOS (Intel): 0x8820d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x77709c
     * @note[short] MacOS (Intel): 0x882130
     * @note[short] iOS: 0x1159dc
     * @note[short] Android
     */
    void updateFPSButtons();
    int m_page;
    int m_toggleCount;
    int m_pageCount;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCTextInputNode* m_fpsInput;
    cocos2d::CCArray* m_fpsNodes;
};
