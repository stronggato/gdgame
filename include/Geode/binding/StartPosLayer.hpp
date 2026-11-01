#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class StartPosLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "StartPosLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StartPosLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x4548c0
     * @note[short] Android: Rebinded
     */
    virtual  ~StartPosLayer();

    /**
     * @note[short] Android
     */
    static StartPosLayer* create(StartPosObject* p0);

    /**
     * @note[short] Windows: 0x45baf0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x45bec0
     * @note[short] Android
     */
    virtual void updateInputNode(int p0, float p1);

    /**
     * @note[short] Windows: 0x45c2e0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x45c0d0
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn addModeButtons();

    /**
     * @note[short] Android
     */
    TodoReturn addSpeedButtons();

    /**
     * @note[short] Android
     */
    bool init(StartPosObject* p0);

    /**
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectSpeed(cocos2d::CCObject* sender);
};
