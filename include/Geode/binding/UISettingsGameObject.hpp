#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class UISettingsGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "UISettingsGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UISettingsGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633d00
     * @note[short] Android: Rebinded
     */
    virtual  ~UISettingsGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UISettingsGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1bdab0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UISettingsGameObject* create();

    /**
     * @note[short] Windows: 0x65a3c0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x177cc0
     * @note[short] MacOS (Intel): 0x1b76e0
     * @note[short] Windows: 0x65a760
     * @note[short] iOS: 0x436d88
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x65a430
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    int m_xRef;
    int m_yRef;
    bool m_xRelative;
    bool m_yRelative;
};
