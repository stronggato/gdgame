#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/mapping/CCObject.hpp>

class GJCompactUserCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJCompactUserCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJCompactUserCell, TableViewCell)

    /**
     * @note[short] Windows: 0x156690
     * @note[short] Android: Rebinded
     */
    virtual  ~GJCompactUserCell();

    /**
     * @note[short] Android: Rebinded
     */
     GJCompactUserCell(char const* p0, float p1, float p2);

    /**
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
     * @note[short] Android
     */
    TodoReturn addStat(int p0, char const* p1, cocos2d::CCNode* p2, float& p3, float p4, bool p5);

    /**
     * @note[short] Android
     */
    TodoReturn buildUserRow(GJUserScore* p0, cocos2d::CCNode* p1, cocos2d::CCNode* p2, cocos2d::CCObject* p3, cocos2d::SEL_MenuHandler p4, float p5, bool p6, bool p7);

    /**
     * @note[short] Android
     */
    TodoReturn createStatStrip(GJUserScore* p0, cocos2d::CCNode* p1, float p2, float p3, bool p4);

    /**
     * @note[short] Android
     */
    TodoReturn loadFromScore(GJUserScore* p0);

    /**
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
};
