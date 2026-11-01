#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/vector.hpp>

class EventLinkTrigger : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EventLinkTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EventLinkTrigger, EffectGameObject)

    /**
     * @note[short] Windows: 0x634780
     * @note[short] Android: Rebinded
     */
    virtual  ~EventLinkTrigger();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EventLinkTrigger();

    /**
     * @note[short] MacOS (ARM): 0x16d718
     * @note[short] MacOS (Intel): 0x1b2190
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x432418
     * @note[short] Android
     */
    static EventLinkTrigger* create();

    /**
     * @note[short] MacOS (ARM): 0x16d7f4
     * @note[short] MacOS (Intel): 0x1b2270
     * @note[short] Windows: 0x655b90
     * @note[short] iOS: 0x4324e8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x16d844
     * @note[short] MacOS (Intel): 0x1b22c0
     * @note[short] Windows: 0x655c00
     * @note[short] iOS: 0x432538
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x16e448
     * @note[short] MacOS (Intel): 0x1b31c0
     * @note[short] Windows: 0x656070
     * @note[short] iOS: 0x432938
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x655cf0
     * @note[short] iOS: 0x4325bc
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    std::set<int> m_eventIDs;
    bool m_resetRemap;
    int m_extraID;
    int m_extraID2;
};
