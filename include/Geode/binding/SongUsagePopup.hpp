#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/SongUsageDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class SongUsagePopup : public FLAlertLayer, public SongUsageDelegate {
public:
    static constexpr auto CLASS_NAME = "SongUsagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongUsagePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x100860
     * @note[short] Android: Rebinded
     */
    virtual  ~SongUsagePopup();

    /**
     * @note[short] Android
     */
    static SongUsagePopup* create(int p0, std::string const& p1, std::string const& p2);

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x1011d0
     * @note[short] Android
     */
    virtual void songUsageFinished(int p0, std::string p1);

    /**
     * @note[short] Windows: 0x101c50
     * @note[short] Android
     */
    virtual void songUsageFailed(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn buildStatRow(std::string const* p0, std::string const* p1, int p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn buildUsageGrid(std::vector<SongUsageEntry> const& p0);

    /**
     * @note[short] Android
     */
    bool init(int p0, std::string const& p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn layoutPopup(float p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn showStatus(char const* p0);
};
