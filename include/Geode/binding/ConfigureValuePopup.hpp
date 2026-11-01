#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ConfigureValuePopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ConfigureValuePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ConfigureValuePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x130380
     * @note[short] Android: Rebinded
     */
    virtual  ~ConfigureValuePopup();

    /**
     * @note[short] MacOS (ARM): 0x6106c0
     * @note[short] MacOS (Intel): 0x6fefa0
     * @note[short] Windows: 0x130430
     * @note[short] iOS: 0x1cc918
     * @note[short] Android
     */
    static ConfigureValuePopup* create(ConfigureValuePopupDelegate* delegate, float value, float minimum, float maximum, std::string title, std::string description, int type);

    /**
     * @note[short] MacOS (ARM): 0x6118f0
     * @note[short] MacOS (Intel): 0x7002f0
     * @note[short] Windows: 0x1315d0
     * @note[short] iOS: 0x1cd930
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x611770
     * @note[short] MacOS (Intel): 0x700120
     * @note[short] Windows: 0x1250a0
     * @note[short] iOS: 0x1cd7bc
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x61178c
     * @note[short] MacOS (Intel): 0x700160
     * @note[short] Windows: 0x131300
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23ef5c
     * @note[short] MacOS (Intel): 0x29bae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1cd63c
     * @note[short] Android
     */
    void addInfoAlertButton(std::string title, std::string description);

    /**
     * @note[short] MacOS (ARM): 0x61095c
     * @note[short] MacOS (Intel): 0x6ff2c0
     * @note[short] iOS: 0x1ccae0
     * @note[short] Android
     */
    bool init(ConfigureValuePopupDelegate* delegate, float value, float minimum, float maximum, std::string title, std::string description, int type);

    /**
     * @note[short] MacOS (Intel): 0x6ffe10
     * @note[short] Windows: 0x1310b0
     * @note[short] Android
     */
    void onArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x611350
     * @note[short] MacOS (Intel): 0x6ffd40
     * @note[short] Windows: 0x131550
     * @note[short] iOS: 0x1cd3fc
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6113d0
     * @note[short] MacOS (Intel): 0x6ffdc0
     * @note[short] Windows: 0x131060
     * @note[short] iOS: 0x1cd47c
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x6ffe70
     * @note[short] Android
     */
    void updateTextInputLabel();
    int m_type;
    float m_value;
    float m_minimum;
    float m_maximum;
    bool m_enableDelegate;
    bool m_disableTextDelegate;
    ConfigureValuePopupDelegate* m_delegate;
    CCTextInputNode* m_input;
    Slider* m_slider;
};
