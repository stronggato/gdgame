#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class NumberInputLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "NumberInputLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NumberInputLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x49dfb0
     * @note[short] Android: Rebinded
     */
    virtual  ~NumberInputLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NumberInputLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43ef14
     * @note[short] Android
     */
    static NumberInputLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x3f238c
     * @note[short] MacOS (Intel): 0x488e50
     * @note[short] Windows: 0x49e060
     * @note[short] iOS: 0x11cc6c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3f31d0
     * @note[short] MacOS (Intel): 0x489d50
     * @note[short] Windows: 0x5b940
     * @note[short] iOS: 0x11d558
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (Intel): 0x292200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11d2cc
     * @note[short] Android
     */
    void deleteLast();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11d34c
     * @note[short] Android
     */
    void inputNumber(int num);

    /**
     * @note[short] MacOS (ARM): 0x3ab4d0
     * @note[short] MacOS (Intel): 0x4352a0
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x11d110
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onDone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x893c90
     * @note[short] Windows: 0x213700
     * @note[short] iOS: 0x11d14c
     * @note[short] Android
     */
    void onNumber(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void updateNumberState();
    cocos2d::CCLabelBMFont* m_inputLabel;
    CCMenuItemSpriteExtra* m_okButton;
    int m_minimum;
    int m_maximum;
    std::string m_inputString;
    NumberInputDelegate* m_delegate;
};
