#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetItemIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetItemIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetItemIDLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x594130
     * @note[short] Android: Rebinded
     */
    virtual  ~SetItemIDLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetItemIDLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetItemIDLayer* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5cd98
     * @note[short] MacOS (Intel): 0x63d50
     * @note[short] Windows: 0x594d10
     * @note[short] iOS: 0x499c48
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x594b60
     * @note[short] iOS: 0x499b14
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5cb5c
     * @note[short] MacOS (Intel): 0x63ae0
     * @note[short] Windows: 0x5949c0
     * @note[short] iOS: 0x499a0c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5cd48
     * @note[short] MacOS (Intel): 0x63d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x499bf8
     * @note[short] Android
     */
    void updateEditorLabel();
};
