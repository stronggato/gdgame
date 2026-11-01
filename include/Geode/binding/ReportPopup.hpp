#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/vector.hpp>

class ReportPopup : public SetupTriggerPopup, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "ReportPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ReportPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xbd720
     * @note[short] Android: Rebinded
     */
    virtual  ~ReportPopup();

    /**
     * @note[short] Android
     */
    static ReportPopup* create(ReportPopupConfig const& p0);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x99df0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc0f80
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn buildReasonRows(std::vector<int> const& p0, cocos2d::CCMenu* p1, cocos2d::CCNode* p2, cocos2d::CCObject* p3, cocos2d::SEL_MenuHandler p4, float p5, float p6, float p7, float p8, float p9, float p10, std::vector<CCMenuItemToggler*>& p11, int p12, float p13);

    /**
     * @note[short] Android
     */
    TodoReturn contentTypeColor(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn contentTypeName(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn createForComment(GJComment* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createForFriendRequest(GJFriendRequest* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createForLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createForList(GJLevelList* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createForMessage(GJUserMessage* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createForSoundConfig(GJEditorSoundConfig* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createForThread(GJMessageThread* p0, GJThreadMessage* p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn createForUser(GJUserScore* p0);

    /**
     * @note[short] Android
     */
    bool init(ReportPopupConfig const& p0);

    /**
     * @note[short] Android
     */
    void onReasonToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn reasonIndicesForTextModeration();

    /**
     * @note[short] Android
     */
    TodoReturn reasonIndicesForType(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn reasonIndicesForUploadModeration();

    /**
     * @note[short] Android
     */
    TodoReturn reasonLabel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn reasonShortLabel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn selectedReasons();

    /**
     * @note[short] Android
     */
    TodoReturn surfaceName(int p0);
};
