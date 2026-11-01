#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/LevelControlsDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class PlatformerControlsPopup : public SetupTriggerPopup, public UploadActionDelegate, public UploadPopupDelegate, public LevelControlsDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "PlatformerControlsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlatformerControlsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x44d180
     * @note[short] Android: Rebinded
     */
    virtual  ~PlatformerControlsPopup();

    /**
     * @note[short] Android
     */
    static PlatformerControlsPopup* create(GJGameLevel* p0, bool p1);

    /**
     * @note[short] Windows: 0x44e060
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Windows: 0x44eba0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44ebe0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0x44ed70
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x44efb0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Windows: 0x44e320
     * @note[short] Android
     */
    virtual void onLevelControlsRefreshed(int p0, int p1);

    /**
     * @note[short] Windows: 0x44ee60
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn commitCustomDraft();

    /**
     * @note[short] Android
     */
    TodoReturn ensureCustomDraft();

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, bool p1);

    /**
     * @note[short] Android
     */
    void onApplyCreator(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onController(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onKeyboard(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSource(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleUpload(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpload(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn presentClasses();

    /**
     * @note[short] Android
     */
    TodoReturn reapplyRuntime();

    /**
     * @note[short] Android
     */
    TodoReturn refreshApplyVisible();

    /**
     * @note[short] Android
     */
    TodoReturn refreshClassUI();

    /**
     * @note[short] Android
     */
    TodoReturn refreshModeUI();

    /**
     * @note[short] Android
     */
    TodoReturn refreshUploadColumn(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn sourceIsCustom();

    /**
     * @note[short] Android
     */
    TodoReturn syncSourceUI();

    /**
     * @note[short] Android
     */
    TodoReturn updateEditLabel();
};
