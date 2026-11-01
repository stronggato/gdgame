#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCameraEdgePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraEdgePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraEdgePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5a6430
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCameraEdgePopup();

    /**
     * @note[short] Android
     */
    static SetupCameraEdgePopup* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x582540
     * @note[short] MacOS (Intel): 0x6471d0
     * @note[short] Windows: 0x5a7090
     * @note[short] iOS: 0x2d579c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x582778
     * @note[short] MacOS (Intel): 0x647470
     * @note[short] Windows: 0x5a7550
     * @note[short] iOS: 0x2d5974
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5a72f0
     * @note[short] iOS: 0x2d58f4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] iOS: 0x4a6cc4
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5823d4
     * @note[short] MacOS (Intel): 0x647000
     * @note[short] Windows: 0xc8640
     * @note[short] iOS: 0x2d567c
     * @note[short] Android
     */
    void onCameraEdge(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5824c4
     * @note[short] MacOS (Intel): 0x647130
     * @note[short] Windows: 0x5a72c0
     * @note[short] iOS: 0x2d576c
     * @note[short] Android
     */
    void onUnlockEdge(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x58261c
     * @note[short] MacOS (Intel): 0x6472c0
     * @note[short] iOS: 0x2d5870
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] iOS: 0x2d55ec
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_targetIDInput;
    int m_targetID;
    int m_edgeDirection;
    cocos2d::CCArray* m_directionToggles;
};
