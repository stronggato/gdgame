#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class CommentOptionsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CommentOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommentOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xbd7e0
     * @note[short] Android: Rebinded
     */
    virtual  ~CommentOptionsPopup();

    /**
     * @note[short] Android
     */
    static CommentOptionsPopup* create(GJComment* p0, bool p1);

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
     * @note[short] Android
     */
    bool init(GJComment* p0, bool p1);

    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReport(cocos2d::CCObject* sender);
};
