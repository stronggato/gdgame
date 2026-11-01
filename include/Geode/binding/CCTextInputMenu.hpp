#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CCTextInputMenu : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CCTextInputMenu";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCTextInputMenu, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x4d250
     * @note[short] Android: Rebinded
     */
    virtual  ~CCTextInputMenu();

    /**
     * @note[short] Android
     */
    static CCTextInputMenu* create(CCTextInputNode* p0, cocos2d::CCPoint p1);

    /**
     * @note[short] Windows: 0x4db60
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x4dad0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x4dbd0
     * @note[short] Android
     */
    virtual bool rightClick(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn closeDeferred(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn closeNextFrame();

    /**
     * @note[short] Android
     */
    bool init(CCTextInputNode* p0, cocos2d::CCPoint p1);

    /**
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);
};
