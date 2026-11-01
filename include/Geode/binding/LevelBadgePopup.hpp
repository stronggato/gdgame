#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>

class LevelBadgePopup : public FLAlertLayer, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelBadgePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelBadgePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xd24f0
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelBadgePopup();

    /**
     * @note[short] Android
     */
    static LevelBadgePopup* create(int p0, bool p1);

    /**
     * @note[short] Windows: 0xe58a0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xe5940
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0xe5130
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] Windows: 0xe5360
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn buildCell(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    bool init(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
