#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/KeybindSource.hpp>

class GlobalKeybindSource : public KeybindSource {
public:
    static constexpr auto CLASS_NAME = "GlobalKeybindSource";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GlobalKeybindSource, KeybindSource)

    /**
     * @note[short] Windows: 0x3d2710
     * @note[short] Android: Rebinded
     */
    virtual  ~GlobalKeybindSource();

    /**
     * @note[short] Windows: 0x3d2740
     * @note[short] Android
     */
    virtual TodoReturn chordsForAction(int p0);

    /**
     * @note[short] Windows: 0x3d2780
     * @note[short] Android
     */
    virtual TodoReturn actionsForChord(int p0);

    /**
     * @note[short] Windows: 0x3d27c0
     * @note[short] Android
     */
    virtual TodoReturn bindChord(int p0, int p1);

    /**
     * @note[short] Windows: 0x3d27f0
     * @note[short] Android
     */
    virtual TodoReturn unbindChord(int p0, int p1);
};
