#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class NewsPopup : public FLAlertLayer, public FLAlertLayerProtocol, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "NewsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NewsPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x49a800
     * @note[short] Android: Rebinded
     */
    virtual  ~NewsPopup();

    /**
     * @note[short] Android
     */
    static NewsPopup* create();

    /**
     * @note[short] Windows: 0x49a9f0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x49d430
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x49d4b0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x49d5b0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x49d650
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x49d3c0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] Windows: 0x49d1e0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x49d220
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] Windows: 0x49d240
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] Windows: 0x49d290
     * @note[short] Android
     */
    virtual TodoReturn newsImageDownloaded(std::string p0);

    /**
     * @note[short] Windows: 0x49d320
     * @note[short] Android
     */
    virtual TodoReturn newsImageFailed(std::string p0);

    /**
     * @note[short] Android
     */
    void onBlockClicked(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

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
    TodoReturn pageReferencesImage(int p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn prefetchPageImages(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn rebuildPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn refreshFromManager();
};
