#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class GJRequestCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJRequestCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRequestCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1ecb38
     * @note[short] MacOS (Intel): 0x2420d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJRequestCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13a130
     * @note[short] Android: Rebinded
     */
     ~GJRequestCell();

    /**
     * @note[short] MacOS (ARM): 0x1ecb9c
     * @note[short] Windows: 0x1577f0
     * @note[short] iOS: 0x13a204
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
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x438410
     * @note[short] iOS: 0x2c6144
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1eb58c
     * @note[short] MacOS (Intel): 0x240770
     * @note[short] Windows: 0x500b10
     * @note[short] iOS: 0x1393c0
     * @note[short] Android
     */
    void markAsRead();

    /**
     * @note[short] iOS: 0x13a268
     * @note[short] Android
     */
    void onDeleteRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x153ba0
     * @note[short] iOS: 0x139308
     * @note[short] Android
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x23ef20
     * @note[short] iOS: 0x1392d0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
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
    GJUserScore* m_score;
    UploadActionPopup* m_popup;
    CCMenuItemToggler* m_toggler;
};
