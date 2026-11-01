#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class EditorBuildStats {
public:
    static constexpr auto CLASS_NAME = "EditorBuildStats";

    /**
     * @note[short] Android
     */
    TodoReturn fromString(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn noteAction();

    /**
     * @note[short] Android
     */
    TodoReturn toString();
};
