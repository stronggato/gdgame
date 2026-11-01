#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>

class CCSpriteWithHue : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpriteWithHue";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpriteWithHue, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x4c570
     * @note[short] Android: Rebinded
     */
    virtual  ~CCSpriteWithHue();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpriteWithHue();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* create(std::string const& file);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* create(std::string const& file, cocos2d::CCRect const& rect);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x5d9c88
     * @note[short] MacOS (Intel): 0x6c1190
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2366b0
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithSpriteFrameName(std::string const& frameName);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x5da57c
     * @note[short] MacOS (Intel): 0x6c1b50
     * @note[short] Windows: 0x4ccf0
     * @note[short] iOS: 0x236cb0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5d9f30
     * @note[short] MacOS (Intel): 0x6c1410
     * @note[short] Windows: 0x4c710
     * @note[short] iOS: 0x2368e0
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x5d9fac
     * @note[short] MacOS (Intel): 0x6c1480
     * @note[short] Windows: 0x4c770
     * @note[short] iOS: 0x23695c
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect);

    /**
     * @note[short] MacOS (ARM): 0x5d9cbc
     * @note[short] MacOS (Intel): 0x6c11d0
     * @note[short] Windows: 0x4c6b0
     * @note[short] iOS: 0x2366e4
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x5d9fbc
     * @note[short] MacOS (Intel): 0x6c14a0
     * @note[short] Windows: 0x4c780
     * @note[short] iOS: 0x23696c
     * @note[short] Android
     */
    virtual bool initWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x5d97a8
     * @note[short] MacOS (Intel): 0x6c0d20
     * @note[short] Windows: 0x4c520
     * @note[short] Android
     */
    virtual std::string getShaderName();

    /**
     * @note[short] MacOS (ARM): 0x5da100
     * @note[short] MacOS (Intel): 0x6c15e0
     * @note[short] Windows: 0x4ca30
     * @note[short] iOS: 0x236a78
     * @note[short] Android
     */
    virtual const char* shaderBody();

    /**
     * @note[short] MacOS (ARM): 0x5da118
     * @note[short] MacOS (Intel): 0x6c1600
     * @note[short] Windows: 0x4ca40
     * @note[short] iOS: 0x236a84
     * @note[short] Android
     */
    virtual void updateColor();

    /**
     * @note[short] MacOS (ARM): 0x5da4dc
     * @note[short] MacOS (Intel): 0x6c1a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getAlpha();

    /**
     * @note[short] MacOS (ARM): 0x5da4f4
     * @note[short] MacOS (Intel): 0x6c1aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getHue();

    /**
     * @note[short] MacOS (ARM): 0x5da07c
     * @note[short] MacOS (Intel): 0x6c1570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2369f4
     * @note[short] Android
     */
    void getUniformLocations();

    /**
     * @note[short] MacOS (ARM): 0x5d9d14
     * @note[short] MacOS (Intel): 0x6c1230
     * @note[short] iOS: 0x236728
     * @note[short] Android
     */
    void initShader();

    /**
     * @note[short] MacOS (ARM): 0x5da56c
     * @note[short] MacOS (Intel): 0x2ee470
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setCustomLuminance(float r, float g, float b);

    /**
     * @note[short] MacOS (ARM): 0x5da54c
     * @note[short] MacOS (Intel): 0x6c1b00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x236c94
     * @note[short] Android
     */
    void setEvenLuminance(float luminance);

    /**
     * @note[short] MacOS (ARM): 0x5da04c
     * @note[short] MacOS (Intel): 0x6c1520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setHue(float hue);

    /**
     * @note[short] MacOS (ARM): 0x5da4fc
     * @note[short] MacOS (Intel): 0x6c1ab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x236c50
     * @note[short] Android
     */
    void setHueDegrees(float degrees);

    /**
     * @note[short] MacOS (ARM): 0x5da054
     * @note[short] MacOS (Intel): 0x6c1540
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2369d0
     * @note[short] Android
     */
    void setLuminance(float luminance);

    /**
     * @note[short] MacOS (ARM): 0x5d9d00
     * @note[short] MacOS (Intel): 0x6c1210
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupDefaultSettings();

    /**
     * @note[short] MacOS (ARM): 0x5da13c
     * @note[short] MacOS (Intel): 0x6c1620
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x236aa8
     * @note[short] Android
     */
    void updateColorMatrix();

    /**
     * @note[short] MacOS (ARM): 0x5da020
     * @note[short] MacOS (Intel): 0x6c14f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateHue(float unused);
    float m_hue;
    std::array<float, 3> m_luminance;
    std::array<std::array<float, 3>, 3> m_colorMatrix;
    int m_uHueLoc;
    int m_uAlphaLoc;
    int m_uLumLoc;
};
