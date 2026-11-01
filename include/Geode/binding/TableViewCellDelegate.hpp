#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "TableViewCellDelegate";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool shouldSnapToSelected();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual int getCellDelegateType();

    /**
     * @note[short] Windows: 0x98c90
     * @note[short] Android
     */
    virtual TodoReturn getSelectedCellCustomIdx();

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual TodoReturn allowsCustomSFXActions();

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual bool isCustomIDSelected(int p0);

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual TodoReturn inCustomSFXTree();

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual TodoReturn showsSFXInfoButton();
};
