#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>

class CreatorSettingsPopup : public SetupTriggerPopup, public UploadActionDelegate, public UploadPopupDelegate, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "CreatorSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreatorSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x445950
     * @note[short] Android: Rebinded
     */
    virtual  ~CreatorSettingsPopup();

    /**
     * @note[short] Android
     */
    static CreatorSettingsPopup* create(GJGameLevel* p0, CreatorSettingsDelegate* p1);

    /**
     * @note[short] Windows: 0x3978d0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x445e10
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, std::string p1);

    /**
     * @note[short] Windows: 0x4460b0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0x446170
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x446250
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, CreatorSettingsDelegate* p1);

    /**
     * @note[short] Android
     */
    void onControls(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDescription(cocos2d::CCObject* sender);
};
