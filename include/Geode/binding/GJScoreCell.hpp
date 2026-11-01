#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJScoreCell : public TableViewCell, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJScoreCell, TableViewCell)

    /**
     * @note[short] Windows: 0x153d40
     * @note[short] Android: Rebinded
     */
    virtual  ~GJScoreCell();

    /**
     * @note[short] MacOS (Intel): 0x23e800
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJScoreCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e9b8c
     * @note[short] MacOS (Intel): 0x23e880
     * @note[short] Windows: 0x14ee30
     * @note[short] iOS: 0x138048
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x1381ec
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e9d68
     * @note[short] MacOS (Intel): 0x23ea80
     * @note[short] Windows: 0x155600
     * @note[short] iOS: 0x138194
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1dbd04
     * @note[short] MacOS (Intel): 0x22f7f0
     * @note[short] Windows: 0x1991f0
     * @note[short] iOS: 0x12c080
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1e9d60
     * @note[short] MacOS (Intel): 0x23ea60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onBan(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e9d64
     * @note[short] MacOS (Intel): 0x23ea70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e9e08
     * @note[short] MacOS (Intel): 0x23eb10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onMoreLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e9b98
     * @note[short] MacOS (Intel): 0x23e8a0
     * @note[short] Windows: 0xd8200
     * @note[short] iOS: 0x138054
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1dbc84
     * @note[short] MacOS (Intel): 0x22f790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12c000
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJUserScore* m_score;
};
