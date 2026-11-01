#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class EditorSoundsSettingsPopup : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "EditorSoundsSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundsSettingsPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a280
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundsSettingsPopup();

    /**
     * @note[short] Android
     */
    static EditorSoundsSettingsPopup* create(EditorSoundsLayer* p0);

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x3d2670
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    bool init(EditorSoundsLayer* p0);

    /**
     * @note[short] Android
     */
    void onClearAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDownloadAll(cocos2d::CCObject* sender);
};
