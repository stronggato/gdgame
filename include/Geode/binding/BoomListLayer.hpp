#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>

class BoomListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "BoomListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x3ce534
     * @note[short] MacOS (Intel): 0x461dd0
     * @note[short] Android
     */
    static BoomListLayer* create(BoomListView* listView, char const* title);

    /**
     * @note[short] MacOS (ARM): 0x3ce610
     * @note[short] MacOS (Intel): 0x461ec0
     * @note[short] Android
     */
    bool init(BoomListView* listView, char const* title);
};
