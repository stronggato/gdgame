#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/vector.hpp>

class KeybindingsSettingsPopup : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "KeybindingsSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindingsSettingsPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3d6370
     * @note[short] Android: Rebinded
     */
    virtual  ~KeybindingsSettingsPopup();

    /**
     * @note[short] Android
     */
    static KeybindingsSettingsPopup* create(KeybindingsLayer* p0, std::vector<KeybindSettingsEntry> const& p1);

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x3d72c0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    bool init(KeybindingsLayer* p0, std::vector<KeybindSettingsEntry> const& p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEntry(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onExport(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onImport(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);
};
