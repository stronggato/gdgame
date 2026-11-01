#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/CommentAdminDelegate.hpp>
#include <Geode/binding/DropdownDelegate.hpp>

class ReportQueuePopup : public PagedListPopup, public CommentAdminDelegate, public DropdownDelegate {
public:
    static constexpr auto CLASS_NAME = "ReportQueuePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ReportQueuePopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xc6650
     * @note[short] Android: Rebinded
     */
    virtual  ~ReportQueuePopup();

    /**
     * @note[short] Android
     */
    static ReportQueuePopup* create();

    /**
     * @note[short] Windows: 0xc67b0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0xc8720
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] Windows: 0xc7050
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] Windows: 0xc8780
     * @note[short] Android
     */
    virtual void dropdownSelectionChanged(Dropdown* p0, int p1);

    /**
     * @note[short] Windows: 0xc70e0
     * @note[short] Android
     */
    virtual void adminReportQueueFinished(cocos2d::CCArray* p0, int p1, int p2, int p3);

    /**
     * @note[short] Windows: 0xc7210
     * @note[short] Android
     */
    virtual void adminReportQueueFailed();

    /**
     * @note[short] Android
     */
    TodoReturn buildRows(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    void onOpenAuthor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOpenReview(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReportedContentChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSort(cocos2d::CCObject* sender);
};
