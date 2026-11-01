#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ParentalOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ParentalOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParentalOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ParentalOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x46b400
     * @note[short] Android: Rebinded
     */
     ~ParentalOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43ef14
     * @note[short] Android
     */
    static ParentalOptionsLayer* create();

    /**
     * @note[short] Windows: 0x4ce340
     * @note[short] iOS: 0x115b40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x799438
     * @note[short] Windows: 0x4d09a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    TodoReturn addMasterToggle(char const* p0, char const* p1, char const* p2, char const* p3);

    /**
     * @note[short] Windows: 0x46840
     * @note[short] Android
     */
    TodoReturn addToggle(char const* p0, char const* p1, int p2, char const* p3);

    /**
     * @note[short] Android
     */
    TodoReturn applyPrivacyPushEdge(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn applyToggleLock(cocos2d::CCArray* p0, bool p1);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x116f60
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
     * @note[short] MacOS (ARM): 0x6189b4
     * @note[short] MacOS (Intel): 0x707820
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
     * @note[short] MacOS (ARM): 0x7795c0
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
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x237f4c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLockToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMasterToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x779598
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);

    /**
     * @note[short] Android
     */
    TodoReturn updateToggleStates();
    int m_page;
    int m_toggleCount;
    int m_maxPage;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
};
