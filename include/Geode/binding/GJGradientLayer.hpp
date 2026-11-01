#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerGradient.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJGradientLayer : public cocos2d::CCLayerGradient {
public:
    static constexpr auto CLASS_NAME = "GJGradientLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGradientLayer, cocos2d::CCLayerGradient)

    /**
     * @note[short] Windows: 0x83700
     * @note[short] Android: Rebinded
     */
    virtual  ~GJGradientLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJGradientLayer();

    /**
     * @note[short] MacOS (ARM): 0x5baec
     * @note[short] MacOS (Intel): 0x116a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x28994c
     * @note[short] Android
     */
    static GJGradientLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x1179e4
     * @note[short] MacOS (Intel): 0x144790
     * @note[short] Windows: 0x350640
     * @note[short] iOS: 0x2a450c
     * @note[short] Android
     */
    virtual bool init();
    int m_baseColor;
    int m_detailColor;
    cocos2d::CCPoint m_gradientPosition;
    GradientTriggerObject* m_triggerObject;
    bool m_noScale;
    int m_blendingMode;
    int m_blendingLayer;
    int m_gradientID;
};
