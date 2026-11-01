#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>

class LoadingCircle : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "LoadingCircle";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircle, cocos2d::CCLayerColor)

    /**
     * @note[short] Windows: 0x78510
     * @note[short] Android: Rebinded
     */
    virtual  ~LoadingCircle();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LoadingCircle();

    /**
     * @note[short] MacOS (ARM): 0x41bf80
     * @note[short] MacOS (Intel): 0x4b7af0
     * @note[short] Windows: 0x78620
     * @note[short] iOS: 0x43ef14
     * @note[short] Android
     */
    static LoadingCircle* create();

    /**
     * @note[short] MacOS (ARM): 0x41c07c
     * @note[short] MacOS (Intel): 0x4b7c60
     * @note[short] Windows: 0x78720
     * @note[short] iOS: 0x43f000
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x41c2e8
     * @note[short] MacOS (Intel): 0x4b7eb0
     * @note[short] Windows: 0x789b0
     * @note[short] iOS: 0x43f26c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x41c2fc
     * @note[short] MacOS (Intel): 0x4b7ed0
     * @note[short] Windows: 0x789d0
     * @note[short] iOS: 0x43f280
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x41c234
     * @note[short] MacOS (Intel): 0x4b7e20
     * @note[short] Windows: 0x78910
     * @note[short] iOS: 0x43f1b4
     * @note[short] Android
     */
    void fadeAndRemove();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setFade(bool fade);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setParentLayer(cocos2d::CCLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x41c138
     * @note[short] MacOS (Intel): 0x4b7d30
     * @note[short] Windows: 0x78800
     * @note[short] iOS: 0x43f0bc
     * @note[short] Android
     */
    void show();
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCLayer* m_parentLayer;
    bool m_fade;
};
