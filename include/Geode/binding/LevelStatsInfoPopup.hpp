#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class LevelStatsInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LevelStatsInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelStatsInfoPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a280
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelStatsInfoPopup();

    /**
     * @note[short] Android
     */
    static LevelStatsInfoPopup* create(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x425080
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    TodoReturn buildInfoText();

    /**
     * @note[short] Android
     */
    TodoReturn buildStatsText();

    /**
     * @note[short] Android
     */
    TodoReturn decodeProgress(std::string const& p0);

    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updatePage();
};
