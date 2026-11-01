#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class PagedListPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PagedListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PagedListPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xc1c60
     * @note[short] Android: Rebinded
     */
    virtual  ~PagedListPopup();

    /**
     * @note[short] Windows: 0xc2be0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xc2c50
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xc2cc0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xc2d10
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xc2bc0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xc2b30
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] Windows: 0xc2830
     * @note[short] Android
     */
    virtual TodoReturn clearPageContent();

    /**
     * @note[short] Windows: 0x99df0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn clearStatus();

    /**
     * @note[short] Android
     */
    TodoReturn createScrollArea(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn createScrollView(float p0, float p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Android
     */
    TodoReturn fadeLoading();

    /**
     * @note[short] Android
     */
    TodoReturn initFrame(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn initPaged(char const* p0, std::string const& p1, float p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn loadPage(int p0);

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
    TodoReturn retryPendingPage();

    /**
     * @note[short] Android
     */
    TodoReturn showLoading();

    /**
     * @note[short] Android
     */
    TodoReturn showStatus(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn updatePageUI(int p0, int p1, int p2);
};
