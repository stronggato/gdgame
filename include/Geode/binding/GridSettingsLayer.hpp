#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EditorWindowPopup.hpp>

class GridSettingsLayer : public EditorWindowPopup {
public:
    static constexpr auto CLASS_NAME = "GridSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GridSettingsLayer, EditorWindowPopup)

    /**
     * @note[short] Windows: 0x2c6330
     * @note[short] Android: Rebinded
     */
    virtual  ~GridSettingsLayer();

    /**
     * @note[short] Android
     */
    static GridSettingsLayer* create(EditorUI* p0);

    /**
     * @note[short] Windows: 0x2c6ba0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x2c6b30
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Windows: 0x2c6400
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] Android
     */
    bool init(EditorUI* p0);

    /**
     * @note[short] Android
     */
    void onCycleDown(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCycleUp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshValues();
};
