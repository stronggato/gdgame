#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class EditorSFXSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditorSFXSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSFXSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSFXSettingsPopup();

    /**
     * @note[short] Android
     */
    static EditorSFXSettingsPopup* create(int p0);

    /**
     * @note[short] Windows: 0x18c230
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x18c150
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Android
     */
    bool init(int p0);
};
