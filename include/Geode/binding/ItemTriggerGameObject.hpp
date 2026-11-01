#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class ItemTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ItemTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x634540
     * @note[short] Android: Rebinded
     */
    virtual  ~ItemTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ItemTriggerGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1c6300
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ItemTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (Intel): 0x1c6460
     * @note[short] Windows: 0x65cd20
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x17dbf0
     * @note[short] MacOS (Intel): 0x1c64a0
     * @note[short] Windows: 0x65cd60
     * @note[short] iOS: 0x439468
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x172658
     * @note[short] MacOS (Intel): 0x1cb2b0
     * @note[short] Windows: 0x65db80
     * @note[short] iOS: 0x434e20
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x65cea0
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (Intel): 0x1c6410
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    int m_item1Mode;
    int m_item2Mode;
    int m_targetItemMode;
    float m_mod1;
    float m_mod2;
    int m_resultType1;
    int m_resultType2;
    int m_resultType3;
    float m_tolerance;
    int m_roundType1;
    int m_roundType2;
    int m_signType1;
    int m_signType2;
    bool m_persistent;
    bool m_targetAll;
    bool m_reset;
    bool m_timer;
};
