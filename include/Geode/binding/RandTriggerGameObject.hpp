#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ChanceTriggerGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class RandTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "RandTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RandTriggerGameObject, ChanceTriggerGameObject)

    /**
     * @note[short] Windows: 0x634390
     * @note[short] Android: Rebinded
     */
    virtual  ~RandTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RandTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x161940
     * @note[short] MacOS (Intel): 0x1a37b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42d868
     * @note[short] Android
     */
    static RandTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x161a0c
     * @note[short] MacOS (Intel): 0x1a3880
     * @note[short] Windows: 0x651840
     * @note[short] iOS: 0x42d928
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x161d60
     * @note[short] MacOS (Intel): 0x1a3b10
     * @note[short] Windows: 0x651860
     * @note[short] iOS: 0x42da4c
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x162014
     * @note[short] MacOS (Intel): 0x1a3d80
     * @note[short] Windows: 0x651a40
     * @note[short] iOS: 0x42db24
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (Intel): 0x1a4390
     * @note[short] Windows: 0x651c40
     * @note[short] iOS: 0x42df24
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x161b90
     * @note[short] MacOS (Intel): 0x1a39b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42d9ac
     * @note[short] Android
     */
    int getRandomGroupID();

    /**
     * @note[short] MacOS (ARM): 0x161a5c
     * @note[short] MacOS (Intel): 0x1a38d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42d978
     * @note[short] Android
     */
    int getTotalChance();
};
