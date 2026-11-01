#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJGameState.hpp>
#include <Geode/binding/PlayerButtonCommand.hpp>
#include <Geode/binding/RecordButtonCommand.hpp>
#include <Geode/binding/RecordCheckpoint.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TriggerEffectDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class GJBaseGameLayer : public cocos2d::CCLayer, public TriggerEffectDelegate {
public:
    static constexpr auto CLASS_NAME = "GJBaseGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBaseGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x7c98e0
     * @note[short] Windows: 0x3e8c30
     * @note[short] Android: Rebinded
     */
     GJBaseGameLayer();

    /**
     * @note[short] MacOS (ARM): 0xcc1e4
     * @note[short] MacOS (Intel): 0xea7b0
     * @note[short] Windows: 0x308f10
     * @note[short] iOS: 0x2726a0
     * @note[short] Android: Rebinded
     */
     ~GJBaseGameLayer();

    /**
     * @note[short] MacOS (ARM): 0xf0a2c
     * @note[short] MacOS (Intel): 0x115aa0
     * @note[short] Windows: 0x3348f0
     * @note[short] iOS: 0x288dc8
     * @note[short] Android
     */
    static float convertToClosestDirection(float angle, float bound);

    /**
     * @note[short] MacOS (ARM): 0x101984
     * @note[short] MacOS (Intel): 0x129580
     * @note[short] Windows: 0x3388e0
     * @note[short] Android
     */
    static std::string gameEventToString(GJGameEvent event);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GJBaseGameLayer* get();

    /**
     * @note[short] MacOS (ARM): 0xba218
     * @note[short] MacOS (Intel): 0x12ef90
     * @note[short] Windows: 0x33dc40
     * @note[short] iOS: 0x29895c
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0xcd000
     * @note[short] MacOS (Intel): 0xeba80
     * @note[short] Windows: 0x30a570
     * @note[short] iOS: 0x2730e0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1164b8
     * @note[short] MacOS (Intel): 0x142ec0
     * @note[short] Windows: 0x34e7b0
     * @note[short] iOS: 0x2a3414
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void postUpdate(float dt);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
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
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateVerifyDamage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateAttemptTime(float attemptTime);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateVisibility(float dt);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void playerTookDamage(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x106018
     * @note[short] MacOS (Intel): 0x12ed40
     * @note[short] Windows: 0x33d800
     * @note[short] iOS: 0x29878c
     * @note[short] Android
     */
    virtual float opacityForObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void addToSpeedObjects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe6d6c
     * @note[short] MacOS (Intel): 0x109280
     * @note[short] Windows: 0x31dca0
     * @note[short] iOS: 0x28510c
     * @note[short] Android
     */
    virtual void objectsCollided(int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0xf4528
     * @note[short] MacOS (Intel): 0x119a30
     * @note[short] Windows: 0x328bb0
     * @note[short] iOS: 0x28bb7c
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2);

    /**
     * @note[short] MacOS (ARM): 0xf4690
     * @note[short] MacOS (Intel): 0x119bd0
     * @note[short] Windows: 0x328d90
     * @note[short] iOS: 0x28bce4
     * @note[short] Android
     */
    virtual void toggleGroupTriggered(int group, bool activate, std::vector<int> const& remapKeys, int triggerID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xe7bf8
     * @note[short] MacOS (Intel): 0x265100
     * @note[short] Windows: 0x31f910
     * @note[short] iOS: 0x285dc0
     * @note[short] Android
     */
    virtual void spawnGroup(int group, bool ordered, double delay, std::vector<int> const& remapKeys, int triggerID, int controlID);

    /**
     * @note[short] Windows: 0x31fd40
     * @note[short] Android
     */
    virtual void spawnObject(GameObject* object, double delay, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activateEndTrigger(int targetID, bool reverse, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleGlitter(bool visible);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void destroyPlayer(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdc644
     * @note[short] MacOS (Intel): 0xfd930
     * @note[short] Windows: 0x314070
     * @note[short] Android
     */
    virtual void updateDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0xf7174
     * @note[short] MacOS (Intel): 0x11cd20
     * @note[short] Windows: 0x32c790
     * @note[short] iOS: 0x28d90c
     * @note[short] Android
     */
    virtual void addToSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf4ba4
     * @note[short] MacOS (Intel): 0x11a150
     * @note[short] Windows: 0x3291f0
     * @note[short] iOS: 0x28c12c
     * @note[short] Android
     */
    virtual void addToGroup(GameObject* object, int groupID, bool triggerGroup);

    /**
     * @note[short] MacOS (Intel): 0x11a3a0
     * @note[short] Windows: 0x329370
     * @note[short] Android
     */
    virtual void removeFromGroup(GameObject* object, int groupID);

    /**
     * @note[short] MacOS (ARM): 0xf8718
     * @note[short] MacOS (Intel): 0x11e8a0
     * @note[short] Windows: 0x32e0b0
     * @note[short] iOS: 0x28e5a8
     * @note[short] Android
     */
    virtual void updateObjectSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateDisabledObjectsLastPos(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1041c0
     * @note[short] MacOS (Intel): 0x12c6d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x297238
     * @note[short] Android
     */
    virtual void toggleGroundVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1041c4
     * @note[short] MacOS (Intel): 0x12c6e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29723c
     * @note[short] Android
     */
    virtual void toggleMGVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1041c8
     * @note[short] MacOS (Intel): 0x12c6f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x297240
     * @note[short] Android
     */
    virtual void toggleHideAttempts(bool hide);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0x104308
     * @note[short] MacOS (Intel): 0x12c890
     * @note[short] Windows: 0x33c1b0
     * @note[short] iOS: 0x297328
     * @note[short] Android
     */
    virtual void updateScreenRotation(float rotation, bool add, bool convert, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xe607c
     * @note[short] MacOS (Intel): 0x1084c0
     * @note[short] Windows: 0x31cec0
     * @note[short] iOS: 0x284690
     * @note[short] Android
     */
    virtual void reverseDirection(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe60c4
     * @note[short] MacOS (Intel): 0x108500
     * @note[short] Windows: 0x31cf20
     * @note[short] iOS: 0x2846d8
     * @note[short] Android
     */
    virtual void rotateGameplay(RotateGameplayGameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didRotateGameplay();

    /**
     * @note[short] MacOS (ARM): 0x1048c8
     * @note[short] MacOS (Intel): 0x12cf70
     * @note[short] Windows: 0x33c4d0
     * @note[short] Android
     */
    virtual void updateTimeWarp(float timeWarp);

    /**
     * @note[short] Windows: 0x33c510
     * @note[short] iOS: 0x47b964
     * @note[short] Android
     */
    virtual void applyTimeWarp(float timeWarp);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void playGravityEffect(bool flip);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void manualUpdateObjectColors(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x111b58
     * @note[short] MacOS (Intel): 0x13d1c0
     * @note[short] Windows: 0x347f90
     * @note[short] iOS: 0x29fc4c
     * @note[short] Android
     */
    virtual cocos2d::CCParticleSystemQuad* createCustomParticle(std::string const& key, cocos2d::ParticleStruct const& particleStruct, int minimum, bool dontAdd);

    /**
     * @note[short] MacOS (Intel): 0xc89e0
     * @note[short] Windows: 0x3482e0
     * @note[short] Android
     */
    virtual cocos2d::CCParticleSystemQuad* claimCustomParticle(std::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd);

    /**
     * @note[short] MacOS (ARM): 0x1122e8
     * @note[short] MacOS (Intel): 0x13d9a0
     * @note[short] Windows: 0x348880
     * @note[short] iOS: 0x2a026c
     * @note[short] Android
     */
    virtual void unclaimCustomParticle(std::string const& key, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x1130ec
     * @note[short] MacOS (Intel): 0x13e990
     * @note[short] Windows: 0x34a500
     * @note[short] iOS: 0x2a0e64
     * @note[short] Android
     */
    virtual void activatedAudioTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x116214
     * @note[short] MacOS (Intel): 0x11b0c0
     * @note[short] Windows: 0x34e390
     * @note[short] iOS: 0x2a3210
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x116210
     * @note[short] MacOS (Intel): 0x142bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2a320c
     * @note[short] Android
     */
    virtual void flipArt(bool flip);

    /**
     * @note[short] MacOS (ARM): 0x101b70
     * @note[short] MacOS (Intel): 0x1297a0
     * @note[short] Windows: 0x339dc0
     * @note[short] iOS: 0x2957a8
     * @note[short] Android
     */
    virtual void addKeyframe(KeyframeGameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateTimeLabel(int seconds, int centiseconds, bool decimals);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void checkSnapshot();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleProgressbar();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleInfoLabel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void removeAllCheckpoints();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleMusicInPractice();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void processCheckpoints();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void resetLevel();

    /**
     * @note[short] Windows: 0x314d10
     * @note[short] Android
     */
    virtual TodoReturn shouldDrawDebugHitboxes();

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual TodoReturn shouldDrawHitboxTrail();

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual TodoReturn shouldRecordHitboxTrail();

    /**
     * @note[short] Windows: 0x314d30
     * @note[short] Android
     */
    virtual TodoReturn getHitboxTrailMax();

    /**
     * @note[short] MacOS (ARM): 0xee2c0
     * @note[short] MacOS (Intel): 0x113430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28797c
     * @note[short] Android
     */
    void activateCustomRing(RingObject* object);

    /**
     * @note[short] MacOS (Intel): 0x13e9b0
     * @note[short] iOS: 0x2a0e70
     * @note[short] Android
     */
    void activatedAudioTrigger(SFXTriggerGameObject* object, float levelTime);

    /**
     * @note[short] MacOS (ARM): 0x101540
     * @note[short] MacOS (Intel): 0x1290a0
     * @note[short] Windows: 0x22dcd0
     * @note[short] iOS: 0x295464
     * @note[short] Android
     */
    void activateEventTrigger(EventLinkTrigger* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x1028dc
     * @note[short] MacOS (Intel): 0x12a7d0
     * @note[short] Windows: 0x33a880
     * @note[short] iOS: 0x296094
     * @note[short] Android
     */
    void activateItemCompareTrigger(ItemTriggerGameObject* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x1022a4
     * @note[short] MacOS (Intel): 0x129f90
     * @note[short] Windows: 0x33a4b0
     * @note[short] iOS: 0x295cf4
     * @note[short] Android
     */
    void activateItemEditTrigger(ItemTriggerGameObject* object);

    /**
     * @note[short] MacOS (Intel): 0x2613a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void activateObjectControlTrigger(ObjectControlGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x102e30
     * @note[short] MacOS (Intel): 0x12aec0
     * @note[short] Windows: 0x33aca0
     * @note[short] iOS: 0x2963fc
     * @note[short] Android
     */
    void activatePersistentItemTrigger(ItemTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe52dc
     * @note[short] MacOS (Intel): 0x1074d0
     * @note[short] Windows: 0x31c110
     * @note[short] iOS: 0x283efc
     * @note[short] Android
     */
    void activatePlayerControlTrigger(PlayerControlGameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn activateProgressTrigger(ProgressGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x101d30
     * @note[short] MacOS (Intel): 0x129990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x295928
     * @note[short] Android
     */
    void activateResetTrigger(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10f01c
     * @note[short] MacOS (Intel): 0x139f00
     * @note[short] Windows: 0x349530
     * @note[short] iOS: 0x29e150
     * @note[short] Android
     */
    void activateSFXEditTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10ecdc
     * @note[short] Windows: 0x2223a0
     * @note[short] iOS: 0x29dfa4
     * @note[short] Android
     */
    void activateSFXTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10eb58
     * @note[short] MacOS (Intel): 0x1399b0
     * @note[short] Windows: 0x348fb0
     * @note[short] iOS: 0x29dee0
     * @note[short] Android
     */
    void activateSongEditTrigger(SongTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10e954
     * @note[short] MacOS (Intel): 0x139740
     * @note[short] iOS: 0x29dd98
     * @note[short] Android
     */
    void activateSongTrigger(SongTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x103184
     * @note[short] MacOS (Intel): 0x12b2c0
     * @note[short] Windows: 0x33b0f0
     * @note[short] iOS: 0x296614
     * @note[short] Android
     */
    void activateTimerTrigger(TimerTriggerGameObject* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0xf7fc0
     * @note[short] MacOS (Intel): 0x11df50
     * @note[short] iOS: 0x28e190
     * @note[short] Android
     */
    void addAreaEffect(EnterEffectObject* object, std::vector<EnterEffectInstance>* instances, GJAreaActionType type);

    /**
     * @note[short] MacOS (ARM): 0xd90d8
     * @note[short] MacOS (Intel): 0xfa5d0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x27af44
     * @note[short] Android
     */
    void addCustomEnterEffect(EnterEffectObject* object, bool enter);

    /**
     * @note[short] Android
     */
    TodoReturn addDeathMarkerLayer(cocos2d::CCNode* p0, bool p1, std::vector<int> const& p2, bool p3, cocos2d::CCRect const& p4, int p5, int p6, float p7, float p8, float p9, int p10);

    /**
     * @note[short] MacOS (ARM): 0x115344
     * @note[short] MacOS (Intel): 0x141b90
     * @note[short] Windows: 0x34d780
     * @note[short] iOS: 0x2a2868
     * @note[short] Android
     */
    bool addGuideArt(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x102034
     * @note[short] MacOS (Intel): 0x129cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x295bf4
     * @note[short] Android
     */
    void addObjectCounter(LabelGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x101f6c
     * @note[short] MacOS (Intel): 0x129be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x295b2c
     * @note[short] Android
     */
    void addPickupTrigger(CountTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10a24c
     * @note[short] MacOS (Intel): 0x1342f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29b584
     * @note[short] Android
     */
    void addPoints(int points);

    /**
     * @note[short] MacOS (ARM): 0x1127c0
     * @note[short] MacOS (Intel): 0x13de90
     * @note[short] Windows: 0x1a6a80
     * @note[short] iOS: 0x2a0710
     * @note[short] Android
     */
    void addProximityVolumeEffect(int channelID, int targetType, SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd33c8
     * @note[short] MacOS (Intel): 0xf2b20
     * @note[short] iOS: 0x193c2c
     * @note[short] Android
     */
    void addRemapTargets(std::set<int>& targets);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToGroupParents(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf4b30
     * @note[short] MacOS (Intel): 0x11a0e0
     * @note[short] Windows: 0xcffd0
     * @note[short] iOS: 0x28c0b8
     * @note[short] Android
     */
    void addToGroups(GameObject* object, bool duplicateTrigger);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void addToObjectsToShow(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf6cdc
     * @note[short] MacOS (Intel): 0x11aca0
     * @note[short] Windows: 0x32c1a0
     * @note[short] iOS: 0x28d52c
     * @note[short] Android
     */
    void addUIObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe0b34
     * @note[short] MacOS (Intel): 0x102480
     * @note[short] iOS: 0x280730
     * @note[short] Android
     */
    void animateInDualGroundNew(GameObject* object, float height, bool instant, float duration);

    /**
     * @note[short] MacOS (ARM): 0xe1214
     * @note[short] MacOS (Intel): 0x102cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void animateInGroundNew(bool unk1, float unk2, bool unk3);

    /**
     * @note[short] MacOS (ARM): 0xe0dbc
     * @note[short] MacOS (Intel): 0x102770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x280900
     * @note[short] Android
     */
    void animateOutGroundNew(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x110230
     * @note[short] MacOS (Intel): 0x13b4a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void animatePortalY(float fromY, float toY, float duration, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x10d764
     * @note[short] MacOS (Intel): 0x138140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29cfa4
     * @note[short] Android
     */
    void applyLevelSettings(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe8234
     * @note[short] MacOS (Intel): 0x10a7c0
     * @note[short] Windows: 0x31ffe0
     * @note[short] Android
     */
    void applyRemap(EffectGameObject* object, std::vector<int> const& remapKeys, std::unordered_map<int, int>& remap);

    /**
     * @note[short] MacOS (ARM): 0x1126a4
     * @note[short] MacOS (Intel): 0x13dd70
     * @note[short] Windows: 0x349800
     * @note[short] iOS: 0x2a060c
     * @note[short] Android
     */
    void applySFXEditTrigger(int channelID, int targetType, SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10f624
     * @note[short] MacOS (Intel): 0x13a590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29e520
     * @note[short] Android
     */
    void applyShake(cocos2d::CCPoint& point);

    /**
     * @note[short] MacOS (ARM): 0xf66d0
     * @note[short] MacOS (Intel): 0x11c0f0
     * @note[short] Windows: 0x32aa90
     * @note[short] iOS: 0x28d14c
     * @note[short] Android
     */
    void assignNewStickyGroups(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xd1144
     * @note[short] MacOS (Intel): 0xf0580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x183d44
     * @note[short] Android
     */
    void asyncBGLoaded(int background);

    /**
     * @note[short] MacOS (ARM): 0xd1404
     * @note[short] MacOS (Intel): 0xf0890
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x276878
     * @note[short] Android
     */
    void asyncGLoaded(int ground);

    /**
     * @note[short] MacOS (ARM): 0xd1698
     * @note[short] MacOS (Intel): 0xf0b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x276ab0
     * @note[short] Android
     */
    void asyncMGLoaded(int middleground);

    /**
     * @note[short] MacOS (ARM): 0xd8c7c
     * @note[short] MacOS (Intel): 0xfa000
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int atlasValue(int atlas);

    /**
     * @note[short] MacOS (ARM): 0xe3614
     * @note[short] MacOS (Intel): 0x1056c0
     * @note[short] Windows: 0x31c620
     * @note[short] iOS: 0x2829b8
     * @note[short] Android
     */
    void bumpPlayer(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10a5ec
     * @note[short] MacOS (Intel): 0x134720
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int buttonIDToButton(int id);

    /**
     * @note[short] MacOS (ARM): 0x10131c
     * @note[short] MacOS (Intel): 0x128ec0
     * @note[short] Windows: 0x338020
     * @note[short] iOS: 0x2952f8
     * @note[short] Android
     */
    bool buttonIsRelevant(PlayerButtonCommand const& button);

    /**
     * @note[short] MacOS (ARM): 0xd8974
     * @note[short] MacOS (Intel): 0xf9d50
     * @note[short] iOS: 0x27ab30
     * @note[short] Android
     */
    void calculateColorGroups();

    /**
     * @note[short] MacOS (ARM): 0x10ff1c
     * @note[short] MacOS (Intel): 0x13b130
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void cameraMoveX(float value, float duration, float rate, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x10ffb8
     * @note[short] MacOS (Intel): 0x13b1e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void cameraMoveY(float value, float duration, float rate, bool force);

    /**
     * @note[short] MacOS (ARM): 0xe33d8
     * @note[short] MacOS (Intel): 0x105460
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x282898
     * @note[short] Android
     */
    bool canBeActivatedByPlayer(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1134d0
     * @note[short] MacOS (Intel): 0x13eea0
     * @note[short] iOS: 0x2a130c
     * @note[short] Android
     */
    bool canProcessSFX(SFXTriggerState& state, std::unordered_map<int, int>& stateIndices, std::unordered_map<int, float>& times, std::vector<SFXTriggerState>& states);

    /**
     * @note[short] MacOS (ARM): 0xe33a8
     * @note[short] MacOS (Intel): 0x105430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool canTouchObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdc238
     * @note[short] MacOS (Intel): 0xfd4e0
     * @note[short] Windows: 0x33fd50
     * @note[short] iOS: 0x27cdd4
     * @note[short] Android
     */
    void checkCameraLimitAfterTeleport(PlayerObject* player, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0xe6d3c
     * @note[short] MacOS (Intel): 0x109250
     * @note[short] Windows: 0x31dbd0
     * @note[short] iOS: 0x2850dc
     * @note[short] Android
     */
    bool checkCollision(int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0xe6b88
     * @note[short] MacOS (Intel): 0x1090b0
     * @note[short] Windows: 0x419f0
     * @note[short] iOS: 0x284f30
     * @note[short] Android
     */
    void checkCollisionBlocks(EffectGameObject* object, std::vector<EffectGameObject*>* blocks, int blockCount);

    /**
     * @note[short] MacOS (ARM): 0xe147c
     * @note[short] MacOS (Intel): 0x102f70
     * @note[short] Windows: 0x318190
     * @note[short] iOS: 0x280e60
     * @note[short] Android
     */
    int checkCollisions(PlayerObject* object, float dt, bool ignoreDamage);

    /**
     * @note[short] MacOS (ARM): 0x107f40
     * @note[short] MacOS (Intel): 0x1314f0
     * @note[short] Windows: 0x4f0c60
     * @note[short] iOS: 0x299a30
     * @note[short] Android
     */
    void checkRepellPlayer();

    /**
     * @note[short] Windows: 0x31f620
     * @note[short] Android
     */
    void checkSpawnObjects();

    /**
     * @note[short] MacOS (ARM): 0xfe168
     * @note[short] MacOS (Intel): 0x1251a0
     * @note[short] iOS: 0x2930e0
     * @note[short] Android
     */
    cocos2d::CCPoint claimMoveAction(int groupID, bool ignoreStaticGroups);

    /**
     * @note[short] MacOS (ARM): 0x111568
     * @note[short] MacOS (Intel): 0x13cbd0
     * @note[short] Windows: 0x347bc0
     * @note[short] iOS: 0x29f8fc
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* claimParticle(std::string key, int zLayer);

    /**
     * @note[short] MacOS (ARM): 0xfe000
     * @note[short] MacOS (Intel): 0x125030
     * @note[short] Windows: 0x333a40
     * @note[short] iOS: 0x292fd4
     * @note[short] Android
     */
    void claimRotationAction(int targetID, int centerID, float& rotation, float& offset, bool ignoreStaticGroups, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x10e3a8
     * @note[short] MacOS (Intel): 0x139030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29d948
     * @note[short] Android
     */
    void clearActivatedAudioTriggers();

    /**
     * @note[short] Android
     */
    TodoReturn clearHitboxTrail();

    /**
     * @note[short] MacOS (Intel): 0x54a250
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void clearPickedUpItems();

    /**
     * @note[short] MacOS (ARM): 0x101f14
     * @note[short] MacOS (Intel): 0x129b90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x295ad4
     * @note[short] Android
     */
    void collectedObject(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe2368
     * @note[short] MacOS (Intel): 0x104080
     * @note[short] Windows: 0x319390
     * @note[short] iOS: 0x281ab0
     * @note[short] Android
     */
    void collisionCheckObjects(PlayerObject* object, std::vector<GameObject*>* objects, int objectCount, float dt);

    /**
     * @note[short] MacOS (ARM): 0xeeb24
     * @note[short] MacOS (Intel): 0x113f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x287dc0
     * @note[short] Android
     */
    void controlAdvancedFollowCommand(AdvancedFollowTriggerObject* object, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xeea50
     * @note[short] MacOS (Intel): 0x113e60
     * @note[short] Windows: 0x32db80
     * @note[short] iOS: 0x287cc0
     * @note[short] Android
     */
    void controlAreaEffect(EnterEffectObject* object, std::vector<EnterEffectInstance>* instances, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xef550
     * @note[short] MacOS (Intel): 0x114920
     * @note[short] Windows: 0x32d980
     * @note[short] iOS: 0x2882b8
     * @note[short] Android
     */
    void controlAreaEffectWithID(int uniqueID, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (Intel): 0x116030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x289268
     * @note[short] Android
     */
    void controlDynamicCommand(EffectGameObject* object, int controlID, std::vector<DynamicObjectAction>& actions, GJActionCommand command);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void controlDynamicMoveCommand(EffectGameObject* object, int controlID, GJActionCommand command);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void controlDynamicRotateCommand(EffectGameObject* object, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xeee0c
     * @note[short] MacOS (Intel): 0x1141c0
     * @note[short] Windows: 0x338540
     * @note[short] iOS: 0x287f0c
     * @note[short] Android
     */
    void controlEventLink(int uniqueID, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xeefe8
     * @note[short] MacOS (Intel): 0x1143b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2880c8
     * @note[short] Android
     */
    void controlGradientTrigger(GradientTriggerObject* object, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xee374
     * @note[short] MacOS (Intel): 0x1134f0
     * @note[short] Windows: 0x323030
     * @note[short] iOS: 0x287a30
     * @note[short] Android
     */
    void controlTriggersInGroup(int group, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xef294
     * @note[short] MacOS (Intel): 0x114610
     * @note[short] iOS: 0x288124
     * @note[short] Android
     */
    void controlTriggersWithControlID(int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xe4a70
     * @note[short] MacOS (Intel): 0x106c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28375c
     * @note[short] Android
     */
    int countCollectedUserCoins();

    /**
     * @note[short] MacOS (ARM): 0xd0ef8
     * @note[short] MacOS (Intel): 0xf0330
     * @note[short] Windows: 0x30f090
     * @note[short] iOS: 0x27636c
     * @note[short] Android
     */
    void createBackground(int background);

    /**
     * @note[short] MacOS (ARM): 0xd142c
     * @note[short] MacOS (Intel): 0x11d30
     * @note[short] Windows: 0x30f4d0
     * @note[short] iOS: 0x2768a0
     * @note[short] Android
     */
    void createGroundLayer(int ground, int line);

    /**
     * @note[short] Android
     */
    TodoReturn createLiveStartPosObject();

    /**
     * @note[short] MacOS (ARM): 0xd1610
     * @note[short] MacOS (Intel): 0xf0ac0
     * @note[short] Windows: 0x30f350
     * @note[short] iOS: 0x276a28
     * @note[short] Android
     */
    void createMiddleground(int middleground);

    /**
     * @note[short] MacOS (ARM): 0x101b1c
     * @note[short] MacOS (Intel): 0x129750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x295754
     * @note[short] Android
     */
    cocos2d::CCArray* createNewKeyframeAnim();

    /**
     * @note[short] MacOS (ARM): 0x111090
     * @note[short] MacOS (Intel): 0x13c6e0
     * @note[short] Windows: 0x23efd0
     * @note[short] iOS: 0x29f630
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* createParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType);

    /**
     * @note[short] MacOS (ARM): 0xd0b4c
     * @note[short] MacOS (Intel): 0x305300
     * @note[short] Windows: 0x31d0d0
     * @note[short] iOS: 0x275fc0
     * @note[short] Android
     */
    void createPlayer();

    /**
     * @note[short] MacOS (ARM): 0xe6250
     * @note[short] MacOS (Intel): 0x1086e0
     * @note[short] iOS: 0x284814
     * @note[short] Android
     */
    void createPlayerCollisionBlock();

    /**
     * @note[short] MacOS (ARM): 0xda12c
     * @note[short] MacOS (Intel): 0xfb9b0
     * @note[short] Windows: 0x3124d0
     * @note[short] iOS: 0x27b81c
     * @note[short] Android
     */
    void createTextLayers();

    /**
     * @note[short] MacOS (ARM): 0xddf70
     * @note[short] MacOS (Intel): 0xff5d0
     * @note[short] Windows: 0x315bc0
     * @note[short] iOS: 0x27e714
     * @note[short] Android
     */
    cocos2d::CCArray* damagingObjectsInRect(cocos2d::CCRect rect, bool enabledGroups);

    /**
     * @note[short] MacOS (ARM): 0xe3d9c
     * @note[short] MacOS (Intel): 0x105ed0
     * @note[short] Windows: 0xbae70
     * @note[short] iOS: 0x282eb8
     * @note[short] Android
     */
    void destroyObject(GameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn didPickupItem(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn drawHitboxTrail(std::vector<PlayerTrailState>& p0, int p1, cocos2d::CCRect const& p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0xe5270
     * @note[short] MacOS (Intel): 0x107460
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a3fb8
     * @note[short] Android
     */
    void enterDualMode(GameObject* object, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x110600
     * @note[short] MacOS (Intel): 0x13ba30
     * @note[short] iOS: 0x29ee7c
     * @note[short] Android
     */
    void exitStaticCamera(bool exitX, bool exitY, float time, int easingType, float easingRate, bool smoothVelocity, float smoothVelocityMod, bool exitInstant);

    /**
     * @note[short] Android
     */
    TodoReturn findStartPosWinnerInArray(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x10a1e8
     * @note[short] MacOS (Intel): 0x134280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29b530
     * @note[short] Android
     */
    void flipFinished();

    /**
     * @note[short] MacOS (ARM): 0xe0710
     * @note[short] MacOS (Intel): 0x102010
     * @note[short] Windows: 0x3174d0
     * @note[short] iOS: 0x280394
     * @note[short] Android
     */
    void flipGravity(PlayerObject* object, bool flip, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x116158
     * @note[short] MacOS (Intel): 0x142b20
     * @note[short] iOS: 0x2a3154
     * @note[short] Android
     */
    void flipObjects();

    /**
     * @note[short] MacOS (ARM): 0xdc30c
     * @note[short] MacOS (Intel): 0xfd5a0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x27ce8c
     * @note[short] Android
     */
    void gameEventTriggered(GJGameEvent event, int material, int playerID);

    /**
     * @note[short] MacOS (ARM): 0xd9adc
     * @note[short] MacOS (Intel): 0xfb1c0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x27b4c0
     * @note[short] Android
     */
    int generateEnterEasingBuffer(int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0xd9a54
     * @note[short] MacOS (Intel): 0xfb130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27b47c
     * @note[short] Android
     */
    void generateEnterEasingBuffers(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe457c
     * @note[short] MacOS (Intel): 0x1066d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2834fc
     * @note[short] Android
     */
    void generatePickupAnimRandVal(GameObject* object, float& randomValue1, float& randomValue2);

    /**
     * @note[short] MacOS (ARM): 0xd3b40
     * @note[short] MacOS (Intel): 0xf3410
     * @note[short] Windows: 0x311690
     * @note[short] iOS: 0x2784c0
     * @note[short] Android
     */
    void generateSpawnRemap();

    /**
     * @note[short] MacOS (Intel): 0xf65f0
     * @note[short] iOS: 0x27950c
     * @note[short] Android
     */
    void generateTargetGroups();

    /**
     * @note[short] MacOS (ARM): 0xd7bc4
     * @note[short] MacOS (Intel): 0xf8b00
     * @note[short] Windows: 0x32abb0
     * @note[short] iOS: 0x27a3ec
     * @note[short] Android
     */
    void generateVisibilityGroups();

    /**
     * @note[short] MacOS (ARM): 0xe7b80
     * @note[short] MacOS (Intel): 0x10a130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x285d48
     * @note[short] Android
     */
    cocos2d::CCArray* getActiveOrderSpawnObjects();

    /**
     * @note[short] MacOS (ARM): 0xfb31c
     * @note[short] MacOS (Intel): 0x121aa0
     * @note[short] Windows: 0x32e1d0
     * @note[short] iOS: 0x2909b8
     * @note[short] Android
     */
    float getAreaObjectValue(EnterEffectInstance* instance, GameObject* object, cocos2d::CCPoint& position, bool& show);

    /**
     * @note[short] MacOS (ARM): 0xe5a44
     * @note[short] MacOS (Intel): 0x107dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2842e8
     * @note[short] Android
     */
    float getBumpMod(PlayerObject* player, int type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2975f0
     * @note[short] Android
     */
    float getCameraEdgeValue(int type);

    /**
     * @note[short] MacOS (ARM): 0xd9e20
     * @note[short] MacOS (Intel): 0xfb5a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27b67c
     * @note[short] Android
     */
    std::string getCapacityString();

    /**
     * @note[short] MacOS (ARM): 0xf5128
     * @note[short] MacOS (Intel): 0x11a6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GameObject* getCenterGroupObject(int groupID, int defaultID);

    /**
     * @note[short] MacOS (ARM): 0xd9938
     * @note[short] MacOS (Intel): 0xfb010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27b378
     * @note[short] Android
     */
    std::vector<EnterEffectInstance>* getCustomEnterEffects(int id, bool enter);

    /**
     * @note[short] MacOS (ARM): 0xfb54c
     * @note[short] MacOS (Intel): 0x121cd0
     * @note[short] Windows: 0x32e3c0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getEasedAreaValue(GameObject* object, EnterEffectInstance* instance, float value, bool show, int index);

    /**
     * @note[short] MacOS (ARM): 0xd9a98
     * @note[short] MacOS (Intel): 0xfb180
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getEnterEasingKey(int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0xd9dc0
     * @note[short] MacOS (Intel): 0xfb530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27b620
     * @note[short] Android
     */
    float getEnterEasingValue(float value, int easingType, float easingRate, int easingBuffer);

    /**
     * @note[short] MacOS (ARM): 0xfea50
     * @note[short] MacOS (Intel): 0x125cb0
     * @note[short] Windows: 0x334990
     * @note[short] iOS: 0x29377c
     * @note[short] Android
     */
    cocos2d::CCPoint getFollowSpeedVal(GameObject* object, int startSpeedRef, int startDirRef, float startDir, float startSpeed);

    /**
     * @note[short] MacOS (ARM): 0xde688
     * @note[short] MacOS (Intel): 0xffd60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27ecfc
     * @note[short] Android
     */
    float getGroundHeight(PlayerObject* player, int type);

    /**
     * @note[short] MacOS (ARM): 0xde614
     * @note[short] MacOS (Intel): 0xffd00
     * @note[short] Windows: 0x3162e0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getGroundHeightForMode(int type);

    /**
     * @note[short] MacOS (ARM): 0xd8c08
     * @note[short] MacOS (Intel): 0xf9f90
     * @note[short] Windows: 0x3294b0
     * @note[short] iOS: 0x27ac9c
     * @note[short] Android
     */
    cocos2d::CCArray* getGroup(int id);

    /**
     * @note[short] MacOS (Intel): 0x11bef0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GameObject* getGroupParent(int groupId);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getGroupParentsString(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x102178
     * @note[short] MacOS (Intel): 0x129e50
     * @note[short] Windows: 0x33a420
     * @note[short] iOS: 0x295c78
     * @note[short] Android
     */
    double getItemValue(int type, int id);

    /**
     * @note[short] MacOS (ARM): 0xe13d8
     * @note[short] MacOS (Intel): 0x102ec0
     * @note[short] Windows: 0x318110
     * @note[short] iOS: 0x280de8
     * @note[short] Android
     */
    float getMaxPortalY();

    /**
     * @note[short] MacOS (ARM): 0x112d04
     * @note[short] MacOS (Intel): 0x13e4a0
     * @note[short] Windows: 0x34a0b0
     * @note[short] iOS: 0x2a0a98
     * @note[short] Android
     */
    float getMinDistance(cocos2d::CCPoint position, cocos2d::CCArray* objects, float minNear, int mode);

    /**
     * @note[short] MacOS (ARM): 0xe12fc
     * @note[short] MacOS (Intel): 0x102de0
     * @note[short] Windows: 0x318030
     * @note[short] iOS: 0x280d18
     * @note[short] Android
     */
    float getMinPortalY();

    /**
     * @note[short] MacOS (ARM): 0x106188
     * @note[short] MacOS (Intel): 0x12eee0
     * @note[short] Windows: 0x33dba0
     * @note[short] iOS: 0x2988d0
     * @note[short] Android
     */
    double getModifiedDelta(float dt);

    /**
     * @note[short] MacOS (ARM): 0xe6d74
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x285114
     * @note[short] Android
     */
    cocos2d::CCPoint getMoveTargetDelta(EffectGameObject* object, bool mainObject);

    /**
     * @note[short] MacOS (ARM): 0xf4cac
     * @note[short] MacOS (Intel): 0x11a260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28c19c
     * @note[short] Android
     */
    cocos2d::CCArray* getOptimizedGroup(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xde790
     * @note[short] MacOS (Intel): 0xffe70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27ee04
     * @note[short] Android
     */
    PlayerObject* getOtherPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x110c54
     * @note[short] MacOS (Intel): 0x13c220
     * @note[short] Windows: 0x347570
     * @note[short] iOS: 0x29f468
     * @note[short] Android
     */
    std::string getParticleKey(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType);

    /**
     * @note[short] MacOS (ARM): 0x110fbc
     * @note[short] MacOS (Intel): 0x13c610
     * @note[short] Windows: 0x3476f0
     * @note[short] iOS: 0x29f5dc
     * @note[short] Android
     */
    std::string getParticleKey2(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x10a5bc
     * @note[short] MacOS (Intel): 0x1346e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29b794
     * @note[short] Android
     */
    int getPlayerButtonID(int button, bool player2);

    /**
     * @note[short] MacOS (ARM): 0x10a240
     * @note[short] MacOS (Intel): 0x1342e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getPlayTimerFullSeconds();

    /**
     * @note[short] MacOS (ARM): 0x10a224
     * @note[short] MacOS (Intel): 0x1342c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29b56c
     * @note[short] Android
     */
    int getPlayTimerMilli();

    /**
     * @note[short] MacOS (ARM): 0xdbf00
     * @note[short] MacOS (Intel): 0xfd1b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27cb10
     * @note[short] Android
     */
    TeleportPortalObject* getPortalTarget(TeleportPortalObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdc01c
     * @note[short] MacOS (Intel): 0xfd2c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27cbc0
     * @note[short] Android
     */
    cocos2d::CCPoint getPortalTargetPos(TeleportPortalObject* object, GameObject* target, PlayerObject* player);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getRecordExtra();

    /**
     * @note[short] MacOS (Intel): 0x136550
     * @note[short] Windows: 0x4d14f0
     * @note[short] Android
     */
    std::string getRecordString(bool compress);

    /**
     * @note[short] MacOS (ARM): 0xf05a8
     * @note[short] MacOS (Intel): 0x1156a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2889a0
     * @note[short] Android
     */
    void getRotateCommandTargets(EnhancedTriggerObject* object, GameObject*& centerObject, GameObject*& targetObject, GameObject*& rotateObject);

    /**
     * @note[short] MacOS (Intel): 0x1093c0
     * @note[short] Windows: 0x31ddc0
     * @note[short] iOS: 0x285230
     * @note[short] Android
     */
    cocos2d::CCPoint getSavedPosition(int groupID, float delay);

    /**
     * @note[short] MacOS (ARM): 0xe6228
     * @note[short] MacOS (Intel): 0x108690
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getScaledGroundHeight(float height);

    /**
     * @note[short] MacOS (ARM): 0xdff74
     * @note[short] MacOS (Intel): 0x101820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27fe8c
     * @note[short] Android
     */
    GameObject* getSingleGroupObject(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xd9770
     * @note[short] MacOS (Intel): 0xfae70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getSpecialKey(int groupID, bool ignoreGroupParent, bool ignoreLinkedObjects);

    /**
     * @note[short] Android
     */
    TodoReturn getStartPosObjectsForCurrentMode();

    /**
     * @note[short] MacOS (ARM): 0xf4d20
     * @note[short] MacOS (Intel): 0x11a2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28c200
     * @note[short] Android
     */
    cocos2d::CCArray* getStaticGroup(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xf6504
     * @note[short] MacOS (Intel): 0x11bef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28cf90
     * @note[short] Android
     */
    cocos2d::CCArray* getStickyGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0xe0eb8
     * @note[short] MacOS (Intel): 0x1028a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x280978
     * @note[short] Android
     */
    float getTargetFlyCameraY(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf6a88
     * @note[short] MacOS (Intel): 0x11c560
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getTargetGroup(int index, int uniqueID);

    /**
     * @note[short] MacOS (Intel): 0x11c590
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getTargetGroupOrigin(int index, int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0xe3840
     * @note[short] MacOS (Intel): 0x105960
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x282af4
     * @note[short] Android
     */
    void gravBumpPlayer(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf6510
     * @note[short] MacOS (Intel): 0x11bf10
     * @note[short] iOS: 0x28cf9c
     * @note[short] Android
     */
    void groupStickyObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x339ac0
     * @note[short] Android
     */
    void handleButton(bool down, int button, bool isPlayer1);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2836d4
     * @note[short] Android
     */
    bool hasItem(int id);

    /**
     * @note[short] MacOS (ARM): 0xe3f94
     * @note[short] MacOS (Intel): 0x1060b0
     * @note[short] Windows: 0x1235e0
     * @note[short] iOS: 0x283024
     * @note[short] Android
     */
    bool hasUniqueCoin(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd1e4c
     * @note[short] MacOS (Intel): 0xf13b0
     * @note[short] Windows: 0x3103f0
     * @note[short] iOS: 0x277190
     * @note[short] Android
     */
    void increaseBatchNodeCapacity();

    /**
     * @note[short] MacOS (ARM): 0x10a1cc
     * @note[short] MacOS (Intel): 0x134250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29b514
     * @note[short] Android
     */
    bool isFlipping();

    /**
     * @note[short] Android
     */
    bool isGroupParentOf(GameObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x10a5b0
     * @note[short] MacOS (Intel): 0x1346d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isPlayer2Button(int button);

    /**
     * @note[short] MacOS (ARM): 0x11632c
     * @note[short] MacOS (Intel): 0x142d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2a3328
     * @note[short] Android
     */
    void lightningFlash(cocos2d::CCPoint to, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0xdc0c0
     * @note[short] MacOS (Intel): 0xfd340
     * @note[short] Windows: 0x34e5d0
     * @note[short] iOS: 0x27cc64
     * @note[short] Android
     */
    void lightningFlash(cocos2d::CCPoint from, cocos2d::CCPoint to, cocos2d::ccColor3B color, float lineWidth, float duration, int displacement, bool flash, float opacity);

    /**
     * @note[short] MacOS (ARM): 0xf6110
     * @note[short] Android
     */
    void loadGroupParentsFromString(GameObject* object, std::string groupList);

    /**
     * @note[short] MacOS (Intel): 0x137fa0
     * @note[short] Windows: 0x342200
     * @note[short] Android
     */
    void loadLevelSettings();

    /**
     * @note[short] Windows: 0x33b9d0
     * @note[short] Android
     */
    void loadStartPosObject(StartPosObject* p0);

    /**
     * @note[short] MacOS (Intel): 0x12c2a0
     * @note[short] Windows: 0x33bbe0
     * @note[short] Android
     */
    void loadUpToPosition(float position, int order, int channel);

    /**
     * @note[short] Android
     */
    TodoReturn lockExistingFirstParents();

    /**
     * @note[short] Android
     */
    TodoReturn logPickupItem(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xf199c
     * @note[short] MacOS (Intel): 0x116bc0
     * @note[short] Windows: 0x328a00
     * @note[short] iOS: 0x2899c0
     * @note[short] Android
     */
    int maxZOrderForShaderZ(int zLayer);

    /**
     * @note[short] MacOS (ARM): 0xf43a8
     * @note[short] MacOS (Intel): 0x1198b0
     * @note[short] iOS: 0x28ba08
     * @note[short] Android
     */
    int minZOrderForShaderZ(int zLayer);

    /**
     * @note[short] MacOS (ARM): 0xff1e0
     * @note[short] MacOS (Intel): 0x126530
     * @note[short] Windows: 0x334e30
     * @note[short] iOS: 0x293b78
     * @note[short] Android
     */
    void modifyGroupPhysics(AdvancedFollowEditObject* object, cocos2d::CCArray* group);

    /**
     * @note[short] MacOS (ARM): 0xff320
     * @note[short] MacOS (Intel): 0x126770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x293c00
     * @note[short] Android
     */
    void modifyObjectPhysics(AdvancedFollowEditObject* object, GameObjectPhysics& physics);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x330c10
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void moveAreaObject(GameObject* object, float dx, float dy);

    /**
     * @note[short] MacOS (ARM): 0x10fdf4
     * @note[short] MacOS (Intel): 0x13afd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void moveCameraToPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0xfe9f8
     * @note[short] MacOS (Intel): 0x125c50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x293724
     * @note[short] Android
     */
    void moveObject(GameObject* object, double dx, double dy, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): 0xfe784
     * @note[short] MacOS (Intel): 0x125930
     * @note[short] Windows: 0x333de0
     * @note[short] iOS: 0x2935d4
     * @note[short] Android
     */
    void moveObjects(cocos2d::CCArray* objects, double dx, double dy, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): 0xf02e8
     * @note[short] MacOS (Intel): 0x115360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x288740
     * @note[short] Android
     */
    void moveObjectsSilent(int groupId, double dx, double dy);

    /**
     * @note[short] MacOS (ARM): 0x100ac4
     * @note[short] MacOS (Intel): 0x128600
     * @note[short] Windows: 0x337420
     * @note[short] iOS: 0x294bfc
     * @note[short] Android
     */
    void moveObjectToStaticGroup(GameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn objectForUniqueID(int p0);

    /**
     * @note[short] MacOS (ARM): 0xde910
     * @note[short] MacOS (Intel): 0xfffd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27eee4
     * @note[short] Android
     */
    bool objectIntersectsCircle(GameObject* object, GameObject* circle);

    /**
     * @note[short] MacOS (ARM): 0xe0b10
     * @note[short] MacOS (Intel): 0x102460
     * @note[short] Windows: 0x338720
     * @note[short] iOS: 0x28070c
     * @note[short] Android
     */
    GJGameEvent objectTypeToGameEvent(int type);

    /**
     * @note[short] MacOS (ARM): 0xd4080
     * @note[short] MacOS (Intel): 0x7c140
     * @note[short] Windows: 0x336a30
     * @note[short] iOS: 0x27879c
     * @note[short] Android
     */
    void optimizeMoveGroups();

    /**
     * @note[short] MacOS (ARM): 0x1152ac
     * @note[short] MacOS (Intel): 0x141ae0
     * @note[short] Windows: 0x34d620
     * @note[short] iOS: 0x2a27d0
     * @note[short] Android
     */
    void orderSpawnObjects();

    /**
     * @note[short] MacOS (ARM): 0xda514
     * @note[short] MacOS (Intel): 0xfbdf0
     * @note[short] Windows: 0x3129b0
     * @note[short] iOS: 0x27bc04
     * @note[short] Android
     */
    cocos2d::CCNode* parentForZLayer(int zLayer, bool blending, int parentMode, int uiObject);

    /**
     * @note[short] Android
     */
    TodoReturn parseRecording(std::string p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1060b8
     * @note[short] MacOS (Intel): 0x12ede0
     * @note[short] Windows: 0x33d8a0
     * @note[short] iOS: 0x298818
     * @note[short] Android
     */
    void pauseAudio();

    /**
     * @note[short] MacOS (ARM): 0x102200
     * @note[short] MacOS (Intel): 0x129ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double performMathOperation(double operand1, double operand2, int operation);

    /**
     * @note[short] MacOS (ARM): 0x102250
     * @note[short] MacOS (Intel): 0x129f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double performMathRounding(double value, int type);

    /**
     * @note[short] iOS: 0x283120
     * @note[short] Android
     */
    void pickupItem(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe5b34
     * @note[short] MacOS (Intel): 0x107e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2843ac
     * @note[short] Android
     */
    void playAnimationCommand(int id, int groupID);

    /**
     * @note[short] MacOS (ARM): 0xde7b4
     * @note[short] MacOS (Intel): 0xffea0
     * @note[short] iOS: 0x27ee28
     * @note[short] Android
     */
    bool playerCircleCollision(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xde86c
     * @note[short] MacOS (Intel): 0xfff40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27ee40
     * @note[short] Android
     */
    bool playerIntersectsCircle(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe5954
     * @note[short] MacOS (Intel): 0x107cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playerTouchedObject(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe3a68
     * @note[short] MacOS (Intel): 0x105b90
     * @note[short] Windows: 0x31cb40
     * @note[short] iOS: 0x282c44
     * @note[short] Android
     */
    void playerTouchedRing(PlayerObject* player, RingObject* object);

    /**
     * @note[short] iOS: 0x282d08
     * @note[short] Android
     */
    void playerTouchedTrigger(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe58fc
     * @note[short] MacOS (Intel): 0x107c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool playerWasTouchingObject(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe0880
     * @note[short] MacOS (Intel): 0x102190
     * @note[short] Windows: 0x18ee20
     * @note[short] iOS: 0x280504
     * @note[short] Android
     */
    void playerWillSwitchMode(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe4d94
     * @note[short] MacOS (Intel): 0x106f90
     * @note[short] Windows: 0x31ba80
     * @note[short] iOS: 0x2839c4
     * @note[short] Android
     */
    void playExitDualEffect(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x116418
     * @note[short] MacOS (Intel): 0x142e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playFlashEffect(float duration, int flashes, float unknown);

    /**
     * @note[short] MacOS (Intel): 0x6d5120
     * @note[short] iOS: 0xca68c
     * @note[short] Android
     */
    void playKeyframeAnimation(KeyframeAnimTriggerObject* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x110ac4
     * @note[short] MacOS (Intel): 0x13c0a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29f2dc
     * @note[short] Android
     */
    void playSpeedParticle(float timeMod);

    /**
     * @note[short] MacOS (ARM): 0xf4124
     * @note[short] Windows: 0x328790
     * @note[short] iOS: 0x28b784
     * @note[short] Android
     */
    cocos2d::CCPoint positionForShaderTarget(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xd775c
     * @note[short] Windows: 0x32c2c0
     * @note[short] iOS: 0x252f90
     * @note[short] Android
     */
    void positionUIObjects();

    /**
     * @note[short] MacOS (ARM): 0xd48b4
     * @note[short] iOS: 0x278afc
     * @note[short] Android
     */
    void prepareSavePositionObjects();

    /**
     * @note[short] MacOS (ARM): 0xfbb40
     * @note[short] MacOS (Intel): 0x122360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x291074
     * @note[short] Android
     */
    void prepareTransformParent(bool rotateNode);

    /**
     * @note[short] MacOS (ARM): 0x1060ac
     * @note[short] MacOS (Intel): 0x12edd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29880c
     * @note[short] Android
     */
    void preResumeGame();

    /**
     * @note[short] MacOS (ARM): 0x1049d4
     * @note[short] MacOS (Intel): 0x12d0a0
     * @note[short] iOS: 0x24054
     * @note[short] Android
     */
    void preUpdateVisibility(float dt);

    /**
     * @note[short] MacOS (ARM): 0x113da0
     * @note[short] MacOS (Intel): 0x13fa90
     * @note[short] Windows: 0x34b000
     * @note[short] iOS: 0x2a1930
     * @note[short] Android
     */
    void processActivatedAudioTriggers(float levelTime);

    /**
     * @note[short] MacOS (ARM): 0xff408
     * @note[short] Windows: 0x335370
     * @note[short] iOS: 0x293ce8
     * @note[short] Android
     */
    void processAdvancedFollowAction(AdvancedFollowInstance& instance, bool started, float dt);

    /**
     * @note[short] MacOS (ARM): 0xfdb0c
     * @note[short] MacOS (Intel): 0x124a50
     * @note[short] iOS: 0x292bd0
     * @note[short] Android
     */
    void processAdvancedFollowActions(float dt);

    /**
     * @note[short] Android
     */
    void processAreaActions(float dt, bool visibleFrame);

    /**
     * @note[short] MacOS (ARM): 0xf889c
     * @note[short] Windows: 0x32e540
     * @note[short] iOS: 0x28e6e4
     * @note[short] Android
     */
    void processAreaEffects(std::vector<EnterEffectInstance>* effects, GJAreaActionType type, float dt, bool visibleFrame);

    /**
     * @note[short] MacOS (ARM): 0xfa430
     * @note[short] MacOS (Intel): 0x120a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28ff64
     * @note[short] Android
     */
    void processAreaFadeGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, bool targetGroups);

    /**
     * @note[short] MacOS (ARM): 0xf9e54
     * @note[short] MacOS (Intel): 0x120250
     * @note[short] Windows: 0x330630
     * @note[short] iOS: 0x28f8d4
     * @note[short] Android
     */
    void processAreaMoveGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset);

    /**
     * @note[short] MacOS (ARM): 0xf9b70
     * @note[short] MacOS (Intel): 0x11ff20
     * @note[short] Windows: 0x32fee0
     * @note[short] iOS: 0x28f558
     * @note[short] Android
     */
    void processAreaRotateGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset);

    /**
     * @note[short] MacOS (ARM): 0xfa61c
     * @note[short] MacOS (Intel): 0x120cc0
     * @note[short] Windows: 0x330d00
     * @note[short] iOS: 0x290100
     * @note[short] Android
     */
    void processAreaTintGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, bool targetGroups);

    /**
     * @note[short] MacOS (ARM): 0xf976c
     * @note[short] MacOS (Intel): 0x11fae0
     * @note[short] Windows: 0x32f370
     * @note[short] iOS: 0x28f0dc
     * @note[short] Android
     */
    void processAreaTransformGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset);

    /**
     * @note[short] MacOS (ARM): 0xfb2d0
     * @note[short] MacOS (Intel): 0x121a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29096c
     * @note[short] Android
     */
    void processAreaVisualActions(float dt);

    /**
     * @note[short] MacOS (ARM): 0xdea70
     * @note[short] MacOS (Intel): 0x100150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27f044
     * @note[short] Android
     */
    GameObject* processCameraObject(GameObject* object, PlayerObject* player);

    /**
     * @note[short] Windows: 0x33fe10
     * @note[short] iOS: 0x2998c4
     * @note[short] Android
     */
    void processCommands(float dt, bool isHalfTick, bool isLastTick);

    /**
     * @note[short] MacOS (ARM): 0xfc0ac
     * @note[short] MacOS (Intel): 0x122930
     * @note[short] iOS: 0x291598
     * @note[short] Android
     */
    void processDynamicObjectActions(int type, float dt);

    /**
     * @note[short] MacOS (ARM): 0xfdcd4
     * @note[short] Windows: 0x336610
     * @note[short] iOS: 0x292d74
     * @note[short] Android
     */
    void processFollowActions();

    /**
     * @note[short] MacOS (ARM): 0xe4ad8
     * @note[short] MacOS (Intel): 0x106c80
     * @note[short] Windows: 0x31ae10
     * @note[short] iOS: 0x2837b8
     * @note[short] Android
     */
    void processItems();

    /**
     * @note[short] MacOS (ARM): 0xfd744
     * @note[short] MacOS (Intel): 0x124590
     * @note[short] Windows: 0x333680
     * @note[short] iOS: 0x2928dc
     * @note[short] Android
     */
    void processMoveActions();

    /**
     * @note[short] MacOS (Intel): 0x122800
     * @note[short] iOS: 0x291470
     * @note[short] Android
     */
    void processMoveActionsStep(float dt, bool visibleFrame);

    /**
     * @note[short] MacOS (ARM): 0xf48a8
     * @note[short] MacOS (Intel): 0x119df0
     * @note[short] Windows: 0x328f70
     * @note[short] iOS: 0x28bec8
     * @note[short] Android
     */
    void processOptionsTrigger(GameOptionsTrigger* object);

    /**
     * @note[short] MacOS (ARM): 0xfd8d0
     * @note[short] MacOS (Intel): 0x124780
     * @note[short] Windows: 0x333f60
     * @note[short] iOS: 0x2929d0
     * @note[short] Android
     */
    void processPlayerFollowActions(float dt);

    /**
     * @note[short] MacOS (Intel): 0x139680
     * @note[short] Android
     */
    void processQueuedAudioTriggers();

    /**
     * @note[short] MacOS (ARM): 0x100eb4
     * @note[short] MacOS (Intel): 0x128a30
     * @note[short] Windows: 0x337eb0
     * @note[short] iOS: 0x294f30
     * @note[short] Android
     */
    void processQueuedButtons(float dt, bool clearInputQueue);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void processReplayCheckpoint(int id);

    /**
     * @note[short] MacOS (ARM): 0xfd01c
     * @note[short] MacOS (Intel): 0x123d50
     * @note[short] iOS: 0x2922f0
     * @note[short] Android
     */
    void processRotationActions();

    /**
     * @note[short] MacOS (ARM): 0xd8754
     * @note[short] MacOS (Intel): 0xf9b20
     * @note[short] Windows: 0x349050
     * @note[short] iOS: 0x27a984
     * @note[short] Android
     */
    void processSFXObjects();

    /**
     * @note[short] MacOS (ARM): 0x11383c
     * @note[short] MacOS (Intel): 0x13f300
     * @note[short] Windows: 0x34c750
     * @note[short] iOS: 0x2a14d4
     * @note[short] Android
     */
    void processSFXState(SFXTriggerState* state1, SFXTriggerState* state2, int type, float levelTime);

    /**
     * @note[short] MacOS (ARM): 0x114eb0
     * @note[short] MacOS (Intel): 0x1414f0
     * @note[short] Windows: 0x34cbe0
     * @note[short] iOS: 0x2a23e4
     * @note[short] Android
     */
    bool processSongState(int musicID, float spawnDelay, float levelTime, int songOffset, float volume, float speed, std::vector<SongTriggerState>* states, SongTriggerGameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn processStartPosObjects();

    /**
     * @note[short] MacOS (ARM): 0xe5fe4
     * @note[short] MacOS (Intel): 0x108410
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x284618
     * @note[short] Android
     */
    void processStateObjects();

    /**
     * @note[short] MacOS (ARM): 0xfc57c
     * @note[short] MacOS (Intel): 0x122f20
     * @note[short] iOS: 0x29195c
     * @note[short] Android
     */
    void processTransformActions(bool visibleFrame);

    /**
     * @note[short] Android
     */
    TodoReturn promoteGroupParent(GameObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x100d40
     * @note[short] MacOS (Intel): 0x1288b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x294dec
     * @note[short] Android
     */
    void queueButton(int button, bool push, bool isPlayer2, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x1048c0
     * @note[short] MacOS (Intel): 0x12cf60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29776c
     * @note[short] Android
     */
    void queueTimeWarp(float timeWarp);

    /**
     * @note[short] MacOS (ARM): 0xf6864
     * @note[short] MacOS (Intel): 0x11c290
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reAddToStickyGroup(GameObject* object);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void recordAction(int button, bool down, bool player2);

    /**
     * @note[short] Android
     */
    TodoReturn recordHitboxTrail();

    /**
     * @note[short] Android
     */
    TodoReturn recordHitboxTrailState(PlayerObject* p0, std::vector<PlayerTrailState>& p1, int& p2);

    /**
     * @note[short] MacOS (ARM): 0xde480
     * @note[short] MacOS (Intel): 0xffb50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27eb68
     * @note[short] Android
     */
    bool rectIntersectsCircle(cocos2d::CCRect rect, cocos2d::CCPoint center, float radius);

    /**
     * @note[short] MacOS (ARM): 0x1037d8
     * @note[short] MacOS (Intel): 0x12bb00
     * @note[short] iOS: 0x296a50
     * @note[short] Android
     */
    void refreshCounterLabels();

    /**
     * @note[short] MacOS (ARM): 0xd8584
     * @note[short] MacOS (Intel): 0xf9930
     * @note[short] Windows: 0x339f20
     * @note[short] iOS: 0x1aaf70
     * @note[short] Android
     */
    void refreshKeyframeAnims();

    /**
     * @note[short] MacOS (ARM): 0xd3ca0
     * @note[short] MacOS (Intel): 0xf35a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2785ac
     * @note[short] Android
     */
    void regenerateEnterEasingBuffers();

    /**
     * @note[short] MacOS (ARM): 0xee194
     * @note[short] MacOS (Intel): 0x1132f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2878a4
     * @note[short] Android
     */
    int registerSpawnRemap(std::vector<ChanceObject>& spawnRemap);

    /**
     * @note[short] MacOS (ARM): 0xe5f90
     * @note[short] MacOS (Intel): 0x1083c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2845c4
     * @note[short] Android
     */
    void registerStateObject(EffectGameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn remapGroupParent(GameObject* p0, int p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0xd10a0
     * @note[short] MacOS (Intel): 0xf04f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x276514
     * @note[short] Android
     */
    void removeBackground();

    /**
     * @note[short] MacOS (ARM): 0xd9420
     * @note[short] MacOS (Intel): 0xfaa00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeCustomEnterEffects(int id, bool enter);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeFromGroupParents(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf4d94
     * @note[short] MacOS (Intel): 0x11a340
     * @note[short] Windows: 0x3292e0
     * @note[short] iOS: 0x28c264
     * @note[short] Android
     */
    void removeFromGroups(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf67d8
     * @note[short] MacOS (Intel): 0x11c200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28d240
     * @note[short] Android
     */
    void removeFromStickyGroup(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd1750
     * @note[short] MacOS (Intel): 0xf0c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x276b08
     * @note[short] Android
     */
    void removeGroundLayer();

    /**
     * @note[short] Android
     */
    TodoReturn removeGroupParent(GameObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x101ce0
     * @note[short] MacOS (Intel): 0x129940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2958d8
     * @note[short] Android
     */
    void removeKeyframe(KeyframeGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd171c
     * @note[short] MacOS (Intel): 0xf0bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x276ad4
     * @note[short] Android
     */
    void removeMiddleground();

    /**
     * @note[short] MacOS (ARM): 0xf6e98
     * @note[short] MacOS (Intel): 0x11c9b0
     * @note[short] Windows: 0x32cf00
     * @note[short] iOS: 0x28d644
     * @note[short] Android
     */
    void removeObjectFromSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe5214
     * @note[short] MacOS (Intel): 0x107400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x283e34
     * @note[short] Android
     */
    void removePlayer2();

    /**
     * @note[short] MacOS (ARM): 0x100bf4
     * @note[short] MacOS (Intel): 0x128750
     * @note[short] iOS: 0x1a8f80
     * @note[short] Android
     */
    void removeReleasedButtons();

    /**
     * @note[short] MacOS (ARM): 0x10e464
     * @note[short] MacOS (Intel): 0x139140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29d97c
     * @note[short] Android
     */
    void removeTemporaryParticles();

    /**
     * @note[short] MacOS (ARM): 0xe6664
     * @note[short] MacOS (Intel): 0x108b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x284aac
     * @note[short] Android
     */
    void reorderObjectSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf42fc
     * @note[short] MacOS (Intel): 0x119830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28b95c
     * @note[short] Android
     */
    void reparentObject(cocos2d::CCNode* node, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0xd8cb8
     * @note[short] MacOS (Intel): 0xfa030
     * @note[short] Windows: 0x311b00
     * @note[short] iOS: 0x27ad00
     * @note[short] Android
     */
    void resetActiveEnterEffects();

    /**
     * @note[short] MacOS (ARM): 0xf944c
     * @note[short] MacOS (Intel): 0x11f690
     * @note[short] Windows: 0x32ddb0
     * @note[short] iOS: 0x28ee84
     * @note[short] Android
     */
    bool resetAreaObjectValues(GameObject* object, bool update);

    /**
     * @note[short] MacOS (ARM): 0x10610c
     * @note[short] MacOS (Intel): 0x12ee50
     * @note[short] Windows: 0x33db00
     * @note[short] iOS: 0x29886c
     * @note[short] Android
     */
    void resetAudio();

    /**
     * @note[short] MacOS (ARM): 0x10e51c
     * @note[short] MacOS (Intel): 0x139210
     * @note[short] Windows: 0x346cc0
     * @note[short] iOS: 0x29da24
     * @note[short] Android
     */
    void resetCamera();

    /**
     * @note[short] MacOS (ARM): 0xf17f0
     * @note[short] MacOS (Intel): 0x1169b0
     * @note[short] Windows: 0x128ef0
     * @note[short] iOS: 0x2898e4
     * @note[short] Android
     */
    void resetGradientLayers();

    /**
     * @note[short] MacOS (ARM): 0x103a68
     * @note[short] MacOS (Intel): 0x12be50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x296bfc
     * @note[short] Android
     */
    void resetGroupCounters(bool reset);

    /**
     * @note[short] MacOS (ARM): 0x10da4c
     * @note[short] MacOS (Intel): 0x1383f0
     * @note[short] Windows: 0x342540
     * @note[short] iOS: 0x29d1f0
     * @note[short] Android
     */
    void resetLevelVariables();

    /**
     * @note[short] MacOS (ARM): 0x100a84
     * @note[short] MacOS (Intel): 0x1285a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x294bbc
     * @note[short] Android
     */
    void resetMoveOptimizedValue();

    /**
     * @note[short] MacOS (ARM): 0xdeaf8
     * @note[short] MacOS (Intel): 0x1001e0
     * @note[short] iOS: 0x27f0cc
     * @note[short] Android
     */
    void resetPlayer();

    /**
     * @note[short] MacOS (Intel): 0x134aa0
     * @note[short] Windows: 0x340070
     * @note[short] iOS: 0x29ba20
     * @note[short] Android
     */
    void resetRecord(int steps, bool noFullReset);

    /**
     * @note[short] MacOS (ARM): 0x10a784
     * @note[short] MacOS (Intel): 0x1349e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetRecordFull();

    /**
     * @note[short] MacOS (ARM): 0x10413c
     * @note[short] MacOS (Intel): 0x12c640
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetSongTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x10e7d4
     * @note[short] MacOS (Intel): 0x68430
     * @note[short] Windows: 0x34d6d0
     * @note[short] iOS: 0x29dc2c
     * @note[short] Android
     */
    void resetSpawnChannelIndex();

    /**
     * @note[short] MacOS (ARM): 0xe1218
     * @note[short] MacOS (Intel): 0x102cc0
     * @note[short] Windows: 0x346fa0
     * @note[short] iOS: 0x280c70
     * @note[short] Android
     */
    void resetStaticCamera(bool resetX, bool resetY);

    /**
     * @note[short] MacOS (ARM): 0xfb214
     * @note[short] MacOS (Intel): 0x1219b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2908b8
     * @note[short] Android
     */
    void resetStoppedAreaObjects();

    /**
     * @note[short] MacOS (ARM): 0xf7018
     * @note[short] MacOS (Intel): 0x11cb70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28d7e4
     * @note[short] Android
     */
    void restoreAllUIObjects();

    /**
     * @note[short] MacOS (ARM): 0x1047b8
     * @note[short] MacOS (Intel): 0x12cde0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void restoreDefaultGameplayOffsetX();

    /**
     * @note[short] MacOS (ARM): 0x1047d4
     * @note[short] MacOS (Intel): 0x12ce20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void restoreDefaultGameplayOffsetY();

    /**
     * @note[short] Android
     */
    TodoReturn restoreRecording(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0xec5c8
     * @note[short] MacOS (Intel): 0x110eb0
     * @note[short] iOS: 0x287324
     * @note[short] Android
     */
    void restoreRemap(EffectGameObject* object, std::unordered_map<int, int>& remap);

    /**
     * @note[short] MacOS (ARM): 0x1060e4
     * @note[short] MacOS (Intel): 0x12ee20
     * @note[short] Windows: 0x33d9f0
     * @note[short] iOS: 0x298844
     * @note[short] Android
     */
    void resumeAudio();

    /**
     * @note[short] MacOS (ARM): 0xfbba4
     * @note[short] MacOS (Intel): 0x1223d0
     * @note[short] Windows: 0x330250
     * @note[short] iOS: 0x2910d8
     * @note[short] Android
     */
    void rotateAreaObjects(GameObject* object, cocos2d::CCArray* objects, float rotation, bool reset);

    /**
     * @note[short] MacOS (ARM): 0xfe2c8
     * @note[short] MacOS (Intel): 0x1253f0
     * @note[short] Windows: 0x332210
     * @note[short] iOS: 0x29319c
     * @note[short] Android
     */
    void rotateObject(GameObject* object, float rotation);

    /**
     * @note[short] MacOS (ARM): 0xfe344
     * @note[short] MacOS (Intel): 0x125470
     * @note[short] Windows: 0x3322b0
     * @note[short] iOS: 0x293218
     * @note[short] Android
     */
    void rotateObjects(cocos2d::CCArray* objects, float rotation, cocos2d::CCPoint position, cocos2d::CCPoint offset, bool finished, bool unused);

    /**
     * @note[short] Android
     */
    void setActiveStartPosObject(StartPosObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xad80
     * @note[short] MacOS (Intel): 0x11aa00
     * @note[short] Windows: 0x329a70
     * @note[short] iOS: 0x473e6c
     * @note[short] Android
     */
    void setGroupParent(GameObject* object, int groupID);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setStartPosObject(StartPosObject* startPos);

    /**
     * @note[short] MacOS (ARM): 0xce3ec
     * @note[short] MacOS (Intel): 0xed5b0
     * @note[short] Windows: 0x30c1e0
     * @note[short] iOS: 0x273e6c
     * @note[short] Android
     */
    void setupLayers();

    /**
     * @note[short] MacOS (Intel): 0x100aa0
     * @note[short] Windows: 0x65e610
     * @note[short] Android
     */
    void setupLevelStart(LevelSettingsObject* settings);

    /**
     * @note[short] MacOS (ARM): 0x324ed4
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupReplay(std::string inputs);

    /**
     * @note[short] MacOS (ARM): 0x10f430
     * @note[short] MacOS (Intel): 0x13a360
     * @note[short] Windows: 0x82120
     * @note[short] iOS: 0x29e3ec
     * @note[short] Android
     */
    void shakeCamera(float duration, float strength, float interval);

    /**
     * @note[short] MacOS (ARM): 0xd0900
     * @note[short] MacOS (Intel): 0xefd80
     * @note[short] Windows: 0x30e840
     * @note[short] iOS: 0x275f08
     * @note[short] Android
     */
    bool shouldExitHackedLevel();

    /**
     * @note[short] MacOS (ARM): 0x101250
     * @note[short] MacOS (Intel): 0x128df0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x295244
     * @note[short] Android
     */
    bool shouldUseSubstepForButton(float dt);

    /**
     * @note[short] MacOS (ARM): 0xf50b8
     * @note[short] MacOS (Intel): 0x11a640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28c4a0
     * @note[short] Android
     */
    void sortAllGroupsX();

    /**
     * @note[short] MacOS (ARM): 0xd3d7c
     * @note[short] MacOS (Intel): 0xf36e0
     * @note[short] iOS: 0x278638
     * @note[short] Android
     */
    void sortGroups();

    /**
     * @note[short] MacOS (ARM): 0xf7ca0
     * @note[short] MacOS (Intel): 0x11db30
     * @note[short] Windows: 0x32d140
     * @note[short] iOS: 0x28df28
     * @note[short] Android
     */
    void sortSectionVector();

    /**
     * @note[short] Android
     */
    TodoReturn sortStartPosObjects();

    /**
     * @note[short] MacOS (ARM): 0xd5f44
     * @note[short] MacOS (Intel): 0xf64a0
     * @note[short] Windows: 0x32a750
     * @note[short] iOS: 0x2793f4
     * @note[short] Android
     */
    void sortStickyGroups();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x285d8c
     * @note[short] Android
     */
    void spawnGroupTriggered(int targetID, float delay, bool spawnOrdered, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xe7eb8
     * @note[short] MacOS (Intel): 0x10a470
     * @note[short] iOS: 0x285f40
     * @note[short] Android
     */
    void spawnObjectsInOrder(cocos2d::CCArray* objects, double delay, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x1109ec
     * @note[short] MacOS (Intel): 0x13bff0
     * @note[short] iOS: 0x29f214
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* spawnParticle(char const* plist, int zOrder, cocos2d::tCCPositionType positionType, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x110888
     * @note[short] MacOS (Intel): 0x13be10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29f0b0
     * @note[short] Android
     */
    void spawnParticleTrigger(SpawnParticleGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe41dc
     * @note[short] MacOS (Intel): 0x1062c0
     * @note[short] Windows: 0xeb5f0
     * @note[short] iOS: 0x2831a8
     * @note[short] Android
     */
    void spawnParticleTrigger(int particleID, cocos2d::CCPoint position, float rotation, float scale);

    /**
     * @note[short] MacOS (ARM): 0xe4d18
     * @note[short] MacOS (Intel): 0x106f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x283948
     * @note[short] Android
     */
    void spawnPlayer2();

    /**
     * @note[short] MacOS (ARM): 0xf41ec
     * @note[short] Windows: 0x328840
     * @note[short] iOS: 0x28b84c
     * @note[short] Android
     */
    cocos2d::CCPoint speedForShaderTarget(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xdda50
     * @note[short] MacOS (Intel): 0xff0e0
     * @note[short] Windows: 0x315810
     * @note[short] iOS: 0x27e3bc
     * @note[short] Android
     */
    cocos2d::CCArray* staticObjectsInRect(cocos2d::CCRect rect, bool enabledGroups);

    /**
     * @note[short] MacOS (ARM): 0xe12d4
     * @note[short] MacOS (Intel): 0x83fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopAllGroundActions();

    /**
     * @note[short] MacOS (ARM): 0x10f4b4
     * @note[short] MacOS (Intel): 0xc52c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29e470
     * @note[short] Android
     */
    void stopCameraShake();

    /**
     * @note[short] MacOS (ARM): 0xd97a4
     * @note[short] MacOS (Intel): 0xfaea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27b198
     * @note[short] Android
     */
    void stopCustomEnterEffect(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd97f8
     * @note[short] MacOS (Intel): 0xfaef0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x27b1fc
     * @note[short] Android
     */
    void stopCustomEnterEffect(EnterEffectObject* object, bool enter);

    /**
     * @note[short] MacOS (ARM): 0xeec54
     * @note[short] MacOS (Intel): 0x114010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x287e3c
     * @note[short] Android
     */
    void stopSFXTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (Intel): 0xf0520
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void swapBackground(int background);

    /**
     * @note[short] MacOS (ARM): 0xd13b4
     * @note[short] MacOS (Intel): 0xf0850
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x276828
     * @note[short] Android
     */
    void swapGround(int ground);

    /**
     * @note[short] MacOS (Intel): 0xf09a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void swapMiddleground(int middleground);

    /**
     * @note[short] MacOS (ARM): 0xe0008
     * @note[short] MacOS (Intel): 0x1018b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27fedc
     * @note[short] Android
     */
    void switchToFlyMode(PlayerObject* player, GameObject* object, bool noPortal, int type);

    /**
     * @note[short] MacOS (ARM): 0xe0200
     * @note[short] iOS: 0x280040
     * @note[short] Android
     */
    void switchToRobotMode(PlayerObject* player, GameObject* object, bool noPortal);

    /**
     * @note[short] MacOS (ARM): 0xe0154
     * @note[short] iOS: 0x27ffdc
     * @note[short] Android
     */
    void switchToRollMode(PlayerObject* player, GameObject* object, bool noPortal);

    /**
     * @note[short] MacOS (ARM): 0xe02ac
     * @note[short] Windows: 0x3aab00
     * @note[short] iOS: 0x2800a4
     * @note[short] Android
     */
    void switchToSpiderMode(PlayerObject* player, GameObject* object, bool noPortal);

    /**
     * @note[short] MacOS (ARM): 0x10d934
     * @note[short] MacOS (Intel): 0x1382e0
     * @note[short] Windows: 0x164ba0
     * @note[short] iOS: 0x29d138
     * @note[short] Android
     */
    void syncBGTextures();

    /**
     * @note[short] MacOS (ARM): 0xdb854
     * @note[short] MacOS (Intel): 0xfcad0
     * @note[short] Windows: 0x313600
     * @note[short] iOS: 0x27c5bc
     * @note[short] Android
     */
    void teleportPlayer(TeleportPortalObject* object, PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x101e54
     * @note[short] MacOS (Intel): 0x129af0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x295a14
     * @note[short] Android
     */
    void testInstantCountTrigger(int itemID, int compareCount, int groupID, bool activateGroup, int triggerMode, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xce288
     * @note[short] MacOS (Intel): 0xed440
     * @note[short] iOS: 0x273cb0
     * @note[short] Android
     */
    void toggleAudioVisualizer(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xdfc4c
     * @note[short] MacOS (Intel): 0x1014a0
     * @note[short] Windows: 0x31b4c0
     * @note[short] iOS: 0x27fc40
     * @note[short] Android
     */
    void toggleDualMode(GameObject* object, bool dual, PlayerObject* player, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0xe0358
     * @note[short] MacOS (Intel): 0x101c00
     * @note[short] Windows: 0x34e0a0
     * @note[short] iOS: 0x280108
     * @note[short] Android
     */
    void toggleFlipped(bool flip, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0xf4710
     * @note[short] MacOS (Intel): 0x119c40
     * @note[short] iOS: 0x28bd64
     * @note[short] Android
     */
    void toggleGroup(int id, bool activate);

    /**
     * @note[short] MacOS (ARM): 0xf4b04
     * @note[short] MacOS (Intel): 0x11a090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleLockPlayer(bool disable, bool player2);

    /**
     * @note[short] MacOS (ARM): 0xf4a8c
     * @note[short] MacOS (Intel): 0x11a010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28c070
     * @note[short] Android
     */
    void togglePlayerStreakBlend(bool blend, bool force);

    /**
     * @note[short] MacOS (ARM): 0x104178
     * @note[short] MacOS (Intel): 0x12c690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2971f0
     * @note[short] Android
     */
    void togglePlayerVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xf4ad8
     * @note[short] MacOS (Intel): 0x11a060
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void togglePlayerVisibility(bool visible, bool player1);

    /**
     * @note[short] MacOS (ARM): 0xfb654
     * @note[short] MacOS (Intel): 0x121de0
     * @note[short] Windows: 0x32f870
     * @note[short] iOS: 0x290bbc
     * @note[short] Android
     */
    void transformAreaObjects(GameObject* object, cocos2d::CCArray* objects, float scaleX, float scaleY, bool reset);

    /**
     * @note[short] MacOS (ARM): 0xf111c
     * @note[short] MacOS (Intel): 0x116270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28940c
     * @note[short] Android
     */
    void triggerAdvancedFollowCommand(AdvancedFollowTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0xfebd4
     * @note[short] MacOS (Intel): 0x125e20
     * @note[short] Windows: 0x334b00
     * @note[short] iOS: 0x2938f0
     * @note[short] Android
     */
    void triggerAdvancedFollowEditCommand(AdvancedFollowEditObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf7f3c
     * @note[short] MacOS (Intel): 0x11dea0
     * @note[short] Windows: 0x32d360
     * @note[short] iOS: 0x28e10c
     * @note[short] Android
     */
    void triggerAreaEffect(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf8310
     * @note[short] MacOS (Intel): 0x11e3b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28e3e0
     * @note[short] Android
     */
    void triggerAreaEffectAnimation(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf0204
     * @note[short] MacOS (Intel): 0x1152a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x288690
     * @note[short] Android
     */
    void triggerDynamicMoveCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf0c5c
     * @note[short] MacOS (Intel): 0x115d10
     * @note[short] Windows: 0x3245a0
     * @note[short] iOS: 0x288fb8
     * @note[short] Android
     */
    void triggerDynamicRotateCommand(EnhancedTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf132c
     * @note[short] MacOS (Intel): 0x1164d0
     * @note[short] Windows: 0x324a50
     * @note[short] iOS: 0x2895e4
     * @note[short] Android
     */
    void triggerGradientCommand(GradientTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf44c4
     * @note[short] MacOS (Intel): 0x1199c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28bb24
     * @note[short] Android
     */
    void triggerGravityChange(EffectGameObject* object, int playerID);

    /**
     * @note[short] MacOS (ARM): 0xeff34
     * @note[short] MacOS (Intel): 0x114f80
     * @note[short] iOS: 0x288458
     * @note[short] Android
     */
    void triggerMoveCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf0a88
     * @note[short] MacOS (Intel): 0x115b20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x288e24
     * @note[short] Android
     */
    void triggerRotateCommand(EnhancedTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf2894
     * @note[short] MacOS (Intel): 0x117c40
     * @note[short] Windows: 0x326340
     * @note[short] iOS: 0x13c790
     * @note[short] Android
     */
    void triggerShaderCommand(ShaderGameObject* object);

    /**
     * @note[short] Windows: 0x3247c0
     * @note[short] iOS: 0x2892d8
     * @note[short] Android
     */
    void triggerTransformCommand(TransformTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf5228
     * @note[short] MacOS (Intel): 0x11a7b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GameObject* tryGetGroupParent(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xe5ebc
     * @note[short] MacOS (Intel): 0x1082f0
     * @note[short] Windows: 0x47e990
     * @note[short] iOS: 0x28457c
     * @note[short] Android
     */
    GameObject* tryGetMainObject(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xdec24
     * @note[short] MacOS (Intel): 0x100340
     * @note[short] Windows: 0x329850
     * @note[short] iOS: 0x27f1f8
     * @note[short] Android
     */
    GameObject* tryGetObject(int groupID);

    /**
     * @note[short] MacOS (ARM): 0x10612c
     * @note[short] MacOS (Intel): 0x12ee80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29888c
     * @note[short] Android
     */
    void tryResumeAudio();

    /**
     * @note[short] MacOS (ARM): 0x111880
     * @note[short] MacOS (Intel): 0x13ced0
     * @note[short] Windows: 0x347de0
     * @note[short] iOS: 0x29faec
     * @note[short] Android
     */
    void unclaimParticle(char const* key, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0xf6628
     * @note[short] MacOS (Intel): 0x11c030
     * @note[short] Windows: 0x32a9d0
     * @note[short] iOS: 0x28d0ac
     * @note[short] Android
     */
    void ungroupStickyObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x10194c
     * @note[short] MacOS (Intel): 0x129540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlinkAllEvents();

    /**
     * @note[short] Android
     */
    TodoReturn unlockExistingFirstParents();

    /**
     * @note[short] MacOS (ARM): 0xd8d20
     * @note[short] MacOS (Intel): 0xfa0a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27ad68
     * @note[short] Android
     */
    void updateActiveEnterEffect(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10d8cc
     * @note[short] MacOS (Intel): 0x138280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29d0d0
     * @note[short] Android
     */
    void updateAllObjectSection();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x32e010
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateAreaObjectLastValues(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x107b68
     * @note[short] MacOS (Intel): 0x131060
     * @note[short] iOS: 0x2997b0
     * @note[short] Android
     */
    void updateAudioVisualizer();

    /**
     * @note[short] MacOS (ARM): 0x10e344
     * @note[short] MacOS (Intel): 0x138fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29d8e4
     * @note[short] Android
     */
    void updateBGArtSpeed(float modX, float modY);

    /**
     * @note[short] MacOS (ARM): 0x108130
     * @note[short] Windows: 0x343200
     * @note[short] iOS: 0x299c14
     * @note[short] Android
     */
    void updateCamera(float dt);

    /**
     * @note[short] MacOS (ARM): 0x10f6f4
     * @note[short] MacOS (Intel): 0x13a6b0
     * @note[short] iOS: 0x29e5f0
     * @note[short] Android
     */
    void updateCameraBGArt(cocos2d::CCPoint position, float zoom);

    /**
     * @note[short] MacOS (ARM): 0x104670
     * @note[short] MacOS (Intel): 0x12ccc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2975a8
     * @note[short] Android
     */
    void updateCameraEdge(int direction, int value);

    /**
     * @note[short] MacOS (ARM): 0xe080c
     * @note[short] MacOS (Intel): 0x102110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x280490
     * @note[short] Android
     */
    void updateCameraMode(EffectGameObject* obj, bool updateDual);

    /**
     * @note[short] MacOS (ARM): 0x1044d8
     * @note[short] iOS: 0x2974a8
     * @note[short] Android
     */
    void updateCameraOffsetX(float offsetX, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x1045a4
     * @note[short] iOS: 0x297528
     * @note[short] Android
     */
    void updateCameraOffsetY(float offsetY, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] Windows: 0x31d4b0
     * @note[short] Android
     */
    void updateCollisionBlocks();

    /**
     * @note[short] MacOS (ARM): 0xe5568
     * @note[short] MacOS (Intel): 0x1077d0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x284130
     * @note[short] Android
     */
    void updateCounters(int itemId, int value);

    /**
     * @note[short] MacOS (ARM): 0xe0500
     * @note[short] MacOS (Intel): 0x101df0
     * @note[short] Windows: 0x317b50
     * @note[short] iOS: 0x28026c
     * @note[short] Android
     */
    void updateDualGround(PlayerObject* object, int mode, bool instant, float duration);

    /**
     * @note[short] MacOS (ARM): 0xd99ac
     * @note[short] MacOS (Intel): 0xfb070
     * @note[short] iOS: 0x27b3e4
     * @note[short] Android
     */
    void updateEnterEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0xf7c4c
     * @note[short] MacOS (Intel): 0x11dae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28ded4
     * @note[short] Android
     */
    void updateExtendedCollision(GameObject* object, bool extendedCollision);

    /**
     * @note[short] MacOS (ARM): 0xf43cc
     * @note[short] MacOS (Intel): 0x1198d0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x28ba2c
     * @note[short] Android
     */
    void updateExtraGameLayers();

    /**
     * @note[short] MacOS (ARM): 0x1047c8
     * @note[short] MacOS (Intel): 0x12ce00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2976d0
     * @note[short] Android
     */
    void updateGameplayOffsetX(int offsetX, bool staticOffset);

    /**
     * @note[short] MacOS (ARM): 0x1047e4
     * @note[short] MacOS (Intel): 0x12ce40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2976dc
     * @note[short] Android
     */
    void updateGameplayOffsetY(int offsetY, bool staticOffset);

    /**
     * @note[short] MacOS (ARM): 0xf19c0
     * @note[short] MacOS (Intel): 0x116be0
     * @note[short] Windows: 0x324ee0
     * @note[short] iOS: 0x289a2c
     * @note[short] Android
     */
    void updateGradientLayers();

    /**
     * @note[short] MacOS (ARM): 0xd1798
     * @note[short] MacOS (Intel): 0xf0c70
     * @note[short] Windows: 0x30f5d0
     * @note[short] iOS: 0x141b6c
     * @note[short] Android
     */
    void updateGroundShadows();

    /**
     * @note[short] MacOS (ARM): 0x107a90
     * @note[short] MacOS (Intel): 0x130f90
     * @note[short] Windows: 0x34df90
     * @note[short] iOS: 0x2996dc
     * @note[short] Android
     */
    void updateGuideArt();

    /**
     * @note[short] MacOS (ARM): 0x110078
     * @note[short] MacOS (Intel): 0x13b2c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateInternalCamOffsetX(float offsetX, float duration, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x110154
     * @note[short] MacOS (Intel): 0x13b3b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateInternalCamOffsetY(float offsetY, float duration, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x101c10
     * @note[short] MacOS (Intel): 0x129830
     * @note[short] Windows: 0x339e50
     * @note[short] iOS: 0x295834
     * @note[short] Android
     */
    void updateKeyframeOrder(int keyframeGroup);

    /**
     * @note[short] Windows: 0x7aca0
     * @note[short] Android
     */
    void updateLayerCapacity(std::string capacityString);

    /**
     * @note[short] MacOS (ARM): 0xd1ee8
     * @note[short] MacOS (Intel): 0xf1450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x277224
     * @note[short] Android
     */
    void updateLegacyLayerCapacity(int front, int frontBlend, int back, int backBlend);

    /**
     * @note[short] MacOS (ARM): 0xd1168
     * @note[short] MacOS (Intel): 0xf05a0
     * @note[short] Windows: 0x30fd00
     * @note[short] iOS: 0x2765dc
     * @note[short] Android
     */
    void updateLevelColors();

    /**
     * @note[short] MacOS (ARM): 0x10d7d0
     * @note[short] MacOS (Intel): 0x138190
     * @note[short] Windows: 0x3423c0
     * @note[short] iOS: 0x29cffc
     * @note[short] Android
     */
    void updateMaxGameplayY();

    /**
     * @note[short] MacOS (ARM): 0x10e378
     * @note[short] MacOS (Intel): 0x138ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x29d918
     * @note[short] Android
     */
    void updateMGArtSpeed(float modX, float modY);

    /**
     * @note[short] MacOS (ARM): 0x1047f0
     * @note[short] MacOS (Intel): 0x12ce60
     * @note[short] iOS: 0x2976e8
     * @note[short] Android
     */
    void updateMGOffsetY(float offsetY, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xde41c
     * @note[short] MacOS (Intel): 0xffad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27eb04
     * @note[short] Android
     */
    void updateOBB2(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x25d210
     * @note[short] MacOS (Intel): 0x13da50
     * @note[short] Android
     */
    void updateParticles(float dt);

    /**
     * @note[short] MacOS (ARM): 0x10a264
     * @note[short] MacOS (Intel): 0x134310
     * @note[short] Windows: 0x6cd50
     * @note[short] iOS: 0x29b59c
     * @note[short] Android
     */
    void updatePlatformerTime();

    /**
     * @note[short] MacOS (ARM): 0xe64fc
     * @note[short] MacOS (Intel): 0x1089b0
     * @note[short] iOS: 0x2849a0
     * @note[short] Android
     */
    void updatePlayerCollisionBlocks();

    /**
     * @note[short] MacOS (ARM): 0x10a108
     * @note[short] MacOS (Intel): 0x134190
     * @note[short] Windows: 0x349a00
     * @note[short] iOS: 0x29b458
     * @note[short] Android
     */
    void updateProximityVolumeEffects();

    /**
     * @note[short] MacOS (ARM): 0x10373c
     * @note[short] MacOS (Intel): 0x12ba40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2969bc
     * @note[short] Android
     */
    void updateQueuedLabels();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateReplay();

    /**
     * @note[short] MacOS (ARM): 0xe71d8
     * @note[short] MacOS (Intel): 0x1097a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2854ac
     * @note[short] Android
     */
    void updateSavePositionObjects();

    /**
     * @note[short] MacOS (ARM): 0xf2fe0
     * @note[short] MacOS (Intel): 0x118650
     * @note[short] iOS: 0x413a8
     * @note[short] Android
     */
    void updateShaderLayer(float dt);

    /**
     * @note[short] MacOS (ARM): 0xd3ad4
     * @note[short] MacOS (Intel): 0xf33a0
     * @note[short] Windows: 0x311690
     * @note[short] iOS: 0x278454
     * @note[short] Android
     */
    void updateSpecialGroupData();

    /**
     * @note[short] MacOS (ARM): 0x109ce4
     * @note[short] MacOS (Intel): 0x133c40
     * @note[short] Windows: 0x33f580
     * @note[short] iOS: 0x29b1d4
     * @note[short] Android
     */
    void updateSpecialLabels();

    /**
     * @note[short] MacOS (ARM): 0xe0f64
     * @note[short] MacOS (Intel): 0x7ed0
     * @note[short] iOS: 0x280a00
     * @note[short] Android
     */
    void updateStaticCameraPos(cocos2d::CCPoint pos, bool staticX, bool staticY, bool followOrSmoothEase, float time, int easingType, float easingRate);

    /**
     * @note[short] MacOS (Intel): 0x13b580
     * @note[short] iOS: 0x29eca4
     * @note[short] Android
     */
    void updateStaticCameraPosToGroup(int centerID, bool updateX, bool updateY, bool followObject, float followEase, float duration, int easingType, float easingRate, bool smoothVelocity, float velocityMod);

    /**
     * @note[short] MacOS (ARM): 0xe069c
     * @note[short] MacOS (Intel): 0x101f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28031c
     * @note[short] Android
     */
    void updateTimeMod(float speed, bool players, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x103254
     * @note[short] MacOS (Intel): 0x12b3f0
     * @note[short] iOS: 0x2966e4
     * @note[short] Android
     */
    void updateTimerLabels();

    /**
     * @note[short] MacOS (ARM): 0x1041cc
     * @note[short] MacOS (Intel): 0x12c700
     * @note[short] Windows: 0x33c030
     * @note[short] iOS: 0x297244
     * @note[short] Android
     */
    void updateZoom(float zoom, float duration, int easing, float rate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x1176f4
     * @note[short] MacOS (Intel): 0x144420
     * @note[short] iOS: 0x2a42dc
     * @note[short] Android
     */
    void visitWithColorFlash();

    /**
     * @note[short] MacOS (ARM): 0x1129dc
     * @note[short] MacOS (Intel): 0x13e0c0
     * @note[short] Windows: 0x349ce0
     * @note[short] iOS: 0x2a07b4
     * @note[short] Android
     */
    float volumeForProximityEffect(SFXTriggerInstance& instance);
    GEODE_PAD(8);
    GJGameState m_gameState;
    GJGameLevel* m_level;
    PlaybackMode m_playbackMode;
    bool m_lowDetailMode;
    bool m_extraLDM;
    bool m_ignoreDamage;
    bool m_enable22Changes;
    bool m_allowStaticRotate;
    bool m_fixNegativeScale;
    bool m_startingFromBeginning;
    std::vector<SFXTriggerGameObject*> m_activeSfxTriggers;
    std::vector<void*> m_unk8a0;
    cocos2d::CCNode* m_hoverNode;
    cocos2d::CCNode* m_areaTransformNode;
    cocos2d::CCNode* m_areaSkewNode;
    cocos2d::CCNode* m_areaScaleNode;
    cocos2d::CCNode* m_areaRotateNode;
    cocos2d::CCNode* m_areaTransformNode2;
    OBB2D* m_obb2;
    std::vector<std::unordered_map<int,int>> m_spawnRemapTriggers;
    std::unordered_map<int, cocos2d::CCPoint> m_uiObjectPositions;
    GJEffectManager* m_effectManager;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_gameLayerT4;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_glowLayerT4;
    CCNodeContainer* m_specialLayerT4;
    cocos2d::CCSpriteBatchNode* m_textLayerT4;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_fireLayerT4;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT4;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_particleLayerT4;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_game2LayerT4;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_gameLayerT3;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_glowLayerT3;
    CCNodeContainer* m_specialLayerT3;
    cocos2d::CCSpriteBatchNode* m_textLayerT3;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_fireLayerT3;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT3;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_particleLayerT3;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_game2LayerT3;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_gameLayerT2;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_glowLayerT2;
    CCNodeContainer* m_specialLayerT2;
    cocos2d::CCSpriteBatchNode* m_textLayerT2;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_fireLayerT2;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT2;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_particleLayerT2;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_game2LayerT2;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_gameLayerT1;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_glowLayerT1;
    CCNodeContainer* m_specialLayerT1;
    cocos2d::CCSpriteBatchNode* m_textLayerT1;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_fireLayerT1;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT1;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_particleLayerT1;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_game2LayerT1;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_game2LayerB0;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_gameLayerB1;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_glowLayerB1;
    CCNodeContainer* m_specialLayerB1;
    cocos2d::CCSpriteBatchNode* m_textLayerB1;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_fireLayerB1;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB1;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_particleLayerB1;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_game2LayerB1;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_gameLayerB2;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_glowLayerB2;
    CCNodeContainer* m_specialLayerB2;
    cocos2d::CCSpriteBatchNode* m_textLayerB2;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_fireLayerB2;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB2;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_particleLayerB2;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_game2LayerB2;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_gameLayerB3;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_glowLayerB3;
    CCNodeContainer* m_specialLayerB3;
    cocos2d::CCSpriteBatchNode* m_textLayerB3;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_fireLayerB3;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB3;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_particleLayerB3;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_game2LayerB3;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_gameLayerB4;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_glowLayerB4;
    CCNodeContainer* m_specialLayerB4;
    cocos2d::CCSpriteBatchNode* m_textLayerB4;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_fireLayerB4;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB4;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_particleLayerB4;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_game2LayerB4;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_gameLayerB5;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_glowLayerB5;
    CCNodeContainer* m_specialLayerB5;
    cocos2d::CCSpriteBatchNode* m_textLayerB5;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_fireLayerB5;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB5;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_particleLayerB5;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_game2LayerB5;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB5;
    PlayerObject* m_player1;
    PlayerObject* m_player2;
    LevelSettingsObject* m_levelSettings;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_collisionBlocks;
    cocos2d::CCArray* m_spawnObjectsArray;
    cocos2d::CCDictionary* m_spawnObjects;
    cocos2d::CCNode* m_unkdd0;
    std::vector<GameObject*> m_unkdd8;
    std::vector<GameObject*> m_disabledObjects;
    std::vector<GameObject*> m_unke08;
    std::vector<GameObject*> m_areaObjects;
    std::vector<GameObject*> m_processedAreaObjects;
    std::unordered_map<int, std::vector<GameObject*>> m_visibilityGroups;
    std::vector<GameObject*> m_visibleObjects;
    int m_visibleObjectsCount;
    int m_visibleObjectsIndex;
    std::vector<GameObject*> m_visibleObjects2;
    int m_visibleObjects2Count;
    int m_visibleObjects2Index;
    int m_unked0;
    int m_disabledObjectsCount;
    int m_unked8;
    int m_areaObjectsCount;
    int m_processedAreaObjectsCount;
    int m_unkee4;
    int m_disabledObjectsIndex;
    int m_unkeec;
    int m_areaObjectsIndex;
    int m_processedAreaObjectsIndex;
    cocos2d::CCDictionary* m_groupDict;
    cocos2d::CCDictionary* m_staticGroupDict;
    cocos2d::CCDictionary* m_optimizedGroupDict;
    std::vector<cocos2d::CCArray*> m_groups;
    std::vector<cocos2d::CCArray*> m_staticGroups;
    std::vector<cocos2d::CCArray*> m_optimizedGroups;
    cocos2d::CCDictionary* m_parentGroupsDict;
    cocos2d::CCDictionary* m_parentGroupIDs;
    cocos2d::CCDictionary* m_removedParentGroupIDs;
    cocos2d::CCArray* m_targetGroupsArray;
    std::unordered_map<int, std::pair<int, int>> m_targetGroups;
    cocos2d::CCDictionary* m_linkedGroupDict;
    int m_lastUsedLinkedID;
    cocos2d::CCNode* m_objectParent;
    cocos2d::CCNode* m_inShaderParent;
    cocos2d::CCNode* m_aboveShaderParent;
    cocos2d::CCLayer* m_objectLayer;
    cocos2d::CCLayer* m_inShaderObjectLayer;
    cocos2d::CCLayer* m_aboveShaderObjectLayer;
    cocos2d::CCSprite* m_background;
    void* m_unk1000;
    GJGroundLayer* m_groundLayer;
    GJGroundLayer* m_groundLayer2;
    GJMGLayer* m_middleground;
    cocos2d::CCArray* m_batchNodes;
    cocos2d::CCDictionary* m_objectsToDeactivate;
    std::unordered_map<int, std::vector<LabelGameObject*>> m_labelObjects;
    std::unordered_map<int, std::vector<LabelGameObject*>> m_timeLabelObjects;
    std::set<std::tuple<int, int, int>> m_spawnTuples;
    bool m_increasedLayerCapacity;
    std::array<float, 2000> m_varianceValues;
    std::map<std::pair<int, int>, std::pair<float, float>> m_destroyObjectValues;
    std::vector<float> m_enterEasingValues;
    std::unordered_map<int, int> m_enterEasingIndices;
    int m_enterEasingValuesIndex;
    bool m_dualTouchTrigger;
    int m_clicks;
    int m_attempts;
    bool m_jumping;
    int m_leftSectionIndex;
    int m_rightSectionIndex;
    int m_bottomSectionIndex;
    int m_topSectionIndex;
    bool m_isEditor;
    bool m_blending;
    bool m_isPlatformer;
    GameObject* m_player1CollisionBlock;
    GameObject* m_player2CollisionBlock;
    int m_particleCount;
    int m_customParticleCount;
    int m_particleSystemLimit;
    cocos2d::CCDictionary* m_particlesDict;
    cocos2d::CCDictionary* m_customParticles;
    cocos2d::CCArray* m_unclaimedParticles;
    std::unordered_map<int, std::string> m_particleCountToParticleString;
    cocos2d::CCDictionary* m_claimedParticles;
    cocos2d::CCArray* m_temporaryParticles;
    std::unordered_set<int> m_customParticlesUIDs;
    cocos2d::CCDictionary* m_gradientLayers;
    int m_activeGradients;
    ShaderLayer* m_shaderLayer;
    bool m_objectsDeactivated;
    bool m_areaObjectsUpdated;
    StartPosObject* m_startPosObject;
    bool m_useReplay;
    bool m_unk3189;
    int m_solidCollisionObjectsCount;
    int m_solidCollisionObjectsIndex;
    std::vector<GameObject*> m_solidCollisionObjects;
    int m_hazardCollisionObjectsCount;
    int m_hazardCollisionObjectsIndex;
    std::vector<GameObject*> m_hazardCollisionObjects;
    std::vector<SequenceTriggerGameObject*> m_sequenceTriggers;
    bool m_isPracticeMode;
    bool m_practiceMusicSync;
    float m_loadingProgress;
    cocos2d::CCNode* m_flashNode;
    float m_unk31f8;
    float m_cameraFlip;
    float m_cameraWidthOffset;
    float m_cameraHeightOffset;
    bool m_updateGroundShadows;
    cocos2d::CCDictionary* m_collectedItems;
    float m_levelLength;
    bool m_resetActiveObjects;
    bool m_skipArtReload;
    EndPortalObject* m_endPortal;
    bool m_isTestMode;
    bool m_freezeStartCamera;
    bool m_unk322a;
    float m_cameraUnzoomedHeightOffset;
    float m_targetCameraHeightOffset;
    bool m_calculateTargetHeightOffset;
    cocos2d::CCParticleSystemQuad* m_glitterParticles;
    bool m_staticCameraShake;
    bool m_skipCameraShake;
    bool m_playerDied;
    double m_extraDelta;
    bool m_started;
    bool m_unk3251;
    float m_cameraWidth;
    float m_cameraHeight;
    float m_cameraUnzoomedX;
    float m_halfCameraWidth;
    AudioEffectsLayer* m_audioEffectsLayer;
    OBB2D* m_cameraObb2;
    std::vector<GameObject*> m_activeObjects;
    int m_activeObjectsCount;
    int m_activeObjectsIndex;
    cocos2d::ccColor3B m_lightBGColor;
    int m_resumeTimer;
    bool m_recordInputs;
    bool m_unk32a1;
    bool m_unk32a2;
    bool m_unk32a3;
    bool m_unk32a4;
    std::string m_recordString;
    cocos2d::CCObject* m_unk32c8;
    int m_unk32d0;
    bool m_unk32d4;
    uint64_t m_randomSeed;
    uint64_t m_unk32e0;
    uint64_t m_replayRandSeed;
    int m_unk32ec;
    int m_currentStep;
    std::vector<PlayerButtonCommand> m_queuedButtons;
    std::vector<RecordButtonCommand> m_queuedRecordedButtons;
    std::unordered_map<int, RecordCheckpoint> m_unk3330;
    int m_unk3370;
    std::vector<RecordButtonCommand> m_queuedReplayButtons;
    std::unordered_map<int, RecordCheckpoint> m_unk3390;
    std::vector<void*> m_unk3340;
    std::vector<void*> m_unk3358;
    int m_queuedRecordedButtonsSize;
    std::string m_persistentStateString;
    std::string m_savedPersistentStateString;
    int m_savedAttempts;
    bool m_portalIndicators;
    bool m_orbIndicators;
    cocos2d::CCArray* m_indicatorSprites;
    float m_unk3380;
    std::vector<int> m_unk3388;
    std::vector<int> m_unk33a0;
    bool m_hideGround;
    cocos2d::CCArray* m_unk33c0;
    cocos2d::CCArray* m_objectsToMove;
    std::unordered_map<int, GameObject*> m_savePositionObjects;
    std::unordered_map<int, int> m_savePositionValues;
    bool m_keepGroupParents;
    cocos2d::CCDictionary* m_keyframeGroups;
    int m_keyframeGroup;
    UILayer* m_uiLayer;
    cocos2d::CCArray* m_uiObjects;
    cocos2d::CCDictionary* m_uiObjectLayers;
    cocos2d::CCNode* m_uiTriggerUI;
    double m_timePlayed;
    int m_tickIndex;
    int m_clickIndex;
    bool m_levelEndAnimationStarted;
    int m_points;
    std::string m_pointsString;
    std::vector<std::vector<std::vector<GameObject*>*>*> m_sections;
    std::vector<std::vector<std::vector<GameObject*>*>*> m_nonEffectObjects;
    std::vector<std::vector<GameObject*>*> m_collisionBlockSections;
    std::vector<GameObject*> m_calcNonEffectObjects;
    int m_calcNonEffectObjectsSize;
    std::vector<GameObject*> m_calcCollisionBlockObjects;
    int m_calcCollisionBlockObjectsSize;
    std::vector<GameObject*> m_calcCollisionBlockObjects2;
    int m_calcCollisionBlockObjects2Size;
    std::vector<std::vector<int>*> m_sectionSizes;
    std::vector<std::vector<int>*> m_nonEffectObjectsSizes;
    std::vector<std::vector<int>*> m_collisionBlockSectionSizes;
    std::vector<std::vector<bool>*> m_nonEffectObjectsFlags;
    float m_sectionXFactor;
    float m_sectionYFactor;
    float m_maxGameplayY;
    float m_songTriggerInterval;
    std::unordered_map<int, int> m_stickyGroups;
    FMODLevelVisualizer* m_audioVisualizerBG;
    FMODLevelVisualizer* m_audioVisualizerSFX;
    bool m_showAudioVisualizer;
    int m_areaMovedCount;
    int m_areaScaledCount;
    int m_areaRotatedCount;
    int m_areaColorCount;
    int m_areaMovedCountTotal;
    int m_areaScaledCountTotal;
    int m_areaRotatedCountTotal;
    int m_areaColorCountTotal;
    int m_movedCount;
    int m_scaledCount;
    int m_rotatedCount;
    int m_followedCount;
    int m_areaMovedCountDisplay;
    int m_areaScaledCountDisplay;
    int m_areaRotatedCountDisplay;
    int m_areaColorCountDisplay;
    int m_areaMovedCountTotalDisplay;
    int m_areaScaledCountTotalDisplay;
    int m_areaRotatedCountTotalDisplay;
    int m_areaColorCountTotalDisplay;
    int m_movedCountDisplay;
    int m_scaledCountDisplay;
    int m_rotatedCountDisplay;
    int m_followedCountDisplay;
    bool m_loadingStartPosition;
    bool m_processingAudioTriggers;
    bool m_audioPaused;
    bool m_startOptimization;
    GJGameLoadingLayer* m_loadingLayer;
    cocos2d::CCDrawNode* m_debugDrawNode;
    std::array<cocos2d::CCPoint, 400>* m_debugDrawPoints;
    bool m_isDebugDrawEnabled;
    bool m_disablePlayerHitbox;
    bool m_hitboxesOnDeath;
    GameObject* m_anticheatSpike;
    double m_timestamp;
    bool m_isBetweenSteps;
    bool m_clickBetweenSteps;
    bool m_clickOnSteps;
};
