#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class SecretNumberLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretNumberLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretNumberLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x573e10
     * @note[short] Android: Rebinded
     */
    virtual  ~SecretNumberLayer();

    /**
     * @note[short] MacOS (Intel): 0x499cf0
     * @note[short] Windows: 0x57b7f0
     * @note[short] iOS: 0x3a7390
     * @note[short] Android
     */
    static SecretNumberLayer* create();

    /**
     * @note[short] MacOS (Intel): 0x49bd00
     * @note[short] Windows: 0x426e0
     * @note[short] iOS: 0x3a8654
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x401b78
     * @note[short] MacOS (Intel): 0x499da0
     * @note[short] Windows: 0x15ecc0
     * @note[short] iOS: 0x37a620
     * @note[short] Android
     */
    void playNumberEffect(int secretNumber);
};
