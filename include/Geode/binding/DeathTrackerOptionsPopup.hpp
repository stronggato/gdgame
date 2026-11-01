#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class DeathTrackerOptionsPopup : public SetupTriggerPopup, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "DeathTrackerOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DeathTrackerOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~DeathTrackerOptionsPopup();

    /**
     * @note[short] Android
     */
    static DeathTrackerOptionsPopup* create(GJGameLevel* p0, DeathTrackerPopup* p1);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x99df0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11ed00
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, DeathTrackerPopup* p1);

    /**
     * @note[short] Android
     */
    void onClearData(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleAutoScroll(cocos2d::CCObject* sender);
};
