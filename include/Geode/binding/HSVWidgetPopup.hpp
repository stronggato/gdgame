#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/ccTypes.hpp>

class HSVWidgetPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "HSVWidgetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVWidgetPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x12dec0
     * @note[short] Android: Rebinded
     */
    virtual  ~HSVWidgetPopup();

    /**
     * @note[short] MacOS (ARM): 0x29c5ac
     * @note[short] iOS: 0x2332f8
     * @note[short] Android
     */
    static HSVWidgetPopup* create(cocos2d::ccHSVValue p0, cocos2d::ccColor3B p1, HSVWidgetDelegate* p2, std::string p3);

    /**
     * @note[short] MacOS (ARM): 0x394864
     * @note[short] MacOS (Intel): 0x41ca30
     * @note[short] Windows: 0x12e590
     * @note[short] iOS: 0x122fd8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::ccHSVValue p0, cocos2d::ccColor3B p1, HSVWidgetDelegate* p2, std::string p3);

    /**
     * @note[short] MacOS (ARM): 0x3944cc
     * @note[short] MacOS (Intel): 0x41c640
     * @note[short] Windows: 0x12e4b0
     * @note[short] iOS: 0x122ca8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    ConfigureHSVWidget* m_widget;
    HSVWidgetDelegate* m_delegate;
};
