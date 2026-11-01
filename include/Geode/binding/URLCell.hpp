#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class URLCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "URLCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(URLCell, TableViewCell)

    /**
     * @note[short] Windows: 0x89ba0
     * @note[short] Android: Rebinded
     */
    virtual  ~URLCell();

    /**
     * @note[short] MacOS (ARM): 0x1edac8
     * @note[short] MacOS (Intel): 0x243360
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     URLCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1edb0c
     * @note[short] MacOS (Intel): 0x2433d0
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x13ac70
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1edb74
     * @note[short] MacOS (Intel): 0x243440
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x13acc4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d9a48
     * @note[short] MacOS (Intel): 0x22d160
     * @note[short] Windows: 0x15e580
     * @note[short] iOS: 0x129fc0
     * @note[short] Android
     */
    void loadFromObject(CCURLObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1edb18
     * @note[short] MacOS (Intel): 0x2433f0
     * @note[short] Windows: 0x15e7c0
     * @note[short] iOS: 0x13ac7c
     * @note[short] Android
     */
    void onURL(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x22d330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x130000
     * @note[short] Android
     */
    void updateBGColor(int index);
    CCURLObject* m_urlObject;
};
