#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetIDPopup.hpp>

class SetLevelOrderPopup : public SetIDPopup {
public:
    static constexpr auto CLASS_NAME = "SetLevelOrderPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetLevelOrderPopup, SetIDPopup)

    /**
     * @note[short] Windows: 0x3a2880
     * @note[short] Android: Rebinded
     */
    virtual  ~SetLevelOrderPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e4e64
     * @note[short] Android: Out of line
     */
     SetLevelOrderPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetLevelOrderPopup* create(int levelID, int order, int amount);

    /**
     * @note[short] MacOS (ARM): 0x2dc60c
     * @note[short] MacOS (Intel): 0x34c200
     * @note[short] Windows: 0x42df10
     * @note[short] iOS: 0x2e2454
     * @note[short] Android
     */
    bool init(int levelID, int order, int amount);

    /**
     * @note[short] MacOS (ARM): 0x2dc938
     * @note[short] MacOS (Intel): 0x34c4f0
     * @note[short] Windows: 0x42e200
     * @note[short] Android
     */
    void onOrderButton(cocos2d::CCObject* sender);
    int m_levelID;
};
