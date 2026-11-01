#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class SmartTemplateCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SmartTemplateCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartTemplateCell, TableViewCell)

    /**
     * @note[short] Windows: 0x15c680
     * @note[short] Android: Rebinded
     */
    virtual  ~SmartTemplateCell();

    /**
     * @note[short] MacOS (Intel): 0x242b20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     SmartTemplateCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1ed4b8
     * @note[short] MacOS (Intel): 0x242b90
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x13a7f4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x147270
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e1098
     * @note[short] MacOS (Intel): 0x234dc0
     * @note[short] Windows: 0x89940
     * @note[short] iOS: 0x130d3c
     * @note[short] Android
     */
    void loadFromObject(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x1ed4c4
     * @note[short] MacOS (Intel): 0x242bb0
     * @note[short] Windows: 0xdb930
     * @note[short] iOS: 0x13a800
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e13ac
     * @note[short] MacOS (Intel): 0x235100
     * @note[short] iOS: 0x13104c
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJSmartTemplate* m_smartTemplate;
};
