#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GauntletNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletNode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x2fe8e0
     * @note[short] Android: Rebinded
     */
    virtual  ~GauntletNode();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletNode();

    /**
     * @note[short] MacOS (Intel): 0x9054b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GauntletNode* create(GJMapPack* gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x4f0f84
     * @note[short] MacOS (Intel): 0x5a1f70
     * @note[short] Windows: 0x3005f0
     * @note[short] iOS: 0x2563bc
     * @note[short] Android
     */
    static std::string frameForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x4f0f54
     * @note[short] MacOS (Intel): 0x5a1f30
     * @note[short] iOS: 0x25638c
     * @note[short] Android
     */
    static std::string nameForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x4ef5c0
     * @note[short] MacOS (Intel): 0x5a0580
     * @note[short] Windows: 0x2fe940
     * @note[short] iOS: 0x1f3dd4
     * @note[short] Android
     */
    void generateNode();

    /**
     * @note[short] MacOS (ARM): 0x4ef56c
     * @note[short] MacOS (Intel): 0x5a0530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x254ab8
     * @note[short] Android
     */
    bool init(GJMapPack* gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x4ee62c
     * @note[short] MacOS (Intel): 0x59f6d0
     * @note[short] Windows: 0x3005b0
     * @note[short] iOS: 0x253d94
     * @note[short] Android
     */
    void onClaimReward();

    /**
     * @note[short] MacOS (ARM): 0x4eeb30
     * @note[short] MacOS (Intel): 0x59fb70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2541a4
     * @note[short] Android
     */
    void onUnlock();

    /**
     * @note[short] MacOS (ARM): 0x4eec9c
     * @note[short] MacOS (Intel): 0x59fcd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25430c
     * @note[short] Android
     */
    void showUnlockAnimation();
    cocos2d::CCNode* m_gauntletInfoNode;
    cocos2d::CCNode* m_rewardNode;
    cocos2d::ccColor3B m_labelColor;
    cocos2d::ccColor3B m_backgroundColor;
    GJMapPack* m_gauntlet;
    bool m_locked;
};
