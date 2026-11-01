#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class AutoBackupOptionsPopup : public SetupTriggerPopup, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AutoBackupOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AutoBackupOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~AutoBackupOptionsPopup();

    /**
     * @note[short] Android
     */
    static AutoBackupOptionsPopup* create(AutoBackupOptionsDelegate* p0);

    /**
     * @note[short] Windows: 0xcd410
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0xcd3e0
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Windows: 0xce170
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    bool init(AutoBackupOptionsDelegate* p0);

    /**
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrune(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshStats();
};
