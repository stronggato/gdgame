#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/vector.hpp>

class SetupSpawnPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSpawnPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSpawnPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5efee0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSpawnPopup();

    /**
     * @note[short] Windows: 0x5effc0
     * @note[short] iOS: 0x318e8
     * @note[short] Android
     */
    static SetupSpawnPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x27c040
     * @note[short] Windows: 0x5b5b70
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x221584
     * @note[short] MacOS (Intel): 0x27be00
     * @note[short] iOS: 0x11c87c
     * @note[short] Android
     */
    void addRemap(int oldID, int newID);

    /**
     * @note[short] Windows: 0xe4550
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x27b4e0
     * @note[short] Windows: 0x5f0f30
     * @note[short] iOS: 0x11c27c
     * @note[short] Android
     */
    void onAddRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x220d54
     * @note[short] MacOS (Intel): 0x107700
     * @note[short] Windows: 0x4ccf0
     * @note[short] iOS: 0x11c2d8
     * @note[short] Android
     */
    void onDeleteRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x220e3c
     * @note[short] MacOS (Intel): 0x27b630
     * @note[short] Windows: 0x5f1240
     * @note[short] iOS: 0x11c384
     * @note[short] Android
     */
    void onPasteRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7c4c
     * @note[short] MacOS (Intel): 0x27bf40
     * @note[short] Windows: 0x5f1b10
     * @note[short] iOS: 0x11c96c
     * @note[short] Android
     */
    void onSelectRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x221668
     * @note[short] MacOS (Intel): 0x27bef0
     * @note[short] Windows: 0x1bdec0
     * @note[short] iOS: 0x2c444
     * @note[short] Android
     */
    void queueUpdateButtons();

    /**
     * @note[short] MacOS (ARM): 0x220e7c
     * @note[short] MacOS (Intel): 0x27b680
     * @note[short] Windows: 0x429e10
     * @note[short] iOS: 0x11c3c4
     * @note[short] Android
     */
    void updateRemapButtons(float dt);
    bool m_isBusy;
    cocos2d::CCArray* m_remapButtons;
    std::vector<int> m_remapGroups;
    int m_remapOriginalID;
    int m_remapNewID;
};
