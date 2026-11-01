#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCMenu.hpp>

class DpadMenu : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "DpadMenu";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DpadMenu, cocos2d::CCMenu)

    /**
     * @note[short] Windows: 0x1f13c0
     * @note[short] Android: Rebinded
     */
    virtual  ~DpadMenu();

    /**
     * @note[short] Windows: 0x1f1150
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x1f1240
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
};
