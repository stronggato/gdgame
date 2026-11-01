#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SetupOptionsTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOptionsTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOptionsTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupOptionsTriggerPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupOptionsTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x18b6b4
     * @note[short] MacOS (Intel): 0x1d7380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x55738
     * @note[short] Android
     */
    static SetupOptionsTriggerPopup* create(GameOptionsTrigger* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5d2440
     * @note[short] MacOS (Intel): 0x6b90f0
     * @note[short] Windows: 0x5c8480
     * @note[short] iOS: 0x4924d8
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x549a50
     * @note[short] MacOS (Intel): 0x6b8ea0
     * @note[short] Windows: 0x5c8210
     * @note[short] iOS: 0x4922b0
     * @note[short] Android
     */
    void addOption(int property, std::string label);

    /**
     * @note[short] Windows: 0x5c7a20
     * @note[short] iOS: 0x491c7c
     * @note[short] Android
     */
    bool init(GameOptionsTrigger* object, cocos2d::CCArray* objects);
    cocos2d::CCPoint m_togglePosition;
    int m_togglePage;
};
