#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class GJSpecialColorSelect : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJSpecialColorSelect";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpecialColorSelect, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3bb7c0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSpecialColorSelect();

    /**
     * @note[short] MacOS (Intel): 0x700950
     * @note[short] Windows: 0x3bb890
     * @note[short] Android
     */
    static GJSpecialColorSelect* create(int id, GJSpecialColorSelectDelegate* delegate, ColorSelectType type);

    /**
     * @note[short] MacOS (Intel): 0x614930
     * @note[short] Windows: 0x3bcd60
     * @note[short] iOS: 0x24288c
     * @note[short] Android
     */
    static const char* textForColorIdx(int index);

    /**
     * @note[short] MacOS (ARM): 0x612c74
     * @note[short] MacOS (Intel): 0x7017f0
     * @note[short] Windows: 0x3bcd10
     * @note[short] iOS: 0x2429b4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x612b30
     * @note[short] MacOS (Intel): 0x7016b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ButtonSprite* getButtonByTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x612bc0
     * @note[short] MacOS (Intel): 0x701730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x242900
     * @note[short] Android
     */
    void highlightSelected(ButtonSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x611ffc
     * @note[short] MacOS (Intel): 0x700b70
     * @note[short] iOS: 0x2420d8
     * @note[short] Android
     */
    bool init(int id, GJSpecialColorSelectDelegate* delegate, ColorSelectType type);

    /**
     * @note[short] MacOS (ARM): 0x6129d0
     * @note[short] MacOS (Intel): 0x701550
     * @note[short] Windows: 0x3bccc0
     * @note[short] iOS: 0x242830
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x612a54
     * @note[short] MacOS (Intel): 0x7015d0
     * @note[short] Windows: 0x3bcbe0
     * @note[short] iOS: 0x2428b4
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);
    GJSpecialColorSelectDelegate* m_delegate;
    int m_colorID;
    cocos2d::CCArray* m_buttonSprites;
};
