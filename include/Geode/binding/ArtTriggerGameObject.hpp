#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class ArtTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ArtTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ArtTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x634070
     * @note[short] Android: Rebinded
     */
    virtual  ~ArtTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ArtTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x183f20
     * @note[short] MacOS (Intel): 0x1ce210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43b984
     * @note[short] Android
     */
    static ArtTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x18450c
     * @note[short] MacOS (Intel): 0x1ce8b0
     * @note[short] Windows: 0x65f280
     * @note[short] iOS: 0x43bc34
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x184494
     * @note[short] MacOS (Intel): 0x1ce850
     * @note[short] Windows: 0x65f200
     * @note[short] iOS: 0x43bbcc
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x65f0b0
     * @note[short] iOS: 0x43ba3c
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    int m_artIndex;
};
