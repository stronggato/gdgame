#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>

class RateStarsModLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateStarsModLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateStarsModLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x55b610
     * @note[short] Android: Rebinded
     */
    virtual  ~RateStarsModLayer();

    /**
     * @note[short] Android
     */
    static RateStarsModLayer* create(int p0, bool p1);

    /**
     * @note[short] Windows: 0x55caf0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x55c8f0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0x55c970
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x55ca30
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getStarsButton(int p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);

    /**
     * @note[short] Android
     */
    bool init(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn selectDemon(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateDemonRow();

    /**
     * @note[short] Android
     */
    TodoReturn updateDSprite();
};
