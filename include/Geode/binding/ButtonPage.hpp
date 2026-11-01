#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ButtonPage : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ButtonPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ButtonPage, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x77b00
     * @note[short] Android: Rebinded
     */
    virtual  ~ButtonPage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ButtonPage();

    /**
     * @note[short] MacOS (ARM): 0x5cc32c
     * @note[short] MacOS (Intel): 0x6b2a10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a0e84
     * @note[short] Android
     */
    static ButtonPage* create(cocos2d::CCArray* objects, cocos2d::CCPoint position, int rows, float spacing);

    /**
     * @note[short] MacOS (ARM): 0x5cc754
     * @note[short] MacOS (Intel): 0x6b2e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a1238
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* objects, cocos2d::CCPoint position, int rows, float spacing);
};
