#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class AchievementCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "AchievementCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementCell, TableViewCell)

    /**
     * @note[short] Windows: 0x89ba0
     * @note[short] Android: Rebinded
     */
    virtual  ~AchievementCell();

    /**
     * @note[short] MacOS (ARM): 0x1e2608
     * @note[short] MacOS (Intel): 0x236670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     AchievementCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e2648
     * @note[short] MacOS (Intel): 0x2366e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x131e40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e2650
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x131e48
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d4a44
     * @note[short] MacOS (Intel): 0x2283e0
     * @note[short] iOS: 0x1256f4
     * @note[short] Android
     */
    void loadFromDict(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x1d5ed0
     * @note[short] MacOS (Intel): 0x229840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1265d4
     * @note[short] Android
     */
    void updateBGColor(int index);
};
