#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/BoomListView.hpp>

class CustomListView : public BoomListView {
public:
    static constexpr auto CLASS_NAME = "CustomListView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomListView, BoomListView)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CustomListView();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CustomListView* create(cocos2d::CCArray* entries, BoomListType type, float height, float width);

    /**
     * @note[short] MacOS (ARM): 0x1d2fa4
     * @note[short] MacOS (Intel): 0x225c20
     * @note[short] Windows: 0x1433e0
     * @note[short] iOS: 0x12478c
     * @note[short] Android
     */
    static CustomListView* create(cocos2d::CCArray* entries, TableViewCellDelegate* delegate, float height, float width, int page, BoomListType type, float y);

    /**
     * @note[short] MacOS (ARM): 0x1d3c4c
     * @note[short] MacOS (Intel): 0x227170
     * @note[short] Windows: 0x1443f0
     * @note[short] iOS: 0x125194
     * @note[short] Android
     */
    static float getCellHeight(BoomListType type);

    /**
     * @note[short] MacOS (ARM): 0x1e147c
     * @note[short] MacOS (Intel): 0x2351b0
     * @note[short] Windows: 0x144d10
     * @note[short] iOS: 0x13111c
     * @note[short] Android
     */
    virtual void setupList(float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x1d30b4
     * @note[short] MacOS (Intel): 0x225d60
     * @note[short] Windows: 0x143510
     * @note[short] iOS: 0x12489c
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* identifier);

    /**
     * @note[short] MacOS (ARM): 0x1d4384
     * @note[short] MacOS (Intel): 0x227cf0
     * @note[short] Windows: 0x144510
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* cell, int index);

    /**
     * @note[short] MacOS (ARM): 0x58121c
     * @note[short] MacOS (Intel): 0x235b00
     * @note[short] Windows: 0x145590
     * @note[short] iOS: 0x187a58
     * @note[short] Android
     */
    void reloadAll();
    int m_cellMode;
};
