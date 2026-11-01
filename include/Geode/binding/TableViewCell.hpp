#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCIndexPath.hpp>
#include <Geode/mapping/CCLayer.hpp>

class TableViewCell : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "TableViewCell";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TableViewCell, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x612d94
     * @note[short] MacOS (Intel): 0x701910
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x372e4
     * @note[short] Android: Rebinded
     */
     TableViewCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x612f84
     * @note[short] MacOS (Intel): 0x701b70
     * @note[short] Windows: 0x89ba0
     * @note[short] Android: Rebinded
     */
     ~TableViewCell();

    /**
     * @note[short] MacOS (ARM): 0x613214
     * @note[short] MacOS (Intel): 0x701ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x374f4
     * @note[short] Android
     */
    void updateVisibility();
    void* m_unknown;
    TableView* m_tableView;
    CCIndexPath m_indexPath;
    void* m_unknown2;
    std::string m_cellIdentifier;
    float m_width;
    float m_height;
    cocos2d::CCLayerColor* m_backgroundLayer;
    cocos2d::CCLayer* m_mainLayer;
    BoomListType m_listType;
};
