#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <fmod.hpp>
#include <Geode/mapping/CCNode.hpp>

class FMODLevelVisualizer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODLevelVisualizer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODLevelVisualizer, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x80c50
     * @note[short] Android: Rebinded
     */
    virtual  ~FMODLevelVisualizer();

    /**
     * @note[short] MacOS (ARM): 0x240cd8
     * @note[short] MacOS (Intel): 0x29d9f0
     * @note[short] Windows: 0x3a7030
     * @note[short] iOS: 0x37cc94
     * @note[short] Android
     */
    static FMODLevelVisualizer* create();

    /**
     * @note[short] MacOS (ARM): 0x240d60
     * @note[short] MacOS (Intel): 0x29da60
     * @note[short] Windows: 0x3a70c0
     * @note[short] iOS: 0x37cd10
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2411c4
     * @note[short] MacOS (Intel): 0x29de70
     * @note[short] Windows: 0x24f4f0
     * @note[short] iOS: 0x37d0ec
     * @note[short] Android
     */
    void updateVisualizer(float volume, float peak, float time);
    float m_width;
};
