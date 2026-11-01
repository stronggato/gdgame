#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class DemonInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonInfoPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a280
     * @note[short] Android: Rebinded
     */
     ~DemonInfoPopup();

    /**
     * @note[short] MacOS (ARM): 0x7988f4
     * @note[short] Windows: 0x557130
     * @note[short] iOS: 0x22f73c
     * @note[short] Android
     */
    static DemonInfoPopup* create(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x79595c
     * @note[short] MacOS (Intel): 0x8a2d80
     * @note[short] iOS: 0x22da18
     * @note[short] Android
     */
    static DemonInfoPopup* createFromString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x799438
     * @note[short] MacOS (Intel): 0x8a6880
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x230138
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x798ac4
     * @note[short] MacOS (Intel): 0x8a5ef0
     * @note[short] Windows: 0x78cb0
     * @note[short] iOS: 0x22f864
     * @note[short] Android
     */
    bool init(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x7993fc
     * @note[short] MacOS (Intel): 0x8a6850
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x2300fc
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
