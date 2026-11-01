#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SliderThumb.hpp>
#include <Geode/mapping/CCMenu.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SliderTouchLogic : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "SliderTouchLogic";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderTouchLogic, cocos2d::CCMenu)

    /**
     * @note[short] Windows: 0x842a0
     * @note[short] Android: Rebinded
     */
    virtual  ~SliderTouchLogic();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SliderTouchLogic();

    /**
     * @note[short] MacOS (ARM): 0x284208
     * @note[short] MacOS (Intel): 0x2ee530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x387e60
     * @note[short] Android
     */
    static SliderTouchLogic* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] MacOS (ARM): 0x284534
     * @note[short] MacOS (Intel): 0x2ee890
     * @note[short] Windows: 0x842e0
     * @note[short] iOS: 0x388090
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (Intel): 0x2eeac0
     * @note[short] Windows: 0x843d0
     * @note[short] iOS: 0x4d7048
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x284698
     * @note[short] MacOS (Intel): 0x2eea00
     * @note[short] Windows: 0x84390
     * @note[short] iOS: 0x388138
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x284ad0
     * @note[short] MacOS (Intel): 0x2eeef0
     * @note[short] Windows: 0x84530
     * @note[short] iOS: 0x38831c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x284354
     * @note[short] MacOS (Intel): 0x2ee670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x387fa4
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setMaxOffset(float offset);

    /**
     * @note[short] MacOS (Intel): 0x101c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setRotated(bool rotated);
    float m_unknownUnused;
    float m_length;
    SliderThumb* m_thumb;
    Slider* m_slider;
    bool m_activateThumb;
    cocos2d::CCPoint m_position;
    bool m_rotated;
};
