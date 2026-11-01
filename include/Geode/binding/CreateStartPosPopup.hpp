#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class CreateStartPosPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CreateStartPosPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateStartPosPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x4d3560
     * @note[short] Android: Rebinded
     */
    virtual  ~CreateStartPosPopup();

    /**
     * @note[short] Android
     */
    static CreateStartPosPopup* create();

    /**
     * @note[short] Windows: 0x4d8d30
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x4d9970
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4d92b0
     * @note[short] Android
     */
    virtual void updateInputNode(int p0, float p1);

    /**
     * @note[short] Android
     */
    void onCreate(cocos2d::CCObject* sender);
};
