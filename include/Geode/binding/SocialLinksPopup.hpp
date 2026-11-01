#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SocialLinksPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SocialLinksPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SocialLinksPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3966f0
     * @note[short] Android: Rebinded
     */
    virtual  ~SocialLinksPopup();

    /**
     * @note[short] Android
     */
    static SocialLinksPopup* create(GJAccountSettingsLayer* p0);

    /**
     * @note[short] Windows: 0x39d600
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    bool init(GJAccountSettingsLayer* p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOK(cocos2d::CCObject* sender);
};
