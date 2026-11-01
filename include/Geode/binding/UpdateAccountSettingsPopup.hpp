#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/GJAccountSettingsDelegate.hpp>

class UpdateAccountSettingsPopup : public FLAlertLayer, public GJAccountSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "UpdateAccountSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UpdateAccountSettingsPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UpdateAccountSettingsPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~UpdateAccountSettingsPopup();

    /**
     * @note[short] MacOS (Intel): 0x651c50
     * @note[short] Android
     */
    static UpdateAccountSettingsPopup* create(GJAccountSettingsLayer* p0, int p1, int p2, int p3, int p4, int p5, std::string p6, std::string p7, std::string p8, std::string p9, std::string p10, std::string p11, std::string p12);

    /**
     * @note[short] MacOS (ARM): 0x233f18
     * @note[short] MacOS (Intel): 0x28fe20
     * @note[short] Windows: 0x39e210
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (Intel): 0x28fc10
     * @note[short] Windows: 0x39dfe0
     * @note[short] Android
     */
    virtual void updateSettingsFinished();

    /**
     * @note[short] MacOS (ARM): 0x233e2c
     * @note[short] MacOS (Intel): 0x28fd30
     * @note[short] Windows: 0x39e0d0
     * @note[short] iOS: 0x374d00
     * @note[short] Android
     */
    virtual void updateSettingsFailed();

    /**
     * @note[short] MacOS (ARM): 0x414a00
     * @note[short] Windows: 0x299b90
     * @note[short] iOS: 0x1d1b0c
     * @note[short] Android
     */
    bool init(GJAccountSettingsLayer* p0, int p1, int p2, int p3, int p4, int p5, std::string p6, std::string p7, std::string p8, std::string p9, std::string p10, std::string p11, std::string p12);

    /**
     * @note[short] MacOS (ARM): 0x233c7c
     * @note[short] MacOS (Intel): 0x28fb80
     * @note[short] Windows: 0x39e190
     * @note[short] iOS: 0x374b84
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    bool m_updateSuccess;
    GJAccountSettingsLayer* m_settingsLayer;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
};
