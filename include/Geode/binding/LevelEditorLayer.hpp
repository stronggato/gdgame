#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJBaseGameLayer.hpp>
#include <Geode/binding/LevelSettingsDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/SeedValue.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class LevelEditorLayer : public GJBaseGameLayer, public LevelSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelEditorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelEditorLayer, GJBaseGameLayer)

    /**
     * @note[short] Windows: 0x3ea540
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelEditorLayer();

    /**
     * @note[short] MacOS (ARM): 0x83398
     * @note[short] MacOS (Intel): 0xde440
     * @note[short] iOS: 0x40e5f4
     * @note[short] Android: Rebinded
     */
     LevelEditorLayer();

    /**
     * @note[short] MacOS (Intel): 0x79350
     * @note[short] Windows: 0x3eada0
     * @note[short] Android
     */
    static LevelEditorLayer* create(GJGameLevel* level, bool noUI);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static LevelEditorLayer* get();

    /**
     * @note[short] MacOS (Intel): 0x792b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13d590
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool noUI);

    /**
     * @note[short] MacOS (ARM): 0xa87dc
     * @note[short] MacOS (Intel): 0xbc670
     * @note[short] Windows: 0x18bda0
     * @note[short] iOS: 0x3fcd38
     * @note[short] Android
     */
    static void updateObjectLabel(GameObject* object);

    /**
     * @note[short] MacOS (Intel): 0x4952f0
     * @note[short] Windows: 0x405cb0
     * @note[short] iOS: 0x1a95f4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (Intel): 0xc6fe0
     * @note[short] Windows: 0x3fdb90
     * @note[short] iOS: 0x4031a8
     * @note[short] Android
     */
    virtual void postUpdate(float dt);

    /**
     * @note[short] MacOS (ARM): 0x43c02c
     * @note[short] MacOS (Intel): 0xbd8d0
     * @note[short] Windows: 0x3f3870
     * @note[short] Android
     */
    virtual void updateVisibility(float dt);

    /**
     * @note[short] MacOS (Intel): 0xc6fc0
     * @note[short] Windows: 0x3fdb80
     * @note[short] iOS: 0x403194
     * @note[short] Android
     */
    virtual void playerTookDamage(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0xaeb88
     * @note[short] MacOS (Intel): 0xc3940
     * @note[short] Windows: 0x3f9960
     * @note[short] iOS: 0x400ea0
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2);

    /**
     * @note[short] MacOS (Intel): 0xd29e0
     * @note[short] Windows: 0x403ea0
     * @note[short] iOS: 0x4077b0
     * @note[short] Android
     */
    virtual void updateDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0xaf330
     * @note[short] MacOS (Intel): 0xc41c0
     * @note[short] Windows: 0x3fa800
     * @note[short] iOS: 0x401288
     * @note[short] Android
     */
    virtual void addToGroup(GameObject* object, int groupID, bool triggerGroup);

    /**
     * @note[short] MacOS (ARM): 0xaf3e8
     * @note[short] MacOS (Intel): 0xc4270
     * @note[short] Windows: 0x3fa960
     * @note[short] iOS: 0x401310
     * @note[short] Android
     */
    virtual void removeFromGroup(GameObject* object, int groupID);

    /**
     * @note[short] MacOS (ARM): 0xb033c
     * @note[short] MacOS (Intel): 0xc5370
     * @note[short] Windows: 0x3fb730
     * @note[short] iOS: 0x401ed0
     * @note[short] Android
     */
    virtual void updateObjectSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb0448
     * @note[short] MacOS (Intel): 0xc54b0
     * @note[short] Windows: 0x3fb9e0
     * @note[short] iOS: 0x401fd0
     * @note[short] Android
     */
    virtual void updateDisabledObjectsLastPos(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xaee28
     * @note[short] MacOS (Intel): 0xc3c40
     * @note[short] Windows: 0x3fa5e0
     * @note[short] iOS: 0x4010ac
     * @note[short] Android
     */
    virtual float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id);

    /**
     * @note[short] MacOS (ARM): 0xaeeb4
     * @note[short] MacOS (Intel): 0xc3cd0
     * @note[short] Windows: 0x3fa690
     * @note[short] iOS: 0x40111c
     * @note[short] Android
     */
    virtual cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): 0xaeef4
     * @note[short] MacOS (Intel): 0xc3d70
     * @note[short] Windows: 0x3fa700
     * @note[short] iOS: 0x40113c
     * @note[short] Android
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0xb01a0
     * @note[short] MacOS (Intel): 0xc51d0
     * @note[short] Windows: 0x3fb6c0
     * @note[short] iOS: 0x401de4
     * @note[short] Android
     */
    virtual void didRotateGameplay();

    /**
     * @note[short] MacOS (ARM): 0xaa390
     * @note[short] MacOS (Intel): 0xbe4a0
     * @note[short] Windows: 0x3f48e0
     * @note[short] iOS: 0x3fe3dc
     * @note[short] Android
     */
    virtual void manualUpdateObjectColors(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb2bf4
     * @note[short] MacOS (Intel): 0xc7fe0
     * @note[short] Windows: 0x3fe500
     * @note[short] Android
     */
    virtual cocos2d::CCParticleSystemQuad* claimCustomParticle(std::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd);

    /**
     * @note[short] MacOS (ARM): 0xb2cc4
     * @note[short] MacOS (Intel): 0xc8090
     * @note[short] Windows: 0x3fe5d0
     * @note[short] iOS: 0x403dac
     * @note[short] Android
     */
    virtual void unclaimCustomParticle(std::string const& key, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0xb1b94
     * @note[short] MacOS (Intel): 0xc6e90
     * @note[short] Windows: 0x3fd9c0
     * @note[short] iOS: 0x403084
     * @note[short] Android
     */
    virtual void activatedAudioTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb1bac
     * @note[short] MacOS (Intel): 0xc6ec0
     * @note[short] Windows: 0x3fd9f0
     * @note[short] iOS: 0x40309c
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb2d04
     * @note[short] MacOS (Intel): 0xc80d0
     * @note[short] Windows: 0x3fe610
     * @note[short] iOS: 0x403dec
     * @note[short] Android
     */
    virtual void addKeyframe(KeyframeGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9c8a8
     * @note[short] MacOS (Intel): 0xae4c0
     * @note[short] Windows: 0x3ecd60
     * @note[short] iOS: 0x3f6ec0
     * @note[short] Android
     */
    virtual void levelSettingsUpdated();

    /**
     * @note[short] Windows: 0x403e50
     * @note[short] Android
     */
    virtual TodoReturn shouldDrawDebugHitboxes();

    /**
     * @note[short] Windows: 0x403e60
     * @note[short] Android
     */
    virtual TodoReturn shouldDrawHitboxTrail();

    /**
     * @note[short] Windows: 0x403e70
     * @note[short] Android
     */
    virtual TodoReturn shouldRecordHitboxTrail();

    /**
     * @note[short] Windows: 0x403e90
     * @note[short] Android
     */
    virtual TodoReturn getHitboxTrailMax();

    /**
     * @note[short] MacOS (ARM): 0xade94
     * @note[short] MacOS (Intel): 0xc28b0
     * @note[short] iOS: 0x40037c
     * @note[short] Android
     */
    bool activateTriggerEffect(EffectGameObject* object, float currentTime, float playTime, float boundTime, bool active);

    /**
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDelayedSpawn(EffectGameObject* object, float delay);

    /**
     * @note[short] MacOS (ARM): 0xaac20
     * @note[short] MacOS (Intel): 0xbed40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addExclusionList(const std::unordered_set<int>& excludes, std::unordered_set<int>& groups);

    /**
     * @note[short] MacOS (ARM): 0x9cc74
     * @note[short] MacOS (Intel): 0xae8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f7224
     * @note[short] Android
     */
    GameObject* addObjectFromVector(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x9f3a8
     * @note[short] MacOS (Intel): 0xb12b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addObjectsAtPosition(cocos2d::CCPoint position, cocos2d::CCArray* objects, cocos2d::CCArray* result);

    /**
     * @note[short] MacOS (ARM): 0x9f558
     * @note[short] MacOS (Intel): 0xb14b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addObjectsInRect(cocos2d::CCRect rect, bool ignoreGroups, cocos2d::CCArray* objects, cocos2d::CCArray* result);

    /**
     * @note[short] MacOS (ARM): 0xaf2c0
     * @note[short] MacOS (Intel): 0xc4170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x401218
     * @note[short] Android
     */
    void addObjectToGroup(GameObject* object, int group);

    /**
     * @note[short] MacOS (ARM): 0xb2038
     * @note[short] MacOS (Intel): 0xc7390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4033ec
     * @note[short] Android
     */
    void addPlayer2Point(cocos2d::CCPoint point, bool newGroup);

    /**
     * @note[short] MacOS (Intel): 0xc5040
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPlayerCollisionBlock();

    /**
     * @note[short] MacOS (Intel): 0xc7330
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPlayerPoint(cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0x9d548
     * @note[short] MacOS (Intel): 0xaf2c0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3f779c
     * @note[short] Android
     */
    void addSpecial(GameObject* object);

    /**
     * @note[short] MacOS (Intel): 0xb2170
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToRedoList(UndoObject* object);

    /**
     * @note[short] MacOS (Intel): 0xc5260
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addTouchPoint(cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0x9d3f4
     * @note[short] MacOS (Intel): 0xaf140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f76b8
     * @note[short] Android
     */
    void addToUndoList(UndoObject* object, bool keepRedo);

    /**
     * @note[short] MacOS (ARM): 0xad0fc
     * @note[short] MacOS (Intel): 0xc17c0
     * @note[short] Android
     */
    void addTriggersWithGroupID(std::unordered_set<int>& sourceIDs, cocos2d::CCArray* triggers, std::unordered_map<int, int>& remap, int objectID);

    /**
     * @note[short] MacOS (ARM): 0xacd80
     * @note[short] MacOS (Intel): 0xc1280
     * @note[short] Android
     */
    void addTriggersWithTargetGroupID(std::unordered_set<int>& sourceIDs, std::unordered_set<int>& targetIDs, cocos2d::CCArray* triggers, std::unordered_map<int, int>& remap, int objectID);

    /**
     * @note[short] MacOS (ARM): 0xb2600
     * @note[short] MacOS (Intel): 0xc7970
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void applyAttributeState(GameObject* dest, GameObject* src);

    /**
     * @note[short] MacOS (ARM): 0xb23d8
     * @note[short] MacOS (Intel): 0xc7770
     * @note[short] Windows: 0x3fe080
     * @note[short] iOS: 0x40367c
     * @note[short] Android
     */
    void applyGroupState(GameObject* dest, GameObject* src);

    /**
     * @note[short] MacOS (ARM): 0x45fc08
     * @note[short] iOS: 0x500498
     * @note[short] Android
     */
    void breakApartTextObject(TextGameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn canAutoSave();

    /**
     * @note[short] MacOS (ARM): 0xb21c4
     * @note[short] MacOS (Intel): 0xc7550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x403534
     * @note[short] Android
     */
    bool canPasteState();

    /**
     * @note[short] Android
     */
    TodoReturn checkAutoSave(float p0);

    /**
     * @note[short] MacOS (ARM): 0xb0d1c
     * @note[short] MacOS (Intel): 0xc5e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void clearPlayerPoints();

    /**
     * @note[short] MacOS (Intel): 0xc5ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void clearTouchPoints();

    /**
     * @note[short] MacOS (ARM): 0xb21d4
     * @note[short] MacOS (Intel): 0xc7570
     * @note[short] Windows: 0xc53e0
     * @note[short] iOS: 0x403544
     * @note[short] Android
     */
    void copyObjectState(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb27c4
     * @note[short] MacOS (Intel): 0xc7b40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40391c
     * @note[short] Android
     */
    void copyParticleState(ParticleGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9db04
     * @note[short] MacOS (Intel): 0xaf8b0
     * @note[short] iOS: 0x3f7c34
     * @note[short] Android
     */
    GameObject* createObject(int key, cocos2d::CCPoint position, bool noUndo);

    /**
     * @note[short] MacOS (ARM): 0x9a5ac
     * @note[short] MacOS (Intel): 0xaba10
     * @note[short] iOS: 0x38dba0
     * @note[short] Android
     */
    void createObjectsFromSetup(std::string& setup);

    /**
     * @note[short] MacOS (Intel): 0xae960
     * @note[short] iOS: 0x3f72c4
     * @note[short] Android
     */
    cocos2d::CCArray* createObjectsFromString(std::string const& str, bool noUndo, bool noLimit);

    /**
     * @note[short] MacOS (ARM): 0xb0298
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x401e34
     * @note[short] Android
     */
    void dirtifyTriggers();

    /**
     * @note[short] Android
     */
    TodoReturn doAutoBackup();

    /**
     * @note[short] Android
     */
    TodoReturn doAutoSave();

    /**
     * @note[short] MacOS (ARM): 0xb2d18
     * @note[short] MacOS (Intel): 0xc80f0
     * @note[short] iOS: 0x403e00
     * @note[short] Android
     */
    cocos2d::CCArray* duplicateKeyframeAnimation(int keyframeGroup);

    /**
     * @note[short] MacOS (ARM): 0xaee14
     * @note[short] MacOS (Intel): 0xc3c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fastUpdateDisabledGroups();

    /**
     * @note[short] MacOS (ARM): 0x9f75c
     * @note[short] MacOS (Intel): 0xb1720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f9084
     * @note[short] Android
     */
    GameObject* findGameObject(int uniqueID);

    /**
     * @note[short] MacOS (Intel): 0x519760
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    StartPosObject* findStartPosObject();

    /**
     * @note[short] MacOS (ARM): 0xa9744
     * @note[short] MacOS (Intel): 0xbd7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22c448
     * @note[short] Android
     */
    void forceShowSelectedObjects(bool show);

    /**
     * @note[short] MacOS (ARM): 0xaee10
     * @note[short] MacOS (Intel): 0xc3c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fullUpdateDisabledGroups();

    /**
     * @note[short] Android
     */
    TodoReturn getActiveTraceInObject();

    /**
     * @note[short] Android
     */
    TodoReturn getActiveTraceOutObject();

    /**
     * @note[short] MacOS (ARM): 0x9f754
     * @note[short] MacOS (Intel): 0xb1710
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f907c
     * @note[short] Android
     */
    cocos2d::CCArray* getAllObjects();

    /**
     * @note[short] MacOS (ARM): 0xaea64
     * @note[short] MacOS (Intel): 0xc37c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x400e38
     * @note[short] Android
     */
    DelayedSpawnNode* getDelayedSpawnNode();

    /**
     * @note[short] MacOS (ARM): 0x9e1d0
     * @note[short] MacOS (Intel): 0xaffd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getGridPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xaef34
     * @note[short] MacOS (Intel): 0xc3dc0
     * @note[short] Windows: 0x36ac60
     * @note[short] iOS: 0x40117c
     * @note[short] Android
     */
    float getLastObjectX();

    /**
     * @note[short] iOS: 0x49f528
     * @note[short] Android
     */
    std::string getLevelString();

    /**
     * @note[short] MacOS (ARM): 0xa71b0
     * @note[short] MacOS (Intel): 0xbabd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fbf30
     * @note[short] Android
     */
    std::string getLockedLayers();

    /**
     * @note[short] MacOS (Intel): 0xc0bf0
     * @note[short] Windows: 0x3f6da0
     * @note[short] Android
     */
    int getNextColorChannel();

    /**
     * @note[short] MacOS (Intel): 0xc0490
     * @note[short] Android
     */
    int getNextFreeAreaEffectID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xac13c
     * @note[short] MacOS (Intel): 0xc0490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ff548
     * @note[short] Android
     */
    int getNextFreeBlockID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeControlID(std::unordered_set<int> const& p0);

    /**
     * @note[short] MacOS (ARM): 0xaba00
     * @note[short] MacOS (Intel): 0xbfcc0
     * @note[short] iOS: 0x3ff198
     * @note[short] Android
     */
    int getNextFreeEditorLayer(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xab7a0
     * @note[short] MacOS (Intel): 0xbfcc0
     * @note[short] iOS: 0x3ff198
     * @note[short] Android
     */
    int getNextFreeEnterChannel(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (Intel): 0xc0490
     * @note[short] Android
     */
    int getNextFreeGradientID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xaa8c8
     * @note[short] MacOS (Intel): 0x613d90
     * @note[short] iOS: 0x3fe8d0
     * @note[short] Android
     */
    int getNextFreeGroupID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (Intel): 0xbfa30
     * @note[short] Android
     */
    int getNextFreeItemID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xab7a0
     * @note[short] MacOS (Intel): 0xbfa30
     * @note[short] iOS: 0x3ff064
     * @note[short] Android
     */
    int getNextFreeOrderChannel(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xac364
     * @note[short] MacOS (Intel): 0xc0700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ff654
     * @note[short] Android
     */
    int getNextFreeSFXGroupID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xac13c
     * @note[short] MacOS (Intel): 0xc0490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ff548
     * @note[short] Android
     */
    int getNextFreeSFXID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeTimerID(std::unordered_set<int> const& p0);

    /**
     * @note[short] MacOS (ARM): 0x9ecb0
     * @note[short] MacOS (Intel): 0xb0b20
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3f8a2c
     * @note[short] Android
     */
    cocos2d::CCRect getObjectRect(GameObject* object, bool forceSize, bool dontCalculate);

    /**
     * @note[short] MacOS (ARM): 0x9f514
     * @note[short] MacOS (Intel): 0xb1470
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativeOffset(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa802c
     * @note[short] MacOS (Intel): 0xbbce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fc83c
     * @note[short] Android
     */
    cocos2d::CCPoint getSavedEditorPosition(int index);

    /**
     * @note[short] MacOS (ARM): 0xa8054
     * @note[short] MacOS (Intel): 0xbbd20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fc864
     * @note[short] Android
     */
    std::string getSavedEditorPositions();

    /**
     * @note[short] MacOS (ARM): 0xa83a0
     * @note[short] MacOS (Intel): 0xbc160
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fc9c0
     * @note[short] Android
     */
    int getSectionCount();

    /**
     * @note[short] MacOS (ARM): 0xad820
     * @note[short] MacOS (Intel): 0xc2110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ffe6c
     * @note[short] Android
     */
    int getSelectedEditorOrder();

    /**
     * @note[short] MacOS (ARM): 0xad858
     * @note[short] MacOS (Intel): 0xc2150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ffea0
     * @note[short] Android
     */
    cocos2d::CCPoint getSelectedEffectPos();

    /**
     * @note[short] MacOS (ARM): 0xad7e8
     * @note[short] MacOS (Intel): 0xc20d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ffe38
     * @note[short] Android
     */
    int getSelectedOrderChannel();

    /**
     * @note[short] MacOS (ARM): 0xa7c5c
     * @note[short] MacOS (Intel): 0xbb820
     * @note[short] iOS: 0x3fc604
     * @note[short] Android
     */
    std::string getSFXIDs();

    /**
     * @note[short] Android
     */
    TodoReturn getSFXUsagePairs(std::vector<std::pair<int, int>>& p0);

    /**
     * @note[short] MacOS (ARM): 0xa7414
     * @note[short] MacOS (Intel): 0xbaea0
     * @note[short] iOS: 0x3fc07c
     * @note[short] Android
     */
    std::string getSongIDs(bool& multipleSongs);

    /**
     * @note[short] MacOS (ARM): 0xaec7c
     * @note[short] MacOS (Intel): 0xc3a40
     * @note[short] Windows: 0x3faac0
     * @note[short] iOS: 0x400f94
     * @note[short] Android
     */
    cocos2d::CCArray* getTriggerGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x595dac
     * @note[short] Windows: 0x3efa70
     * @note[short] iOS: 0x528ee8
     * @note[short] Android
     */
    void handleAction(bool undo, cocos2d::CCArray* undoObjects);

    /**
     * @note[short] MacOS (ARM): 0xa0128
     * @note[short] MacOS (Intel): 0xb21e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f9884
     * @note[short] Android
     */
    bool hasAction(bool redo);

    /**
     * @note[short] Windows: 0x30a570
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool noUI);

    /**
     * @note[short] MacOS (Intel): 0xbc1f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isLayerLocked(int layer);

    /**
     * @note[short] Android
     */
    TodoReturn lockedLayerForObject(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn lockedLayerForObjectString(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x9e9a4
     * @note[short] MacOS (Intel): 0xb07e0
     * @note[short] Windows: 0x311ea0
     * @note[short] iOS: 0x3f87cc
     * @note[short] Android
     */
    GameObject* objectAtPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xa8e88
     * @note[short] MacOS (Intel): 0xbccc0
     * @note[short] iOS: 0x3fd2dc
     * @note[short] Android
     */
    void objectMoved(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9f090
     * @note[short] MacOS (Intel): 0xb0f60
     * @note[short] iOS: 0x3f8e08
     * @note[short] Android
     */
    cocos2d::CCArray* objectsAtPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x9e430
     * @note[short] MacOS (Intel): 0xb0260
     * @note[short] Windows: 0x3ef2a0
     * @note[short] iOS: 0x3f846c
     * @note[short] Android
     */
    cocos2d::CCArray* objectsInRect(cocos2d::CCRect rect, bool ignoreGroups);

    /**
     * @note[short] MacOS (ARM): 0xb137c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onPausePlaytest();

    /**
     * @note[short] Windows: 0x3fbab0
     * @note[short] Android
     */
    void onPlaytest();

    /**
     * @note[short] MacOS (ARM): 0xb1528
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x402afc
     * @note[short] Android
     */
    void onResumePlaytest();

    /**
     * @note[short] MacOS (ARM): 0xb165c
     * @note[short] Windows: 0x3fd180
     * @note[short] iOS: 0x402cfc
     * @note[short] Android
     */
    void onStopPlaytest();

    /**
     * @note[short] MacOS (ARM): 0xb2528
     * @note[short] MacOS (Intel): 0xc78a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4037c0
     * @note[short] Android
     */
    void pasteAttributeState(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xb2490
     * @note[short] MacOS (Intel): 0xc7810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40372c
     * @note[short] Android
     */
    void pasteColorState(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xb2630
     * @note[short] MacOS (Intel): 0xc79a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x403898
     * @note[short] Android
     */
    void pasteGroupState(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xb2994
     * @note[short] MacOS (Intel): 0xc7d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x377df0
     * @note[short] Android
     */
    void pasteParticleState(ParticleGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    TodoReturn prepareSaveData(std::string& p0);

    /**
     * @note[short] MacOS (ARM): 0xaefd4
     * @note[short] MacOS (Intel): 0xc3e60
     * @note[short] Android
     */
    void processLoadedMoveActions();

    /**
     * @note[short] MacOS (ARM): 0xb0360
     * @note[short] MacOS (Intel): 0xc53a0
     * @note[short] Windows: 0xd04d0
     * @note[short] iOS: 0x401ef4
     * @note[short] Android
     */
    void quickUpdateAllPositions();

    /**
     * @note[short] Android
     */
    TodoReturn rebuildDeathOverlay();

    /**
     * @note[short] MacOS (ARM): 0xaf470
     * @note[short] MacOS (Intel): 0xc42f0
     * @note[short] Windows: 0x3fab20
     * @note[short] Android
     */
    void recreateGroups();

    /**
     * @note[short] MacOS (ARM): 0x7e460
     * @note[short] MacOS (Intel): 0x40a4e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x147904
     * @note[short] Android
     */
    void redoLastAction();

    /**
     * @note[short] MacOS (ARM): 0xa9098
     * @note[short] MacOS (Intel): 0xbd1c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fd4ec
     * @note[short] Android
     */
    void refreshSpecial(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9fcf4
     * @note[short] MacOS (Intel): 0xb1d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f9550
     * @note[short] Android
     */
    void removeAllObjects();

    /**
     * @note[short] MacOS (ARM): 0x9fdf4
     * @note[short] MacOS (Intel): 0xb1e50
     * @note[short] Windows: 0x3ef7e0
     * @note[short] iOS: 0x3f9650
     * @note[short] Android
     */
    void removeAllObjectsOfType(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x9f7a4
     * @note[short] MacOS (Intel): 0xb1770
     * @note[short] Windows: 0x3ef6a0
     * @note[short] iOS: 0x3f90cc
     * @note[short] Android
     */
    void removeObject(GameObject* object, bool noUndo);

    /**
     * @note[short] MacOS (ARM): 0x9a568
     * @note[short] MacOS (Intel): 0xab9d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f5680
     * @note[short] Android
     */
    void removePlayerCollisionBlock();

    /**
     * @note[short] MacOS (ARM): 0x9f880
     * @note[short] MacOS (Intel): 0xb1840
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3f9164
     * @note[short] Android
     */
    void removeSpecial(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xada00
     * @note[short] MacOS (Intel): 0xc22f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x400034
     * @note[short] Android
     */
    void resetDelayedSpawnNodes();

    /**
     * @note[short] MacOS (ARM): 0xaffbc
     * @note[short] MacOS (Intel): 0xc4f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28c664
     * @note[short] Android
     */
    void resetEffectTriggerOptim(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xaf6c4
     * @note[short] MacOS (Intel): 0xc45e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40151c
     * @note[short] Android
     */
    void resetMovingObjects();

    /**
     * @note[short] MacOS (ARM): 0xaee18
     * @note[short] MacOS (Intel): 0xc3c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetObjectVector();

    /**
     * @note[short] MacOS (ARM): 0xad894
     * @note[short] MacOS (Intel): 0xc21a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetPlayback();

    /**
     * @note[short] MacOS (ARM): 0xad484
     * @note[short] MacOS (Intel): 0xc1cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetToggledGroups();

    /**
     * @note[short] MacOS (ARM): 0xaece4
     * @note[short] MacOS (Intel): 0xc3aa0
     * @note[short] Windows: 0x3fa410
     * @note[short] iOS: 0x400fec
     * @note[short] Android
     */
    void resetToggledGroupsAndObjects();

    /**
     * @note[short] MacOS (Intel): 0xc0f40
     * @note[short] Windows: 0x3f7170
     * @note[short] Android
     */
    void resetUnusedColorChannels();

    /**
     * @note[short] MacOS (ARM): 0xb2df8
     * @note[short] MacOS (Intel): 0xc81d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x403ee0
     * @note[short] Android
     */
    void reverseKeyframeAnimationOrder(int keyframeGroup);

    /**
     * @note[short] MacOS (ARM): 0xaed7c
     * @note[short] MacOS (Intel): 0xc3b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x401084
     * @note[short] Android
     */
    void reverseObjectChanged(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9e29c
     * @note[short] MacOS (Intel): 0xb00e0
     * @note[short] Windows: 0x3ee540
     * @note[short] iOS: 0x3f82dc
     * @note[short] Android
     */
    float rotationForSlopeNearObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xae59c
     * @note[short] MacOS (Intel): 0xc3230
     * @note[short] Windows: 0x3f97c0
     * @note[short] iOS: 0x400a60
     * @note[short] Android
     */
    ColorAction* runColorEffect(EffectGameObject* object, int colorID, float delay, float interval, bool instant);

    /**
     * @note[short] MacOS (ARM): 0xa8014
     * @note[short] MacOS (Intel): 0xbbcb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fc824
     * @note[short] Android
     */
    void saveEditorPosition(cocos2d::CCPoint& position, int index);

    /**
     * @note[short] Android
     */
    TodoReturn saveLevel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setObjectCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x9c864
     * @note[short] MacOS (Intel): 0xae480
     * @note[short] iOS: 0x3f6e7c
     * @note[short] Android
     */
    bool shouldBlend(int colorID);

    /**
     * @note[short] MacOS (ARM): 0xa9208
     * @note[short] MacOS (Intel): 0xbd340
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fd600
     * @note[short] Android
     */
    void sortBatchnodeChildren(float unused);

    /**
     * @note[short] MacOS (Intel): 0xc2480
     * @note[short] Windows: 0x3f9e90
     * @note[short] iOS: 0x400098
     * @note[short] Android
     */
    void spawnGroupPreview(int groupID, float xPos, float delay, float currentTime, float playTime, float boundTime, bool ordered, bool active);

    /**
     * @note[short] MacOS (ARM): 0xb0064
     * @note[short] MacOS (Intel): 0xc5010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x401dc4
     * @note[short] Android
     */
    void stopPlayback();

    /**
     * @note[short] MacOS (ARM): 0xae830
     * @note[short] MacOS (Intel): 0xc3500
     * @note[short] Windows: 0x3f9ad0
     * @note[short] iOS: 0x400cd8
     * @note[short] Android
     */
    void stopTriggersInGroup(int id, float delay);

    /**
     * @note[short] MacOS (ARM): 0xaee00
     * @note[short] MacOS (Intel): 0xc3bf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void timeObjectChanged();

    /**
     * @note[short] MacOS (ARM): 0xad5f0
     * @note[short] MacOS (Intel): 0xc1e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleBackground(bool visible);

    /**
     * @note[short] Android
     */
    TodoReturn toggleDeathLabels();

    /**
     * @note[short] Android
     */
    TodoReturn toggleGlobalDeaths();

    /**
     * @note[short] MacOS (ARM): 0xad608
     * @note[short] MacOS (Intel): 0xc1e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGrid(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x9c140
     * @note[short] MacOS (Intel): 0xadbe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleGround(bool enable);

    /**
     * @note[short] MacOS (ARM): 0xae6a4
     * @note[short] MacOS (Intel): 0xc3370
     * @note[short] iOS: 0x400b74
     * @note[short] Android
     */
    void toggleGroupPreview(int id, bool enable);

    /**
     * @note[short] Android
     */
    TodoReturn toggleLocalDeaths();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fc9d4
     * @note[short] Android
     */
    void toggleLockActiveLayer();

    /**
     * @note[short] MacOS (ARM): 0xad618
     * @note[short] MacOS (Intel): 0xc1e90
     * @note[short] Windows: 0x3f7af0
     * @note[short] iOS: 0x3ffc6c
     * @note[short] Android
     */
    void transferDefaultColors(GJEffectManager* src, GJEffectManager* dest);

    /**
     * @note[short] MacOS (ARM): 0xb0144
     * @note[short] MacOS (Intel): 0xc5120
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void triggerFollowCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb0170
     * @note[short] MacOS (Intel): 0xc5170
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void triggerPlayerFollowCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb00d8
     * @note[short] MacOS (Intel): 0xc5090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void triggerRotateCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa8cbc
     * @note[short] MacOS (Intel): 0xbcb30
     * @note[short] Windows: 0x3f2d10
     * @note[short] iOS: 0x3fd1e4
     * @note[short] Android
     */
    bool tryUpdateSpeedObject(EffectGameObject* object, bool noPreview);

    /**
     * @note[short] MacOS (ARM): 0x9ddf0
     * @note[short] MacOS (Intel): 0xafbb0
     * @note[short] Windows: 0x3ee0e0
     * @note[short] iOS: 0x3f7e78
     * @note[short] Android
     */
    bool typeExistsAtPosition(int objectID, cocos2d::CCPoint position, bool flipX, bool flipY, float rotation);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void undoLastAction();

    /**
     * @note[short] MacOS (ARM): 0xa8464
     * @note[short] MacOS (Intel): 0xbc230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fca84
     * @note[short] Android
     */
    void unlockAllLayers();

    /**
     * @note[short] MacOS (ARM): 0x9c0b8
     * @note[short] MacOS (Intel): 0xadb60
     * @note[short] Windows: 0x3fe2d0
     * @note[short] iOS: 0x3f6b04
     * @note[short] Android
     */
    void updateAnimateOnTriggerObjects(bool animate);

    /**
     * @note[short] MacOS (Intel): 0xae290
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateArt(float dt);

    /**
     * @note[short] MacOS (ARM): 0xae494
     * @note[short] MacOS (Intel): 0xc3180
     * @note[short] iOS: 0x400968
     * @note[short] Android
     */
    void updateBlendValues();

    /**
     * @note[short] Android
     */
    TodoReturn updateCustomSFXMappings();

    /**
     * @note[short] iOS: 0x4ee4f8
     * @note[short] Android
     */
    void updateEditor(float dt);

    /**
     * @note[short] MacOS (ARM): 0x9bd8c
     * @note[short] MacOS (Intel): 0xad810
     * @note[short] Windows: 0x369200
     * @note[short] iOS: 0x3f6864
     * @note[short] Android
     */
    void updateEditorMode();

    /**
     * @note[short] MacOS (ARM): 0x9b27c
     * @note[short] MacOS (Intel): 0xac910
     * @note[short] iOS: 0x3f5f10
     * @note[short] Android
     */
    void updateGameObjects();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGridLayer();

    /**
     * @note[short] MacOS (ARM): 0x9c7ac
     * @note[short] MacOS (Intel): 0xae3d0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3f6dc4
     * @note[short] Android
     */
    void updateGridLayerParent();

    /**
     * @note[short] MacOS (ARM): 0xaa314
     * @note[short] MacOS (Intel): 0xbe420
     * @note[short] Windows: 0x3fe6c0
     * @note[short] iOS: 0x3fe368
     * @note[short] Android
     */
    void updateKeyframeObjects();

    /**
     * @note[short] MacOS (ARM): 0xb2e30
     * @note[short] MacOS (Intel): 0xc8210
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateKeyframeVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xaf768
     * @note[short] MacOS (Intel): 0xc4680
     * @note[short] iOS: 0x4015c0
     * @note[short] Android
     */
    void updateLevelFont(int index);

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelSaveInfo();

    /**
     * @note[short] MacOS (ARM): 0xaa3c8
     * @note[short] MacOS (Intel): 0xbe4d0
     * @note[short] Windows: 0x3f4920
     * @note[short] iOS: 0x3fe414
     * @note[short] Android
     */
    void updateObjectColors(cocos2d::CCArray* gameObjects);

    /**
     * @note[short] MacOS (ARM): 0x7181c
     * @note[short] MacOS (Intel): 0xab040
     * @note[short] Android
     */
    void updateOptions();

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerState(GJPlayerState p0);

    /**
     * @note[short] MacOS (Intel): 0xc7f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x403c00
     * @note[short] Android
     */
    void updatePreviewAnim();

    /**
     * @note[short] MacOS (ARM): 0xa8bb8
     * @note[short] MacOS (Intel): 0xbca60
     * @note[short] Windows: 0x3fe470
     * @note[short] iOS: 0x3fd100
     * @note[short] Android
     */
    void updatePreviewParticle(ParticleGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xad4c4
     * @note[short] MacOS (Intel): 0xc1d20
     * @note[short] Android
     */
    void updatePreviewParticles();

    /**
     * @note[short] MacOS (ARM): 0xae37c
     * @note[short] MacOS (Intel): 0xc3040
     * @note[short] iOS: 0x40086c
     * @note[short] Android
     */
    void updateToggledGroups();

    /**
     * @note[short] MacOS (ARM): 0x9e1e8
     * @note[short] MacOS (Intel): 0xb0010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f8228
     * @note[short] Android
     */
    bool validGroup(GameObject* object, bool checkLockedLayers);

    /**
     * @note[short] Android
     */
    TodoReturn waitForAutoSave();
    bool m_drawTriggerBoxes;
    bool m_showGrid;
    bool m_hideGridOnPlay;
    bool m_drawEffectLines;
    bool m_showGround;
    bool m_showDurationLines;
    bool m_increaseMaxUndoRedo;
    bool m_hideBackground;
    bool m_gv0120;
    bool m_layerLockingEnabled;
    bool m_playtestOrderChanged;
    bool m_previewParticles;
    bool m_previewAnimations;
    bool m_previewShaders;
    bool m_hideParticleIcons;
    bool m_alwaysHideParticleIcons;
    bool m_playTestSmoothFix;
    bool m_hasHighDetail;
    bool m_unk36ca;
    int m_unk36cc;
    bool m_collisionBlocksAdded;
    int m_unk36d4;
    cocos2d::CCArray* m_durationObjects;
    cocos2d::CCArray* m_pulseTriggers;
    cocos2d::CCArray* m_colorTriggers;
    cocos2d::CCArray* m_alphaTriggers;
    cocos2d::CCArray* m_spawnTriggers;
    cocos2d::CCArray* m_moveTriggers;
    cocos2d::CCArray* m_cameraGuideTriggers;
    cocos2d::CCArray* m_particleObjects;
    cocos2d::CCArray* m_keyframeObjects;
    cocos2d::CCArray* m_spawnOrderTriggers;
    cocos2d::CCArray* m_playtestTriggers;
    GameObject* m_copyStateObject;
    ParticleGameObject* m_particleObject;
    cocos2d::CCDictionary* m_unk3740;
    cocos2d::CCArray* m_unk3748;
    bool m_keepEditorLayer;
    bool m_unk3751;
    geode::SeedValueRSV m_coinCount;
    bool m_triggersChanged;
    bool m_colorTriggersChanged;
    bool m_pulseTriggersChanged;
    bool m_alphaTriggersChanged;
    bool m_spawnTriggersChanged;
    cocos2d::CCArray* m_spawnOrderObjects;
    bool m_spawnOrderObjectsChanged;
    bool m_sortSpawnNodes;
    cocos2d::CCDictionary* m_unk3778;
    cocos2d::CCDictionary* m_unk3780;
    bool m_initializing;
    short m_currentLayer;
    float m_playtestZoom;
    OBB2D* m_currentOBB2D;
    float m_playtestTimeWarp;
    float m_playtestCameraZoom;
    cocos2d::CCSprite* m_playtestDeathSprite;
    float m_trailTimer;
    bool m_soloMode;
    bool m_nonSquareRotation;
    EditorUI* m_editorUI;
    cocos2d::CCArray* m_undoObjects;
    cocos2d::CCArray* m_redoObjects;
    geode::SeedValueRSV m_objectCount;
    DrawGridLayer* m_drawGridLayer;
    bool m_updateColorSprites;
    bool m_previewMode;
    bool m_alwaysPreviewMode;
    std::string m_levelString;
    std::vector<GameObject*> m_objectVector;
    std::vector<GameObject*> m_loadedMoveObjects;
    cocos2d::CCDictionary* m_triggerGroupsDict;
    std::vector<cocos2d::CCArray*> m_triggerGroups;
    std::vector<cocos2d::CCPoint> m_playerPoints;
    std::vector<std::vector<cocos2d::CCPoint>> m_player2Points;
    std::vector<cocos2d::CCPoint> m_touchPoints;
    std::vector<bool> m_sortedGroups;
    std::vector<bool> m_toggledGroups;
    std::vector<bool> m_lockedLayers;
    std::vector<cocos2d::CCPoint> m_savedPositions;
    cocos2d::CCPoint m_previewPosition;
    std::vector<bool> m_blendingColors;
    std::vector<bool> m_blendingColors2;
    std::vector<unsigned char> m_toggledGroupStates;
    std::vector<float> m_spawnGroupDelays;
    double m_sessionTime;
    bool m_removingAll;
    EffectGameObject* m_playbackObject;
    EffectGameObject* m_traceInObject;
    EffectGameObject* m_traceOutObject;
    int m_playbackOrder;
    int m_duplicateKeyframeGroup;
    std::vector<DelayedSpawnNode*> m_delayedSpawnNodes;
    std::vector<DelayedSpawnNode*> m_delayedSpawnNodes2;
    std::unordered_map<int, int> m_unk3ae0;
    bool m_playbackActive;
    bool m_activateAudioTriggers;
    bool m_unk3b22;
    int m_unk3b24;
    int m_unk3b28;
    int m_unk3b2c;
    std::vector<int> m_unk3b30;
    std::vector<int> m_unk3b48;
};
