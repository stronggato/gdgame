#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/CustomSongDelegate.hpp>

class CustomSongCell : public TableViewCell, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongCell, TableViewCell)

    /**
     * @note[short] Windows: 0x14ed00
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomSongCell();

    /**
     * @note[short] MacOS (ARM): 0x1e9b40
     * @note[short] MacOS (Intel): 0x23c910
     * @note[short] Windows: 0x14ed00
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CustomSongCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e8344
     * @note[short] MacOS (Intel): 0x23c990
     * @note[short] Windows: 0x14ee30
     * @note[short] iOS: 0x136df4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x147270
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e8414
     * @note[short] MacOS (Intel): 0x23ca80
     * @note[short] Windows: 0x14f010
     * @note[short] iOS: 0x136ebc
     * @note[short] Android
     */
    virtual void songIDChanged(int id);

    /**
     * @note[short] MacOS (ARM): 0x1e8470
     * @note[short] MacOS (Intel): 0x23cb00
     * @note[short] Windows: 0x14f050
     * @note[short] iOS: 0x136f18
     * @note[short] Android
     */
    virtual int getActiveSongID();

    /**
     * @note[short] MacOS (ARM): 0x1e84a8
     * @note[short] MacOS (Intel): 0x23cb60
     * @note[short] Windows: 0x14f070
     * @note[short] iOS: 0x136f50
     * @note[short] Android
     */
    virtual std::string getSongFileName();

    /**
     * @note[short] MacOS (ARM): 0x1e84c0
     * @note[short] MacOS (Intel): 0x23cb80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x136f70
     * @note[short] Android
     */
    virtual LevelSettingsObject* getLevelSettings();

    /**
     * @note[short] MacOS (ARM): 0x1d5f3c
     * @note[short] MacOS (Intel): 0x229890
     * @note[short] Windows: 0x14ee40
     * @note[short] iOS: 0x126634
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e8350
     * @note[short] MacOS (Intel): 0x23c9b0
     * @note[short] iOS: 0x136e00
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e25c4
     * @note[short] MacOS (Intel): 0x236630
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldReload();

    /**
     * @note[short] MacOS (ARM): 0x1d60e8
     * @note[short] MacOS (Intel): 0x229a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1267dc
     * @note[short] Android
     */
    void updateBGColor(int index);
    SongInfoObject* m_songInfoObject;
    bool m_selected;
};
