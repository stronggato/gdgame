#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJMessageThread : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJMessageThread";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMessageThread, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0xab270
     * @note[short] Android: Rebinded
     */
    virtual  ~GJMessageThread();

    /**
     * @note[short] Android
     */
    TodoReturn createRoleBadge(float p0);
};
