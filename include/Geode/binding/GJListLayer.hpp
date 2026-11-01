#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Windows: 0x38b010
     * @note[short] Android: Rebinded
     */
    virtual  ~GJListLayer();

    /**
     * @note[short] MacOS (ARM): 0x5bd444
     * @note[short] MacOS (Intel): 0x6a1f70
     * @note[short] Windows: 0x38b0d0
     * @note[short] iOS: 0x87b38
     * @note[short] Android
     */
    static GJListLayer* create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, int type);

    /**
     * @note[short] MacOS (ARM): 0x5bd538
     * @note[short] MacOS (Intel): 0x6a2080
     * @note[short] Windows: 0x38b200
     * @note[short] iOS: 0x87c2c
     * @note[short] Android
     */
    bool init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, int type);
    BoomListView* m_listView;
};
