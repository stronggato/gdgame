#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>

class LevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] Windows: 0x459fc0
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelOptionsLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelOptionsLayer* create(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x203a68
     * @note[short] MacOS (Intel): 0x25ba60
     * @note[short] Windows: 0x45a780
     * @note[short] iOS: 0x20d51c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x203a80
     * @note[short] MacOS (Intel): 0x25ba80
     * @note[short] Windows: 0x45a7a0
     * @note[short] iOS: 0x20d534
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x2034c4
     * @note[short] MacOS (Intel): 0x25b420
     * @note[short] Windows: 0x45a0d0
     * @note[short] iOS: 0x20d044
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x203a9c
     * @note[short] MacOS (Intel): 0x25baa0
     * @note[short] Windows: 0x45a7c0
     * @note[short] iOS: 0x20d550
     * @note[short] Android
     */
    virtual void didToggle(int tag);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x203914
     * @note[short] MacOS (Intel): 0x25b8d0
     * @note[short] Windows: 0x45a5a0
     * @note[short] iOS: 0x20d410
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
    LevelSettingsObject* m_settingsObject;
};
