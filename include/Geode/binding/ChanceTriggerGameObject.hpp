#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ChanceObject.hpp>
#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class ChanceTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ChanceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChanceTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ChanceTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x15b078
     * @note[short] MacOS (Intel): 0x19bb90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool containsTargetID(int id);

    /**
     * @note[short] MacOS (ARM): 0x161624
     * @note[short] MacOS (Intel): 0x1a3610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42d7f0
     * @note[short] Android
     */
    void editChanceObject(int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x1618f4
     * @note[short] MacOS (Intel): 0x1a3650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42d81c
     * @note[short] Android
     */
    void getTargetIDs(std::vector<int>& ids);

    /**
     * @note[short] MacOS (ARM): 0x161458
     * @note[short] MacOS (Intel): 0x1a3440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1614a0
     * @note[short] MacOS (Intel): 0x1a3490
     * @note[short] Windows: 0x651750
     * @note[short] iOS: 0x42d778
     * @note[short] Android
     */
    void remapChanceObjects(std::unordered_map<int, int> const* remap);

    /**
     * @note[short] MacOS (ARM): 0x1615a0
     * @note[short] MacOS (Intel): 0x1a35e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42d7d0
     * @note[short] Android
     */
    void revertChanceRemap();
    std::vector<ChanceObject> m_chanceObjects;
};
