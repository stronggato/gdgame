#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class SecretLayer6 : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretLayer6";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer6, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (Intel): 0x472f10
     * @note[short] Android
     */
    static SecretLayer6* create();

    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3dddc0
     * @note[short] MacOS (Intel): 0x472fc0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3de8fc
     * @note[short] MacOS (Intel): 0x473c30
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3de244
     * @note[short] MacOS (Intel): 0x473490
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3de294
     * @note[short] MacOS (Intel): 0x4734e0
     * @note[short] Android
     */
    void startGame01();
    SecretGame01Layer* m_gameLayer;
};
