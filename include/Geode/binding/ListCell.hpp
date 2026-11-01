#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/mapping/ccTypes.hpp>

class ListCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "ListCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ListCell, TableViewCell)

    /**
     * @note[short] Windows: 0x89ba0
     * @note[short] Android: Rebinded
     */
    virtual  ~ListCell();

    /**
     * @note[short] MacOS (ARM): 0x28c188
     * @note[short] MacOS (Intel): 0x2f7830
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     ListCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x28c180
     * @note[short] MacOS (Intel): 0x2f7820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x266830
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x28c1cc
     * @note[short] MacOS (Intel): 0x2f78b0
     * @note[short] Windows: 0x3ffc0
     * @note[short] iOS: 0x266838
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x28c170
     * @note[short] MacOS (Intel): 0x2f77e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void loadFromObject(cocos2d::CCObject* object, int id, int page, int index);

    /**
     * @note[short] MacOS (ARM): 0x28c1c8
     * @note[short] MacOS (Intel): 0x2f78a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    cocos2d::ccColor4B m_bgColor;
};
