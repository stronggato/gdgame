#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/OnlineListDelegate.hpp>

class TopArtistsLayer : public FLAlertLayer, public OnlineListDelegate {
public:
    static constexpr auto CLASS_NAME = "TopArtistsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TopArtistsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TopArtistsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x52bb0
     * @note[short] Android: Rebinded
     */
     ~TopArtistsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TopArtistsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x28f328
     * @note[short] MacOS (Intel): 0x2fae10
     * @note[short] Windows: 0x66a1c0
     * @note[short] iOS: 0x237900
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x28fc50
     * @note[short] MacOS (Intel): 0x2fb7b0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x238148
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x28fbd4
     * @note[short] MacOS (Intel): 0x2fb740
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x2380cc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9ed50
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x28fc90
     * @note[short] MacOS (Intel): 0x2fb800
     * @note[short] Windows: 0x66a990
     * @note[short] iOS: 0x238180
     * @note[short] Android
     */
    virtual void loadListFinished(cocos2d::CCArray* objects, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x28fd54
     * @note[short] MacOS (Intel): 0x2fb8c0
     * @note[short] Windows: 0x66aa10
     * @note[short] iOS: 0x2381e4
     * @note[short] Android
     */
    virtual void loadListFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x28fd7c
     * @note[short] MacOS (Intel): 0x2fb900
     * @note[short] Windows: 0x66ab70
     * @note[short] iOS: 0x23820c
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual TodoReturn ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x28fc88
     * @note[short] MacOS (Intel): 0x2fb7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2903f0
     * @note[short] MacOS (Intel): 0x2fbf00
     * @note[short] Windows: 0x66ad70
     * @note[short] iOS: 0x238548
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x28fa54
     * @note[short] MacOS (Intel): 0x2fb590
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x237f4c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x28fa9c
     * @note[short] MacOS (Intel): 0x2fb5e0
     * @note[short] iOS: 0x237f94
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x28fa90
     * @note[short] MacOS (Intel): 0x2fb5c0
     * @note[short] iOS: 0x237f88
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x28faa8
     * @note[short] MacOS (Intel): 0x2fb600
     * @note[short] iOS: 0x237fa0
     * @note[short] Android
     */
    void setupLeaderboard(cocos2d::CCArray* artists);

    /**
     * @note[short] MacOS (ARM): 0x290368
     * @note[short] MacOS (Intel): 0x2fbe60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2384c0
     * @note[short] Android
     */
    void updateLevelsLabel();
    cocos2d::CCArray* m_topArtists;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    void* m_unkPtr;
    cocos2d::CCLabelBMFont* m_pageInfoLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_unkSize4;
    int m_page;
};
