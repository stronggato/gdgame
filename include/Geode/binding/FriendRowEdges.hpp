#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class FriendRowEdges : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FriendRowEdges";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FriendRowEdges, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x80c50
     * @note[short] Android: Rebinded
     */
    virtual  ~FriendRowEdges();

    /**
     * @note[short] Windows: 0x210f60
     * @note[short] Android
     */
    virtual void draw();
};
