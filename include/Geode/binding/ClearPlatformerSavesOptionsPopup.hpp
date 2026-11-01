#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class ClearPlatformerSavesOptionsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "ClearPlatformerSavesOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ClearPlatformerSavesOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~ClearPlatformerSavesOptionsPopup();

    /**
     * @note[short] Android
     */
    static ClearPlatformerSavesOptionsPopup* create();

    /**
     * @note[short] Windows: 0xa43a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    void onBackupToggle(cocos2d::CCObject* sender);
};
