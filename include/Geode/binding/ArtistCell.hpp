#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class ArtistCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "ArtistCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ArtistCell, TableViewCell)

    /**
     * @note[short] Windows: 0x150060
     * @note[short] Android: Rebinded
     */
    virtual  ~ArtistCell();

    /**
     * @note[short] MacOS (Intel): 0x23d580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     ArtistCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (Intel): 0x23d5f0
     * @note[short] Windows: 0x400c0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x147270
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d96a0
     * @note[short] MacOS (Intel): 0x22cde0
     * @note[short] Windows: 0x1500f0
     * @note[short] iOS: 0x129c28
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* object);

    /**
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d99c8
     * @note[short] MacOS (Intel): 0x22d100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x129f40
     * @note[short] Android
     */
    void updateBGColor(int index);
    SongInfoObject* m_songInfo;
};
