#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/NumberInputLayer.hpp>

class ParentalGateLayer : public NumberInputLayer {
public:
    static constexpr auto CLASS_NAME = "ParentalGateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParentalGateLayer, NumberInputLayer)

    /**
     * @note[short] Windows: 0x49dfb0
     * @note[short] Android: Rebinded
     */
    virtual  ~ParentalGateLayer();

    /**
     * @note[short] Android
     */
    static ParentalGateLayer* create();

    /**
     * @note[short] Windows: 0x4d0ab0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x4d0cf0
     * @note[short] Android
     */
    virtual void onDone(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn generateChallenge();
};
