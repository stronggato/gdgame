#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class StatsCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "StatsCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StatsCell, TableViewCell)

    /**
     * @note[short] Windows: 0x89ba0
     * @note[short] Android: Rebinded
     */
    virtual  ~StatsCell();

    /**
     * @note[short] MacOS (ARM): 0x1e7400
     * @note[short] MacOS (Intel): 0x23b9e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     StatsCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e7440
     * @note[short] MacOS (Intel): 0x23ba50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x136420
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e803c
     * @note[short] MacOS (Intel): 0x23c520
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x136b90
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e7448
     * @note[short] MacOS (Intel): 0x23ba60
     * @note[short] iOS: 0x136428
     * @note[short] Android
     */
    const char* getTitleFromKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x1d8e6c
     * @note[short] MacOS (Intel): 0x22a080
     * @note[short] Windows: 0x14d3f0
     * @note[short] iOS: 0x129420
     * @note[short] Android
     */
    void loadFromObject(StatsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1d9170
     * @note[short] MacOS (Intel): 0x22c950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x129718
     * @note[short] Android
     */
    void updateBGColor(int index);
};
