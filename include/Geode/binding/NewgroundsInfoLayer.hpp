#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class NewgroundsInfoLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "NewgroundsInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NewgroundsInfoLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a280
     * @note[short] Android: Rebinded
     */
    virtual  ~NewgroundsInfoLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NewgroundsInfoLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static NewgroundsInfoLayer* create();

    /**
     * @note[short] MacOS (Intel): 0x1fab40
     * @note[short] Windows: 0x165220
     * @note[short] iOS: 0x1c2a08
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1ac9e4
     * @note[short] MacOS (Intel): 0x1fb430
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x1c32c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x46faf4
     * @note[short] MacOS (Intel): 0x514d40
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x456a60
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1ac85c
     * @note[short] MacOS (Intel): 0x1fb2f0
     * @note[short] Windows: 0x37ec20
     * @note[short] iOS: 0x1c3188
     * @note[short] Android
     */
    void onArtists(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onChanges(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ac820
     * @note[short] MacOS (Intel): 0x1fb2c0
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x1c314c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ac8b4
     * @note[short] MacOS (Intel): 0x383230
     * @note[short] iOS: 0x1c31e0
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x10acb0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ac890
     * @note[short] iOS: 0x1c31bc
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ac8d8
     * @note[short] MacOS (Intel): 0x383250
     * @note[short] iOS: 0x1c3204
     * @note[short] Android
     */
    void onSupporter(cocos2d::CCObject* sender);
};
