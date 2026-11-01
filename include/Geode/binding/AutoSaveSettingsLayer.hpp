#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class AutoSaveSettingsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "AutoSaveSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AutoSaveSettingsLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x9ac10
     * @note[short] Android: Rebinded
     */
    virtual  ~AutoSaveSettingsLayer();

    /**
     * @note[short] Android
     */
    static AutoSaveSettingsLayer* create();

    /**
     * @note[short] Windows: 0x9ae30
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x9d3f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9c140
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x9be30
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getBackupCap();

    /**
     * @note[short] Android
     */
    TodoReturn getBackupDirectory();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomBackupDirectory();

    /**
     * @note[short] Android
     */
    void onAdvanced(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOpenBackupDir(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectBackupDir(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn openBackupDirectory();

    /**
     * @note[short] Android
     */
    void setBackupCap(int p0);

    /**
     * @note[short] Android
     */
    void setBackupDirectory(std::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateBackupDirLabel();
};
