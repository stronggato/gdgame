#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class ThreadMessageOptionsPopup : public SetupTriggerPopup, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "ThreadMessageOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadMessageOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xd2640
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadMessageOptionsPopup();

    /**
     * @note[short] Android
     */
    static ThreadMessageOptionsPopup* create(GJThreadMessage* p0, std::string const& p1, ThreadViewPopup* p2);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x99df0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe4d80
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    bool init(GJThreadMessage* p0, std::string const& p1, ThreadViewPopup* p2);

    /**
     * @note[short] Android
     */
    void onAction(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);
};
