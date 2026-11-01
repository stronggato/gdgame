#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectPremadeLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectPremadeLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectPremadeLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x595580
     * @note[short] Android: Rebinded
     */
    virtual  ~SelectPremadeLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectPremadeLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43ef14
     * @note[short] Android
     */
    static SelectPremadeLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x2894e4
     * @note[short] MacOS (Intel): 0x2f4630
     * @note[short] Windows: 0x59a340
     * @note[short] iOS: 0x6ba34
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x289a2c
     * @note[short] MacOS (Intel): 0x2f4b30
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x6bed4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2899f0
     * @note[short] MacOS (Intel): 0x2f4b00
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x6be98
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x289980
     * @note[short] MacOS (Intel): 0x2f4aa0
     * @note[short] Windows: 0x44e680
     * @note[short] iOS: 0x6be28
     * @note[short] Android
     */
    void onSelectPremade(cocos2d::CCObject* sender);
    SelectPremadeDelegate* m_delegate;
};
