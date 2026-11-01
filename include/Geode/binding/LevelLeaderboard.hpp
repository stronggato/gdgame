#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/LeaderboardManagerDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelLeaderboard : public FLAlertLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LevelLeaderboard";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelLeaderboard, FLAlertLayer)

    /**
     * @note[short] Windows: 0x4250a0
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelLeaderboard();

    /**
     * @note[short] MacOS (Intel): 0x3c6480
     * @note[short] Windows: 0x4251e0
     * @note[short] iOS: 0x41fb0
     * @note[short] Android
     */
    static LevelLeaderboard* create(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x34c584
     * @note[short] MacOS (Intel): 0x3c84c0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x2ebc50
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x34c508
     * @note[short] MacOS (Intel): 0x3c8450
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x2ebbd4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9ed50
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x34c78c
     * @note[short] MacOS (Intel): 0x3c8700
     * @note[short] Windows: 0x427690
     * @note[short] iOS: 0x2ebd90
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* scores, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x34c8d8
     * @note[short] MacOS (Intel): 0x3c8840
     * @note[short] Windows: 0x427730
     * @note[short] iOS: 0x2ebe34
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x34c180
     * @note[short] MacOS (Intel): 0x3c80a0
     * @note[short] Windows: 0x426890
     * @note[short] iOS: 0x85ee4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x34c378
     * @note[short] MacOS (Intel): 0x3c82a0
     * @note[short] Windows: 0x426ed0
     * @note[short] iOS: 0x2eba90
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x34c384
     * @note[short] MacOS (Intel): 0x3c82d0
     * @note[short] Windows: 0x426ee0
     * @note[short] iOS: 0x2eba9c
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual TodoReturn ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x34bff0
     * @note[short] MacOS (Intel): 0x3c7f50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2eb758
     * @note[short] Android
     */
    void deleteLocalScores();

    /**
     * @note[short] MacOS (ARM): 0x34c218
     * @note[short] MacOS (Intel): 0x3c8120
     * @note[short] Windows: 0x426a10
     * @note[short] iOS: 0x2eb944
     * @note[short] Android
     */
    cocos2d::CCArray* getLocalScores();

    /**
     * @note[short] MacOS (ARM): 0x34b7d4
     * @note[short] MacOS (Intel): 0x3c7740
     * @note[short] iOS: 0x2eb078
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(std::string frame, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, cocos2d::CCPoint position, int button);

    /**
     * @note[short] MacOS (ARM): 0x34a8bc
     * @note[short] MacOS (Intel): 0x3c66c0
     * @note[short] Windows: 0x425330
     * @note[short] iOS: 0x10dffc
     * @note[short] Android
     */
    bool init(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x34c5bc
     * @note[short] MacOS (Intel): 0x3c8500
     * @note[short] iOS: 0x2ebc88
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x34bc54
     * @note[short] MacOS (Intel): 0x3c7ba0
     * @note[short] Windows: 0x426be0
     * @note[short] iOS: 0x2eb454
     * @note[short] Android
     */
    void loadScores();

    /**
     * @note[short] MacOS (ARM): 0x34b9ac
     * @note[short] MacOS (Intel): 0x3c7910
     * @note[short] Windows: 0x138190
     * @note[short] iOS: 0x2eb1d0
     * @note[short] Android
     */
    void onChangeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34bbe0
     * @note[short] MacOS (Intel): 0x3c7b40
     * @note[short] iOS: 0x2eb3e0
     * @note[short] Android
     */
    void onChangeType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34bad4
     * @note[short] MacOS (Intel): 0x3c7a30
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x2eb2d4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34b9fc
     * @note[short] MacOS (Intel): 0x1df6e0
     * @note[short] iOS: 0x2eb220
     * @note[short] Android
     */
    void onDeleteLocalScores(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34bb10
     * @note[short] MacOS (Intel): 0x3c7a60
     * @note[short] Windows: 0x24f3a0
     * @note[short] iOS: 0xc7260
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34c42c
     * @note[short] MacOS (Intel): 0x3c8370
     * @note[short] iOS: 0x2ebaf8
     * @note[short] Android
     */
    void reloadLeaderboard(LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x34be5c
     * @note[short] MacOS (Intel): 0x3c7da0
     * @note[short] iOS: 0x2eb5c4
     * @note[short] Android
     */
    void setupLeaderboard(cocos2d::CCArray* scores);
    GJGameLevel* m_level;
    LevelLeaderboardType m_type;
    LevelLeaderboardMode m_mode;
    cocos2d::CCArray* m_scores;
    GJCommentListLayer* m_list;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    CCMenuItemSpriteExtra* m_refreshBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_pointsBtn;
};
