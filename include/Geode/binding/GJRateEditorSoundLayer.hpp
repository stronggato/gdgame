#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJRateEditorSoundLayer : public SetupTriggerPopup, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJRateEditorSoundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRateEditorSoundLayer, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static GJRateEditorSoundLayer* create(GJEditorSoundConfig* p0);

    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    bool init(GJEditorSoundConfig* p0);

    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
};
