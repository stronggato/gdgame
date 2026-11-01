#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>

class ColorAction : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "ColorAction";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorAction, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x35f980
     * @note[short] Android: Rebinded
     */
    virtual  ~ColorAction();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x17cf8
     * @note[short] Android: Out of line
     */
     ColorAction();

    /**
     * @note[short] MacOS (ARM): 0x26351c
     * @note[short] MacOS (Intel): 0x2c3c40
     * @note[short] Windows: 0x3608c0
     * @note[short] iOS: 0xd8f8
     * @note[short] Android
     */
    static ColorAction* create();

    /**
     * @note[short] MacOS (ARM): 0x2636cc
     * @note[short] MacOS (Intel): 0x2c3e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B color, bool blending, int playerColor);

    /**
     * @note[short] MacOS (ARM): 0x263794
     * @note[short] MacOS (Intel): 0x2c3f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending);

    /**
     * @note[short] MacOS (ARM): 0x2635dc
     * @note[short] MacOS (Intel): 0x2c3d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd918
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending, int playerColor, float fromOpacity, float toOpacity);

    /**
     * @note[short] MacOS (ARM): 0x2662ac
     * @note[short] MacOS (Intel): 0x2c6870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ColorAction* getCopy();

    /**
     * @note[short] MacOS (ARM): 0x263874
     * @note[short] MacOS (Intel): 0x2c4030
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending, int playerColor, float fromOpacity, float toOpacity);

    /**
     * @note[short] MacOS (ARM): 0x2639b0
     * @note[short] MacOS (Intel): 0x2c41a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xdac4
     * @note[short] Android
     */
    bool isInUse();

    /**
     * @note[short] MacOS (ARM): 0x263ad4
     * @note[short] MacOS (Intel): 0x2c42b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xdba8
     * @note[short] Android
     */
    void loadFromState(CAState& state);

    /**
     * @note[short] MacOS (ARM): 0x2639a4
     * @note[short] MacOS (Intel): 0x2c4180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xdab8
     * @note[short] Android
     */
    void resetAction();

    /**
     * @note[short] MacOS (ARM): 0x263a48
     * @note[short] MacOS (Intel): 0x2c4210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xdb1c
     * @note[short] Android
     */
    void saveToState(CAState& state);

    /**
     * @note[short] MacOS (ARM): 0x265934
     * @note[short] MacOS (Intel): 0x2c6180
     * @note[short] Windows: 0x283290
     * @note[short] iOS: 0xe3b8
     * @note[short] Android
     */
    void setupFromMap(std::map<std::string, std::string>& setup);

    /**
     * @note[short] MacOS (ARM): 0x2658b8
     * @note[short] MacOS (Intel): 0x2c6110
     * @note[short] Windows: 0x361290
     * @note[short] iOS: 0xe33c
     * @note[short] Android
     */
    void setupFromString(std::string setup);

    /**
     * @note[short] MacOS (ARM): 0x2638a4
     * @note[short] MacOS (Intel): 0x2c4070
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xd9c4
     * @note[short] Android
     */
    void step(float dt);

    /**
     * @note[short] MacOS (ARM): 0x263a20
     * @note[short] MacOS (Intel): 0x2c41f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateCustomColor(cocos2d::ccColor3B color1, cocos2d::ccColor3B color2);
    bool m_stepFinished;
    bool m_paused;
    cocos2d::ccColor3B m_color;
    float m_currentOpacity;
    float m_deltaTime;
    cocos2d::ccColor3B m_fromColor;
    cocos2d::ccColor3B m_toColor;
    float m_duration;
    bool m_blending;
    int m_playerColor;
    int m_colorID;
    float m_fromOpacity;
    float m_toOpacity;
    cocos2d::ccHSVValue m_copyHSV;
    int m_copyID;
    bool m_copyColorCalculated;
    bool m_copyOpacity;
    bool m_copyColorLoop;
    int m_uniqueID;
    int m_controlID;
    bool m_legacyHSV;
    ColorActionSprite* m_colorSprite;
    InheritanceNode* m_inheritanceNode;
    float m_actionDelay;
    float m_stepInterval;
};
