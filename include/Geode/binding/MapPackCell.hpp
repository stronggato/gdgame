#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class MapPackCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "MapPackCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MapPackCell, TableViewCell)

    /**
     * @note[short] MacOS (Intel): 0x23b210
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     MapPackCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~MapPackCell();

    /**
     * @note[short] MacOS (ARM): 0x1e6d20
     * @note[short] MacOS (Intel): 0x23b2d0
     * @note[short] Windows: 0x14c1d0
     * @note[short] iOS: 0x135e8c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e71dc
     * @note[short] MacOS (Intel): 0x23b780
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x136278
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d6cc4
     * @note[short] MacOS (Intel): 0x22a530
     * @note[short] Windows: 0x14c230
     * @note[short] iOS: 0x127358
     * @note[short] Android
     */
    void loadFromMapPack(GJMapPack* pack);

    /**
     * @note[short] MacOS (ARM): 0x1e6f18
     * @note[short] MacOS (Intel): 0x1df980
     * @note[short] iOS: 0x135fd0
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e6d68
     * @note[short] MacOS (Intel): 0x23b320
     * @note[short] Windows: 0x14cd90
     * @note[short] iOS: 0x135ed4
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e6f94
     * @note[short] MacOS (Intel): 0x23b550
     * @note[short] Windows: 0xf6610
     * @note[short] iOS: 0x13604c
     * @note[short] Android
     */
    void playCompleteEffect();

    /**
     * @note[short] MacOS (ARM): 0x1e2174
     * @note[short] MacOS (Intel): 0x2361b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reloadCell();

    /**
     * @note[short] MacOS (ARM): 0x1d77b0
     * @note[short] MacOS (Intel): 0x22b090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x127e24
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJMapPack* m_mapPack;
    CCMenuItemSpriteExtra* m_viewButton;
    CCMenuItemSpriteExtra* m_rewardButton;
    cocos2d::CCArray* m_rewardLabels;
    cocos2d::CCArray* m_rewardSprites;
};
