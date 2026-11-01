#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class GJLocalLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLocalLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLocalLevelScoreCell, TableViewCell)

    /**
     * @note[short] Windows: 0x155660
     * @note[short] Android: Rebinded
     */
    virtual  ~GJLocalLevelScoreCell();

    /**
     * @note[short] MacOS (Intel): 0x23eca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJLocalLevelScoreCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e9f5c
     * @note[short] MacOS (Intel): 0x23ed10
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x1382d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x1382dc
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1ddbf0
     * @note[short] MacOS (Intel): 0x2317b0
     * @note[short] Windows: 0xbe3e0
     * @note[short] iOS: 0x12ddc4
     * @note[short] Android
     */
    void loadFromScore(GJLocalScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1dde64
     * @note[short] MacOS (Intel): 0x2319e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12e018
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJLocalScore* m_localScore;
};
