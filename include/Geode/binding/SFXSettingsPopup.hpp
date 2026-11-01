#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>

class SFXSettingsPopup : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "SFXSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXSettingsPopup, GJOptionsLayer)

    /**
     * @note[short] Windows: 0x398080
     * @note[short] Android: Rebinded
     */
    virtual  ~SFXSettingsPopup();

    /**
     * @note[short] Android
     */
    static SFXSettingsPopup* create(SFXBrowser* p0);

    /**
     * @note[short] Windows: 0x61b950
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61b920
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] Windows: 0x61b940
     * @note[short] Android
     */
    virtual void didToggleGV(std::string p0);

    /**
     * @note[short] Android
     */
    bool init(SFXBrowser* p0);
};
