#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJValueTween.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/unordered_map.hpp>

class GJShaderState {
public:
    static constexpr auto CLASS_NAME = "GJShaderState";

    /**
     * @note[short] MacOS (ARM): 0x340d80
     * @note[short] MacOS (Intel): 0x90460
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x19fa88
     * @note[short] Android: Rebinded
     */
     GJShaderState();

    /**
     * @note[short] MacOS (ARM): 0x339da8
     * @note[short] MacOS (Intel): 0x3b3170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x309490
     * @note[short] Android
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): 0x3398fc
     * @note[short] MacOS (Intel): 0x3b2a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopTweenAction(int action);

    /**
     * @note[short] MacOS (ARM): 0x339c54
     * @note[short] MacOS (Intel): 0x3b2f80
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x309404
     * @note[short] Android
     */
    void timesyncShaderAction(int action);

    /**
     * @note[short] MacOS (ARM): 0x339c1c
     * @note[short] MacOS (Intel): 0x3b2f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3093cc
     * @note[short] Android
     */
    void timesyncShaderActions();

    /**
     * @note[short] MacOS (ARM): 0x339814
     * @note[short] MacOS (Intel): 0x3b2990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e7308
     * @note[short] Android
     */
    void tweenValue(float fromValue, float toValue, int action, float duration, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0xcbdd8
     * @note[short] MacOS (Intel): 0x3b2aa0
     * @note[short] Windows: 0x61e6d0
     * @note[short] iOS: 0x27249c
     * @note[short] Android
     */
    void updateTweenAction(float value, int actionID);

    /**
     * @note[short] MacOS (ARM): 0x339b7c
     * @note[short] MacOS (Intel): 0x3b2ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x309354
     * @note[short] Android
     */
    void updateTweenActions(float tweenValue);
    std::unordered_map<int, GJValueTween> m_tweenActions;
    std::unordered_map<int, double> m_tweenTimes;
    double m_time;
    double m_prevTime;
    double m_startTime;
    float m_textureScaleX;
    float m_textureScaleY;
    cocos2d::ccColor3B m_blurRefColor;
    float m_blurIntensity;
    int m_blurRefChannel;
    bool m_blurOnlyEmpty;
    float m_shockWaveStartTime;
    float m_shockWaveTime;
    float m_shockWaveTimeOffset;
    float m_shockWaveSpeed;
    float m_shockWaveThickness;
    float m_shockWaveStrength;
    float m_shockWaveWidth;
    float m_shockWaveFadeIn;
    float m_shockWaveFadeOut;
    bool m_shockWaveInvert;
    float m_shockWaveInner;
    float m_shockWaveOuter;
    int m_shockWaveTargetID;
    bool m_shockWaveTarget;
    bool m_shockWaveCenterMoving;
    bool m_shockWaveRelative;
    float m_shockWaveMaxSize;
    cocos2d::CCPoint m_shockWaveScreenOffset;
    bool m_shockWaveCenterDirty;
    cocos2d::CCPoint m_shockWaveCenter;
    double m_shockLineStartTime;
    float m_shockLineTime;
    float m_shockLineTimeOffset;
    float m_shockLineSpeed;
    bool m_shockLineAxis;
    bool m_shockLineDirection;
    bool m_shockLineDual;
    bool m_shockLineInvert;
    float m_shockLineScreenOffset;
    float m_shockLineStrength;
    float m_shockLineWidth;
    float m_shockLineFadeIn;
    float m_shockLineFadeOut;
    float m_shockLineThickness;
    int m_shockLineTargetID;
    bool m_shockLineTarget;
    bool m_shockLineCenterMoving;
    bool m_shockLineRelative;
    float m_shockLineMaxSize;
    cocos2d::CCPoint m_shockLineScreenOffset2;
    bool m_shockLineCenterDirty;
    cocos2d::CCPoint m_shockLineCenter;
    float m_glitchStrength;
    float m_glitchSpeed;
    float m_glitchSliceHeight;
    float m_glitchMaxSliceXOff;
    float m_glitchMaxColXOff;
    float m_glitchMaxColYOff;
    bool m_glitchRelative;
    float m_chromaticTargetX;
    float m_chromaticTargetY;
    bool m_chromaticRelative;
    float m_cGStartTime;
    float m_cGTime;
    float m_cGSpeed;
    float m_cGRGBOffset;
    float m_cGStrength;
    float m_cGSegmentHeight;
    float m_cGLineThickness;
    float m_cGLineStrength;
    bool m_cGEnable;
    bool m_cGActive;
    bool m_cGRelative;
    bool m_cGRelativePos;
    float m_pixelateTargetX;
    float m_pixelateTargetY;
    bool m_pixelateSnapGrid;
    bool m_pixelatePixelating;
    bool m_pixelateRelative;
    bool m_pixelateHardEdges;
    float m_lensCircleSize;
    float m_lensCircleFade;
    float m_lensCircleStrength;
    int m_lensCircleTargetID;
    int m_lensCircleTintChannel;
    bool m_lensCircleRelative;
    bool m_lensCircleAdditive;
    cocos2d::ccColor3B m_lensCircleTint;
    cocos2d::CCPoint m_lensCircleCenter;
    cocos2d::CCPoint m_lensCircleScreenOffset;
    float m_radialBlurSize;
    float m_radialBlurFade;
    bool m_radialBlurTarget;
    int m_radialBlurTargetID;
    cocos2d::CCPoint m_radialBlurCenter;
    cocos2d::CCPoint m_radialBlurScreenOffset;
    float m_motionBlurTargetX;
    float m_motionBlurTargetY;
    float m_motionBlurSpeedX;
    float m_motionBlurSpeedY;
    float m_motionBlurFollowEaseX;
    float m_motionBlurFollowEaseY;
    int m_motionBlurTargetIDX;
    int m_motionBlurTargetIDY;
    bool m_motionBlurDual;
    bool m_motionBlurRelative;
    float m_bulgeValue;
    bool m_bulgeRelative;
    int m_bulgeTargetID;
    float m_bulgeRadius;
    cocos2d::CCPoint m_bulgeCenter;
    cocos2d::CCPoint m_bulgeScreenOffset;
    float m_pinchTargetX;
    float m_pinchTargetY;
    bool m_pinchTargetEnabledX;
    bool m_pinchTargetEnabledY;
    int m_pinchTargetIDX;
    int m_pinchTargetIDY;
    cocos2d::CCPoint m_pinchCenter;
    cocos2d::CCPoint m_pinchScreenOffset;
    bool m_pinchRelative;
    float m_pinchRadius;
    cocos2d::CCPoint m_pinchModifier;
    float m_grayscaleValue;
    bool m_grayscaleUseLum;
    int m_grayscaleTintChannel;
    cocos2d::ccColor3B m_grayscaleTint;
    float m_sepiaValue;
    float m_invertColorEditRGB;
    float m_invertColorR;
    float m_invertColorG;
    float m_invertColorB;
    bool m_invertColorClampRGB;
    float m_hueShiftDegrees;
    float m_colorChangeCR;
    float m_colorChangeCG;
    float m_colorChangeCB;
    float m_colorChangeBR;
    float m_colorChangeBG;
    float m_colorChangeBB;
    float m_splitTargetRows;
    float m_splitTargetCols;
    bool m_splitActive;
    int m_minBlendingLayer;
    int m_maxBlendingLayer;
    bool m_zLayerDirty;
    bool m_noPlayerParticles;
    bool m_usesShaders;
};
