#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCMenu.hpp>

class CustomSFXRowMenu : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "CustomSFXRowMenu";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSFXRowMenu, cocos2d::CCMenu)

    /**
     * @note[short] Windows: 0x15e9e0
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomSFXRowMenu();

    /**
     * @note[short] Android
     */
    static CustomSFXRowMenu* create();

    /**
     * @note[short] Windows: 0x15ea20
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
};
