#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class AchievementNotifier : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementNotifier";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementNotifier, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3d4d0
     * @note[short] Android: Rebinded
     */
    virtual  ~AchievementNotifier();

    /**
     * @note[short] MacOS (ARM): 0x79ad90
     * @note[short] MacOS (Intel): 0x8a8480
     * @note[short] Windows: 0x3d560
     * @note[short] iOS: 0x2b0ff0
     * @note[short] Android
     */
    static AchievementNotifier* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x79ae0c
     * @note[short] MacOS (Intel): 0x8a8510
     * @note[short] Windows: 0x3d610
     * @note[short] iOS: 0x2b1060
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x79afa4
     * @note[short] MacOS (Intel): 0x8a86a0
     * @note[short] Windows: 0x3d880
     * @note[short] iOS: 0x2b11e0
     * @note[short] Android
     */
    void achievementDisplayFinished();

    /**
     * @note[short] MacOS (ARM): 0x79ae38
     * @note[short] MacOS (Intel): 0x8a8540
     * @note[short] Windows: 0x3d640
     * @note[short] iOS: 0x2b108c
     * @note[short] Android
     */
    void notifyAchievement(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x79ae8c
     * @note[short] MacOS (Intel): 0x8a8590
     * @note[short] iOS: 0xae908
     * @note[short] Android
     */
    void showNextAchievement();

    /**
     * @note[short] MacOS (ARM): 0x79afe8
     * @note[short] MacOS (Intel): 0x8a86f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b1224
     * @note[short] Android
     */
    void willSwitchToScene(cocos2d::CCScene* scene);
    cocos2d::CCScene* m_nextScene;
    cocos2d::CCArray* m_achievementBarArray;
    AchievementBar* m_activeAchievementBar;
};
