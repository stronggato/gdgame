#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/DynamicBitset.hpp>
#include <Geode/binding/SavedActiveObjectState.hpp>
#include <Geode/binding/SavedObjectStateRef.hpp>
#include <Geode/binding/SavedSpecialObjectState.hpp>
#include <Geode/binding/GJBaseGameLayer.hpp>
#include <Geode/binding/CCCircleWaveDelegate.hpp>
#include <Geode/binding/CurrencyRewardDelegate.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class PlayLayer : public GJBaseGameLayer, public CCCircleWaveDelegate, public CurrencyRewardDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayLayer, GJBaseGameLayer)

    /**
     * @note[short] Windows: 0xaaf90
     * @note[short] Android: Rebinded
     */
     PlayLayer();

    /**
     * @note[short] MacOS (ARM): 0x709bc
     * @note[short] MacOS (Intel): 0x4e00
     * @note[short] Windows: 0x4ffcc0
     * @note[short] iOS: 0x13d334
     * @note[short] Android: Rebinded
     */
     ~PlayLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static PlayLayer* create(GJGameLevel* level, bool dontCreateObjects);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static PlayLayer* get();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* p0, bool p1);

    /**
     * @note[short] MacOS (Intel): 0x3e2a30
     * @note[short] Windows: 0x5178b0
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] Windows: 0x5178f0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x510310
     * @note[short] iOS: 0x147d2c
     * @note[short] Android
     */
    virtual void postUpdate(float dt);

    /**
     * @note[short] MacOS (ARM): 0x7e9dc
     * @note[short] MacOS (Intel): 0x889a0
     * @note[short] Windows: 0x5104d0
     * @note[short] iOS: 0x147e00
     * @note[short] Android
     */
    virtual void checkForEnd();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void testTime();

    /**
     * @note[short] MacOS (ARM): 0x7ead0
     * @note[short] MacOS (Intel): 0x88a90
     * @note[short] Windows: 0x510690
     * @note[short] iOS: 0x147ee4
     * @note[short] Android
     */
    virtual void updateVerifyDamage();

    /**
     * @note[short] MacOS (ARM): 0x7eb80
     * @note[short] MacOS (Intel): 0x88b40
     * @note[short] Windows: 0x510760
     * @note[short] iOS: 0x147f90
     * @note[short] Android
     */
    virtual void updateAttemptTime(float attemptTime);

    /**
     * @note[short] MacOS (ARM): 0x7ac58
     * @note[short] MacOS (Intel): 0x889f20
     * @note[short] Windows: 0x50a480
     * @note[short] iOS: 0x1447f0
     * @note[short] Android
     */
    virtual void updateVisibility(float dt);

    /**
     * @note[short] MacOS (ARM): 0x7cadc
     * @note[short] MacOS (Intel): 0x868a0
     * @note[short] Windows: 0x50b450
     * @note[short] iOS: 0x1462f8
     * @note[short] Android
     */
    virtual float opacityForObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7cba0
     * @note[short] MacOS (Intel): 0x86980
     * @note[short] Windows: 0x50d090
     * @note[short] iOS: 0x146368
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2);

    /**
     * @note[short] MacOS (ARM): 0x79c84
     * @note[short] MacOS (Intel): 0x83580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x143c18
     * @note[short] Android
     */
    virtual void activateEndTrigger(int targetID, bool reverse, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): 0x7a0bc
     * @note[short] MacOS (Intel): 0x83a70
     * @note[short] Windows: 0x507250
     * @note[short] iOS: 0x143f3c
     * @note[short] Android
     */
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x7d630
     * @note[short] MacOS (Intel): 0x87490
     * @note[short] Windows: 0x50e8d0
     * @note[short] iOS: 0x146d10
     * @note[short] Android
     */
    virtual void toggleGlitter(bool visible);

    /**
     * @note[short] Windows: 0x50ea00
     * @note[short] Android
     */
    virtual void destroyPlayer(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7d528
     * @note[short] MacOS (Intel): 0x873a0
     * @note[short] Windows: 0x50e710
     * @note[short] iOS: 0x146c38
     * @note[short] Android
     */
    virtual void toggleGroundVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x7d558
     * @note[short] MacOS (Intel): 0x873d0
     * @note[short] Windows: 0x50e790
     * @note[short] iOS: 0x146c68
     * @note[short] Android
     */
    virtual void toggleMGVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x7d568
     * @note[short] MacOS (Intel): 0x873f0
     * @note[short] Windows: 0x50e7d0
     * @note[short] iOS: 0x146c78
     * @note[short] Android
     */
    virtual void toggleHideAttempts(bool hide);

    /**
     * @note[short] MacOS (ARM): 0x7d458
     * @note[short] MacOS (Intel): 0x87280
     * @note[short] Windows: 0x50e5d0
     * @note[short] iOS: 0x146b68
     * @note[short] Android
     */
    virtual float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id);

    /**
     * @note[short] MacOS (ARM): 0x7d4cc
     * @note[short] MacOS (Intel): 0x87300
     * @note[short] Windows: 0x50e670
     * @note[short] iOS: 0x146bdc
     * @note[short] Android
     */
    virtual cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): 0x7d4ec
     * @note[short] MacOS (Intel): 0x87350
     * @note[short] Windows: 0x50e6d0
     * @note[short] iOS: 0x146bfc
     * @note[short] Android
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0x79b9c
     * @note[short] MacOS (Intel): 0x83470
     * @note[short] Windows: 0x5068d0
     * @note[short] Android
     */
    virtual void updateTimeWarp(float timeWarp);

    /**
     * @note[short] MacOS (ARM): 0x7cc04
     * @note[short] MacOS (Intel): 0x869f0
     * @note[short] Windows: 0x50d150
     * @note[short] iOS: 0x1463d4
     * @note[short] Android
     */
    virtual void playGravityEffect(bool flip);

    /**
     * @note[short] MacOS (ARM): 0x7cae4
     * @note[short] MacOS (Intel): 0x868b0
     * @note[short] Windows: 0x50b460
     * @note[short] iOS: 0x146300
     * @note[short] Android
     */
    virtual void manualUpdateObjectColors(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7ebf0
     * @note[short] MacOS (Intel): 0x88bb0
     * @note[short] Windows: 0x5107f0
     * @note[short] iOS: 0x147ffc
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7d3f4
     * @note[short] MacOS (Intel): 0x87200
     * @note[short] Windows: 0x50db60
     * @note[short] iOS: 0x146b04
     * @note[short] Android
     */
    virtual void flipArt(bool flip);

    /**
     * @note[short] MacOS (ARM): 0x7d020
     * @note[short] MacOS (Intel): 0x86e50
     * @note[short] Windows: 0x50d650
     * @note[short] iOS: 0x146780
     * @note[short] Android
     */
    virtual void updateTimeLabel(int seconds, int centiseconds, bool decimals);

    /**
     * @note[short] MacOS (Intel): 0x3ad0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void checkSnapshot();

    /**
     * @note[short] MacOS (ARM): 0x7d1fc
     * @note[short] MacOS (Intel): 0x87020
     * @note[short] Windows: 0x50d870
     * @note[short] iOS: 0x14692c
     * @note[short] Android
     */
    virtual void toggleProgressbar();

    /**
     * @note[short] MacOS (ARM): 0x7d414
     * @note[short] MacOS (Intel): 0x87240
     * @note[short] Windows: 0x50e550
     * @note[short] iOS: 0x146b24
     * @note[short] Android
     */
    virtual void toggleInfoLabel();

    /**
     * @note[short] Windows: 0x513870
     * @note[short] Android
     */
    virtual void removeAllCheckpoints();

    /**
     * @note[short] MacOS (ARM): 0x7d368
     * @note[short] MacOS (Intel): 0x19580
     * @note[short] Windows: 0x50da20
     * @note[short] iOS: 0x146a98
     * @note[short] Android
     */
    virtual void toggleMusicInPractice();

    /**
     * @note[short] MacOS (Intel): 0x884c0
     * @note[short] Windows: 0x50ff00
     * @note[short] Android
     */
    virtual void processCheckpoints();

    /**
     * @note[short] MacOS (Intel): 0x93d960
     * @note[short] Windows: 0x514fb0
     * @note[short] iOS: 0x3d0a5c
     * @note[short] Android
     */
    virtual void resetLevel();

    /**
     * @note[short] MacOS (ARM): 0x7e3d0
     * @note[short] MacOS (Intel): 0x882f0
     * @note[short] Windows: 0x50fd10
     * @note[short] iOS: 0x147874
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x7e460
     * @note[short] MacOS (Intel): 0x883b0
     * @note[short] Windows: 0x50fee0
     * @note[short] iOS: 0x147904
     * @note[short] Android
     */
    virtual void circleWaveWillBeRemoved(CCCircleWave* circleWave);

    /**
     * @note[short] MacOS (Intel): 0x88340
     * @note[short] Windows: 0x50fd30
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] Windows: 0x502240
     * @note[short] Android
     */
    virtual TodoReturn shouldDrawDebugHitboxes();

    /**
     * @note[short] Windows: 0x502270
     * @note[short] Android
     */
    virtual TodoReturn shouldDrawHitboxTrail();

    /**
     * @note[short] Windows: 0x5022a0
     * @note[short] Android
     */
    virtual TodoReturn shouldRecordHitboxTrail();

    /**
     * @note[short] Windows: 0x314d30
     * @note[short] Android
     */
    virtual TodoReturn getHitboxTrailMax();

    /**
     * @note[short] MacOS (ARM): 0x7e458
     * @note[short] MacOS (Intel): 0x88390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1478fc
     * @note[short] Android
     */
    void addCircle(CCCircleWave* cw);

    /**
     * @note[short] Android
     */
    TodoReturn addLiveStartPosObject(StartPosObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x76068
     * @note[short] MacOS (Intel): 0x7f270
     * @note[short] Windows: 0x508d10
     * @note[short] iOS: 0x1408bc
     * @note[short] Android
     */
    void addObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7a93c
     * @note[short] MacOS (Intel): 0x843a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addToGroupOld(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7bba0
     * @note[short] MacOS (Intel): 0x85760
     * @note[short] Windows: 0x50ba80
     * @note[short] iOS: 0x145440
     * @note[short] Android
     */
    void applyCustomEnterEffect(GameObject* object, bool isRight);

    /**
     * @note[short] MacOS (ARM): 0x7c340
     * @note[short] MacOS (Intel): 0x86110
     * @note[short] Windows: 0x50c760
     * @note[short] iOS: 0x145bcc
     * @note[short] Android
     */
    void applyEnterEffect(GameObject* object, int enterType, bool isRight);

    /**
     * @note[short] MacOS (ARM): 0x77150
     * @note[short] MacOS (Intel): 0x8d780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x141910
     * @note[short] Android
     */
    bool canPauseGame();

    /**
     * @note[short] MacOS (ARM): 0x80968
     * @note[short] MacOS (Intel): 0x8b2f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CheckpointObject* checkpointWithID(int id);

    /**
     * @note[short] MacOS (ARM): 0x7aa84
     * @note[short] MacOS (Intel): 0x844d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void colorObject(int id, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x7809c
     * @note[short] MacOS (Intel): 0x81720
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void commitJumps();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void compareStateSnapshot();

    /**
     * @note[short] Windows: 0x510810
     * @note[short] Android
     */
    CheckpointObject* createCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x7a630
     * @note[short] MacOS (Intel): 0x84070
     * @note[short] Windows: 0x11c570
     * @note[short] iOS: 0x144424
     * @note[short] Android
     */
    void createObjectsFromSetupFinished();

    /**
     * @note[short] MacOS (Intel): 0x8c240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void delayedFullReset();

    /**
     * @note[short] MacOS (ARM): 0x7e3b0
     * @note[short] MacOS (Intel): 0x882d0
     * @note[short] iOS: 0x147854
     * @note[short] Android
     */
    void delayedResetLevel();

    /**
     * @note[short] Android
     */
    TodoReturn dtBumpCell(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn dtCellKnown(int p0, int p1);

    /**
     * @note[short] Windows: 0x51ac80
     * @note[short] Android
     */
    void dtCommitPlaytime();

    /**
     * @note[short] Android
     */
    TodoReturn dtDeathIsBarren(int p0, int p1, bool p2, bool p3);

    /**
     * @note[short] Windows: 0x51ad50
     * @note[short] Android
     */
    void dtFlushCells();

    /**
     * @note[short] Android
     */
    TodoReturn dtLiveMarkersChanged();

    /**
     * @note[short] Android
     */
    TodoReturn dtLoadCells();

    /**
     * @note[short] Android
     */
    TodoReturn dtLocalCellTriples(std::vector<int>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn dtMarkerVisibleRect();

    /**
     * @note[short] Android
     */
    TodoReturn dtRebuildLiveMarkers();

    /**
     * @note[short] Android
     */
    TodoReturn dtUpdateLiveMarkers();

    /**
     * @note[short] MacOS (ARM): 0xb05d8
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x14a70c
     * @note[short] Android
     */
    void fullReset();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    float getCurrentPercent();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getCurrentPercentInt();

    /**
     * @note[short] MacOS (ARM): 0x77390
     * @note[short] MacOS (Intel): 0x80840
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getEndPosition();

    /**
     * @note[short] MacOS (ARM): 0x7fbbc
     * @note[short] MacOS (Intel): 0x8a2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x148db4
     * @note[short] Android
     */
    CheckpointObject* getLastCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x7cb4c
     * @note[short] MacOS (Intel): 0x86910
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getRelativeMod(cocos2d::CCPoint position, float right, float left, float offset);

    /**
     * @note[short] MacOS (ARM): 0x7b8d4
     * @note[short] MacOS (Intel): 0x854b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getRelativeModNew(cocos2d::CCPoint position, float mod, float offset, bool unused, bool isRight);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    double getTempMilliTime();

    /**
     * @note[short] MacOS (ARM): 0x7cf6c
     * @note[short] MacOS (Intel): 0x86da0
     * @note[short] Windows: 0x50d4a0
     * @note[short] iOS: 0x1466d4
     * @note[short] Android
     */
    void gravityEffectFinished();

    /**
     * @note[short] MacOS (ARM): 0x82b60
     * @note[short] MacOS (Intel): 0x8d690
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] Windows: 0x30a570
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool dontCreateObjects);

    /**
     * @note[short] MacOS (ARM): 0x830b8
     * @note[short] MacOS (Intel): 0x8dc10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14bb78
     * @note[short] Android
     */
    bool isGameplayActive();

    /**
     * @note[short] Android
     */
    bool isJumpHeldForPlayer(bool p0);

    /**
     * @note[short] Windows: 0x502830
     * @note[short] Android
     */
    void levelComplete();

    /**
     * @note[short] MacOS (ARM): 0x80c20
     * @note[short] MacOS (Intel): 0x8b570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x149c38
     * @note[short] Android
     */
    void loadActiveSaveObjects(std::vector<SavedActiveObjectState>& activeObjects, std::vector<SavedSpecialObjectState>& specialObjects);

    /**
     * @note[short] MacOS (ARM): 0x75d00
     * @note[short] MacOS (Intel): 0x7eec0
     * @note[short] Windows: 0x50cd10
     * @note[short] iOS: 0x1406c8
     * @note[short] Android
     */
    void loadDefaultColors();

    /**
     * @note[short] MacOS (ARM): 0x80ae0
     * @note[short] MacOS (Intel): 0x8b420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x149af8
     * @note[short] Android
     */
    void loadDynamicSaveObjects(std::vector<SavedObjectStateRef>& dynamicObjects);

    /**
     * @note[short] MacOS (ARM): 0x80390
     * @note[short] MacOS (Intel): 0x8ac90
     * @note[short] Windows: 0x512e80
     * @note[short] iOS: 0x23c7a8
     * @note[short] Android
     */
    void loadFromCheckpoint(CheckpointObject* object);

    /**
     * @note[short] MacOS (ARM): 0x80338
     * @note[short] MacOS (Intel): 0x8ac40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1495d8
     * @note[short] Android
     */
    CheckpointObject* loadLastCheckpoint();

    /**
     * @note[short] Android
     */
    TodoReturn loadPersistentCheckpoint(std::string& p0);

    /**
     * @note[short] MacOS (ARM): 0x7e7b0
     * @note[short] MacOS (Intel): 0x88780
     * @note[short] Windows: 0x512c90
     * @note[short] iOS: 0x147bf8
     * @note[short] Android
     */
    CheckpointObject* markCheckpoint();

    /**
     * @note[short] Windows: 0x517450
     * @note[short] Android
     */
    void onQuit();

    /**
     * @note[short] Android
     */
    void optimizeColorGroups();

    /**
     * @note[short] Android
     */
    void optimizeOpacityGroups();

    /**
     * @note[short] MacOS (ARM): 0x82c90
     * @note[short] MacOS (Intel): 0x8d7a0
     * @note[short] Windows: 0x516710
     * @note[short] iOS: 0x14b788
     * @note[short] Android
     */
    void pauseGame(bool unfocused);

    /**
     * @note[short] MacOS (ARM): 0x79c88
     * @note[short] MacOS (Intel): 0x83590
     * @note[short] Windows: 0x506920
     * @note[short] iOS: 0x143c1c
     * @note[short] Android
     */
    void playEndAnimationToPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x7a1ac
     * @note[short] MacOS (Intel): 0x83b60
     * @note[short] Windows: 0x507360
     * @note[short] iOS: 0x14402c
     * @note[short] Android
     */
    void playPlatformerEndAnimationToPos(cocos2d::CCPoint position, bool instant);

    /**
     * @note[short] Android
     */
    TodoReturn playPracticeMusic();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playReplay(std::string inputs);

    /**
     * @note[short] MacOS (ARM): 0x71970
     * @note[short] MacOS (Intel): 0x7a100
     * @note[short] iOS: 0x13e05c
     * @note[short] Android
     */
    void prepareCreateObjectsFromSetup(std::string& levelString);

    /**
     * @note[short] MacOS (Intel): 0x80030
     * @note[short] Windows: 0x5170f0
     * @note[short] Android
     */
    void prepareMusic(bool dontWait);

    /**
     * @note[short] MacOS (ARM): 0x71df4
     * @note[short] MacOS (Intel): 0x7a530
     * @note[short] Windows: 0x7c730
     * @note[short] iOS: 0x13e2f4
     * @note[short] Android
     */
    void processCreateObjectsFromSetup();

    /**
     * @note[short] MacOS (ARM): 0x7aab0
     * @note[short] MacOS (Intel): 0x84500
     * @note[short] Windows: 0x50a250
     * @note[short] iOS: 0x1446a4
     * @note[short] Android
     */
    void processLoadedMoveActions();

    /**
     * @note[short] MacOS (Intel): 0x8ac30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void queueCheckpoint();

    /**
     * @note[short] Android
     */
    TodoReturn releaseAllPlayerButtons();

    /**
     * @note[short] MacOS (Intel): 0x80450
     * @note[short] Windows: 0x5176d0
     * @note[short] Android
     */
    void removeAllObjects();

    /**
     * @note[short] MacOS (ARM): 0x80240
     * @note[short] MacOS (Intel): 0x8ab40
     * @note[short] Windows: 0x513730
     * @note[short] iOS: 0x1494e0
     * @note[short] Android
     */
    void removeCheckpoint(bool first);

    /**
     * @note[short] MacOS (ARM): 0x7aa18
     * @note[short] MacOS (Intel): 0x84470
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeFromGroupOld(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7180
     * @note[short] iOS: 0x46e7dc
     * @note[short] Android
     */
    void resetLevelFromStart();

    /**
     * @note[short] MacOS (ARM): 0x82f40
     * @note[short] MacOS (Intel): 0x8da70
     * @note[short] iOS: 0x14ba10
     * @note[short] Android
     */
    void resume();

    /**
     * @note[short] MacOS (ARM): 0x305640
     * @note[short] MacOS (Intel): 0x400300
     * @note[short] Windows: 0x516af0
     * @note[short] Android
     */
    void resumeAndRestart(bool fromStart);

    /**
     * @note[short] MacOS (ARM): 0x7fdd0
     * @note[short] MacOS (Intel): 0x8a570
     * @note[short] iOS: 0x149110
     * @note[short] Android
     */
    void saveActiveSaveObjects(std::vector<SavedActiveObjectState>& activeObjects, std::vector<SavedSpecialObjectState>& specialObjects);

    /**
     * @note[short] MacOS (ARM): 0x7fbf8
     * @note[short] MacOS (Intel): 0x8a310
     * @note[short] iOS: 0x148ee0
     * @note[short] Android
     */
    void saveDynamicSaveObjects(std::vector<SavedObjectStateRef>& dynamicObjects);

    /**
     * @note[short] Android
     */
    TodoReturn savePersistentCheckpoint(CheckpointObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x74014
     * @note[short] MacOS (Intel): 0x7cac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13fa94
     * @note[short] Android
     */
    void scanActiveSaveObjects();

    /**
     * @note[short] MacOS (ARM): 0x73750
     * @note[short] MacOS (Intel): 0x7c140
     * @note[short] Windows: 0x5138d0
     * @note[short] iOS: 0x13f70c
     * @note[short] Android
     */
    void scanDynamicSaveObjects();

    /**
     * @note[short] MacOS (ARM): 0x7c8bc
     * @note[short] MacOS (Intel): 0x86650
     * @note[short] Windows: 0x50b860
     * @note[short] iOS: 0x1460ec
     * @note[short] Android
     */
    void screenFlipObject(GameObject* object);

    /**
     * @note[short] Android
     */
    void setLastSavedCheckpoint(CheckpointObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x725f4
     * @note[short] MacOS (Intel): 0x7af90
     * @note[short] Windows: 0x500d90
     * @note[short] iOS: 0x319e4
     * @note[short] Android
     */
    void setupHasCompleted();

    /**
     * @note[short] MacOS (ARM): 0x7a628
     * @note[short] MacOS (Intel): 0x84050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x144330
     * @note[short] Android
     */
    bool shouldBlend(int colorID);

    /**
     * @note[short] MacOS (ARM): 0x770c8
     * @note[short] MacOS (Intel): 0x805b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0x781a4
     * @note[short] MacOS (Intel): 0x80890
     * @note[short] Windows: 0x49a9f0
     * @note[short] iOS: 0x1426b8
     * @note[short] Android
     */
    void showCompleteEffect();

    /**
     * @note[short] MacOS (Intel): 0x81ca0
     * @note[short] Windows: 0x503850
     * @note[short] iOS: 0x142a04
     * @note[short] Android
     */
    void showCompleteText();

    /**
     * @note[short] Windows: 0x507680
     * @note[short] iOS: 0x143134
     * @note[short] Android
     */
    void showEndLayer();

    /**
     * @note[short] MacOS (Intel): 0x88160
     * @note[short] Windows: 0x50fd50
     * @note[short] iOS: 0x1476ec
     * @note[short] Android
     */
    void showHint();

    /**
     * @note[short] MacOS (ARM): 0x790e4
     * @note[short] MacOS (Intel): 0x82910
     * @note[short] Windows: 0x5044a0
     * @note[short] iOS: 0x1431b0
     * @note[short] Android
     */
    void showNewBest(bool newReward, int orbs, int diamonds, bool demonKey, bool noRetry, bool noTitle);

    /**
     * @note[short] Windows: 0x507890
     * @note[short] Android
     */
    void showRetryLayer();

    /**
     * @note[short] MacOS (ARM): 0x75794
     * @note[short] MacOS (Intel): 0x7e980
     * @note[short] Windows: 0x4f03c0
     * @note[short] iOS: 0x140244
     * @note[short] Android
     */
    void showTwoPlayerGuide();

    /**
     * @note[short] MacOS (ARM): 0x780d0
     * @note[short] MacOS (Intel): 0x81760
     * @note[short] Windows: 0x506e30
     * @note[short] iOS: 0x142610
     * @note[short] Android
     */
    void spawnCircle();

    /**
     * @note[short] MacOS (ARM): 0x78e54
     * @note[short] MacOS (Intel): 0x82630
     * @note[short] iOS: 0x142f2c
     * @note[short] Android
     */
    void spawnFirework();

    /**
     * @note[short] MacOS (Intel): 0x80150
     * @note[short] Windows: 0x5027c0
     * @note[short] Android
     */
    void startGame();

    /**
     * @note[short] MacOS (ARM): 0x77380
     * @note[short] MacOS (Intel): 0x80820
     * @note[short] iOS: 0x141b00
     * @note[short] Android
     */
    void startGameDelayed();

    /**
     * @note[short] MacOS (ARM): 0x819a0
     * @note[short] Windows: 0x517270
     * @note[short] iOS: 0x1419d0
     * @note[short] Android
     */
    void startMusic();

    /**
     * @note[short] MacOS (Intel): 0x8d610
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void startRecording();

    /**
     * @note[short] MacOS (ARM): 0x82aec
     * @note[short] MacOS (Intel): 0x8d620
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void startRecordingDelayed();

    /**
     * @note[short] MacOS (ARM): 0x71774
     * @note[short] MacOS (Intel): 0x79f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13df00
     * @note[short] Android
     */
    void stopRecording();

    /**
     * @note[short] Windows: 0x66f2a0
     * @note[short] Android
     */
    void storeCheckpoint(CheckpointObject* checkpoint);

    /**
     * @note[short] Android
     */
    TodoReturn switchToStartPosObject(StartPosObject* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void takeStateSnapshot();

    /**
     * @note[short] MacOS (ARM): 0x82ab0
     * @note[short] MacOS (Intel): 0x8d5d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14b638
     * @note[short] Android
     */
    void toggleBGEffectVisibility(bool enabled);

    /**
     * @note[short] Android
     */
    void toggleDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0x82a68
     * @note[short] MacOS (Intel): 0x8d590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14b5f0
     * @note[short] Android
     */
    void toggleGhostEffect(int type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleIgnoreDamage(bool value);

    /**
     * @note[short] MacOS (Intel): 0x101c00
     * @note[short] Android
     */
    void togglePracticeMode(bool practiceMode);

    /**
     * @note[short] Android
     */
    TodoReturn tracksPercent();

    /**
     * @note[short] Android
     */
    TodoReturn tryShowDeathMarkers(cocos2d::CCPoint const& p0, int p1, bool p2);

    /**
     * @note[short] MacOS (Intel): 0x8d560
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryStartRecord();

    /**
     * @note[short] MacOS (Intel): 0x8d3d0
     * @note[short] Windows: 0x5160e0
     * @note[short] Android
     */
    void updateAttempts();

    /**
     * @note[short] MacOS (Intel): 0x79fa0
     * @note[short] Android
     */
    void updateDebugDrawSettings();

    /**
     * @note[short] MacOS (ARM): 0x7e478
     * @note[short] MacOS (Intel): 0x883f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14791c
     * @note[short] Android
     */
    void updateEffectPositions();

    /**
     * @note[short] Android
     */
    TodoReturn updateGameSettings();

    /**
     * @note[short] MacOS (ARM): 0x74230
     * @note[short] iOS: 0x13fb78
     * @note[short] Android
     */
    void updateInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0x7b920
     * @note[short] MacOS (Intel): 0x85500
     * @note[short] Windows: 0x50b4d0
     * @note[short] iOS: 0x1451f0
     * @note[short] Android
     */
    void updateInvisibleBlock(GameObject* object, float rightFadeBound, float leftFadeBound, float rightFadeWidth, float leftFadeWidth, cocos2d::ccColor3B const& lbgColor);

    /**
     * @note[short] MacOS (ARM): 0x75b44
     * @note[short] MacOS (Intel): 0x7ed10
     * @note[short] Windows: 0x8a380
     * @note[short] iOS: 0x140554
     * @note[short] Android
     */
    void updateProgressbar();

    /**
     * @note[short] MacOS (ARM): 0x79bb4
     * @note[short] MacOS (Intel): 0x83490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateScreenRotation(int rotation, bool add, bool convert, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] Windows: 0x502550
     * @note[short] Android
     */
    void updateTestModeLabel();

    /**
     * @note[short] Android
     */
    TodoReturn writePersistentSave();
    int m_unk36c8;
    bool m_unk36cc;
    bool m_unk36cd;
    bool m_unk36ce;
    bool m_unk36cf;
    bool m_damageVerified;
    std::vector<std::string> m_objectStrings;
    cocos2d::CCArray* m_coinArray;
    bool m_passedIntegrity;
    int m_objectsCreated;
    std::vector<GameObject*> m_dynamicSaveObjects;
    std::vector<GameObject*> m_activeSaveObjects1;
    std::vector<GameObject*> m_activeSaveObjects2;
    std::vector<SavedObjectStateRef> m_dynamicSaveObjects2;
    int m_unk3768;
    bool m_platformerRestart;
    bool m_unk376d;
    bool m_isIgnoreDamageEnabled;
    cocos2d::CCLabelBMFont* m_statusLabel;
    float m_unk3778;
    int m_unk377c;
    float m_unk3780;
    float m_unk3784;
    int m_unk3788;
    int m_unk378c;
    bool m_endChecked;
    float m_endXPosition;
    CheckpointObject* m_currentCheckpoint;
    cocos2d::CCArray* m_checkpointArray;
    cocos2d::CCArray* m_speedObjects;
    bool m_unk37b0;
    bool m_unk37b1;
    cocos2d::CCPoint m_enterEffectPosition;
    cocos2d::CCArray* m_unk37c0;
    bool m_isSilent;
    int m_unk37cc;
    cocos2d::CCArray* m_circleWaveArray;
    cocos2d::CCArray* m_collectibles;
    bool m_unk37e0;
    int m_pulseRodIndex;
    float m_maxObjectX;
    cocos2d::CCLabelBMFont* m_attemptLabel;
    cocos2d::CCLabelBMFont* m_percentageLabel;
    bool m_decimalPercentage;
    bool m_hintShown;
    cocos2d::CCSprite* m_progressBar;
    cocos2d::CCSprite* m_progressFill;
    float m_progressWidth;
    float m_progressHeight;
    int m_totalGravityEffects;
    int m_activeGravityEffects;
    int m_gravityEffectIndex;
    cocos2d::CCArray* m_gravityEffects;
    bool m_doNot;
    float m_unk383c;
    bool m_skipAudioStep;
    std::unordered_set<int> m_blendingColors;
    int m_jumps;
    bool m_hasJumped;
    int m_uncommittedJumps;
    bool m_showLeaderboardPercentage;
    bool m_hasCompletedLevel;
    bool m_inResetDelay;
    int m_lastAttemptPercent;
    bool m_endLayerStars;
    int m_orbs;
    int m_diamonds;
    bool m_secretKey;
    bool m_recordingStopped;
    double m_unk38b0;
    double m_unk38b8;
    double m_unk38c0;
    bool m_unk38c8;
    float m_unk38cc;
    int m_unk38d0;
    double m_attemptTime;
    double m_bestAttemptTime;
    double m_pauseTime;
    double m_currentTime;
    double m_pauseDelta;
    float m_unk3900;
    bool m_glitterEnabled;
    bool m_bgEffectDisabled;
    bool m_unk3906;
    bool m_isPaused;
    bool m_disableGravityEffect;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCPoint m_unk3918;
    cocos2d::CCPoint m_unk3920;
    cocos2d::CCDictionary* m_colorKeyDict;
    std::vector<cocos2d::ccColor3B> m_keyColors;
    std::vector<float> m_keyOpacities;
    DynamicBitset m_keyPulses;
    int m_nextColorKey;
    bool m_tryPlaceCheckpoint;
    CheckpointGameObject* m_activatedCheckpoint;
    bool m_musicPrepared;
    cocos2d::CCPoint m_endPosition;
    EndTriggerGameObject* m_platformerEndTrigger;
};
