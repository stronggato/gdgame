#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class ThreadSearchPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "ThreadSearchPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadSearchPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xd23d0
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadSearchPopup();

    /**
     * @note[short] Android
     */
    static ThreadSearchPopup* create(ThreadViewPopup* p0);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xfb750
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xfac00
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn clampDayField();

    /**
     * @note[short] Android
     */
    TodoReturn fieldValue(CCTextInputNode* p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    bool init(ThreadViewPopup* p0);

    /**
     * @note[short] Android
     */
    void onGoToDate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);
};
