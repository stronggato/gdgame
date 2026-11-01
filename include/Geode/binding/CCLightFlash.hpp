#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCLightFlash : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCLightFlash";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCLightFlash, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCLightFlash();

    /**
     * @note[short] MacOS (ARM): 0x45e664
     * @note[short] MacOS (Intel): 0x502be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x34ad0
     * @note[short] Android: Rebinded
     */
     ~CCLightFlash();

    /**
     * @note[short] MacOS (ARM): 0x45de9c
     * @note[short] MacOS (Intel): 0x5022c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x34388
     * @note[short] Android
     */
    static CCLightFlash* create();

    /**
     * @note[short] MacOS (ARM): 0x45df00
     * @note[short] MacOS (Intel): 0x502330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x343ec
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x45e624
     * @note[short] MacOS (Intel): 0x502ba0
     * @note[short] Windows: 0x47970
     * @note[short] iOS: 0x34a90
     * @note[short] Android
     */
    void cleanupFlash();

    /**
     * @note[short] MacOS (ARM): 0x45e460
     * @note[short] MacOS (Intel): 0x5029c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x348d4
     * @note[short] Android
     */
    void fadeAndRemove();

    /**
     * @note[short] MacOS (ARM): 0x45df08
     * @note[short] MacOS (Intel): 0x502340
     * @note[short] Windows: 0x470c0
     * @note[short] iOS: 0x343f4
     * @note[short] Android
     */
    void playEffect(cocos2d::CCPoint pos, cocos2d::ccColor3B col, float startWidth, float startWidthVariation, float endWidth, float endWidthVariation, float endHeight, float stripDuration, float stripDurationVariance, float stripInterval, float stripStartDelay, float stripStartDelayVariation, float stripRotation, float stripRotationVariation, float stripOpacity, float stripOpacityVariation, int stripCount, bool circleRotation, bool fadeIn, float delay);

    /**
     * @note[short] MacOS (ARM): 0x45e5c8
     * @note[short] MacOS (Intel): 0x502b40
     * @note[short] Windows: 0x47910
     * @note[short] iOS: 0x34a34
     * @note[short] Android
     */
    void removeLights();

    /**
     * @note[short] MacOS (ARM): 0x45e34c
     * @note[short] MacOS (Intel): 0x502890
     * @note[short] Windows: 0x475e0
     * @note[short] iOS: 0x347ac
     * @note[short] Android
     */
    void showFlash();
    cocos2d::CCArray* m_lightStripArray;
    cocos2d::CCLayerColor* m_layerColor;
    bool m_dontFadeOut;
    cocos2d::CCNode* m_mainLayer;
    int m_layerColorZOrder;
};
