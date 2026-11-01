#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCIndexPath.hpp>
#include <Geode/binding/CCScrollLayerExt.hpp>
#include <Geode/binding/CCScrollLayerExtDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate {
public:
    static constexpr auto CLASS_NAME = "TableView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TableView, CCScrollLayerExt)

    /**
     * @note[short] MacOS (ARM): 0x60dc60
     * @note[short] MacOS (Intel): 0x6fc110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398ebc
     * @note[short] Android: Rebinded
     */
     TableView(cocos2d::CCRect rect);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~TableView();

    /**
     * @note[short] MacOS (ARM): 0x60dba8
     * @note[short] MacOS (Intel): 0x41c060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398e08
     * @note[short] Android
     */
    static TableView* create(TableViewDelegate* tvd, TableViewDataSource* tvds, TableViewCellDelegate* tvcd, cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x60ed98
     * @note[short] MacOS (Intel): 0x6fd410
     * @note[short] Windows: 0x5bb80
     * @note[short] iOS: 0x399b8c
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (Intel): 0x6fd420
     * @note[short] Windows: 0x880a0
     * @note[short] iOS: 0x399b90
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x60ef18
     * @note[short] MacOS (Intel): 0x6fd5c0
     * @note[short] Windows: 0x880b0
     * @note[short] iOS: 0x399ccc
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x60f96c
     * @note[short] MacOS (Intel): 0x6fe0f0
     * @note[short] Windows: 0x88360
     * @note[short] iOS: 0x39a488
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x60f730
     * @note[short] MacOS (Intel): 0x6fdec0
     * @note[short] Windows: 0x88280
     * @note[short] iOS: 0x39a30c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x60f8a4
     * @note[short] MacOS (Intel): 0x6fe040
     * @note[short] Windows: 0x882e0
     * @note[short] iOS: 0x39a424
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x41f30
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x60fa5c
     * @note[short] MacOS (Intel): 0x6fe1e0
     * @note[short] Windows: 0x88930
     * @note[short] iOS: 0x303094
     * @note[short] Android
     */
    virtual bool scrollWheel(float y, float x);

    /**
     * @note[short] MacOS (ARM): 0x610600
     * @note[short] MacOS (Intel): 0x6fee30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39ae9c
     * @note[short] Android
     */
    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x610608
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39aea4
     * @note[short] Android
     */
    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x610610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39aeac
     * @note[short] Android
     */
    virtual void scrollViewTouchMoving(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x610618
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39aeb4
     * @note[short] Android
     */
    virtual void scrollViewDidEndMoving(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x60ee3c
     * @note[short] MacOS (Intel): 0x6fd4e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x399c30
     * @note[short] Android
     */
    void cancelAndStoleTouch(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x60e7a8
     * @note[short] MacOS (Intel): 0x6fcdd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    TableViewCell* cellForRowAtIndexPath(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x60e394
     * @note[short] MacOS (Intel): 0x6fc950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x399340
     * @note[short] Android
     */
    TableViewCell* cellForTouch(cocos2d::CCTouch* touch);

    /**
     * @note[short] MacOS (ARM): 0x60fac8
     * @note[short] MacOS (Intel): 0x41bd10
     * @note[short] iOS: 0x39a5b8
     * @note[short] Android
     */
    int checkBoundaryOfCell(TableViewCell* cell);

    /**
     * @note[short] MacOS (ARM): 0x60fc00
     * @note[short] MacOS (Intel): 0x6fe3b0
     * @note[short] iOS: 0x39a6dc
     * @note[short] Android
     */
    int checkBoundaryOfCell(cocos2d::CCPoint& position, float height);

    /**
     * @note[short] MacOS (ARM): 0x1deebc
     * @note[short] MacOS (Intel): 0x6fd680
     * @note[short] Windows: 0x88c00
     * @note[short] iOS: 0x399d70
     * @note[short] Android
     */
    void checkBoundaryOfContent(float dt);

    /**
     * @note[short] MacOS (ARM): 0x61027c
     * @note[short] MacOS (Intel): 0x6fea80
     * @note[short] Windows: 0x891c0
     * @note[short] iOS: 0x39ac04
     * @note[short] Android
     */
    void checkFirstCell(TableViewCell* cell);

    /**
     * @note[short] MacOS (ARM): 0x60fd10
     * @note[short] MacOS (Intel): 0x6fe4d0
     * @note[short] iOS: 0x39a7d8
     * @note[short] Android
     */
    void checkLastCell(TableViewCell* cell);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void claimTouch(cocos2d::CCTouch* touch);

    /**
     * @note[short] MacOS (ARM): 0x60e53c
     * @note[short] MacOS (Intel): 0x6fcb30
     * @note[short] iOS: 0x3994e0
     * @note[short] Android
     */
    void deleteTableViewCell(TableViewCell* cell);

    /**
     * @note[short] MacOS (ARM): 0x60e7a0
     * @note[short] MacOS (Intel): 0x6fcdc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3996e8
     * @note[short] Android
     */
    bool dequeueReusableCellWithIdentifier(char const* identifier);

    /**
     * @note[short] MacOS (Intel): 0x6fc640
     * @note[short] Android
     */
    void initTableViewCells();

    /**
     * @note[short] MacOS (ARM): 0x60df50
     * @note[short] MacOS (Intel): 0x6fc510
     * @note[short] Windows: 0x87820
     * @note[short] iOS: 0x399198
     * @note[short] Android
     */
    bool isDuplicateIndexPath(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x60deb0
     * @note[short] MacOS (Intel): 0x6fc480
     * @note[short] Windows: 0x87790
     * @note[short] iOS: 0x39910c
     * @note[short] Android
     */
    bool isDuplicateInVisibleCellArray(CCIndexPath* path);

    /**
     * @note[short] MacOS (ARM): 0x60e840
     * @note[short] MacOS (Intel): 0x6fce60
     * @note[short] Windows: 0x87b70
     * @note[short] iOS: 0x3996f0
     * @note[short] Android
     */
    void reloadData();

    /**
     * @note[short] MacOS (ARM): 0x60dff4
     * @note[short] MacOS (Intel): 0x6fc5a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39922c
     * @note[short] Android
     */
    bool removeIndexPathFromPathAddedArray(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x60e83c
     * @note[short] MacOS (Intel): 0x6fce50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void scrollToIndexPath(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x60f784
     * @note[short] MacOS (Intel): 0x6fdf10
     * @note[short] Windows: 0x6228c0
     * @note[short] iOS: 0x39a360
     * @note[short] Android
     */
    void touchFinish(cocos2d::CCTouch* touch);
    bool m_scheduled;
    cocos2d::CCTouch* m_beginTouch;
    cocos2d::CCPoint m_beginLocation;
    cocos2d::CCPoint m_lastCellPos;
    cocos2d::CCPoint m_checkLocation;
    TableViewCell* m_touchedCell;
    bool m_touchMoved;
    bool m_isTouch;
    cocos2d::CCArray* m_cellArray;
    cocos2d::CCArray* m_cellRemovedArray;
    cocos2d::CCArray* m_indexPathArray;
    TableViewDelegate* m_tableDelegate;
    TableViewDataSource* m_dataSource;
    TableViewCellDelegate* m_cellDelegate;
    bool m_unused2;
    void* m_unused3;
    int m_unused4;
    float m_touchLastY;
    bool m_cancellingTouches;
    bool m_idk2;
};
