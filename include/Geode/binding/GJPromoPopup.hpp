#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class GJPromoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPromoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPromoPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a280
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPromoPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJPromoPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJPromoPopup* create(std::string filename);

    /**
     * @note[short] MacOS (Intel): 0x2a4730
     * @note[short] Windows: 0x3a8410
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x3906c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9ed50
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (Intel): 0xc56d0
     * @note[short] Windows: 0x2fa990
     * @note[short] iOS: 0x37ddc8
     * @note[short] Android
     */
    bool init(std::string filename);

    /**
     * @note[short] MacOS (ARM): 0x246fd8
     * @note[short] MacOS (Intel): 0x2a46d0
     * @note[short] Windows: 0x390660
     * @note[short] iOS: 0x37e008
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    std::string m_promoFrame;
};
