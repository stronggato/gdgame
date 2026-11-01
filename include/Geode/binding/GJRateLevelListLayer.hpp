#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJRateLevelListLayer : public SetupTriggerPopup, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJRateLevelListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRateLevelListLayer, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static GJRateLevelListLayer* create(GJLevelList* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();

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
    virtual void valueDidChange(int p0, float p1);

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
    TodoReturn createStatPillar(int p0, int p1, int p2, cocos2d::ccColor3B p3, cocos2d::ccColor3B p4, cocos2d::CCPoint p5, std::string p6);

    /**
     * @note[short] Android
     */
    TodoReturn impliedStarsForLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    bool init(GJLevelList* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn starSumForBottom(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateStarSumLabel(int p0);
};
