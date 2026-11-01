#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class TOSPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TOSPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TOSPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x397100
     * @note[short] Android: Rebinded
     */
    virtual  ~TOSPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TOSPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TOSPopup* create();

    /**
     * @note[short] MacOS (ARM): 0x240448
     * @note[short] MacOS (Intel): 0x29d150
     * @note[short] Windows: 0x3a67d0
     * @note[short] iOS: 0x37c504
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x240a98
     * @note[short] MacOS (Intel): 0x29d7d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37cb18
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2409fc
     * @note[short] MacOS (Intel): 0x29d740
     * @note[short] iOS: 0x37ca7c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x240a74
     * @note[short] MacOS (Intel): 0x29d7b0
     * @note[short] iOS: 0x37caf4
     * @note[short] Android
     */
    void onPrivacy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x240a50
     * @note[short] MacOS (Intel): 0x29d790
     * @note[short] iOS: 0x37cad0
     * @note[short] Android
     */
    void onTOS(cocos2d::CCObject* sender);
};
