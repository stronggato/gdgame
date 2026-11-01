#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>

class GJUserCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJUserCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJUserCell, TableViewCell)

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJUserCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13a130
     * @note[short] Android: Rebinded
     */
     ~GJUserCell();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x13a440
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x51f288
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1ed098
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x4f919c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x13a6d4
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1ecc84
     * @note[short] iOS: 0x13a268
     * @note[short] Android
     */
    void onCancelFriendRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4441a0
     * @note[short] Android
     */
    void onRemoveFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x553900
     * @note[short] Android
     */
    void onUnblockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJUserScore* m_userScore;
    UploadActionPopup* m_uploadPopup;
};
