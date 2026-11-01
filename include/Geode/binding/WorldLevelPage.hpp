#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class WorldLevelPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "WorldLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(WorldLevelPage, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static WorldLevelPage* create(GJGameLevel* level, GJWorldNode* node);

    /**
     * @note[short] MacOS (ARM): 0x336a70
     * @note[short] MacOS (Intel): 0x3afae0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x336924
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x335658
     * @note[short] MacOS (Intel): 0x3ae6a0
     * @note[short] Android
     */
    bool init(GJGameLevel* level, GJWorldNode* node);

    /**
     * @note[short] MacOS (ARM): 0x336624
     * @note[short] MacOS (Intel): 0x293d80
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x33669c
     * @note[short] MacOS (Intel): 0x3af6f0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x336660
     * @note[short] MacOS (Intel): 0x3af6a0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x336670
     * @note[short] MacOS (Intel): 0x3af6c0
     * @note[short] Android
     */
    void onSong(cocos2d::CCObject* sender);
    GJWorldNode* m_worldNode;
    GJGameLevel* m_level;
};
