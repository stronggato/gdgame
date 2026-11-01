#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class EditButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "EditButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditButtonBar, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x175960
     * @note[short] Android: Rebinded
     */
    virtual  ~EditButtonBar();

    /**
     * @note[short] MacOS (ARM): 0x5cba78
     * @note[short] MacOS (Intel): 0x6b2080
     * @note[short] iOS: 0x4a0624
     * @note[short] Android
     */
    static EditButtonBar* create(cocos2d::CCArray* objects, cocos2d::CCPoint position, int tab, bool hasCreateItems, int columns, int rows);

    /**
     * @note[short] MacOS (ARM): 0x5cc704
     * @note[short] MacOS (Intel): 0x6b2de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a11e8
     * @note[short] Android
     */
    int getPage();

    /**
     * @note[short] MacOS (ARM): 0x5cc710
     * @note[short] MacOS (Intel): 0x6b2e00
     * @note[short] Windows: 0x176570
     * @note[short] iOS: 0x4a11f4
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x5cbb74
     * @note[short] MacOS (Intel): 0x6b2170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a06ec
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* objects, cocos2d::CCPoint position, int tab, bool hasCreateItems, int columns, int rows);

    /**
     * @note[short] Windows: 0x110a30
     * @note[short] Android
     */
    void loadFromItems(cocos2d::CCArray* objects, int rows, int columns, bool keepPage);

    /**
     * @note[short] Android
     */
    void onDotClicked(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35ba88
     * @note[short] iOS: 0x1ef3f0
     * @note[short] Android
     */
    void onLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5cc310
     * @note[short] MacOS (Intel): 0x583120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a0e68
     * @note[short] Android
     */
    void reloadItems(int rowCount, int columnCount);

    /**
     * @note[short] Android
     */
    TodoReturn updateDotState();
    cocos2d::CCPoint m_position;
    int m_tabIndex;
    bool m_hasCreateItems;
    cocos2d::CCArray* m_buttonArray;
    BoomScrollLayer* m_scrollLayer;
    cocos2d::CCArray* m_pagesArray;
};
