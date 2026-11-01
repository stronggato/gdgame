#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class DailyRecallUnlockPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DailyRecallUnlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DailyRecallUnlockPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a280
     * @note[short] Android: Rebinded
     */
    virtual  ~DailyRecallUnlockPopup();

    /**
     * @note[short] Android
     */
    static DailyRecallUnlockPopup* create(FLAlertLayerProtocol* p0, GJGameLevel* p1);

    /**
     * @note[short] Android
     */
    bool init(FLAlertLayerProtocol* p0, GJGameLevel* p1);
};
