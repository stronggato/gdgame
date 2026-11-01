#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCObject.hpp>

class CCCountdown : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCCountdown";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCountdown, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x3d9868
     * @note[short] MacOS (Intel): 0x8abde0
     * @note[short] Android
     */
    static CCCountdown* create();

    /**
     * @note[short] MacOS (ARM): 0x79e26c
     * @note[short] MacOS (Intel): 0x8abe80
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x79e620
     * @note[short] MacOS (Intel): 0x8ac240
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x79e4f8
     * @note[short] MacOS (Intel): 0x8ac130
     * @note[short] Android
     */
    void lapFinished();

    /**
     * @note[short] MacOS (ARM): 0x79e48c
     * @note[short] MacOS (Intel): 0x6007b0
     * @note[short] Android
     */
    void startTimerWithSeconds(float seconds, cocos2d::SEL_CallFunc selector, cocos2d::CCNode* target);
    cocos2d::CCProgressTimer* m_progressTimer;
    float m_unk260;
    int m_seconds;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    cocos2d::SEL_CallFunc m_callbackSelector;
    cocos2d::CCNode* m_targetNode;
};
