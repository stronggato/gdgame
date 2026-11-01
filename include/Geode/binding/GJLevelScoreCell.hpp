#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class GJLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLevelScoreCell, TableViewCell)

    /**
     * @note[short] Windows: 0x155ac0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJLevelScoreCell();

    /**
     * @note[short] MacOS (Intel): 0x23ee90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJLevelScoreCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1ea094
     * @note[short] MacOS (Intel): 0x23ef00
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x1383c0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e8df4
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x137730
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1dd218
     * @note[short] MacOS (Intel): 0x230db0
     * @note[short] Windows: 0x155b50
     * @note[short] iOS: 0x12d4d8
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1ea0a0
     * @note[short] MacOS (Intel): 0x23ef20
     * @note[short] iOS: 0x1383cc
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1dd198
     * @note[short] MacOS (Intel): 0x230d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12d458
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJUserScore* m_userScore;
};
