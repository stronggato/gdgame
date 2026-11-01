#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ListButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ListButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ListButtonBar, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x77aa0
     * @note[short] Android: Rebinded
     */
    virtual  ~ListButtonBar();

    /**
     * @note[short] MacOS (ARM): 0x35b49c
     * @note[short] MacOS (Intel): 0x3dc7f0
     * @note[short] Windows: 0x77b40
     * @note[short] iOS: 0x1eee04
     * @note[short] Android
     */
    static ListButtonBar* create(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset, float arrowOffset, int arrowType);

    /**
     * @note[short] MacOS (ARM): 0x35bb90
     * @note[short] MacOS (Intel): 0x3dcf40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getPage();

    /**
     * @note[short] MacOS (ARM): 0x35bb9c
     * @note[short] MacOS (Intel): 0x3dcf60
     * @note[short] Windows: 0x78170
     * @note[short] iOS: 0x1ef410
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x35b580
     * @note[short] MacOS (Intel): 0x3dc8c0
     * @note[short] Windows: 0x77c60
     * @note[short] iOS: 0x1eeee8
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset, float arrowOffset, int arrowType);

    /**
     * @note[short] MacOS (ARM): 0x35ba88
     * @note[short] MacOS (Intel): 0x3dce10
     * @note[short] Windows: 0x78220
     * @note[short] iOS: 0x1ef3f0
     * @note[short] Android
     */
    void onLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3469a8
     * @note[short] MacOS (Intel): 0x3dceb0
     * @note[short] Windows: 0x78200
     * @note[short] iOS: 0x1ef400
     * @note[short] Android
     */
    void onRight(cocos2d::CCObject* sender);
    BoomScrollLayer* m_scrollLayer;
    cocos2d::CCArray* m_pages;
    ListButtonBarDelegate* m_delegate;
    bool m_useMoveAnimation;
};
