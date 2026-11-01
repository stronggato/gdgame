#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class FileOperation {
public:
    static constexpr auto CLASS_NAME = "FileOperation";

    /**
     * @note[short] MacOS (ARM): 0x611aec
     * @note[short] MacOS (Intel): 0x7004c0
     * @note[short] Android
     */
    static std::string getFilePath();

    /**
     * @note[short] MacOS (ARM): 0x611af8
     * @note[short] MacOS (Intel): 0x7004d0
     * @note[short] Android
     */
    static void readFile();

    /**
     * @note[short] MacOS (ARM): 0x611a58
     * @note[short] MacOS (Intel): 0x700450
     * @note[short] Android
     */
    static void saveFile();
};
