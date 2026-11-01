#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ListButtonPage : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ListButtonPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ListButtonPage, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x77b00
     * @note[short] Android: Rebinded
     */
    virtual  ~ListButtonPage();

    /**
     * @note[short] MacOS (ARM): 0x35b980
     * @note[short] MacOS (Intel): 0x3dcd00
     * @note[short] Windows: 0x78240
     * @note[short] iOS: 0x1ef2e8
     * @note[short] Android
     */
    static ListButtonPage* create(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset);

    /**
     * @note[short] MacOS (ARM): 0x35bc18
     * @note[short] MacOS (Intel): 0x3dcfe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ef488
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset);
};
