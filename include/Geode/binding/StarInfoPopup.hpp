#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class StarInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "StarInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StarInfoPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a280
     * @note[short] Android: Rebinded
     */
    virtual  ~StarInfoPopup();

    /**
     * @note[short] Windows: 0x5581f0
     * @note[short] Android
     */
    static StarInfoPopup* create(int autos, int easies, int normals, int hards, int harders, int insanes, int dailies, int gauntlets, int maps, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x7954c4
     * @note[short] MacOS (Intel): 0x8a28a0
     * @note[short] iOS: 0x22d6d8
     * @note[short] Android
     */
    static StarInfoPopup* createFromString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x795724
     * @note[short] MacOS (Intel): 0x8a2b30
     * @note[short] iOS: 0x22d888
     * @note[short] Android
     */
    static StarInfoPopup* createFromStringMoons(std::string str);

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x51273c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x799680
     * @note[short] MacOS (Intel): 0x8a6b30
     * @note[short] iOS: 0x2302d8
     * @note[short] Android
     */
    bool init(int autos, int easies, int normals, int hards, int harders, int insanes, int dailies, int gauntlets, int maps, bool platformer);

    /**
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x512700
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
