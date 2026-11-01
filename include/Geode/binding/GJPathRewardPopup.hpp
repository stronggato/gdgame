#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class GJPathRewardPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPathRewardPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathRewardPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a280
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPathRewardPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJPathRewardPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36a690
     * @note[short] Android
     */
    static GJPathRewardPopup* create(int path);

    /**
     * @note[short] MacOS (ARM): 0x283b84
     * @note[short] MacOS (Intel): 0x2eddc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3008e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x283b1c
     * @note[short] MacOS (Intel): 0x2edd60
     * @note[short] Windows: 0x390660
     * @note[short] iOS: 0x460400
     * @note[short] Android
     */
    void closePopup();

    /**
     * @note[short] MacOS (ARM): 0x283524
     * @note[short] MacOS (Intel): 0x2ed7a0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1d84b8
     * @note[short] Android
     */
    bool init(int path);

    /**
     * @note[short] MacOS (ARM): 0x2839c0
     * @note[short] MacOS (Intel): 0x2edc30
     * @note[short] Windows: 0x3957a0
     * @note[short] iOS: 0x4602f0
     * @note[short] Android
     */
    void onClaim(cocos2d::CCObject* sender);
    int m_pathNumber;
};
