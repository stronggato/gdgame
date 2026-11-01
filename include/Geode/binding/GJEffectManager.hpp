#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/DynamicMoveCalculation.hpp>
#include <Geode/binding/PulseEffectAction.hpp>
#include <Geode/binding/TouchToggleAction.hpp>
#include <Geode/binding/CollisionTriggerAction.hpp>
#include <Geode/binding/ToggleTriggerAction.hpp>
#include <Geode/binding/SpawnTriggerAction.hpp>
#include <Geode/binding/GroupCommandObject2.hpp>
#include <Geode/binding/OpacityEffectAction.hpp>
#include <Geode/binding/CountTriggerAction.hpp>
#include <Geode/binding/TimerItem.hpp>
#include <Geode/binding/TimerTriggerAction.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class GJEffectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJEffectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJEffectManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x361d00
     * @note[short] Android: Rebinded
     */
    virtual  ~GJEffectManager();

    /**
     * @note[short] MacOS (ARM): 0x266e00
     * @note[short] MacOS (Intel): 0x2c7880
     * @note[short] Windows: 0x3624a0
     * @note[short] iOS: 0xef48
     * @note[short] Android
     */
    static GJEffectManager* create();

    /**
     * @note[short] MacOS (ARM): 0x2741d0
     * @note[short] MacOS (Intel): 0x2d84f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16c48
     * @note[short] Android
     */
    static cocos2d::ccColor3B getMixedColor(cocos2d::ccColor3B color1, cocos2d::ccColor3B color2, float ratio);

    /**
     * @note[short] MacOS (ARM): 0x266ff4
     * @note[short] MacOS (Intel): 0x2c7bf0
     * @note[short] Windows: 0x362500
     * @note[short] iOS: 0xefbc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x267b60
     * @note[short] MacOS (Intel): 0x2c8b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf5a4
     * @note[short] Android
     */
    cocos2d::ccColor3B activeColorForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x267cc8
     * @note[short] MacOS (Intel): 0x2c8cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf678
     * @note[short] Android
     */
    float activeOpacityForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x2685dc
     * @note[short] MacOS (Intel): 0x2c9760
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addAllInheritedColorActions(cocos2d::CCArray* actions);

    /**
     * @note[short] MacOS (ARM): 0x271614
     * @note[short] MacOS (Intel): 0x2d4970
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15680
     * @note[short] Android
     */
    void addCountToItem(int itemId, int value);

    /**
     * @note[short] MacOS (ARM): 0x26f06c
     * @note[short] MacOS (Intel): 0x2d1c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13fd8
     * @note[short] Android
     */
    void addMoveCalculation(CCMoveCNode* node, cocos2d::CCPoint offset, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x267e78
     * @note[short] MacOS (Intel): 0x2c8ec0
     * @note[short] iOS: 0xf704
     * @note[short] Android
     */
    void calculateBaseActiveColors();

    /**
     * @note[short] MacOS (Intel): 0x2c98a0
     * @note[short] Windows: 0x3630f0
     * @note[short] iOS: 0xfc04
     * @note[short] Android
     */
    void calculateInheritedColor(int id, ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x27403c
     * @note[short] MacOS (Intel): 0x2d8360
     * @note[short] Windows: 0x36b820
     * @note[short] iOS: 0x16b5c
     * @note[short] Android
     */
    void calculateLightBGColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2694f0
     * @note[short] MacOS (Intel): 0x2ca830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10604
     * @note[short] Android
     */
    bool checkCollision(int const& blockAID, int const& blockBID);

    /**
     * @note[short] MacOS (ARM): 0x268bec
     * @note[short] MacOS (Intel): 0x2c9d90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10074
     * @note[short] Android
     */
    void colorActionChanged(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x268bc8
     * @note[short] MacOS (Intel): 0x2c9d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10050
     * @note[short] Android
     */
    bool colorExists(int col);

    /**
     * @note[short] MacOS (ARM): 0x26945c
     * @note[short] MacOS (Intel): 0x2ca7a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x105d0
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForEffect(cocos2d::ccColor3B color, cocos2d::ccHSVValue hsv);

    /**
     * @note[short] MacOS (ARM): 0x27054c
     * @note[short] MacOS (Intel): 0x2d3610
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x14bd0
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForGroupID(int id, cocos2d::ccColor3B const& color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x2679fc
     * @note[short] MacOS (Intel): 0x2c89f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x268958
     * @note[short] MacOS (Intel): 0x2c9b20
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xfe5c
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPulseEffect(cocos2d::ccColor3B const& color, PulseEffectAction* action);

    /**
     * @note[short] MacOS (ARM): 0x26b304
     * @note[short] MacOS (Intel): 0x2cce00
     * @note[short] Windows: 0x365830
     * @note[short] iOS: 0x11b20
     * @note[short] Android
     */
    void controlActionsForControlID(int id, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x26bf5c
     * @note[short] MacOS (Intel): 0x2cdd80
     * @note[short] iOS: 0x1237c
     * @note[short] Android
     */
    void controlActionsForTrigger(EffectGameObject* object, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x27151c
     * @note[short] MacOS (Intel): 0x2d4810
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x15640
     * @note[short] Android
     */
    int countForItem(int id);

    /**
     * @note[short] MacOS (ARM): 0x269f30
     * @note[short] MacOS (Intel): 0x2cb410
     * @note[short] Windows: 0x364350
     * @note[short] iOS: 0x10da8
     * @note[short] Android
     */
    void createFollowCommand(float xMod, float yMod, float duration, int targetID, int centerID, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26a1d0
     * @note[short] MacOS (Intel): 0x2cb6d0
     * @note[short] Windows: 0x364580
     * @note[short] iOS: 0x11010
     * @note[short] Android
     */
    GroupCommandObject2* createKeyframeCommand(int targetID, cocos2d::CCArray* group, GameObject* object, int uniqueID, int controlID, bool temporary, float posXMod, float posYMod, float rotMod, float scaleXMod, float scaleYMod, float timeMod, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x269bd4
     * @note[short] MacOS (Intel): 0x2cb060
     * @note[short] Windows: 0x363f90
     * @note[short] iOS: 0x10a4c
     * @note[short] Android
     */
    void createMoveCommand(cocos2d::CCPoint pt, int groupID, float duration, int easingType, float easingRate, bool lockPlayerX, bool lockPlayerY, bool lockCameraX, bool lockCameraY, float moveModX, float moveModY, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x269ff4
     * @note[short] MacOS (Intel): 0x2cb4f0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x10e6c
     * @note[short] Android
     */
    void createPlayerFollowCommand(float delay, float speed, int offset, float maxSpeed, float duration, int targetID, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x269d28
     * @note[short] MacOS (Intel): 0x2cb1c0
     * @note[short] Windows: 0x364220
     * @note[short] iOS: 0x10ba0
     * @note[short] Android
     */
    void createRotateCommand(float offset, float duration, int targetID, int centerID, int easingType, float easingRate, bool lockRotation, bool player1, bool player2, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x269e1c
     * @note[short] MacOS (Intel): 0x2cb2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10c94
     * @note[short] Android
     */
    void createTransformCommand(double scaleX, double scaleY, double property450, double property451, bool onlyMove, float duration, int targetID, int centerID, int easingType, float easingRate, bool p10, bool relativeRotation, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x267910
     * @note[short] MacOS (Intel): 0x2c88d0
     * @note[short] Windows: 0x362b80
     * @note[short] iOS: 0xf494
     * @note[short] Android
     */
    cocos2d::CCArray* getAllColorActions();

    /**
     * @note[short] MacOS (ARM): 0x267960
     * @note[short] MacOS (Intel): 0x2c8930
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllColorSprites();

    /**
     * @note[short] MacOS (ARM): 0x267a1c
     * @note[short] MacOS (Intel): 0x2c8a10
     * @note[short] Windows: 0x10ff20
     * @note[short] iOS: 0xf52c
     * @note[short] Android
     */
    ColorAction* getColorAction(int index);

    /**
     * @note[short] MacOS (ARM): 0x267bbc
     * @note[short] MacOS (Intel): 0x2c8bc0
     * @note[short] Windows: 0x2c0220
     * @note[short] iOS: 0xf5fc
     * @note[short] Android
     */
    ColorActionSprite* getColorSprite(int index);

    /**
     * @note[short] MacOS (ARM): 0x26f69c
     * @note[short] MacOS (Intel): 0x2d23f0
     * @note[short] Windows: 0x368640
     * @note[short] iOS: 0x14414
     * @note[short] Android
     */
    void getLoadedMoveOffset(std::unordered_map<int, std::pair<double, double>>& offsets);

    /**
     * @note[short] MacOS (ARM): 0x26b0f4
     * @note[short] MacOS (Intel): 0x2ccbb0
     * @note[short] iOS: 0x118f0
     * @note[short] Android
     */
    CCMoveCNode* getMoveCommandNode(GroupCommandObject2* command);

    /**
     * @note[short] MacOS (ARM): 0x26cd40
     * @note[short] MacOS (Intel): 0x2cee30
     * @note[short] Windows: 0x366c70
     * @note[short] iOS: 0x12d54
     * @note[short] Android
     */
    CCMoveCNode* getMoveCommandObject();

    /**
     * @note[short] MacOS (ARM): 0x26f800
     * @note[short] MacOS (Intel): 0x2d2560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14578
     * @note[short] Android
     */
    OpacityEffectAction* getOpacityActionForGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x272b58
     * @note[short] MacOS (Intel): 0x2d6670
     * @note[short] Android
     */
    void getPersistentState(std::unordered_map<int, int>& counts, std::unordered_map<int, TimerItem>& items);

    /**
     * @note[short] MacOS (ARM): 0x271c80
     * @note[short] MacOS (Intel): 0x2d5200
     * @note[short] Windows: 0x36a610
     * @note[short] iOS: 0x159ec
     * @note[short] Android
     */
    std::string getPersistentStateString();

    /**
     * @note[short] MacOS (ARM): 0x2743ac
     * @note[short] MacOS (Intel): 0x2d8740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16d68
     * @note[short] Android
     */
    std::string getSaveString();

    /**
     * @note[short] MacOS (ARM): 0x26cea8
     * @note[short] MacOS (Intel): 0x2cefe0
     * @note[short] iOS: 0x12e34
     * @note[short] Android
     */
    GroupCommandObject2* getTempGroupCommand();

    /**
     * @note[short] MacOS (ARM): 0x2696dc
     * @note[short] MacOS (Intel): 0x2caa90
     * @note[short] Windows: 0x363dd0
     * @note[short] iOS: 0x1071c
     * @note[short] Android
     */
    void handleObjectCollision(bool triggerOnExit, int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0x270e4c
     * @note[short] MacOS (Intel): 0x2d4050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15188
     * @note[short] Android
     */
    bool hasActiveDualTouch();

    /**
     * @note[short] MacOS (ARM): 0x270ce0
     * @note[short] MacOS (Intel): 0x2d3eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15084
     * @note[short] Android
     */
    bool hasBeenTriggered(int objectUniqueID, int playerUniqueID);

    /**
     * @note[short] MacOS (ARM): 0x270464
     * @note[short] MacOS (Intel): 0x2d34b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool hasPulseEffectForGroupID(int id);

    /**
     * @note[short] MacOS (ARM): 0x270d24
     * @note[short] MacOS (Intel): 0x2d3f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x150c8
     * @note[short] Android
     */
    bool isGroupEnabled(int id);

    /**
     * @note[short] MacOS (ARM): 0x272e3c
     * @note[short] MacOS (Intel): 0x2d6ab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void itemWasUsed(int id);

    /**
     * @note[short] MacOS (ARM): 0x270220
     * @note[short] MacOS (Intel): 0x2d31f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* keyForGroupIDColor(int id, cocos2d::ccColor3B const& color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x2751b4
     * @note[short] MacOS (Intel): 0x2d9640
     * @note[short] Windows: 0x36c170
     * @note[short] iOS: 0x17568
     * @note[short] Android
     */
    void loadFromState(EffectManagerState& state);

    /**
     * @note[short] MacOS (ARM): 0x27271c
     * @note[short] MacOS (Intel): 0x2d6150
     * @note[short] Android
     */
    void loadPersistentStateString(std::string state);

    /**
     * @note[short] MacOS (ARM): 0x2698d4
     * @note[short] MacOS (Intel): 0x2caca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10870
     * @note[short] Android
     */
    void objectsCollided(int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0x267b48
     * @note[short] MacOS (Intel): 0x2c8b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float opacityForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x26faa8
     * @note[short] MacOS (Intel): 0x2d2900
     * @note[short] iOS: 0x146b0
     * @note[short] Android
     */
    float opacityModForGroup(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x164c8
     * @note[short] Android
     */
    void pauseTimer(int id);

    /**
     * @note[short] MacOS (ARM): 0x270e88
     * @note[short] MacOS (Intel): 0x2d4090
     * @note[short] Windows: 0x369ec0
     * @note[short] iOS: 0x151c4
     * @note[short] Android
     */
    void playerButton(bool down, bool player1);

    /**
     * @note[short] MacOS (ARM): 0x271198
     * @note[short] MacOS (Intel): 0x2d4400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15400
     * @note[short] Android
     */
    void playerDied();

    /**
     * @note[short] MacOS (ARM): 0x269624
     * @note[short] MacOS (Intel): 0x2ca9c0
     * @note[short] Windows: 0x363b70
     * @note[short] iOS: 0x10684
     * @note[short] Android
     */
    void postCollisionCheck();

    /**
     * @note[short] MacOS (ARM): 0x26f228
     * @note[short] MacOS (Intel): 0x2d1e20
     * @note[short] Windows: 0x3684e0
     * @note[short] iOS: 0x14110
     * @note[short] Android
     */
    void postMoveActions();

    /**
     * @note[short] MacOS (ARM): 0x26960c
     * @note[short] MacOS (Intel): 0x2ca9a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1066c
     * @note[short] Android
     */
    void preCollisionCheck();

    /**
     * @note[short] MacOS (ARM): 0x26d860
     * @note[short] MacOS (Intel): 0x2cfd20
     * @note[short] Windows: 0x346640
     * @note[short] iOS: 0x130cc
     * @note[short] Android
     */
    void prepareMoveActions(float dt, bool intermediate);

    /**
     * @note[short] MacOS (ARM): 0x267d24
     * @note[short] MacOS (Intel): 0x2c8d30
     * @note[short] Windows: 0x362bf0
     * @note[short] iOS: 0xf6d0
     * @note[short] Android
     */
    void processColors();

    /**
     * @note[short] MacOS (ARM): 0x2682ac
     * @note[short] MacOS (Intel): 0x2c93f0
     * @note[short] iOS: 0xfa34
     * @note[short] Android
     */
    void processCopyColorPulseActions();

    /**
     * @note[short] MacOS (ARM): 0x267fd4
     * @note[short] MacOS (Intel): 0x2c9050
     * @note[short] Windows: 0x1bc870
     * @note[short] iOS: 0xf854
     * @note[short] Android
     */
    void processInheritedColors();

    /**
     * @note[short] MacOS (ARM): 0x26f588
     * @note[short] MacOS (Intel): 0x2d22c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14304
     * @note[short] Android
     */
    void processMoveCalculations();

    /**
     * @note[short] MacOS (ARM): 0x267f10
     * @note[short] MacOS (Intel): 0x2c8f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf798
     * @note[short] Android
     */
    void processPulseActions();

    /**
     * @note[short] MacOS (ARM): 0x269a3c
     * @note[short] MacOS (Intel): 0x2caea0
     * @note[short] Windows: 0x363cc0
     * @note[short] iOS: 0x10930
     * @note[short] Android
     */
    void registerCollisionTrigger(int targetID, int blockAID, int blockBID, bool triggerOnExit, bool activateGroup, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26d2f4
     * @note[short] MacOS (Intel): 0x2cf640
     * @note[short] iOS: 0x12f34
     * @note[short] Android
     */
    void registerRotationCommand(GroupCommandObject2* object, bool clear);

    /**
     * @note[short] MacOS (ARM): 0x269230
     * @note[short] MacOS (Intel): 0x2ca510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x103b4
     * @note[short] Android
     */
    void removeAllPulseActions();

    /**
     * @note[short] MacOS (ARM): 0x268b80
     * @note[short] MacOS (Intel): 0x2c9d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10008
     * @note[short] Android
     */
    void removeColorAction(int id);

    /**
     * @note[short] MacOS (ARM): 0x272fc0
     * @note[short] MacOS (Intel): 0x2d6cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16258
     * @note[short] Android
     */
    void removePersistentFromAllItems();

    /**
     * @note[short] MacOS (ARM): 0x273058
     * @note[short] MacOS (Intel): 0x2d6d80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16298
     * @note[short] Android
     */
    void removePersistentFromAllTimers();

    /**
     * @note[short] MacOS (ARM): 0x270be8
     * @note[short] MacOS (Intel): 0x2d3dd0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x15054
     * @note[short] Android
     */
    void removeTriggeredID(int objectUniqueID, int playerUniqueID);

    /**
     * @note[short] MacOS (ARM): 0x267204
     * @note[short] MacOS (Intel): 0x2c7e70
     * @note[short] Windows: 0x362950
     * @note[short] iOS: 0xf298
     * @note[short] Android
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): 0x2672d4
     * @note[short] MacOS (Intel): 0x2c7f90
     * @note[short] Windows: 0x3638b0
     * @note[short] iOS: 0xf350
     * @note[short] Android
     */
    void resetEffects();

    /**
     * @note[short] MacOS (ARM): 0x267868
     * @note[short] MacOS (Intel): 0x2c87d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf430
     * @note[short] Android
     */
    void resetMoveActions();

    /**
     * @note[short] MacOS (ARM): 0x26d61c
     * @note[short] MacOS (Intel): 0x2cfa00
     * @note[short] iOS: 0x13008
     * @note[short] Android
     */
    void resetTempGroupCommands(bool noRemove);

    /**
     * @note[short] MacOS (ARM): 0x2692e4
     * @note[short] MacOS (Intel): 0x2ca5f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x104ac
     * @note[short] Android
     */
    void resetToggledGroups();

    /**
     * @note[short] MacOS (ARM): 0x269424
     * @note[short] MacOS (Intel): 0x2ca760
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetTriggeredIDs();

    /**
     * @note[short] MacOS (ARM): 0x272da8
     * @note[short] MacOS (Intel): 0x2d69e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16188
     * @note[short] Android
     */
    void resetUsedItemState();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16528
     * @note[short] Android
     */
    void resumeTimer(int id);

    /**
     * @note[short] MacOS (ARM): 0x2712c8
     * @note[short] MacOS (Intel): 0x2d4560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x154f4
     * @note[short] Android
     */
    void runCountTrigger(int id, int targetCount, bool multiActivate, int targetID, bool activateGroup, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x2710bc
     * @note[short] MacOS (Intel): 0x2d4320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15388
     * @note[short] Android
     */
    void runDeathTrigger(int targetID, bool activateGroup, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26f8e0
     * @note[short] MacOS (Intel): 0x2d26c0
     * @note[short] Windows: 0x368760
     * @note[short] iOS: 0x145ac
     * @note[short] Android
     */
    OpacityEffectAction* runOpacityActionOnGroup(int targetID, float duration, float opacity, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26fc6c
     * @note[short] MacOS (Intel): 0x2d2b30
     * @note[short] Windows: 0x368930
     * @note[short] iOS: 0x14740
     * @note[short] Android
     */
    PulseEffectAction* runPulseEffect(int targetID, bool targetGroup, float fadeInDuration, float holdDuration, float fadeOutDuration, PulseEffectType effectType, cocos2d::ccColor3B targetColor, cocos2d::ccHSVValue targetHSV, int copyID, bool mainOnly, bool detailOnly, bool exclusive, bool legacyHSV, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x273618
     * @note[short] MacOS (Intel): 0x2d7580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1658c
     * @note[short] Android
     */
    void runTimerTrigger(int id, double targetTime, bool multiActivate, int targetID, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x270d50
     * @note[short] MacOS (Intel): 0x2d3f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x150f4
     * @note[short] Android
     */
    void runTouchTriggerCommand(int targetID, bool holdMode, TouchTriggerType touchType, TouchTriggerControl touchControl, bool dualMode, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26f4ec
     * @note[short] MacOS (Intel): 0x2d2230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14268
     * @note[short] Android
     */
    void saveCompletedMove(int groupId, double dx, double dy);

    /**
     * @note[short] MacOS (ARM): 0x274dd4
     * @note[short] MacOS (Intel): 0x2d9160
     * @note[short] iOS: 0x17204
     * @note[short] Android
     */
    void saveToState(EffectManagerState& state);

    /**
     * @note[short] MacOS (ARM): 0x268b1c
     * @note[short] MacOS (Intel): 0x2c9c90
     * @note[short] Windows: 0x3636b0
     * @note[short] iOS: 0xffa4
     * @note[short] Android
     */
    void setColorAction(ColorAction* action, int id);

    /**
     * @note[short] MacOS (ARM): 0x274278
     * @note[short] MacOS (Intel): 0x2d85b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16cf0
     * @note[short] Android
     */
    void setFollowing(int targetID, int targetPosID, bool following);

    /**
     * @note[short] Android
     */
    void setPlatformerProgress(int p0);

    /**
     * @note[short] MacOS (ARM): 0x274658
     * @note[short] MacOS (Intel): 0x2d8a70
     * @note[short] Windows: 0x36ba20
     * @note[short] iOS: 0x16eec
     * @note[short] Android
     */
    void setupFromString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x267cfc
     * @note[short] MacOS (Intel): 0x2c8d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf6a8
     * @note[short] Android
     */
    bool shouldBlend(int id);

    /**
     * @note[short] MacOS (ARM): 0x26f120
     * @note[short] MacOS (Intel): 0x29cc10
     * @note[short] Windows: 0x369aa0
     * @note[short] iOS: 0x14078
     * @note[short] Android
     */
    void spawnGroup(int targetID, float delay, bool spawnOrdered, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x270728
     * @note[short] MacOS (Intel): 0x2d3860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14cb8
     * @note[short] Android
     */
    void spawnObject(GameObject* object, float delay, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x2730b0
     * @note[short] MacOS (Intel): 0x2d6df0
     * @note[short] Windows: 0x36ace0
     * @note[short] iOS: 0x162a0
     * @note[short] Android
     */
    void startTimer(int id, double startTime, double targetTime, bool stopTime, bool active, bool dontOverride, float timeMod, bool ignoreTimewarp, int targetID, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x270b1c
     * @note[short] MacOS (Intel): 0x2d3d10
     * @note[short] iOS: 0x15020
     * @note[short] Android
     */
    void storeTriggeredID(int objectUniqueID, int playerUniqueID);

    /**
     * @note[short] MacOS (ARM): 0x273f44
     * @note[short] MacOS (Intel): 0x2d8210
     * @note[short] iOS: 0x16b14
     * @note[short] Android
     */
    double timeForItem(int id);

    /**
     * @note[short] MacOS (ARM): 0x2732f0
     * @note[short] iOS: 0x16498
     * @note[short] Android
     */
    bool timerExists(int id);

    /**
     * @note[short] MacOS (ARM): 0x272e40
     * @note[short] MacOS (Intel): 0x2d6ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void timerWasUsed(int id);

    /**
     * @note[short] MacOS (ARM): 0x269b54
     * @note[short] MacOS (Intel): 0x2cafe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x109d4
     * @note[short] Android
     */
    void toggleGroup(int id, bool activate);

    /**
     * @note[short] MacOS (ARM): 0x272e44
     * @note[short] MacOS (Intel): 0xb780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x161b0
     * @note[short] Android
     */
    void toggleItemPersistent(int id, bool persistent);

    /**
     * @note[short] MacOS (ARM): 0x273018
     * @note[short] MacOS (Intel): 0x2d6d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16260
     * @note[short] Android
     */
    void toggleTimerPersistent(int id, bool persistent);

    /**
     * @note[short] MacOS (ARM): 0x269390
     * @note[short] MacOS (Intel): 0x2ca6c0
     * @note[short] iOS: 0x104f8
     * @note[short] Android
     */
    void transferPersistentItems();

    /**
     * @note[short] MacOS (ARM): 0x268678
     * @note[short] MacOS (Intel): 0x2c9800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfb80
     * @note[short] Android
     */
    void traverseInheritanceChain(InheritanceNode* node);

    /**
     * @note[short] MacOS (Intel): 0x286fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12f04
     * @note[short] Android
     */
    CCMoveCNode* tryGetMoveCommandNode(int id);

    /**
     * @note[short] MacOS (ARM): 0x26fbe8
     * @note[short] MacOS (Intel): 0x2d2a90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateActiveOpacityEffects();

    /**
     * @note[short] MacOS (ARM): 0x26f7c8
     * @note[short] MacOS (Intel): 0x2d2520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14540
     * @note[short] Android
     */
    void updateColorAction(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x268d08
     * @note[short] MacOS (Intel): 0x2c9ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x100d4
     * @note[short] Android
     */
    void updateColorEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x2679b0
     * @note[short] MacOS (Intel): 0x2c8990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf4e4
     * @note[short] Android
     */
    void updateColors(cocos2d::ccColor3B color1, cocos2d::ccColor3B color2);

    /**
     * @note[short] MacOS (ARM): 0x271688
     * @note[short] MacOS (Intel): 0x2d49e0
     * @note[short] Windows: 0x36a1e0
     * @note[short] iOS: 0x156f4
     * @note[short] Android
     */
    void updateCountForItem(int id, int count);

    /**
     * @note[short] MacOS (ARM): 0x268c0c
     * @note[short] MacOS (Intel): 0x2c9dc0
     * @note[short] Windows: 0x363730
     * @note[short] iOS: 0x10094
     * @note[short] Android
     */
    void updateEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x26fba0
     * @note[short] MacOS (Intel): 0x2d2a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x146f8
     * @note[short] Android
     */
    void updateOpacityAction(OpacityEffectAction* action);

    /**
     * @note[short] MacOS (ARM): 0x269148
     * @note[short] MacOS (Intel): 0x2ca400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1033c
     * @note[short] Android
     */
    void updateOpacityEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x268e68
     * @note[short] MacOS (Intel): 0x2ca0c0
     * @note[short] iOS: 0x10160
     * @note[short] Android
     */
    void updatePulseEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x270820
     * @note[short] Windows: 0x369b90
     * @note[short] iOS: 0x14d44
     * @note[short] Android
     */
    void updateSpawnTriggers(float dt);

    /**
     * @note[short] MacOS (ARM): 0x273754
     * @note[short] MacOS (Intel): 0x2d76d0
     * @note[short] iOS: 0x1668c
     * @note[short] Android
     */
    void updateTimer(int id, double time);

    /**
     * @note[short] iOS: 0x25b7b0
     * @note[short] Android
     */
    void updateTimers(float dt, float timeWarp);

    /**
     * @note[short] MacOS (Intel): 0x2d85f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16d30
     * @note[short] Android
     */
    bool wasFollowing(int targetID, int targetPosID);

    /**
     * @note[short] MacOS (ARM): 0x268648
     * @note[short] MacOS (Intel): 0x2c97d0
     * @note[short] Windows: 0x363470
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool wouldCreateLoop(InheritanceNode* node, int id);
    TriggerEffectDelegate* m_triggerEffectDelegate;
    cocos2d::CCDictionary* m_unkObject148;
    cocos2d::CCDictionary* m_unkDict150;
    std::vector<PulseEffectAction> m_pulseEffectVector;
    std::unordered_map<int, std::vector<PulseEffectAction>> m_pulseEffectMap;
    std::unordered_map<int, OpacityEffectAction> m_opacityEffectMap;
    std::vector<TouchToggleAction> m_unkVector1e0;
    std::unordered_map<int, std::vector<CountTriggerAction>> m_countTriggerActions;
    std::vector<CollisionTriggerAction> m_unkVector230;
    std::vector<ToggleTriggerAction> m_unkVector248;
    cocos2d::CCDictionary* m_colorActionDict;
    cocos2d::CCDictionary* m_unkDict268;
    std::vector<InheritanceNode*> m_unkVector270;
    std::unordered_map<int, bool> m_unkMap288;
    std::vector<ColorAction*> m_colorActionVector;
    std::vector<ColorActionSprite*> m_colorActionSpriteVector;
    std::vector<bool> m_unkVector2f0;
    std::unordered_map<int, int> m_itemCountMap;
    std::unordered_map<int, int> m_persistentItemCountMap;
    std::unordered_set<int> m_persistentTimerItemSet;
    std::unordered_set<int> m_unk3f0;
    std::unordered_set<int> m_unk430;
    std::unordered_map<int, TimerItem> m_timerItemMap;
    std::unordered_map<int, std::vector<TimerTriggerAction>> m_unkMap3f8;
    cocos2d::CCArray* m_unkArray430;
    std::vector<bool> m_unkVector438;
    std::unordered_set<int> m_unkMap460;
    std::set<std::pair<int, int>> m_unkMap498;
    std::unordered_set<int> m_unkMap4c8;
    std::vector<SpawnTriggerAction> m_spawnTriggerActions;
    std::vector<GroupCommandObject2*> m_unkVector518;
    std::vector<GroupCommandObject2*> m_unkVector530;
    std::vector<cocos2d::CCObject*> m_unkVector548;
    std::vector<GroupCommandObject2> m_unkVector560;
    std::unordered_map<int, std::pair<double, double>> m_unkMap578;
    std::vector<GroupCommandObject2*> m_unkVector5b0;
    std::unordered_map<int, std::vector<GroupCommandObject2*>> m_unkMap5c8;
    std::vector<GroupCommandObject2*> m_unkVector600;
    std::unordered_map<int, CCMoveCNode*> m_unkMap618;
    std::unordered_map<int, CCMoveCNode*> m_unkMap650;
    std::unordered_map<int, CCMoveCNode*> m_unkMap688;
    std::vector<CCMoveCNode*> m_unkVector6c0;
    std::vector<CCMoveCNode*> m_unkVector6d8;
    std::vector<CCMoveCNode*> m_unkVector6f0;
    std::vector<DynamicMoveCalculation> m_unkVector708;
    std::map<std::pair<int, int>, std::vector<GroupCommandObject2*>> m_unkMap770;
    float m_unk780;
    float m_unk784;
    float m_unk788;
    float m_unk78C;
    float m_unk790;
    float m_unk794;
    bool m_unk798;
};
