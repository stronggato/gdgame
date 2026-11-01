#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/SelectPremadeDelegate.hpp>

class SetupAdvFollowPopup : public SetupTriggerPopup, public SelectPremadeDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAdvFollowPopup();

    /**
     * @note[short] Windows: 0x595630
     * @note[short] Android
     */
    static SetupAdvFollowPopup* create(AdvancedFollowTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2894a4
     * @note[short] MacOS (Intel): 0x2f4590
     * @note[short] Windows: 0x3978d0
     * @note[short] iOS: 0x6b9f8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x598d50
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x288c4c
     * @note[short] MacOS (Intel): 0x2867a0
     * @note[short] Windows: 0x598e40
     * @note[short] iOS: 0x6b3bc
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x288ed0
     * @note[short] MacOS (Intel): 0x2f3ee0
     * @note[short] Windows: 0x599180
     * @note[short] iOS: 0x6b59c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x599440
     * @note[short] iOS: 0x6b764
     * @note[short] Android
     */
    virtual void selectPremadeClosed(SelectPremadeLayer* layer, int type);

    /**
     * @note[short] iOS: 0x68584
     * @note[short] Android
     */
    bool init(AdvancedFollowTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] iOS: 0x6b1f8
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2f3b00
     * @note[short] Android
     */
    void onPremade(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x599260
     * @note[short] iOS: 0x6b614
     * @note[short] Android
     */
    void updateMode(int mode);
};
