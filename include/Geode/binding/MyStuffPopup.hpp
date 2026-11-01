#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class MyStuffPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "MyStuffPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MyStuffPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x54c3a0
     * @note[short] Android: Rebinded
     */
    virtual  ~MyStuffPopup();

    /**
     * @note[short] Android
     */
    static MyStuffPopup* create(GJUserScore* p0);

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    bool init(GJUserScore* p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSocialPage(cocos2d::CCObject* sender);
};
