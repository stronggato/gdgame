#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class CheckpointGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CheckpointGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CheckpointGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633d00
     * @note[short] Android: Rebinded
     */
    virtual  ~CheckpointGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CheckpointGameObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CheckpointGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x170954
     * @note[short] MacOS (Intel): 0x1b5bc0
     * @note[short] Windows: 0x656ff0
     * @note[short] iOS: 0x433bac
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x170d8c
     * @note[short] MacOS (Intel): 0x1b5fe0
     * @note[short] Windows: 0x657480
     * @note[short] iOS: 0x433f78
     * @note[short] Android
     */
    virtual void setupCustomSprites(std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x17229c
     * @note[short] MacOS (Intel): 0x1b7860
     * @note[short] Windows: 0x658290
     * @note[short] iOS: 0x434b38
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x1709b0
     * @note[short] MacOS (Intel): 0x1b5c20
     * @note[short] Windows: 0x657070
     * @note[short] iOS: 0x433c08
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x172128
     * @note[short] Windows: 0x658130
     * @note[short] iOS: 0x4349fc
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x657e60
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1709c8
     * @note[short] MacOS (Intel): 0x1b5c40
     * @note[short] Windows: 0x657090
     * @note[short] iOS: 0x433c20
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (Intel): 0x1b78d0
     * @note[short] Windows: 0x6584d0
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x9ad54
     * @note[short] MacOS (Intel): 0x1b65a0
     * @note[short] Windows: 0x657b20
     * @note[short] iOS: 0x43437c
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x1722ec
     * @note[short] MacOS (Intel): 0x1b78b0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x170bf8
     * @note[short] MacOS (Intel): 0x1b5e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x433df0
     * @note[short] Android
     */
    void updateCheckpointSpriteVisibility();
    bool m_checkpointActivated;
    int m_respawnID;
};
