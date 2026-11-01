#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class FriendRequestPopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "FriendRequestPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendRequestPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3969c0
     * @note[short] Android: Rebinded
     */
    virtual  ~FriendRequestPopup();

    /**
     * @note[short] iOS: 0x1c19c0
     * @note[short] Android
     */
    static FriendRequestPopup* create(GJFriendRequest* p0, bool p1);

    /**
     * @note[short] Windows: 0x3a0440
     * @note[short] iOS: 0x376aa8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2366dc
     * @note[short] MacOS (Intel): 0x292910
     * @note[short] Windows: 0x3a0450
     * @note[short] iOS: 0x376ab4
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] Windows: 0x3a0620
     * @note[short] iOS: 0x4d1da4
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (Intel): 0x294e10
     * @note[short] Windows: 0x3a06f0
     * @note[short] iOS: 0x376c94
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] Windows: 0x3a0750
     * @note[short] iOS: 0x24ae8c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (Intel): 0x2948b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x376a14
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] MacOS (Intel): 0xc7b40
     * @note[short] Android
     */
    bool init(GJFriendRequest* p0, bool p1);

    /**
     * @note[short] Windows: 0x62d5f0
     * @note[short] iOS: 0x2cf050
     * @note[short] Android
     */
    void loadFromGJFriendRequest(GJFriendRequest* request);

    /**
     * @note[short] MacOS (ARM): 0x236120
     * @note[short] MacOS (Intel): 0x292340
     * @note[short] iOS: 0x37674c
     * @note[short] Android
     */
    void onAccept(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2362d0
     * @note[short] MacOS (Intel): 0x292510
     * @note[short] iOS: 0x3768a0
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onIgnore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x292340
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReport(cocos2d::CCObject* sender);
    void* m_unk;
    GJFriendRequest* m_request;
    LoadingCircle* m_circle;
    CCMenuItemSpriteExtra* m_closeBtn;
    UploadActionPopup* m_popup;
};
