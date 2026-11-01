#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/AdvancedFollowTriggerObject.hpp>
#include <Geode/mapping/vector.hpp>

class AdvancedFollowEditObject : public AdvancedFollowTriggerObject {
public:
    static constexpr auto CLASS_NAME = "AdvancedFollowEditObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AdvancedFollowEditObject, AdvancedFollowTriggerObject)

    /**
     * @note[short] Windows: 0x634010
     * @note[short] Android: Rebinded
     */
    virtual  ~AdvancedFollowEditObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AdvancedFollowEditObject();

    /**
     * @note[short] MacOS (Intel): 0x18d950
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AdvancedFollowEditObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x14fd68
     * @note[short] Windows: 0x63cb50
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x63c7e0
     * @note[short] iOS: 0x423424
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_modX;
    float m_modXVariance;
    float m_modY;
    float m_modYVariance;
    bool m_redirectDirection;
};
