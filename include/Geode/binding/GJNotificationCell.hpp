#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJNotificationCell : public TableViewCell, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJNotificationCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJNotificationCell, TableViewCell)

    /**
     * @note[short] Windows: 0x159740
     * @note[short] Android: Rebinded
     */
    virtual  ~GJNotificationCell();

    /**
     * @note[short] Android: Rebinded
     */
     GJNotificationCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x147270
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0x15af90
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn loadFromNotification(GJNotification* p0);

    /**
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMute(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShowBody(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewTarget(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshChest();

    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
};
