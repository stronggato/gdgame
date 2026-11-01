#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class NCSInfoLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "NCSInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NCSInfoLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a280
     * @note[short] Android: Rebinded
     */
    virtual  ~NCSInfoLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NCSInfoLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36a690
     * @note[short] Android
     */
    static NCSInfoLayer* create(CustomSongLayer* layer);

    /**
     * @note[short] MacOS (Intel): 0x1fbc40
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1aca60
     * @note[short] MacOS (Intel): 0x1fb4a0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1c333c
     * @note[short] Android
     */
    bool init(CustomSongLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1ad190
     * @note[short] MacOS (Intel): 0x1fbc10
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ad0c0
     * @note[short] MacOS (Intel): 0x1fbb40
     * @note[short] Windows: 0x166690
     * @note[short] iOS: 0x1c394c
     * @note[short] Android
     */
    void onLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ad124
     * @note[short] MacOS (Intel): 0x1fb320
     * @note[short] iOS: 0x1c39b0
     * @note[short] Android
     */
    void onNCS(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ad148
     * @note[short] MacOS (Intel): 0x1fb340
     * @note[short] iOS: 0x1c39d4
     * @note[short] Android
     */
    void onNCSIO(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ad16c
     * @note[short] MacOS (Intel): 0x1fb360
     * @note[short] iOS: 0x1c39f8
     * @note[short] Android
     */
    void onNCSUsage(cocos2d::CCObject* sender);
    CustomSongLayer* m_songLayer;
};
