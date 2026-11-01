#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class KeybindSource {
public:
    static constexpr auto CLASS_NAME = "KeybindSource";
    GEODE_CUSTOM_CONSTRUCTOR_BEGIN(KeybindSource)

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual TodoReturn chordsForAction(int p0);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual TodoReturn actionsForChord(int p0);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual TodoReturn bindChord(int p0, int p1);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual TodoReturn unbindChord(int p0, int p1);

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    bool isLevelSet();
};
