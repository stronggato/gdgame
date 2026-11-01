#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TableViewDelegate.hpp>
#include <Geode/binding/TableViewDataSource.hpp>

class BoomListView : public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
public:
    static constexpr auto CLASS_NAME = "BoomListView";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomListView, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x3f5d0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BoomListView();

    /**
     * @note[short] MacOS (ARM): 0x28b3e0
     * @note[short] MacOS (Intel): 0x2f6950
     * @note[short] Windows: 0x3f6c0
     * @note[short] iOS: 0x1f8f94
     * @note[short] Android: Rebinded
     */
     ~BoomListView();

    /**
     * @note[short] MacOS (ARM): 0x28b5f0
     * @note[short] MacOS (Intel): 0x2f6aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static BoomListView* create(cocos2d::CCArray* entries, TableViewCellDelegate* delegate, float height, float width, int page, BoomListType type, float y);

    /**
     * @note[short] MacOS (ARM): 0x28c17c
     * @note[short] MacOS (Intel): 0x2f7810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26682c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x28b9c0
     * @note[short] MacOS (Intel): 0x2f6ed0
     * @note[short] Windows: 0x3fc20
     * @note[short] iOS: 0x26629c
     * @note[short] Android
     */
    virtual void setupList(float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x28ba40
     * @note[short] MacOS (Intel): 0x2f6f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26631c
     * @note[short] Android
     */
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& indexPath, TableViewCell* cell, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28ba50
     * @note[short] MacOS (Intel): 0x2f6fb0
     * @note[short] Windows: 0x3fcb0
     * @note[short] iOS: 0x26632c
     * @note[short] Android
     */
    virtual float cellHeightForRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28ba60
     * @note[short] MacOS (Intel): 0x2f6fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26633c
     * @note[short] Android
     */
    virtual void didSelectRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28ba68
     * @note[short] MacOS (Intel): 0x2f6ff0
     * @note[short] Windows: 0x3fcc0
     * @note[short] iOS: 0x266344
     * @note[short] Android
     */
    virtual int numberOfRowsInSection(unsigned int section, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28ba78
     * @note[short] MacOS (Intel): 0x2f7020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x266354
     * @note[short] Android
     */
    virtual unsigned int numberOfSectionsInTableView(TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28ba88
     * @note[short] MacOS (Intel): 0x2f7040
     * @note[short] Windows: 0x3fce0
     * @note[short] iOS: 0x266364
     * @note[short] Android
     */
    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28c174
     * @note[short] MacOS (Intel): 0x2f77f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x266824
     * @note[short] Android
     */
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* tableView, TableViewCellEditingStyle style, CCIndexPath& indexPath);

    /**
     * @note[short] MacOS (ARM): 0x28ba48
     * @note[short] MacOS (Intel): 0x2f6f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x266324
     * @note[short] Android
     */
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& indexPath, TableViewCell* cell, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28bba4
     * @note[short] MacOS (Intel): 0x2f7160
     * @note[short] Windows: 0x3fd70
     * @note[short] iOS: 0x2663f8
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* identifier);

    /**
     * @note[short] MacOS (ARM): 0x28bd48
     * @note[short] MacOS (Intel): 0x2f73a0
     * @note[short] Windows: 0x3fee0
     * @note[short] iOS: 0x2664f0
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* cell, int index);

    /**
     * @note[short] MacOS (ARM): 0x28b9b0
     * @note[short] MacOS (Intel): 0x2f6eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addObjectToList(cocos2d::CCNode* node);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool init(cocos2d::CCArray* entries, BoomListType type, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x28b6fc
     * @note[short] MacOS (Intel): 0x2f6bd0
     * @note[short] Windows: 0x3f760
     * @note[short] iOS: 0x265ff8
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* entries, TableViewCellDelegate* delegate, float height, float width, int page, BoomListType type, float y);

    /**
     * @note[short] MacOS (ARM): 0x28b884
     * @note[short] MacOS (Intel): 0x2f6d80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x266180
     * @note[short] Android
     */
    void lockList(bool locked);

    /**
     * @note[short] Android
     */
    TodoReturn restoreListOffset(float p0);
    TableView* m_tableView;
    cocos2d::CCArray* m_entries;
    BoomListType m_type;
    float m_height;
    float m_width;
    float m_itemSeparation;
    int m_currentPage;
    bool m_locked;
};
