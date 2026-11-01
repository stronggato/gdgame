#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class GJGameLoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGameLoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x307c80
     * @note[short] Android: Rebinded
     */
    virtual  ~GJGameLoadingLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJGameLoadingLayer();

    /**
     * @note[short] MacOS (ARM): 0x117b60
     * @note[short] MacOS (Intel): 0x144920
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2a4608
     * @note[short] Android
     */
    static GJGameLoadingLayer* create(GJGameLevel* level, bool editor);

    /**
     * @note[short] MacOS (ARM): 0x117a54
     * @note[short] MacOS (Intel): 0x144800
     * @note[short] Windows: 0x3506b0
     * @note[short] iOS: 0x2a457c
     * @note[short] Android
     */
    static GJGameLoadingLayer* transitionToLoadingLayer(GJGameLevel* level, bool editor);

    /**
     * @note[short] MacOS (ARM): 0x117f64
     * @note[short] MacOS (Intel): 0x144df0
     * @note[short] Windows: 0x5bb80
     * @note[short] iOS: 0x2a48b4
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x117f60
     * @note[short] MacOS (Intel): 0x144de0
     * @note[short] Windows: 0x350940
     * @note[short] iOS: 0x2a48b0
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0xccf90
     * @note[short] MacOS (Intel): 0xeb9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x273074
     * @note[short] Android
     */
    void gameLayerDidUnload();

    /**
     * @note[short] MacOS (ARM): 0x117dfc
     * @note[short] MacOS (Intel): 0x144c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2a4754
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool editor);

    /**
     * @note[short] MacOS (ARM): 0x117ef8
     * @note[short] MacOS (Intel): 0x144d80
     * @note[short] Windows: 0x3508a0
     * @note[short] iOS: 0x2a484c
     * @note[short] Android
     */
    void loadLevel();
    GJGameLevel* m_level;
    bool m_editor;
};
