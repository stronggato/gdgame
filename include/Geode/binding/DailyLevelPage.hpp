#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GJDailyLevelDelegate.hpp>
#include <Geode/binding/LevelDownloadDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class DailyLevelPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJDailyLevelDelegate, public LevelDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "DailyLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DailyLevelPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x16db70
     * @note[short] Android: Rebinded
     */
    virtual  ~DailyLevelPage();

    /**
     * @note[short] iOS: 0x3798c4
     * @note[short] Android
     */
    static DailyLevelPage* create(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x1c5e1c
     * @note[short] MacOS (Intel): 0x2168f0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x24e97c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1c5d80
     * @note[short] MacOS (Intel): 0x216860
     * @note[short] Windows: 0x9ef30
     * @note[short] iOS: 0x24e970
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9ed50
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1c5d78
     * @note[short] MacOS (Intel): 0x216840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24e968
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1c529c
     * @note[short] MacOS (Intel): 0x215d20
     * @note[short] Windows: 0x16f350
     * @note[short] iOS: 0x24e038
     * @note[short] Android
     */
    virtual void dailyStatusFinished(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x1c56a8
     * @note[short] MacOS (Intel): 0x216170
     * @note[short] Windows: 0x16f660
     * @note[short] iOS: 0x24e388
     * @note[short] Android
     */
    virtual void dailyStatusFailed(GJTimedLevelType type, GJErrorCode errorType);

    /**
     * @note[short] Windows: 0x16f8d0
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1c59d0
     * @note[short] MacOS (Intel): 0x216490
     * @note[short] Windows: 0x16fa20
     * @note[short] iOS: 0x24e620
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int response);

    /**
     * @note[short] MacOS (ARM): 0x1c5e54
     * @note[short] MacOS (Intel): 0x216930
     * @note[short] Windows: 0x171060
     * @note[short] iOS: 0xd003c
     * @note[short] Android
     */
    void claimLevelReward(DailyLevelNode* node, GJGameLevel* level, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1c50b8
     * @note[short] MacOS (Intel): 0x215b30
     * @note[short] Windows: 0x16fc90
     * @note[short] iOS: 0x24de98
     * @note[short] Android
     */
    void createDailyNode(GJGameLevel* level, bool instant, float delay, bool isNew);

    /**
     * @note[short] MacOS (Intel): 0x2164e0
     * @note[short] Windows: 0x16a5e0
     * @note[short] Android
     */
    void createNodeIfLoaded();

    /**
     * @note[short] MacOS (ARM): 0x2955d0
     * @note[short] MacOS (Intel): 0x216070
     * @note[short] Windows: 0x16fae0
     * @note[short] iOS: 0x41e8c
     * @note[short] Android
     */
    void downloadAndCreateNode();

    /**
     * @note[short] MacOS (ARM): 0x1c5508
     * @note[short] MacOS (Intel): 0x215fb0
     * @note[short] Windows: 0x16ff80
     * @note[short] iOS: 0x24e1ec
     * @note[short] Android
     */
    void exitDailyNode(DailyLevelNode* node, float delay);

    /**
     * @note[short] MacOS (ARM): 0x1c5b7c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24e780
     * @note[short] Android
     */
    int getDailyTime();

    /**
     * @note[short] MacOS (ARM): 0x1c4840
     * @note[short] MacOS (Intel): 0x2154b0
     * @note[short] iOS: 0x24da08
     * @note[short] Android
     */
    std::string getDailyTimeString(int timeLeft);

    /**
     * @note[short] MacOS (ARM): 0x1c38b0
     * @note[short] Windows: 0x16df00
     * @note[short] iOS: 0x24ce54
     * @note[short] Android
     */
    bool init(GJTimedLevelType type);

    /**
     * @note[short] Windows: 0x9eef0
     * @note[short] iOS: 0x24d96c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x805100
     * @note[short] Android
     */
    void onTheSafe(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c6100
     * @note[short] MacOS (Intel): 0x216bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24ebfc
     * @note[short] Android
     */
    void refreshDailyPage();

    /**
     * @note[short] MacOS (ARM): 0x1c600c
     * @note[short] MacOS (Intel): 0x216ab0
     * @note[short] Windows: 0x171340
     * @note[short] iOS: 0x24eb08
     * @note[short] Android
     */
    void skipDailyLevel(DailyLevelNode* node, GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1c58a4
     * @note[short] MacOS (Intel): 0x216340
     * @note[short] Windows: 0x16fa40
     * @note[short] iOS: 0x24e4f4
     * @note[short] Android
     */
    void tryGetDailyStatus();

    /**
     * @note[short] MacOS (ARM): 0x1c4e60
     * @note[short] MacOS (Intel): 0x215900
     * @note[short] Windows: 0xefad0
     * @note[short] iOS: 0x24dd00
     * @note[short] Android
     */
    void updateTimers(float dt);
    cocos2d::CCLabelBMFont* m_timeLabel;
    LoadingCircle* m_timeCircle;
    LoadingCircle* m_nodeCircle;
    bool m_gettingDailyStatus;
    DailyLevelNode* m_dailyNode;
    bool m_downloadStarted;
    GJTimedLevelType m_type;
    int m_downloadLevelID;
};
