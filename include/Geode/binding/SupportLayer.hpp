#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SupportLayer : public GJDropDownLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SupportLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SupportLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SupportLayer();

    /**
     * @note[short] MacOS (Intel): 0x1fd070
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~SupportLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1edfec
     * @note[short] Android
     */
    static SupportLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x30cf04
     * @note[short] MacOS (Intel): 0x381db0
     * @note[short] Windows: 0x665ea0
     * @note[short] iOS: 0x111e54
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x30ed60
     * @note[short] MacOS (Intel): 0x383d10
     * @note[short] Windows: 0x667490
     * @note[short] iOS: 0x2243c4
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x30ef54
     * @note[short] MacOS (Intel): 0x383ef0
     * @note[short] Windows: 0x667640
     * @note[short] iOS: 0x22451c
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x30ed10
     * @note[short] MacOS (Intel): 0x383cc0
     * @note[short] Windows: 0x667450
     * @note[short] iOS: 0x224374
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x30f2a0
     * @note[short] MacOS (Intel): 0x384210
     * @note[short] Windows: 0x6682e0
     * @note[short] iOS: 0x224730
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x30e7c4
     * @note[short] Windows: 0x666aa0
     * @note[short] iOS: 0x223e88
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (ARM): 0x30ed08
     * @note[short] MacOS (Intel): 0x383cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x30ece4
     * @note[short] MacOS (Intel): 0x383c90
     * @note[short] iOS: 0x224350
     * @note[short] Android
     */
    void onCocos2d(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30e150
     * @note[short] MacOS (Intel): 0x383150
     * @note[short] iOS: 0x1fdac8
     * @note[short] Android
     */
    void onEmail(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30ec08
     * @note[short] MacOS (Intel): 0x383bd0
     * @note[short] Windows: 0x667300
     * @note[short] iOS: 0x224274
     * @note[short] Android
     */
    void onGetReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30d7fc
     * @note[short] MacOS (Intel): 0x3826a0
     * @note[short] iOS: 0x223374
     * @note[short] Android
     */
    void onLinks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30ea5c
     * @note[short] MacOS (Intel): 0x383a10
     * @note[short] iOS: 0x22410c
     * @note[short] Android
     */
    void onLowDetail(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30e220
     * @note[short] MacOS (Intel): 0x383230
     * @note[short] iOS: 0x223a78
     * @note[short] Android
     */
    void onPrivacy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30eb5c
     * @note[short] MacOS (Intel): 0x383b20
     * @note[short] Windows: 0xf5aa0
     * @note[short] iOS: 0x2241dc
     * @note[short] Android
     */
    void onRequestAccess(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30ecc0
     * @note[short] MacOS (Intel): 0x383c70
     * @note[short] iOS: 0x22432c
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30e268
     * @note[short] MacOS (Intel): 0x383270
     * @note[short] Android
     */
    void onSFX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30e244
     * @note[short] MacOS (Intel): 0x383250
     * @note[short] iOS: 0x223a9c
     * @note[short] Android
     */
    void onTOS(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30f07c
     * @note[short] MacOS (Intel): 0x383ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22459c
     * @note[short] Android
     */
    void sendSupportMail();
    UploadActionPopup* m_uploadPopup;
};
