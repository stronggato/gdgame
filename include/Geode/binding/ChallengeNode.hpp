#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ChallengesPage.hpp>
#include <Geode/binding/GJChallengeItem.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ChallengeNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ChallengeNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ChallengeNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x371bc
     * @note[short] Android: Out of line
     */
     ChallengeNode();

    /**
     * @note[short] MacOS (ARM): 0x312924
     * @note[short] MacOS (Intel): 0x387e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36424
     * @note[short] Android: Rebinded
     */
     ~ChallengeNode();

    /**
     * @note[short] MacOS (ARM): 0x31245c
     * @note[short] MacOS (Intel): 0x387940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36074
     * @note[short] Android
     */
    static ChallengeNode* create(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x3129dc
     * @note[short] MacOS (Intel): 0x387f10
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x36478
     * @note[short] Android
     */
    bool init(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x3136a0
     * @note[short] MacOS (Intel): 0x388b10
     * @note[short] iOS: 0x370dc
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x312530
     * @note[short] MacOS (Intel): 0x387a10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateTimeLabel(std::string text);
    ChallengesPage* m_challengesPage;
    GJChallengeItem* m_challengeItem;
    cocos2d::CCPoint m_unkPoint;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    bool m_unloaded;
};
