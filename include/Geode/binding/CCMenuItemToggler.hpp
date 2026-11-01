#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCMenuItem.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCMenuItemToggler : public cocos2d::CCMenuItem {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemToggler";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemToggler, cocos2d::CCMenuItem)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCMenuItemToggler();

    /**
     * @note[short] MacOS (ARM): 0x1adc4
     * @note[short] MacOS (Intel): 0x1f140
     * @note[short] Windows: 0x48f30
     * @note[short] Android: Rebinded
     */
    virtual  ~CCMenuItemToggler();

    /**
     * @note[short] MacOS (ARM): 0x1a574
     * @note[short] MacOS (Intel): 0x1e950
     * @note[short] Windows: 0x48f70
     * @note[short] iOS: 0x222388
     * @note[short] Android
     */
    static CCMenuItemToggler* create(cocos2d::CCNode* off, cocos2d::CCNode* on, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemToggler* createWithSize(const char* spr1, const char* spr2, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemToggler* createWithStandardSprites(cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1acf8
     * @note[short] MacOS (Intel): 0x1f090
     * @note[short] Windows: 0x49210
     * @note[short] iOS: 0x2227e8
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS (ARM): 0x1acb8
     * @note[short] MacOS (Intel): 0x1f060
     * @note[short] Windows: 0x491d0
     * @note[short] iOS: 0x2227a8
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] MacOS (ARM): 0x1ad38
     * @note[short] MacOS (Intel): 0x1f0c0
     * @note[short] Windows: 0x49250
     * @note[short] iOS: 0x222828
     * @note[short] Android
     */
    virtual void unselected();

    /**
     * @note[short] MacOS (ARM): 0x1ad78
     * @note[short] MacOS (Intel): 0x1f0f0
     * @note[short] Windows: 0x49290
     * @note[short] iOS: 0x222868
     * @note[short] Android
     */
    virtual void setEnabled(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x1ac40
     * @note[short] MacOS (Intel): 0x1efe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* activeItem();

    /**
     * @note[short] MacOS (ARM): 0x1a658
     * @note[short] MacOS (Intel): 0x1ea20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x222458
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* off, cocos2d::CCNode* on, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isOn();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isToggled();

    /**
     * @note[short] MacOS (ARM): 0x1a8b0
     * @note[short] MacOS (Intel): 0x1ec60
     * @note[short] Windows: 0x492e0
     * @note[short] iOS: 0x222608
     * @note[short] Android
     */
    void normalTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a994
     * @note[short] MacOS (Intel): 0x1ed40
     * @note[short] Windows: 0x49300
     * @note[short] iOS: 0x22261c
     * @note[short] Android
     */
    void selectedTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setClickable(bool on);

    /**
     * @note[short] MacOS (ARM): 0x1ab4c
     * @note[short] MacOS (Intel): 0x1eef0
     * @note[short] Windows: 0x491a0
     * @note[short] iOS: 0x222708
     * @note[short] Android
     */
    void setSizeMult(float mult);

    /**
     * @note[short] Android
     */
    void setSpriteColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x1aa74
     * @note[short] MacOS (Intel): 0x1ee20
     * @note[short] Windows: 0x49320
     * @note[short] iOS: 0x222630
     * @note[short] Android
     */
    void toggle(bool on);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void toggleWithCallback(bool on);

    /**
Update the sizing of this toggle's image

 If you for example have a `ButtonSprite` on this toggle and change the

 text, you need to call `updateSprite` afterwards to fix the toggle's

 content size

 @note Geode additi     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateSprite();
    CCMenuItemSpriteExtra* m_offButton;
    CCMenuItemSpriteExtra* m_onButton;
    bool m_toggled;
    bool m_notClickable;
};
