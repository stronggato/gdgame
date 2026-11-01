#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class DropdownListPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DropdownListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DropdownListPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x11efc0
     * @note[short] Android: Rebinded
     */
    virtual  ~DropdownListPopup();

    /**
     * @note[short] Android
     */
    static DropdownListPopup* create(std::vector<DropdownListRow> const& p0, cocos2d::CCPoint p1, DropdownListStyle const& p2, cocos2d::CCObject* p3, cocos2d::SEL_MenuHandler p4);

    /**
     * @note[short] Windows: 0x120d90
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x120e90
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x120f50
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x120ff0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x121090
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    TodoReturn buildRows();

    /**
     * @note[short] Android
     */
    TodoReturn closeSelf();

    /**
     * @note[short] Android
     */
    bool init(std::vector<DropdownListRow> const& p0, cocos2d::CCPoint p1, DropdownListStyle const& p2, cocos2d::CCObject* p3, cocos2d::SEL_MenuHandler p4);

    /**
     * @note[short] Android
     */
    void onRowSelected(cocos2d::CCObject* sender);
};
