#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CreateGuidelinesLayer.hpp>

class FindBPMLayer : public CreateGuidelinesLayer {
public:
    static constexpr auto CLASS_NAME = "FindBPMLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindBPMLayer, CreateGuidelinesLayer)

    /**
     * @note[short] Windows: 0x1317b0
     * @note[short] Android: Rebinded
     */
    virtual  ~FindBPMLayer();

    /**
     * @note[short] Android
     */
    static FindBPMLayer* create(int songID);

    /**
     * @note[short] MacOS (ARM): 0x469f7c
     * @note[short] MacOS (Intel): 0x50ea70
     * @note[short] Windows: 0x133e30
     * @note[short] iOS: 0x86664
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x469de8
     * @note[short] MacOS (Intel): 0x50e8e0
     * @note[short] Windows: 0x133c70
     * @note[short] iOS: 0x864f0
     * @note[short] Android
     */
    virtual void playMusic();

    /**
     * @note[short] MacOS (ARM): 0x469e84
     * @note[short] MacOS (Intel): 0x50e970
     * @note[short] Windows: 0x133d40
     * @note[short] iOS: 0x8657c
     * @note[short] Android
     */
    virtual void registerTouch();

    /**
     * @note[short] MacOS (ARM): 0x469f78
     * @note[short] MacOS (Intel): 0x50ea60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86660
     * @note[short] Android
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x469d08
     * @note[short] MacOS (Intel): 0x50e7d0
     * @note[short] Windows: 0x133b70
     * @note[short] iOS: 0x8644c
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x469d40
     * @note[short] MacOS (Intel): 0x50e810
     * @note[short] Windows: 0x133bb0
     * @note[short] iOS: 0x86484
     * @note[short] Android
     */
    virtual void recordingDidStop();

    /**
     * @note[short] MacOS (ARM): 0x469dac
     * @note[short] MacOS (Intel): 0x50e880
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void calculateBPM();

    /**
     * @note[short] MacOS (ARM): 0x469bf0
     * @note[short] MacOS (Intel): 0x50e6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86334
     * @note[short] Android
     */
    bool init(int songID);
    int m_songID;
    cocos2d::CCLabelBMFont* m_bpmLabel;
    float m_startOffset;
    int m_beats;
    int m_beatsPerMinute;
};
