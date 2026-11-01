#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class DeathMarkerSettingsPopup : public SetupTriggerPopup, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "DeathMarkerSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DeathMarkerSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~DeathMarkerSettingsPopup();

    /**
     * @note[short] Android
     */
    static DeathMarkerSettingsPopup* create(GJGameLevel* p0);

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
     * @note[short] Windows: 0x11c0d0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    void onClearMarkers(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFrequencySlider(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTimescaleSlider(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleAnimation(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleDisabled(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleLabels(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleLimited(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleLive(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleLocal(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSound(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateFrequencyLabel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateTimescaleLabel(int p0);
};
