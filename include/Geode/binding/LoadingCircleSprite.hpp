#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>

class LoadingCircleSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "LoadingCircleSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircleSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x785c0
     * @note[short] Android: Rebinded
     */
    virtual  ~LoadingCircleSprite();

    /**
Create a Loading Circle Sprite with a spinning action

 @param spinSpeed A speed modifier, higher is faster and lower is slow     * @note[short] MacOS (ARM): 0x41c334
     * @note[short] MacOS (Intel): 0x4b7f10
     * @note[short] Windows: 0x78a30
     * @note[short] iOS: 0x43f2b8
     * @note[short] Android
     */
    static LoadingCircleSprite* create(float spinSpeed);

    /**
     * @note[short] MacOS (ARM): 0x41c4b0
     * @note[short] MacOS (Intel): 0x4b80b0
     * @note[short] Windows: 0x78b30
     * @note[short] iOS: 0x43f3e4
     * @note[short] Android
     */
    cocos2d::CCAction* fadeInCircle(bool resetOpacity, float duration, float opacity);

    /**
     * @note[short] MacOS (ARM): 0x41c53c
     * @note[short] MacOS (Intel): 0x4b8130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43f470
     * @note[short] Android
     */
    void hideCircle();

    /**
     * @note[short] MacOS (ARM): 0x41c418
     * @note[short] MacOS (Intel): 0x4b7ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43f350
     * @note[short] Android
     */
    bool init(float spinSpeed);
};
