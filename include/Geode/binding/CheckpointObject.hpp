#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJGameState.hpp>
#include <Geode/binding/GJShaderState.hpp>
#include <Geode/binding/FMODAudioState.hpp>
#include <Geode/binding/EffectManagerState.hpp>
#include <Geode/binding/SavedObjectStateRef.hpp>
#include <Geode/binding/SavedActiveObjectState.hpp>
#include <Geode/binding/SavedSpecialObjectState.hpp>
#include <Geode/binding/SequenceTriggerState.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class CheckpointObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CheckpointObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CheckpointObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x53fd58
     * @note[short] MacOS (Intel): 0x8fe80
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x19f8fc
     * @note[short] Android: Rebinded
     */
     CheckpointObject();

    /**
     * @note[short] MacOS (Intel): 0x5dcc10
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~CheckpointObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CheckpointObject* create();

    /**
     * @note[short] Windows: 0x8aef0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GameObject* getObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x148e98
     * @note[short] Android
     */
    void setObject(GameObject* object);
    GJGameState m_gameState;
    GJShaderState m_shaderState;
    FMODAudioState m_audioState;
    GameObject* m_physicalCheckpointObject;
    PlayerCheckpoint* m_player1Checkpoint;
    PlayerCheckpoint* m_player2Checkpoint;
    int m_unke78;
    int m_unke7c;
    float m_unke80;
    bool m_ground2Invisible;
    bool m_streakBlend;
    int m_uniqueID;
    int m_respawnID;
    std::vector<SavedObjectStateRef> m_vectorSavedObjectStateRef;
    std::vector<SavedActiveObjectState> m_vectorActiveSaveObjectState;
    std::vector<SavedSpecialObjectState> m_vectorSpecialSaveObjectState;
    EffectManagerState m_effectManagerState;
    cocos2d::CCArray* m_gradientTriggerObjectArray;
    bool m_unk11e8;
    std::unordered_map<int,SequenceTriggerState> m_sequenceTriggerStateUnorderedMap;
    int m_commandIndex;
};
