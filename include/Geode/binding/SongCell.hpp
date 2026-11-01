#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class SongCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongCell, TableViewCell)

    /**
     * @note[short] Windows: 0x14e820
     * @note[short] Android: Rebinded
     */
    virtual  ~SongCell();

    /**
     * @note[short] MacOS (Intel): 0x23c700
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     SongCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e81e0
     * @note[short] MacOS (Intel): 0x23c770
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x136ce0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x136d10
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d91dc
     * @note[short] MacOS (Intel): 0x22c9a0
     * @note[short] Windows: 0x14e8b0
     * @note[short] iOS: 0x129778
     * @note[short] Android
     */
    void loadFromObject(SongObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e81ec
     * @note[short] MacOS (Intel): 0x23c790
     * @note[short] Windows: 0x14ecd0
     * @note[short] iOS: 0x136cec
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d9620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x129ba8
     * @note[short] Android
     */
    void updateBGColor(int index);
    SongObject* m_songObject;
};
