#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DownloadMessageDelegate.hpp>

class GJMessagePopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol, public DownloadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessagePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x396b10
     * @note[short] Android: Rebinded
     */
    virtual  ~GJMessagePopup();

    /**
     * @note[short] Windows: 0xbe210
     * @note[short] iOS: 0x7911c
     * @note[short] Android
     */
    static GJMessagePopup* create(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x238634
     * @note[short] MacOS (Intel): 0x294920
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x378288
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2386b0
     * @note[short] MacOS (Intel): 0x294990
     * @note[short] Windows: 0x3a2090
     * @note[short] iOS: 0x378304
     * @note[short] Android
     */
    virtual void downloadMessageFinished(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x238778
     * @note[short] MacOS (Intel): 0x294a50
     * @note[short] Windows: 0x3a20e0
     * @note[short] iOS: 0x378378
     * @note[short] Android
     */
    virtual void downloadMessageFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x238828
     * @note[short] MacOS (Intel): 0x294af0
     * @note[short] Windows: 0x3a2120
     * @note[short] iOS: 0x378420
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x238a10
     * @note[short] MacOS (Intel): 0x294cc0
     * @note[short] Windows: 0x3a22d0
     * @note[short] iOS: 0x378544
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x238b80
     * @note[short] MacOS (Intel): 0x294e10
     * @note[short] Windows: 0x3a2390
     * @note[short] iOS: 0x3785e4
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x238cac
     * @note[short] MacOS (Intel): 0x294f10
     * @note[short] Windows: 0x3a2410
     * @note[short] iOS: 0x378680
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2385b8
     * @note[short] MacOS (Intel): 0x2948b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3781f4
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] MacOS (ARM): 0x23700c
     * @note[short] MacOS (Intel): 0x293310
     * @note[short] iOS: 0x376f04
     * @note[short] Android
     */
    bool init(GJUserMessage* message);

    /**
     * @note[short] MacOS (Intel): 0x958240
     * @note[short] Windows: 0x3a1400
     * @note[short] iOS: 0x375788
     * @note[short] Android
     */
    void loadFromGJMessage(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x2382fc
     * @note[short] MacOS (Intel): 0x294610
     * @note[short] Windows: 0x3a1ba0
     * @note[short] iOS: 0x378064
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x99df0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNewThread(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238204
     * @note[short] MacOS (Intel): 0x294510
     * @note[short] iOS: 0x3767e4
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a64bc
     * @note[short] Android
     */
    void onReply(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReport(cocos2d::CCObject* sender);
    bool m_actionSuccess;
    cocos2d::CCLabelBMFont* m_errorLabel;
    GJUserMessage* m_message;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
    UploadActionPopup* m_uploadPopup;
};
