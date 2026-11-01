#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class GJPFollowCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJPFollowCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPFollowCommandLayer, SetupTriggerPopup)

    /**
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPFollowCommandLayer();

    /**
     * @note[short] Android
     */
    static GJPFollowCommandLayer* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x608ab0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] Windows: 0x6090f0
     * @note[short] iOS: 0x45ba74
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x608f30
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x378830
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] iOS: 0x441210
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5aa800
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void sliderXModChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void sliderYModChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMaxSpeed();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMaxSpeedLabel();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2217c0
     * @note[short] Android
     */
    void updateOffsetLabel();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePlayerOffset();

    /**
     * @note[short] Android
     */
    void updateTargetGroupID();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] Android
     */
    void updateXMod();

    /**
     * @note[short] Android
     */
    void updateXModLabel();

    /**
     * @note[short] Android
     */
    void updateYMod();

    /**
     * @note[short] Android
     */
    void updateYModLabel();
};
