#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class MultiplayerLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MultiplayerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MultiplayerLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (Intel): 0x3843f0
     * @note[short] Android
     */
    static MultiplayerLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x30f358
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x30f4b8
     * @note[short] MacOS (Intel): 0x3844a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x30f590
     * @note[short] MacOS (Intel): 0x384590
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x30f54c
     * @note[short] MacOS (Intel): 0x384550
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30f4bc
     * @note[short] MacOS (Intel): 0x3844b0
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30f504
     * @note[short] MacOS (Intel): 0x384500
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);
};
