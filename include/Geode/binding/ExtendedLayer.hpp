#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ExtendedLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ExtendedLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExtendedLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x40920
     * @note[short] Android: Rebinded
     */
    virtual  ~ExtendedLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ExtendedLayer();

    /**
     * @note[short] MacOS (Intel): 0x38e080
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ExtendedLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x31a8c4
     * @note[short] MacOS (Intel): 0x390790
     * @note[short] Windows: 0x426e0
     * @note[short] iOS: 0x155800
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x31a8c8
     * @note[short] MacOS (Intel): 0x3907a0
     * @note[short] Windows: 0x42700
     * @note[short] iOS: 0x155804
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);
    BoomScrollLayerDelegate* m_delegate;
};
