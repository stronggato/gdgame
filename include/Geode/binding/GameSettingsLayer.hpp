#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TabbedPopupLayer.hpp>
#include <Geode/binding/GJDropDownLayerDelegate.hpp>

class GameSettingsLayer : public TabbedPopupLayer, public GJDropDownLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "GameSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameSettingsLayer, TabbedPopupLayer)

    /**
     * @note[short] Windows: 0x2c0110
     * @note[short] Android: Rebinded
     */
    virtual  ~GameSettingsLayer();

    /**
     * @note[short] Android
     */
    static GameSettingsLayer* create(GJBaseGameLayer* p0, int p1);

    /**
     * @note[short] Windows: 0x2c55a0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2c51f0
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2c47d0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x2c4490
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Windows: 0x2c5ae0
     * @note[short] Android
     */
    virtual TodoReturn showTab(int p0);

    /**
     * @note[short] Windows: 0x2c5530
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addGVToggle(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Android
     */
    TodoReturn addSpecialContent();

    /**
     * @note[short] Android
     */
    TodoReturn addToggle(char const* p0, int p1, char const* p2, bool p3);

    /**
     * @note[short] Android
     */
    TodoReturn buildTabContent();

    /**
     * @note[short] Android
     */
    TodoReturn didChangeGV(char const* p0, bool p1);

    /**
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn nextPosition(int p0);

    /**
     * @note[short] Android
     */
    void onButtonRows(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onButtonsPerRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupTabs();

    /**
     * @note[short] Android
     */
    TodoReturn showPracticeMusicSyncUnlockInfo();

    /**
     * @note[short] Android
     */
    TodoReturn toggleVisibility(bool p0);
};
