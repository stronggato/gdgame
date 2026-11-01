#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJShaderState.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ShaderLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ShaderLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ShaderLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): 0x3bafd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShaderLayer();

    /**
     * @note[short] MacOS (Intel): 0x3b3380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3095b4
     * @note[short] Android: Rebinded
     */
     ~ShaderLayer();

    /**
     * @note[short] MacOS (Intel): 0x3b3580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShaderLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x33a10c
     * @note[short] MacOS (Intel): 0x3b35e0
     * @note[short] Windows: 0x61eb80
     * @note[short] iOS: 0x3096cc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x33b8e0
     * @note[short] MacOS (Intel): 0x3b4e50
     * @note[short] Windows: 0x61fa20
     * @note[short] iOS: 0x30aa1c
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3408c4
     * @note[short] MacOS (Intel): 0x3bab90
     * @note[short] Windows: 0x625d70
     * @note[short] iOS: 0x30ed04
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x33bc4c
     * @note[short] MacOS (Intel): 0x3b5220
     * @note[short] Windows: 0x61ffa0
     * @note[short] iOS: 0x30ac90
     * @note[short] Android
     */
    cocos2d::CCPoint objectPosToShaderPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x340620
     * @note[short] MacOS (Intel): 0x3ba880
     * @note[short] Windows: 0x4ccf0
     * @note[short] iOS: 0x30ec30
     * @note[short] Android
     */
    void performCalculations();

    /**
     * @note[short] MacOS (ARM): 0x33faec
     * @note[short] MacOS (Intel): 0x3b9bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e10c
     * @note[short] Android
     */
    void preBulgeShader();

    /**
     * @note[short] MacOS (ARM): 0x33e824
     * @note[short] MacOS (Intel): 0x3b86c0
     * @note[short] iOS: 0x30cf24
     * @note[short] Android
     */
    void preChromaticGlitchShader();

    /**
     * @note[short] MacOS (ARM): 0x33e598
     * @note[short] MacOS (Intel): 0x3b83f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30cc9c
     * @note[short] Android
     */
    void preChromaticShader();

    /**
     * @note[short] MacOS (ARM): 0x340234
     * @note[short] MacOS (Intel): 0x3ba370
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e848
     * @note[short] Android
     */
    void preColorChangeShader();

    /**
     * @note[short] MacOS (ARM): 0x33bae0
     * @note[short] MacOS (Intel): 0x3b5050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30ab24
     * @note[short] Android
     */
    void preCommonShader();

    /**
     * @note[short] MacOS (ARM): 0x33e0c4
     * @note[short] MacOS (Intel): 0x3b7e40
     * @note[short] iOS: 0x30c898
     * @note[short] Android
     */
    void preGlitchShader();

    /**
     * @note[short] MacOS (Intel): 0x3b9e70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preGrayscaleShader();

    /**
     * @note[short] MacOS (ARM): 0x340088
     * @note[short] MacOS (Intel): 0x3ba1c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e6a0
     * @note[short] Android
     */
    void preHueShiftShader();

    /**
     * @note[short] MacOS (ARM): 0x33ffbc
     * @note[short] MacOS (Intel): 0x3ba0d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e5d4
     * @note[short] Android
     */
    void preInvertColorShader();

    /**
     * @note[short] MacOS (ARM): 0x33f208
     * @note[short] MacOS (Intel): 0x3b91e0
     * @note[short] iOS: 0x30d870
     * @note[short] Android
     */
    void preLensCircleShader();

    /**
     * @note[short] MacOS (ARM): 0x33f74c
     * @note[short] MacOS (Intel): 0x3b9760
     * @note[short] Android
     */
    void preMotionBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x33edd8
     * @note[short] MacOS (Intel): 0x3b8d60
     * @note[short] iOS: 0x30d440
     * @note[short] Android
     */
    cocos2d::CCPoint prepareTargetContainer();

    /**
     * @note[short] MacOS (ARM): 0x33fd1c
     * @note[short] MacOS (Intel): 0x3b9de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e33c
     * @note[short] Android
     */
    void prePinchShader();

    /**
     * @note[short] MacOS (ARM): 0x33ebf4
     * @note[short] MacOS (Intel): 0x3b8b00
     * @note[short] Windows: 0x6234b0
     * @note[short] iOS: 0x30d2dc
     * @note[short] Android
     */
    void prePixelateShader();

    /**
     * @note[short] MacOS (Intel): 0x3b94b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preRadialBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x33fe94
     * @note[short] MacOS (Intel): 0x3b9f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e4a8
     * @note[short] Android
     */
    void preSepiaShader();

    /**
     * @note[short] Android
     */
    void preShockLineShader();

    /**
     * @note[short] Android
     */
    void preShockWaveShader();

    /**
     * @note[short] iOS: 0x517ff8
     * @note[short] Android
     */
    void preSplitScreenShader();

    /**
     * @note[short] MacOS (ARM): 0x340c1c
     * @note[short] MacOS (Intel): 0x3baf40
     * @note[short] Windows: 0x6268f0
     * @note[short] iOS: 0x30ef00
     * @note[short] Android
     */
    bool resetAllShaders();

    /**
     * @note[short] MacOS (ARM): 0x33f06c
     * @note[short] MacOS (Intel): 0x3b9050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30d6d4
     * @note[short] Android
     */
    void resetTargetContainer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupBulgeShader();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupChromaticGlitchUniforms();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupChromaticUniforms();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupColorChangeShader();

    /**
     * @note[short] Android
     */
    void setupCommonUniforms();

    /**
     * @note[short] MacOS (ARM): 0x33b008
     * @note[short] MacOS (Intel): 0x3b4580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30a1c4
     * @note[short] Android
     */
    void setupGlitchUniforms();

    /**
     * @note[short] MacOS (ARM): 0x33b58c
     * @note[short] MacOS (Intel): 0x3b4b00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30a748
     * @note[short] Android
     */
    void setupGrayscaleShader();

    /**
     * @note[short] MacOS (ARM): 0x33b694
     * @note[short] MacOS (Intel): 0x3b4c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30a7d0
     * @note[short] Android
     */
    void setupHueShiftShader();

    /**
     * @note[short] MacOS (ARM): 0x33b654
     * @note[short] MacOS (Intel): 0x3b4bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupInvertColorShader();

    /**
     * @note[short] MacOS (ARM): 0x33b254
     * @note[short] MacOS (Intel): 0x3b47d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30a410
     * @note[short] Android
     */
    void setupLensCircleShader();

    /**
     * @note[short] MacOS (ARM): 0x33b504
     * @note[short] MacOS (Intel): 0x3b4a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30a6c0
     * @note[short] Android
     */
    void setupMotionBlurShader();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupPinchShader();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupRadialBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x33b614
     * @note[short] MacOS (Intel): 0x3b4b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupSepiaShader();

    /**
     * @note[short] MacOS (ARM): 0x33a1cc
     * @note[short] MacOS (Intel): 0x3b36a0
     * @note[short] iOS: 0x30976c
     * @note[short] Android
     */
    void setupShader(bool reset);

    /**
     * @note[short] Android
     */
    void setupShockLineUniforms();

    /**
     * @note[short] Android
     */
    void setupShockWaveUniforms();

    /**
     * @note[short] Android
     */
    void setupSplitScreenShader();

    /**
     * @note[short] MacOS (ARM): 0x33aa88
     * @note[short] MacOS (Intel): 0x3b4000
     * @note[short] Windows: 0x61f9b0
     * @note[short] iOS: 0x309c44
     * @note[short] Android
     */
    void toggleAntiAlias(bool antiAlias);

    /**
     * @note[short] MacOS (ARM): 0x33fa20
     * @note[short] MacOS (Intel): 0x3b9ae0
     * @note[short] iOS: 0x30e040
     * @note[short] Android
     */
    void triggerBulge(float fadeTime, float bulge, float screenOffsetX, float screenOffsetY, float radius, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33e6a4
     * @note[short] MacOS (Intel): 0x3b8530
     * @note[short] Windows: 0x317d40
     * @note[short] iOS: 0x30cda8
     * @note[short] Android
     */
    void triggerChromaticGlitch(bool enable, float duration, float speed, float strength, float rgbOffset, float lineThickness, float lineStrength, float segmentHeight, int easingType, float easingRate, bool relative, bool relativePos);

    /**
     * @note[short] MacOS (ARM): 0x33e520
     * @note[short] MacOS (Intel): 0x3b8390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30cc24
     * @note[short] Android
     */
    void triggerChromaticX(float fadeTime, float targetX, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33e55c
     * @note[short] MacOS (Intel): 0x3b83c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30cc60
     * @note[short] Android
     */
    void triggerChromaticY(float fadeTime, float targetY, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x340138
     * @note[short] MacOS (Intel): 0x3ba280
     * @note[short] iOS: 0x30e74c
     * @note[short] Android
     */
    void triggerColorChange(float fadeTime, float cr, float cg, float cb, float br, float bg, float bb, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x33e034
     * @note[short] MacOS (Intel): 0x3b7da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30c80c
     * @note[short] Android
     */
    void triggerGlitch(float fadeTime, float strength, float speed, float sliceHeight, float maxSliceXOff, float maxColXOff, float maxColYOff, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33fd84
     * @note[short] MacOS (Intel): 0x3b9e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e398
     * @note[short] Android
     */
    void triggerGrayscale(float fadeTime, float target, bool useLuminance, int tintChannel, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x340070
     * @note[short] MacOS (Intel): 0x3ba1a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e688
     * @note[short] Android
     */
    void triggerHueShift(float fadeTime, float degrees, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x33feec
     * @note[short] MacOS (Intel): 0x3b9ff0
     * @note[short] Windows: 0x624ad0
     * @note[short] iOS: 0x30e500
     * @note[short] Android
     */
    void triggerInvertColor(float fadeTime, float target, float r, float g, float b, bool editRGB, bool tweenRGB, bool clampRGB, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x33f0f8
     * @note[short] MacOS (Intel): 0x3b90d0
     * @note[short] Windows: 0x623a00
     * @note[short] iOS: 0x30d760
     * @note[short] Android
     */
    void triggerLensCircle(float fadeTime, float size, float fade, float strength, int targetID, int tintChannel, float screenOffsetX, float screenOffsetY, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33f5a4
     * @note[short] MacOS (Intel): 0x3b95c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30dbdc
     * @note[short] Android
     */
    void triggerMotionBlurX(float fadeTime, float targetX, float intensity, float fade, int targetID, float followEase, bool dualDir, int refChannel, int easingType, float easingRate, bool relative, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x33f678
     * @note[short] MacOS (Intel): 0x3b9690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30dcb0
     * @note[short] Android
     */
    void triggerMotionBlurY(float fadeTime, float targetY, float intensity, float fade, int targetID, float followEase, bool dualDir, int refChannel, int easingType, float easingRate, bool relative, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x33fb5c
     * @note[short] MacOS (Intel): 0x3b9c20
     * @note[short] iOS: 0x30e17c
     * @note[short] Android
     */
    void triggerPinchX(float fadeTime, float targetX, float screenOffsetX, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33fc3c
     * @note[short] MacOS (Intel): 0x3b9d00
     * @note[short] iOS: 0x30e25c
     * @note[short] Android
     */
    void triggerPinchY(float fadeTime, float targetY, float screenOffsetY, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33eb1c
     * @note[short] MacOS (Intel): 0x3b8a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30d204
     * @note[short] Android
     */
    void triggerPixelateX(float fadeTime, float targetX, bool snapGrid, bool hardEdges, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33eb88
     * @note[short] MacOS (Intel): 0x3b8a90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30d270
     * @note[short] Android
     */
    void triggerPixelateY(float fadeTime, float targetY, bool snapGrid, bool hardEdges, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33f398
     * @note[short] MacOS (Intel): 0x3b93b0
     * @note[short] iOS: 0x30d9f4
     * @note[short] Android
     */
    void triggerRadialBlur(float fadeTime, float size, float intensity, float fade, int refChannel, float screenOffsetX, float screenOffsetY, bool target, int targetID, int easingType, float easingRate, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x33fe7c
     * @note[short] MacOS (Intel): 0x3b9f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e490
     * @note[short] Android
     */
    void triggerSepia(float fadeTime, float target, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x33daa4
     * @note[short] MacOS (Intel): 0x3b76b0
     * @note[short] iOS: 0x30c2ac
     * @note[short] Android
     */
    void triggerShockLine(float speed, float thickness, bool rotate, bool flip, bool dual, bool invert, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, float screenOffset, int targetID, bool target, bool follow, bool relative, float maxSize, bool animate, float fadeTime, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x33cdd0
     * @note[short] MacOS (Intel): 0x3b68c0
     * @note[short] iOS: 0x30b9f4
     * @note[short] Android
     */
    void triggerShockWave(float speed, float thickness, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, bool invert, float inner, float screenOffsetX, float screenOffsetY, int targetID, bool target, bool follow, bool relative, float outer, float maxSize, bool animate, float fadeTime, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x3403ac
     * @note[short] MacOS (Intel): 0x3ba560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e9bc
     * @note[short] Android
     */
    void triggerSplitScreenCols(float fadeTime, float targetX, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x340394
     * @note[short] MacOS (Intel): 0x3ba540
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e9a4
     * @note[short] Android
     */
    void triggerSplitScreenRows(float fadeTime, float targetY, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x340b30
     * @note[short] MacOS (Intel): 0x3bae30
     * @note[short] Windows: 0x626760
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tweenValue(float fromValue, float toValue, int action, float duration, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x33d004
     * @note[short] MacOS (Intel): 0x3b6b40
     * @note[short] Windows: 0x1a1190
     * @note[short] iOS: 0x30bc28
     * @note[short] Android
     */
    void tweenValueAuto(float value, int action, float duration, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x10464
     * @note[short] MacOS (Intel): 0x3b5370
     * @note[short] iOS: 0x30ad28
     * @note[short] Android
     */
    void updateEffectOffsets(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x33f9b8
     * @note[short] MacOS (Intel): 0x3b9a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30dfd8
     * @note[short] Android
     */
    void updateMotionBlurSpeedX(float x, float dt);

    /**
     * @note[short] MacOS (ARM): 0x33f9ec
     * @note[short] MacOS (Intel): 0x3b9a90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30e00c
     * @note[short] Android
     */
    void updateMotionBlurSpeedY(float y, float dt);

    /**
     * @note[short] MacOS (ARM): 0x33dc70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30c478
     * @note[short] Android
     */
    void updateShockLineCenter(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x33d6f8
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30bf2c
     * @note[short] Android
     */
    void updateShockWaveCenter(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x33a9fc
     * @note[short] MacOS (Intel): 0x3b3f80
     * @note[short] Windows: 0x626870
     * @note[short] iOS: 0x309bd0
     * @note[short] Android
     */
    bool updateZLayer(int minLayer, int maxLayer, bool noParticles);
    GJShaderState m_state;
    bool m_timesyncShaderActions;
    cocos2d::CCGLProgram* m_shader;
    cocos2d::CCRenderTexture* m_renderTexture;
    cocos2d::CCSprite* m_sprite;
    bool m_antiAlias;
    bool m_configuredAntiAlias;
    void* m_unk3d4;
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCPoint m_savedCameraPosition;
    float m_savedCameraRotation;
    float m_shockWaveTimeMult;
    float m_scaleFactor;
    float m_aspectRatio;
    cocos2d::CCSize m_screenSize;
    cocos2d::CCSize m_textureContentSize;
    cocos2d::CCSize m_targetTextureSize;
    cocos2d::CCSize m_targetTextureSizeExtra;
    int m_textureScaleUniform;
    int m_textureScaleInvUniform;
    int m_screenAspectUniform;
    int m_screenAspectINVUniform;
    int m_shaderPositionUniform;
    int m_blurRefColorUniform;
    int m_blurUseRefUniform;
    int m_blurIntensityUniform;
    int m_blurOnlyEmptyUniform;
    int m_shockWaveTimeUniform;
    int m_shockWaveTime1Uniform;
    int m_shockWaveTime2Uniform;
    int m_shockWaveTime3Uniform;
    int m_shockWaveTime4Uniform;
    int m_shockWaveStrengthUniform;
    int m_shockWaveWavesUniform;
    int m_shockWaveCenterUniform;
    int m_shockWaveInvertUniform;
    int m_shockWaveMinSizeUniform;
    int m_shockWaveMaxSizeUniform;
    int m_shockWaveMaxDistValUniform;
    float m_shockWaveTime1;
    float m_shockWaveTime2;
    float m_shockWaveTime3;
    float m_shockWaveTime4;
    float m_shockWaveMaxDistVal;
    float m_shockWaveMinSize;
    float m_shockWaveMaxSize;
    bool m_shockWaveUnk46c;
    int m_shockLineTimeUniform;
    int m_shockLineTime1Uniform;
    int m_shockLineTime2Uniform;
    int m_shockLineTime3Uniform;
    int m_shockLineTime4Uniform;
    int m_shockLineAxisUniform;
    int m_shockLineDirectionUniform;
    int m_shockLineDualUniform;
    int m_shockLineWavesUniform;
    int m_shockLineStrengthUniform;
    int m_shockLineCenterUniform;
    int m_shockLineMaxDistValUniform;
    float m_shockLineTime1;
    float m_shockLineTime2;
    float m_shockLineTime3;
    float m_shockLineTime4;
    float m_shockLineMaxDistVal;
    int m_unk4b4;
    int m_unk4b8;
    int m_unk4bc;
    int m_glitchBotUniform;
    int m_glitchTopUniform;
    int m_glitchXOffsetUniform;
    int m_glitchColOffsetUniform;
    int m_glitchRndUniform;
    int m_chromaticXOffUniform;
    int m_chromaticYOffUniform;
    int m_cGRGBOffsetUniform;
    int m_cGYOffsetUniform;
    int m_cGTimeUniform;
    int m_cGStrengthUniform;
    int m_cGHeightUniform;
    int m_cGLineThickUniform;
    int m_cGLineStrengthUniform;
    int m_lensCircleOriginUniform;
    int m_lensCircleStartUniform;
    int m_lensCircleEndUniform;
    int m_lensCircleStrengthUniform;
    int m_lensCircleTintUniform;
    int m_lensCircleAdditiveUniform;
    int m_radialBlurCenterUniform;
    int m_radialBlurValueUniform;
    int m_blurFadeUniform;
    int m_motionBlurValueUniform;
    int m_motionBlurMultUniform;
    int m_motionBlurDualUniform;
    int m_bulgeValueUniform;
    int m_bulgeValue2Uniform;
    int m_bulgeOriginUniform;
    int m_bulgeRadiusUniform;
    int m_pinchValueUniform;
    int m_pinchCenterPosUniform;
    int m_pinchCalcUniform;
    int m_pinchRadiusUniform;
    int m_grayscaleValueUniform;
    int m_grayscaleTintUniform;
    int m_grayscaleUseLumUniform;
    int m_sepiaValueUniform;
    int m_invertColorValueUniform;
    int m_hueShiftCosAUniform;
    int m_hueShiftSinAUniform;
    int m_colorChangeCUniform;
    int m_colorChangeBUniform;
    int m_rowmodUniform;
    int m_colmodUniform;
    int m_rowmodCalcUniform;
    int m_colmodCalcUniform;
    int m_splitXStartUniform;
    int m_splitXRangeUniform;
    int m_splitXRangeMultUniform;
    int m_splitYStartUniform;
    int m_splitYRangeUniform;
    int m_splitYRangeMultUniform;
};
