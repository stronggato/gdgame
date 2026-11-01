#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SliderTouchLogic.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCObject.hpp>

class Slider : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "Slider";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(Slider, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x83de0
     * @note[short] Android: Rebinded
     */
    virtual  ~Slider();

    /**
     * @note[short] MacOS (ARM): 0x284b08
     * @note[short] MacOS (Intel): 0x2eef30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x388354
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler);

    /**
     * @note[short] MacOS (ARM): 0x284c0c
     * @note[short] MacOS (Intel): 0x2ef050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38837c
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, float scale);

    /**
     * @note[short] MacOS (ARM): 0x284d20
     * @note[short] MacOS (Intel): 0x2ef170
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3883a0
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, char const* bar, char const* groove, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] MacOS (ARM): 0x2852fc
     * @note[short] MacOS (Intel): 0x2ef810
     * @note[short] Windows: 0x84960
     * @note[short] iOS: 0x388880
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x428fac
     * @note[short] Windows: 0x849a0
     * @note[short] iOS: 0x3888c0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x84980
     * @note[short] iOS: 0x3888a0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3886b4
     * @note[short] Android
     */
    void disableSlider();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void disableTouch();

    /**
     * @note[short] MacOS (ARM): 0x285124
     * @note[short] MacOS (Intel): 0x2ef5e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3887a0
     * @note[short] Android
     */
    void enableSlider();

    /**
     * @note[short] MacOS (ARM): 0x2852e4
     * @note[short] MacOS (Intel): 0x2ef7d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x388874
     * @note[short] Android
     */
    bool getLiveDragging();

    /**
     * @note[short] MacOS (ARM): 0x5b7f0c
     * @note[short] MacOS (Intel): 0x2ef470
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    SliderThumb* getThumb();

    /**
     * @note[short] MacOS (ARM): 0x2851e0
     * @note[short] MacOS (Intel): 0x2ef6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x388858
     * @note[short] Android
     */
    float getValue();

    /**
     * @note[short] MacOS (ARM): 0x2853f4
     * @note[short] MacOS (Intel): 0x2ef970
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x388978
     * @note[short] Android
     */
    void hideGroove(bool visibility);

    /**
     * @note[short] MacOS (ARM): 0x284e30
     * @note[short] MacOS (Intel): 0x2ef290
     * @note[short] iOS: 0x3884b0
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, char const* bar, char const* groove, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] MacOS (ARM): 0x2852d4
     * @note[short] MacOS (Intel): 0x2ef7b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x388864
     * @note[short] Android
     */
    void setBarVisibility(bool visibility);

    /**
     * @note[short] MacOS (ARM): 0x2852f0
     * @note[short] MacOS (Intel): 0x2ef7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setLiveDragging(bool activateThumb);

    /**
     * @note[short] Windows: 0x84a60
     * @note[short] iOS: 0x388930
     * @note[short] Android
     */
    void setMaxOffset(float offset);

    /**
     * @note[short] MacOS (Intel): 0x71e9e0
     * @note[short] Windows: 0x849c0
     * @note[short] iOS: 0x3888e0
     * @note[short] Android
     */
    void setRotated(bool rotated);

    /**
     * @note[short] Android
     */
    void setSnap(float p0, float p1);

    /**
     * @note[short] Android
     */
    void setSnapStep(float p0);

    /**
     * @note[short] Android
     */
    void setSnapStepCalc(float p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x2850f8
     * @note[short] MacOS (Intel): 0x2ef5b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x388774
     * @note[short] Android
     */
    void setValue(float val);

    /**
     * @note[short] MacOS (ARM): 0x2845d4
     * @note[short] MacOS (Intel): 0x2ee930
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sliderBegan();

    /**
     * @note[short] MacOS (ARM): 0x2846e0
     * @note[short] MacOS (Intel): 0x2eea50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sliderEnded();

    /**
     * @note[short] MacOS (ARM): 0x284990
     * @note[short] MacOS (Intel): 0x2eed70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3882a8
     * @note[short] Android
     */
    void updateBar();
    SliderTouchLogic* m_touchLogic;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_groove;
    float m_width;
    float m_height;
    SliderDelegate* m_delegate;
    bool m_enabled;
};
