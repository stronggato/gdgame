#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJRobotSprite.hpp>

class GJSpiderSprite : public GJRobotSprite {
public:
    static constexpr auto CLASS_NAME = "GJSpiderSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpiderSprite, GJRobotSprite)

    /**
     * @note[short] Windows: 0x3a9b70
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSpiderSprite();

    /**
     * @note[short] MacOS (ARM): 0x5c6fd0
     * @note[short] MacOS (Intel): 0x6acd60
     * @note[short] Windows: 0x3ab170
     * @note[short] iOS: 0x2daf6c
     * @note[short] Android
     */
    static GJSpiderSprite* create(int frame);

    /**
     * @note[short] MacOS (ARM): 0x5c710c
     * @note[short] MacOS (Intel): 0x6aceb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2db034
     * @note[short] Android
     */
    bool init(int frame);
};
