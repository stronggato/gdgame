#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class StatsObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "StatsObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(StatsObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x14d3b0
     * @note[short] Android: Rebinded
     */
    virtual  ~StatsObject();

    /**
     * @note[short] MacOS (ARM): 0x1e7288
     * @note[short] MacOS (Intel): 0x23b850
     * @note[short] Windows: 0x14d270
     * @note[short] iOS: 0x136324
     * @note[short] Android
     */
    static StatsObject* create(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): 0x1e7310
     * @note[short] MacOS (Intel): 0x23b8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1363ac
     * @note[short] Android
     */
    bool init(char const* key, int value);
    const char* m_key;
    int m_value;
};
