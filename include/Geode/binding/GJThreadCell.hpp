#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class GJThreadCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJThreadCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJThreadCell, TableViewCell)

    /**
     * @note[short] Windows: 0x157db0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJThreadCell();

    /**
     * @note[short] Android: Rebinded
     */
     GJThreadCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x3ff70
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
    TodoReturn loadFromThread(GJMessageThread* p0);

    /**
     * @note[short] Android
     */
    void onShowMembers(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onThreadOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewThread(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
};
