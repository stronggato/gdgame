#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ChanceObject.hpp>
#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class SpawnTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x6344a0
     * @note[short] Android: Rebinded
     */
    virtual  ~SpawnTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpawnTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x16ec54
     * @note[short] MacOS (Intel): 0x1b3950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x432d10
     * @note[short] Android
     */
    static SpawnTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x16ed38
     * @note[short] MacOS (Intel): 0x1b3a30
     * @note[short] Windows: 0x656330
     * @note[short] iOS: 0x432de8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x16ef24
     * @note[short] MacOS (Intel): 0x1b3d20
     * @note[short] Windows: 0x6564a0
     * @note[short] iOS: 0x432f04
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x1635dc
     * @note[short] MacOS (Intel): 0x1b4260
     * @note[short] Windows: 0x656840
     * @note[short] iOS: 0x42e594
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x656bc0
     * @note[short] iOS: 0x433658
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0xf5540
     * @note[short] MacOS (Intel): 0x1b3e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x432fa8
     * @note[short] Android
     */
    void addRemap(int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x16f238
     * @note[short] MacOS (Intel): 0x1b4070
     * @note[short] iOS: 0x433164
     * @note[short] Android
     */
    void changeRemap(int oldID, int newID, bool reverse);

    /**
     * @note[short] MacOS (ARM): 0x16efc8
     * @note[short] MacOS (Intel): 0x1b3de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ChanceObject* getRemapWithSource(int id);

    /**
     * @note[short] MacOS (ARM): 0x16effc
     * @note[short] MacOS (Intel): 0x1b3e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ChanceObject* getRemapWithTarget(int id);

    /**
     * @note[short] MacOS (ARM): 0x16f198
     * @note[short] MacOS (Intel): 0x1b3fe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4330d4
     * @note[short] Android
     */
    void removeRemap(int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x16ed88
     * @note[short] MacOS (Intel): 0x1b3a80
     * @note[short] Windows: 0x6563a0
     * @note[short] iOS: 0x432e38
     * @note[short] Android
     */
    void updateRemapKeys(std::vector<int> const& remapKeys);
    std::vector<ChanceObject> m_remapObjects;
    int m_remapKey;
    std::vector<int> m_remapKeys;
    double m_currentDelay;
    float m_spawnDelay;
    float m_delayRange;
    bool m_resetRemap;
};
