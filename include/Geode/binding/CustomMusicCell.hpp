#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CustomSongCell.hpp>

class CustomMusicCell : public CustomSongCell {
public:
    static constexpr auto CLASS_NAME = "CustomMusicCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomMusicCell, CustomSongCell)

    /**
     * @note[short] Windows: 0x14f820
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomMusicCell();

    /**
     * @note[short] MacOS (Intel): 0x23d2f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CustomMusicCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1d6168
     * @note[short] MacOS (Intel): 0x229aa0
     * @note[short] Windows: 0x14f8c0
     * @note[short] iOS: 0x12685c
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1d629c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x126990
     * @note[short] Android
     */
    void updateBGColor(int index);
};
