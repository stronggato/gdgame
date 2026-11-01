#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetIDPopup.hpp>
#include <Geode/binding/GJSpecialColorSelectDelegate.hpp>

class SetColorIDPopup : public SetIDPopup, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "SetColorIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetColorIDPopup, SetIDPopup)

    /**
     * @note[short] Windows: 0x396f40
     * @note[short] Android: Rebinded
     */
    virtual  ~SetColorIDPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37f464
     * @note[short] Android: Out of line
     */
     SetColorIDPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetColorIDPopup* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x23ce48
     * @note[short] MacOS (Intel): 0x299700
     * @note[short] Windows: 0x3a3ae0
     * @note[short] iOS: 0x379b7c
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* select, int id);

    /**
     * @note[short] MacOS (ARM): 0x23cb8c
     * @note[short] MacOS (Intel): 0x214820
     * @note[short] Windows: 0x3a3890
     * @note[short] iOS: 0x379938
     * @note[short] Android
     */
    bool init(int id);

    /**
     * @note[short] MacOS (Intel): 0x2996b0
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);
};
