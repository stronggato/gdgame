#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class CreateGuidelinesLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CreateGuidelinesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateGuidelinesLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CreateGuidelinesLayer();

    /**
     * @note[short] Windows: 0x1317b0
     * @note[short] iOS: 0x42a2c
     * @note[short] Android: Rebinded
     */
     ~CreateGuidelinesLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x77228
     * @note[short] Android
     */
    static CreateGuidelinesLayer* create(CustomSongDelegate* delegate, AudioGuidelinesType type);

    /**
     * @note[short] MacOS (ARM): 0x46965c
     * @note[short] MacOS (Intel): 0x50e110
     * @note[short] Windows: 0x1334e0
     * @note[short] iOS: 0x85e3c
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x4698b8
     * @note[short] MacOS (Intel): 0x50e380
     * @note[short] Windows: 0x1337b0
     * @note[short] iOS: 0x8603c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4699e8
     * @note[short] MacOS (Intel): 0x50e470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x860ec
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4699f0
     * @note[short] MacOS (Intel): 0x50e490
     * @note[short] Windows: 0x133830
     * @note[short] iOS: 0x860f4
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x469ad0
     * @note[short] MacOS (Intel): 0x50e550
     * @note[short] Windows: 0x83d80
     * @note[short] iOS: 0x861c4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x469aec
     * @note[short] MacOS (Intel): 0x50e590
     * @note[short] Windows: 0x133890
     * @note[short] iOS: 0x861e0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x469834
     * @note[short] MacOS (Intel): 0x50e2e0
     * @note[short] Windows: 0x133730
     * @note[short] iOS: 0x85fb8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x469b24
     * @note[short] MacOS (Intel): 0x50e5d0
     * @note[short] Windows: 0x1338e0
     * @note[short] iOS: 0x86218
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x469728
     * @note[short] MacOS (Intel): 0x50e1e0
     * @note[short] Windows: 0x133650
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x4697f8
     * @note[short] MacOS (Intel): 0x50e2b0
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x85f7c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x469b68
     * @note[short] MacOS (Intel): 0x50e620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8625c
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x468c30
     * @note[short] MacOS (Intel): 0x50d7a0
     * @note[short] Windows: 0x132df0
     * @note[short] iOS: 0x85700
     * @note[short] Android
     */
    virtual void playMusic();

    /**
     * @note[short] MacOS (ARM): 0x469870
     * @note[short] MacOS (Intel): 0x50e330
     * @note[short] Windows: 0x133750
     * @note[short] iOS: 0x85ff4
     * @note[short] Android
     */
    virtual void registerTouch();

    /**
     * @note[short] MacOS (ARM): 0x46966c
     * @note[short] MacOS (Intel): 0x50e130
     * @note[short] Windows: 0x133500
     * @note[short] iOS: 0x85e4c
     * @note[short] Android
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x468b1c
     * @note[short] MacOS (Intel): 0x50d690
     * @note[short] Windows: 0x132c50
     * @note[short] iOS: 0x855f0
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x468cd0
     * @note[short] MacOS (Intel): 0x50d830
     * @note[short] Windows: 0x132f60
     * @note[short] iOS: 0x85790
     * @note[short] Android
     */
    virtual void recordingDidStop();

    /**
     * @note[short] MacOS (ARM): 0x468a74
     * @note[short] MacOS (Intel): 0x50d600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8553c
     * @note[short] Android
     */
    void doClearGuidelines();

    /**
     * @note[short] MacOS (ARM): 0x469018
     * @note[short] MacOS (Intel): 0x50db80
     * @note[short] Windows: 0x133180
     * @note[short] iOS: 0x85a88
     * @note[short] Android
     */
    std::string getMergedRecordString(std::string str1, std::string str2);

    /**
     * @note[short] MacOS (ARM): 0x4679fc
     * @note[short] MacOS (Intel): 0x50c4c0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x8455c
     * @note[short] Android
     */
    bool init(CustomSongDelegate* delegate, AudioGuidelinesType type);

    /**
     * @note[short] MacOS (ARM): 0x46889c
     * @note[short] MacOS (Intel): 0x50d410
     * @note[short] iOS: 0x85388
     * @note[short] Android
     */
    void onClearGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46896c
     * @note[short] MacOS (Intel): 0x8950
     * @note[short] iOS: 0x85434
     * @note[short] Android
     */
    void onStop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4689cc
     * @note[short] MacOS (Intel): 0x50d540
     * @note[short] Windows: 0x133400
     * @note[short] iOS: 0x85494
     * @note[short] Android
     */
    void toggleItems(bool visible);
    CustomSongDelegate* m_delegate;
    CCTextInputNode* m_offsetInput;
    cocos2d::CCArray* m_nonRecordingObjects;
    cocos2d::CCArray* m_recordingObjects;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCSprite* m_circleSprite;
    float m_elapsed;
    bool m_recording;
    bool m_unk2b5;
    int m_guidelines;
    std::string m_guidelineString;
};
