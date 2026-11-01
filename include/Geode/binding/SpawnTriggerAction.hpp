#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/vector.hpp>

class SpawnTriggerAction {
public:
    static constexpr auto CLASS_NAME = "SpawnTriggerAction";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpawnTriggerAction();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpawnTriggerAction(GameObject* object, float delay, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpawnTriggerAction(int targetID, float delay, bool spawnOrdered, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x263514
     * @note[short] MacOS (Intel): 0x2c3c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isFinished();

    /**
     * @note[short] MacOS (ARM): 0x2634e4
     * @note[short] MacOS (Intel): 0x2c3c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void step(float dt);
    bool m_finished;
    bool m_disabled;
    double m_duration;
    double m_deltaTime;
    int m_targetGroupID;
    int m_triggerUniqueID;
    int m_controlID;
    bool m_spawnOrdered;
    GameObject* m_gameObject;
    std::vector<int> m_remapKeys;
};
