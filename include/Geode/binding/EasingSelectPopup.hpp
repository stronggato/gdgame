#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class EasingSelectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EasingSelectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EasingSelectPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x1747a0
     * @note[short] Android: Rebinded
     */
    virtual  ~EasingSelectPopup();

    /**
     * @note[short] Android
     */
    static EasingSelectPopup* create(SetupTriggerPopup* p0, int p1, int p2, int p3);

    /**
     * @note[short] Windows: 0x175530
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Windows: 0x175920
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x175470
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Android
     */
    bool init(SetupTriggerPopup* p0, int p1, int p2, int p3);

    /**
     * @note[short] Android
     */
    void onCell(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRestart(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshCellHighlight();

    /**
     * @note[short] Android
     */
    TodoReturn refreshRateVisual();
};
