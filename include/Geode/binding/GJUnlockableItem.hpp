#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJUnlockableItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJUnlockableItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUnlockableItem, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x2f7220
     * @note[short] Android: Rebinded
     */
    virtual  ~GJUnlockableItem();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJUnlockableItem();

    /**
     * @note[short] MacOS (ARM): 0x25c64
     * @note[short] MacOS (Intel): 0x2b910
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c75ec
     * @note[short] Android
     */
    static GJUnlockableItem* create();

    /**
     * @note[short] MacOS (ARM): 0x5024c
     * @note[short] MacOS (Intel): 0x566d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init();
};
