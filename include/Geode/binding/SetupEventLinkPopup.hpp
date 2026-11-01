#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/set.hpp>

class SetupEventLinkPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEventLinkPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEventLinkPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5f7d30
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupEventLinkPopup();

    /**
     * @note[short] Android
     */
    static SetupEventLinkPopup* create(EventLinkTrigger* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    bool init(EventLinkTrigger* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f2de4
     * @note[short] MacOS (Intel): 0x5a4020
     * @note[short] iOS: 0x48564c
     * @note[short] Android
     */
    void onSelectEvent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f2fd4
     * @note[short] MacOS (Intel): 0x5a4250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x485798
     * @note[short] Android
     */
    void updateEventIDs(std::set<int>& eventIDs);
};
