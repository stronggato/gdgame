#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJSongBrowser : public GJDropDownLayer, public FLAlertLayerProtocol, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "GJSongBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSongBrowser, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x3bab90
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSongBrowser();

    /**
     * @note[short] MacOS (ARM): 0x5ea61c
     * @note[short] MacOS (Intel): 0x6d3870
     * @note[short] Windows: 0x3bac70
     * @note[short] iOS: 0x30094c
     * @note[short] Android
     */
    static GJSongBrowser* create();

    /**
     * @note[short] MacOS (ARM): 0x5ea908
     * @note[short] MacOS (Intel): 0x6d3c80
     * @note[short] Windows: 0x3badc0
     * @note[short] iOS: 0x300a74
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5eab40
     * @note[short] MacOS (Intel): 0x6d3ed0
     * @note[short] Windows: 0x3baec0
     * @note[short] iOS: 0x300be8
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x5eab0c
     * @note[short] MacOS (Intel): 0x6d3ea0
     * @note[short] Windows: 0x3bae00
     * @note[short] iOS: 0x300bb4
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5eb068
     * @note[short] MacOS (Intel): 0x6d4450
     * @note[short] Windows: 0x3bb5e0
     * @note[short] iOS: 0x30111c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x5eb124
     * @note[short] MacOS (Intel): 0x6d4530
     * @note[short] Windows: 0x3bb780
     * @note[short] iOS: 0x3011d8
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x5eb184
     * @note[short] MacOS (Intel): 0x6d45a0
     * @note[short] Windows: 0x3bb7b0
     * @note[short] iOS: 0x301238
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x5eae68
     * @note[short] MacOS (Intel): 0x6d4260
     * @note[short] iOS: 0x300f44
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5eae5c
     * @note[short] MacOS (Intel): 0x6d4240
     * @note[short] iOS: 0x300f38
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5eae50
     * @note[short] MacOS (Intel): 0x6d4220
     * @note[short] iOS: 0x300f2c
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5eafcc
     * @note[short] MacOS (Intel): 0x6d43c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x301080
     * @note[short] Android
     */
    void setupPageInfo(int itemCount, int pageStartIdx, int pageEndIdx);

    /**
     * @note[short] MacOS (ARM): 0x5eaf44
     * @note[short] MacOS (Intel): 0x6d4330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x300ff8
     * @note[short] Android
     */
    void setupSongBrowser(cocos2d::CCArray* songs);
    int m_page;
    int m_songID;
    bool m_selected;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCPoint m_unk298;
    cocos2d::CCArray* m_downloadedSongs;
    CustomListView* m_listView;
};
