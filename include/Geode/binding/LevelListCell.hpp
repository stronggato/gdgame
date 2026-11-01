#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class LevelListCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelListCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1ed890
     * @note[short] Windows: 0x15cd80
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     LevelListCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~LevelListCell();

    /**
     * @note[short] MacOS (ARM): 0x1ed7f4
     * @note[short] MacOS (Intel): 0x242fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static LevelListCell* create(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1ed8d8
     * @note[short] MacOS (Intel): 0x243120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13aa80
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1eda1c
     * @note[short] MacOS (Intel): 0x243290
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x13abc4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d7830
     * @note[short] MacOS (Intel): 0x22b0f0
     * @note[short] Windows: 0x15ce00
     * @note[short] iOS: 0xd9d70
     * @note[short] Android
     */
    void loadFromList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x1ed8e0
     * @note[short] MacOS (Intel): 0x243130
     * @note[short] iOS: 0x13aa88
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1eda0c
     * @note[short] MacOS (Intel): 0x243270
     * @note[short] Windows: 0x1135b0
     * @note[short] iOS: 0x13abb4
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ed9d8
     * @note[short] MacOS (Intel): 0x243240
     * @note[short] Windows: 0x15e540
     * @note[short] iOS: 0x13ab80
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d8dec
     * @note[short] MacOS (Intel): 0x22a020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1293a0
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJLevelList* m_levelList;
    bool m_addingLevel;
};
