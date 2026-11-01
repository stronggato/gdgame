#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class ConfigureHSVWidget : public cocos2d::CCNode, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ConfigureHSVWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ConfigureHSVWidget, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x12df70
     * @note[short] Android: Rebinded
     */
    virtual  ~ConfigureHSVWidget();

    /**
     * @note[short] MacOS (Intel): 0x41c700
     * @note[short] Android
     */
    static ConfigureHSVWidget* create(cocos2d::ccHSVValue hsv, bool noBackground, bool addInputs);

    /**
     * @note[short] MacOS (ARM): 0x396480
     * @note[short] MacOS (Intel): 0x41e7d0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x12453c
     * @note[short] Android
     */
    static cocos2d::ccHSVValue getHSV(GameObject* object, cocos2d::CCArray* objects, int mode);

    /**
     * @note[short] MacOS (Intel): 0x41e1d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (Intel): 0x641d20
     * @note[short] Windows: 0x1250a0
     * @note[short] iOS: 0x158480
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3961e4
     * @note[short] MacOS (Intel): 0x41e500
     * @note[short] Windows: 0x12f2b0
     * @note[short] iOS: 0x12433c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x12f1c0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] Windows: 0x12f200
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x395354
     * @note[short] MacOS (Intel): 0x41d5d0
     * @note[short] iOS: 0x12385c
     * @note[short] Android
     */
    void createTextInputNode(cocos2d::CCPoint position, int tag);

    /**
     * @note[short] Android
     */
    TodoReturn hostPopup();

    /**
     * @note[short] MacOS (ARM): 0x394a90
     * @note[short] MacOS (Intel): 0x41ccb0
     * @note[short] iOS: 0x123040
     * @note[short] Android
     */
    bool init(cocos2d::ccHSVValue hsv, bool noBackground, bool addInputs);

    /**
     * @note[short] MacOS (ARM): 0x394814
     * @note[short] MacOS (Intel): 0x41c9d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onClose();

    /**
     * @note[short] MacOS (Intel): 0x41da60
     * @note[short] Windows: 0x12f8b0
     * @note[short] iOS: 0x123cb0
     * @note[short] Android
     */
    void onResetHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x395734
     * @note[short] MacOS (Intel): 0x41d980
     * @note[short] iOS: 0x123bc8
     * @note[short] Android
     */
    void onToggleSConst(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3957a8
     * @note[short] MacOS (Intel): 0x41d9f0
     * @note[short] iOS: 0x123c3c
     * @note[short] Android
     */
    void onToggleVConst(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setBaseColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x3955b0
     * @note[short] MacOS (Intel): 0x41d800
     * @note[short] Windows: 0x12f690
     * @note[short] iOS: 0x123a94
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateColorPreview();

    /**
     * @note[short] MacOS (ARM): 0x3958d4
     * @note[short] MacOS (Intel): 0x41db30
     * @note[short] Windows: 0x12f940
     * @note[short] iOS: 0x123d30
     * @note[short] Android
     */
    void updateLabels();

    /**
     * @note[short] MacOS (ARM): 0x395e10
     * @note[short] MacOS (Intel): 0x41e0f0
     * @note[short] iOS: 0x1240c8
     * @note[short] Android
     */
    void updateSliders();
    cocos2d::CCLabelBMFont* m_hueLabel;
    cocos2d::CCLabelBMFont* m_saturationLabel;
    cocos2d::CCLabelBMFont* m_brightnessLabel;
    Slider* m_hueSlider;
    Slider* m_saturationSlider;
    Slider* m_brightnessSlider;
    cocos2d::ccHSVValue m_hsv;
    bool m_mixed;
    HSVWidgetDelegate* m_delegate;
    bool m_addInputs;
    bool m_updating;
    cocos2d::CCDictionary* m_inputs;
};
