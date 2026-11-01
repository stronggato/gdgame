#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJPathsLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJPathsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x38f700
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPathsLayer();

    /**
     * @note[short] Android
     */
    static GJPathsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x27e924
     * @note[short] MacOS (Intel): 0x2e8660
     * @note[short] iOS: 0x45c550
     * @note[short] Android
     */
    static std::string nameForPath(int path);

    /**
     * @note[short] MacOS (ARM): 0x27eca8
     * @note[short] MacOS (Intel): 0x2e8a40
     * @note[short] Windows: 0x38fe70
     * @note[short] iOS: 0x45c678
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x27f3c8
     * @note[short] MacOS (Intel): 0x2e9160
     * @note[short] Windows: 0x3903b0
     * @note[short] iOS: 0x45ccf0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x3906c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9ed50
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x27f41c
     * @note[short] MacOS (Intel): 0x2e91b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void darkenButtons(bool darken);

    /**
     * @note[short] MacOS (ARM): 0x27f1a8
     * @note[short] MacOS (Intel): 0x2e8f60
     * @note[short] Windows: 0x390660
     * @note[short] iOS: 0x45cadc
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x27f33c
     * @note[short] MacOS (Intel): 0x2e90e0
     * @note[short] Windows: 0x181c30
     * @note[short] iOS: 0x45cc64
     * @note[short] Android
     */
    void onPath(cocos2d::CCObject* sender);
    cocos2d::CCSprite* m_closeSprite;
    bool m_exiting;
};
