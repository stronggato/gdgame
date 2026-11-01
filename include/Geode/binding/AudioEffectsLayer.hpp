#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>

class AudioEffectsLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "AudioEffectsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AudioEffectsLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AudioEffectsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x46b400
     * @note[short] Android: Rebinded
     */
     ~AudioEffectsLayer();

    /**
     * @note[short] MacOS (ARM): 0x40e1e0
     * @note[short] MacOS (Intel): 0x4a7f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x46b4b0
     * @note[short] Android
     */
    static AudioEffectsLayer* create(std::string audioString);

    /**
     * @note[short] MacOS (ARM): 0x40ec4c
     * @note[short] MacOS (Intel): 0x4a8940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39aeb8
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x40eb24
     * @note[short] MacOS (Intel): 0x4a8820
     * @note[short] Windows: 0x9a7e0
     * @note[short] iOS: 0x46bad8
     * @note[short] Android
     */
    virtual void updateTweenAction(float value, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x40e8f8
     * @note[short] MacOS (Intel): 0x4a8620
     * @note[short] Windows: 0x9a5b0
     * @note[short] iOS: 0x46b8c4
     * @note[short] Android
     */
    void audioStep(float dt);

    /**
     * @note[short] MacOS (ARM): 0x40ec50
     * @note[short] MacOS (Intel): 0x4a8950
     * @note[short] Android
     */
    cocos2d::CCSprite* getBGSquare();

    /**
     * @note[short] MacOS (ARM): 0x40eb18
     * @note[short] MacOS (Intel): 0x4a8810
     * @note[short] Windows: 0x9a960
     * @note[short] iOS: 0x46bacc
     * @note[short] Android
     */
    void goingDown();

    /**
     * @note[short] MacOS (ARM): 0x40e318
     * @note[short] MacOS (Intel): 0x4a8070
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xa3d7c
     * @note[short] Android
     */
    bool init(std::string audioString);

    /**
     * @note[short] MacOS (ARM): 0x40e8b0
     * @note[short] MacOS (Intel): 0x4a85c0
     * @note[short] Windows: 0x9a550
     * @note[short] iOS: 0x46b87c
     * @note[short] Android
     */
    void resetAudioVars();

    /**
     * @note[short] MacOS (ARM): 0x40e9b4
     * @note[short] MacOS (Intel): 0x4a86f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x46b980
     * @note[short] Android
     */
    void triggerEffect(float pulse);
    cocos2d::CCSpriteBatchNode* m_batchNode;
    cocos2d::CCArray* m_masterTicks;
    cocos2d::CCArray* m_tickArray;
    float m_timeElapsed;
    float m_audioPulseMod;
    bool m_goingDown;
    float m_audioScale;
    bool m_audioRainUnused;
};
