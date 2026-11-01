#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>

class GJMessageCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessageCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessageCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1ecb38
     * @note[short] MacOS (Intel): 0x2420d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJMessageCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13a130
     * @note[short] Android: Rebinded
     */
     ~GJMessageCell();

    /**
     * @note[short] MacOS (ARM): 0x1ecb9c
     * @note[short] MacOS (Intel): 0x242180
     * @note[short] Windows: 0x15b550
     * @note[short] iOS: 0x13a204
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1ece88
     * @note[short] MacOS (Intel): 0x242490
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x13a440
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1ecf34
     * @note[short] MacOS (Intel): 0x242560
     * @note[short] Windows: 0x15c230
     * @note[short] iOS: 0x13a4ec
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1ed098
     * @note[short] MacOS (Intel): 0x2426f0
     * @note[short] Windows: 0x15c3d0
     * @note[short] iOS: 0x13a5d0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] Windows: 0x15c570
     * @note[short] iOS: 0x13a6d4
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1ed3e8
     * @note[short] MacOS (Intel): 0x242a40
     * @note[short] Windows: 0x15c640
     * @note[short] iOS: 0x13a76c
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x1de4e4
     * @note[short] MacOS (Intel): 0x231cd0
     * @note[short] Windows: 0x15b570
     * @note[short] iOS: 0x12e680
     * @note[short] Android
     */
    void loadFromMessage(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x1ecdfc
     * @note[short] MacOS (Intel): 0x242400
     * @note[short] Windows: 0x15bf40
     * @note[short] iOS: 0x13a3b4
     * @note[short] Android
     */
    void markAsRead();

    /**
     * @note[short] MacOS (ARM): 0x1ecc84
     * @note[short] MacOS (Intel): 0x242280
     * @note[short] iOS: 0x13a268
     * @note[short] Android
     */
    void onDeleteMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ecdc8
     * @note[short] iOS: 0x13a380
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ecbb0
     * @note[short] MacOS (Intel): 0x2421a0
     * @note[short] iOS: 0x13a218
     * @note[short] Android
     */
    void onViewMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ecd90
     * @note[short] MacOS (Intel): 0x2423a0
     * @note[short] iOS: 0x13a348
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e1018
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x130cbc
     * @note[short] Android
     */
    void updateBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x1e2318
     * @note[short] MacOS (Intel): 0x236390
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateToggle();
    GJUserMessage* m_message;
    UploadActionPopup* m_popup;
    CCMenuItemToggler* m_toggler;
};
