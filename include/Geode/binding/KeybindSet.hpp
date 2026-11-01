#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/KeybindSource.hpp>

class KeybindSet : public KeybindSource {
public:
    static constexpr auto CLASS_NAME = "KeybindSet";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindSet, KeybindSource)

    /**
     * @note[short] Windows: 0x447230
     * @note[short] Android: Rebinded
     */
    virtual  ~KeybindSet();

    /**
     * @note[short] Windows: 0x4462a0
     * @note[short] Android
     */
    virtual TodoReturn chordsForAction(int p0);

    /**
     * @note[short] Windows: 0x446390
     * @note[short] Android
     */
    virtual TodoReturn actionsForChord(int p0);

    /**
     * @note[short] Windows: 0x4464a0
     * @note[short] Android
     */
    virtual TodoReturn bindChord(int p0, int p1);

    /**
     * @note[short] Windows: 0x4464e0
     * @note[short] Android
     */
    virtual TodoReturn unbindChord(int p0, int p1);

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    bool isLevelSet();
};
