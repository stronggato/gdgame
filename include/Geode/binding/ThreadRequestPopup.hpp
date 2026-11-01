#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ThreadRequestPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ThreadRequestPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadRequestPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xd3060
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadRequestPopup();

    /**
     * @note[short] Android
     */
    static ThreadRequestPopup* create(GJMessageThread* p0, InvitesPopup* p1);

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    bool init(GJMessageThread* p0, InvitesPopup* p1);

    /**
     * @note[short] Android
     */
    void onAccept(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onIgnore(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReport(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewMembers(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
};
