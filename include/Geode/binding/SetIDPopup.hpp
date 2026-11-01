#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SetIDPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SetIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetIDPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x396e40
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetIDPopup();

    /**
     * @note[short] Windows: 0x3a2880
     * @note[short] Android: Rebinded
     */
     ~SetIDPopup();

    /**
     * @note[short] MacOS (ARM): 0x23b680
     * @note[short] MacOS (Intel): 0x297cd0
     * @note[short] Windows: 0x3a2920
     * @note[short] iOS: 0x378b24
     * @note[short] Android
     */
    static SetIDPopup* create(int current, int begin, int end, std::string title, std::string button, bool resetButton, int defaultValue, float offset, bool numberInput, bool arrows);

    /**
     * @note[short] MacOS (ARM): 0x23c684
     * @note[short] MacOS (Intel): 0x298d90
     * @note[short] Windows: 0x3a3880
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x23c600
     * @note[short] MacOS (Intel): 0x298d10
     * @note[short] Windows: 0x3a36a0
     * @note[short] iOS: 0x379804
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x23c4b0
     * @note[short] MacOS (Intel): 0x298b90
     * @note[short] Windows: 0x1250a0
     * @note[short] iOS: 0x379748
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23c4cc
     * @note[short] MacOS (Intel): 0x298bd0
     * @note[short] Windows: 0x3a34b0
     * @note[short] iOS: 0x379764
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23c5fc
     * @note[short] MacOS (Intel): 0x298d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x379800
     * @note[short] Android
     */
    virtual void valueChanged();

    /**
     * @note[short] MacOS (ARM): 0x23b948
     * @note[short] MacOS (Intel): 0x298010
     * @note[short] Windows: 0xc1130
     * @note[short] iOS: 0x378d18
     * @note[short] Android
     */
    bool init(int current, int begin, int end, std::string title, std::string button, bool resetButton, int defaultValue, float offset, bool numberInput, bool arrows);

    /**
     * @note[short] MacOS (Intel): 0x2989b0
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23c1e0
     * @note[short] MacOS (Intel): 0x2988b0
     * @note[short] iOS: 0x379580
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23c284
     * @note[short] MacOS (Intel): 0x298960
     * @note[short] iOS: 0x379624
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23c278
     * @note[short] MacOS (Intel): 0x298940
     * @note[short] iOS: 0x379618
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x298a50
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_inputNode;
    int m_value;
    bool m_disableDelegate;
    bool m_cancelled;
    int m_minimum;
    int m_maximum;
    int m_default;
    SetIDPopupDelegate* m_delegate;
};
