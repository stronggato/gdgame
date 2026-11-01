#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupPersistentItemTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPersistentItemTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPersistentItemTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupPersistentItemTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupPersistentItemTriggerPopup* create(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x602b30
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4f5468
     * @note[short] Windows: 0x5bab20
     * @note[short] iOS: 0x487760
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* object, cocos2d::CCArray* objects);
};
