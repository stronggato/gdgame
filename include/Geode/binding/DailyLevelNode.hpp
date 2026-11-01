#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCPoint.hpp>

class DailyLevelNode : public cocos2d::CCNode, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "DailyLevelNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DailyLevelNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24fb98
     * @note[short] Android: Out of line
     */
     DailyLevelNode();

    /**
     * @note[short] MacOS (ARM): 0x1c617c
     * @note[short] MacOS (Intel): 0x216c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24ec78
     * @note[short] Android: Rebinded
     */
     ~DailyLevelNode();

    /**
     * @note[short] MacOS (ARM): 0x1c5aa4
     * @note[short] MacOS (Intel): 0x216570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24e6f4
     * @note[short] Android
     */
    static DailyLevelNode* create(GJGameLevel* level, DailyLevelPage* page, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x1c717c
     * @note[short] MacOS (Intel): 0x217bc0
     * @note[short] Windows: 0x172730
     * @note[short] iOS: 0x24fac8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1c6294
     * @note[short] MacOS (Intel): 0x216d90
     * @note[short] Windows: 0x171650
     * @note[short] iOS: 0x24ecec
     * @note[short] Android
     */
    bool init(GJGameLevel* level, DailyLevelPage* page, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x1c6e90
     * @note[short] MacOS (Intel): 0x217900
     * @note[short] iOS: 0x24f8a0
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c6f94
     * @note[short] MacOS (Intel): 0x217a00
     * @note[short] iOS: 0x24f998
     * @note[short] Android
     */
    void onSkipLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c5634
     * @note[short] MacOS (Intel): 0x2160e0
     * @note[short] Windows: 0x172360
     * @note[short] iOS: 0x24e314
     * @note[short] Android
     */
    void showSkipButton();

    /**
     * @note[short] MacOS (ARM): 0x1c54d8
     * @note[short] MacOS (Intel): 0x215f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateTimeLabel(std::string text);
    GJGameLevel* m_level;
    DailyLevelPage* m_page;
    cocos2d::CCLabelBMFont* m_timeLabel;
    cocos2d::CCPoint m_unkPoint;
    CCMenuItemSpriteExtra* m_skipButton;
    bool m_unkBool;
    bool m_needsDownloading;
};
