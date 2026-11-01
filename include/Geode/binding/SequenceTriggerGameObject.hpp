#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ChanceTriggerGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class SequenceTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SequenceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SequenceTriggerGameObject, ChanceTriggerGameObject)

    /**
     * @note[short] Windows: 0x634400
     * @note[short] Android: Rebinded
     */
    virtual  ~SequenceTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SequenceTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x162de8
     * @note[short] MacOS (Intel): 0x1a4cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x19b1d0
     * @note[short] Android
     */
    static SequenceTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x162edc
     * @note[short] MacOS (Intel): 0x1a4de0
     * @note[short] Windows: 0x651e60
     * @note[short] iOS: 0x42e268
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x162f2c
     * @note[short] MacOS (Intel): 0x1a4e30
     * @note[short] Windows: 0x651e80
     * @note[short] iOS: 0x42e2b8
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x1630f8
     * @note[short] MacOS (Intel): 0x1a5000
     * @note[short] Windows: 0x651eb0
     * @note[short] iOS: 0x42e2e4
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (Intel): 0x1a5560
     * @note[short] Windows: 0x652300
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x652670
     * @note[short] iOS: 0x42e928
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x164a3c
     * @note[short] MacOS (Intel): 0x1a6e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42ef28
     * @note[short] Android
     */
    void addCount(int index, int count);

    /**
     * @note[short] MacOS (ARM): 0x164838
     * @note[short] MacOS (Intel): 0x1a6bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42ed34
     * @note[short] Android
     */
    void addTarget(int groupID, int count);

    /**
     * @note[short] MacOS (ARM): 0x1649c0
     * @note[short] MacOS (Intel): 0x1a6db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42eeb0
     * @note[short] Android
     */
    void deleteTarget(int index);

    /**
     * @note[short] MacOS (ARM): 0x164944
     * @note[short] MacOS (Intel): 0x1a6d30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool reorderTarget(int index, bool left);

    /**
     * @note[short] MacOS (ARM): 0x162fc4
     * @note[short] MacOS (Intel): 0x1a4f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSequenceTotalCount();
    SequenceTriggerState m_sequenceState;
    float m_minInt;
    int m_sequenceMode;
    int m_resetMode;
    float m_reset;
    int m_sequenceTotalCount;
    bool m_uniqueRemap;
};
