#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SetupGravityModPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SetupGravityModPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGravityModPopup, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static SetupGravityModPopup* create(EffectGameObject* object, cocos2d::CCArray* objects, bool gravityTrigger);

    /**
     * @note[short] MacOS (ARM): 0x349ff4
     * @note[short] MacOS (Intel): 0x3c5bb0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x349fa8
     * @note[short] MacOS (Intel): 0x3c5b50
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x349e3c
     * @note[short] MacOS (Intel): 0x3c5970
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x349e58
     * @note[short] MacOS (Intel): 0x3c59b0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x349a04
     * @note[short] MacOS (Intel): 0x3c54c0
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (Intel): 0x3c4c30
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, bool gravityTrigger);

    /**
     * @note[short] MacOS (ARM): 0x349b04
     * @note[short] MacOS (Intel): 0x3c55e0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3434cc
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x349b60
     * @note[short] MacOS (Intel): 0x3c5640
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] Android
     */
    void updateValue();

    /**
     * @note[short] MacOS (ARM): 0x349c5c
     * @note[short] MacOS (Intel): 0x3c5770
     * @note[short] Android
     */
    void updateValueLabel();
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    cocos2d::CCLabelBMFont* m_gravityModLabel;
    Slider* m_gravityModSlider;
    float m_gravityMod;
    bool m_gravityTrigger;
    float m_minValue;
    float m_maxValue;
    CCTextInputNode* m_itemIDInput;
    int m_itemID;
    bool m_disableDelegate;
};
