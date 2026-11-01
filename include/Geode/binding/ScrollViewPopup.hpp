#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ScrollViewPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ScrollViewPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ScrollViewPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x61db30
     * @note[short] Android: Rebinded
     */
    virtual  ~ScrollViewPopup();

    /**
     * @note[short] Windows: 0x61e430
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x61e480
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x61e530
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x61e580
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual float buildContent(cocos2d::CCNode* p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn addVersionHeader(cocos2d::CCNode* p0, int p1, int p2, float p3, float p4);

    /**
     * @note[short] Android
     */
    TodoReturn initPopup(cocos2d::CCArray* p0, char const* p1, char const* p2, float p3, float p4);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
