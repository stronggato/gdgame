#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/UploadActionPopup.hpp>
#include <Geode/binding/GJAccountSettingsDelegate.hpp>
#include <Geode/binding/UserInfoDelegate.hpp>

class ParentalPrivacyPopup : public UploadActionPopup, public GJAccountSettingsDelegate, public UserInfoDelegate {
public:
    static constexpr auto CLASS_NAME = "ParentalPrivacyPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParentalPrivacyPopup, UploadActionPopup)

    /**
     * @note[short] Windows: 0x4c7a10
     * @note[short] Android: Rebinded
     */
    virtual  ~ParentalPrivacyPopup();

    /**
     * @note[short] Android
     */
    static ParentalPrivacyPopup* create(bool p0);

    /**
     * @note[short] Windows: 0x4d23c0
     * @note[short] Android
     */
    virtual void getUserInfoFinished(GJUserScore* p0);

    /**
     * @note[short] Windows: 0x4d2480
     * @note[short] Android
     */
    virtual void getUserInfoFailed(int p0);

    /**
     * @note[short] Windows: 0x4d2530
     * @note[short] Android
     */
    virtual void updateSettingsFinished();

    /**
     * @note[short] Windows: 0x4d2cc0
     * @note[short] Android
     */
    virtual void updateSettingsFailed();

    /**
     * @note[short] Android
     */
    TodoReturn checkPending();

    /**
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn snapshotIsForOtherAccount();

    /**
     * @note[short] Android
     */
    TodoReturn startWithScore(GJUserScore* p0);
};
