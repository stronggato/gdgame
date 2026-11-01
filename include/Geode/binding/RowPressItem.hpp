#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <Geode/mapping/CCObject.hpp>

class RowPressItem : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "RowPressItem";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RowPressItem, CCMenuItemSpriteExtra)

    /**
     * @note[short] Windows: 0x157f10
     * @note[short] Android: Rebinded
     */
    virtual  ~RowPressItem();

    /**
     * @note[short] Android
     */
    static RowPressItem* create(cocos2d::CCNode* p0, cocos2d::CCObject* p1, cocos2d::SEL_MenuHandler p2);

    /**
     * @note[short] Windows: 0x157f80
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] Windows: 0x157fc0
     * @note[short] Android
     */
    virtual void unselected();
};
