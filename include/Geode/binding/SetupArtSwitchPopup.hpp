#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/SelectArtDelegate.hpp>

class SetupArtSwitchPopup : public SetupTriggerPopup, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupArtSwitchPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupArtSwitchPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupArtSwitchPopup();

    /**
     * @note[short] Windows: 0x5d87f0
     * @note[short] Android
     */
    static SetupArtSwitchPopup* create(ArtTriggerGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x4feac8
     * @note[short] MacOS (Intel): 0x5b1110
     * @note[short] Windows: 0x605110
     * @note[short] iOS: 0x48f5fc
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4fe49c
     * @note[short] MacOS (Intel): 0x5b0ad0
     * @note[short] iOS: 0x48f0e4
     * @note[short] Android
     */
    bool init(ArtTriggerGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x4fea80
     * @note[short] MacOS (Intel): 0x5b10c0
     * @note[short] Windows: 0x6050b0
     * @note[short] iOS: 0x48f5b4
     * @note[short] Android
     */
    void onArt(cocos2d::CCObject* sender);
    SelectArtType m_artType;
    cocos2d::CCSprite* m_artSprite;
};
