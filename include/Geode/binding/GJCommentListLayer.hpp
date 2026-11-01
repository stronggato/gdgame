#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJCommentListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJCommentListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJCommentListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Windows: 0x3964d0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJCommentListLayer();

    /**
     * @note[short] MacOS (ARM): 0x22d9c0
     * @note[short] MacOS (Intel): 0x288f10
     * @note[short] Windows: 0x3999b0
     * @note[short] iOS: 0x3704a4
     * @note[short] Android
     */
    static GJCommentListLayer* create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);

    /**
     * @note[short] MacOS (ARM): 0x22dab8
     * @note[short] MacOS (Intel): 0x289020
     * @note[short] Windows: 0x399ad0
     * @note[short] iOS: 0x370588
     * @note[short] Android
     */
    bool init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);
    BoomListView* m_list;
};
