#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class OptionsCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "OptionsCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsCell, TableViewCell)

    /**
     * @note[short] Windows: 0x14fb40
     * @note[short] Android: Rebinded
     */
    virtual  ~OptionsCell();

    /**
     * @note[short] MacOS (Intel): 0x23d400
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     OptionsCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x1556f0
     * @note[short] Android
     */
    void loadFromObject(OptionsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e8a84
     * @note[short] MacOS (Intel): 0x23d490
     * @note[short] Windows: 0x14fff0
     * @note[short] iOS: 0x137488
     * @note[short] Android
     */
    void onToggleOption(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d6748
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x126e18
     * @note[short] Android
     */
    void updateBGColor(int index);
    OptionsObject* m_optionsObject;
};
