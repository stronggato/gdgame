#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class DeathStatsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "DeathStatsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DeathStatsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x11cdf0
     * @note[short] Android: Rebinded
     */
    virtual  ~DeathStatsPopup();

    /**
     * @note[short] Android
     */
    static DeathStatsPopup* create(LevelEditorLayer* p0);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x11e5f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] Android
     */
    void onClearFetched(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClearLocal(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFetch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn pollFetch(float p0);

    /**
     * @note[short] Android
     */
    void setStatus(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn showResult();
};
