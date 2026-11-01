#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/vector.hpp>

class ReviewChoiceSheet : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "ReviewChoiceSheet";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ReviewChoiceSheet, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~ReviewChoiceSheet();

    /**
     * @note[short] Android
     */
    static ReviewChoiceSheet* create(ReviewChoiceDelegate* p0, int p1, char const* p2, std::string const& p3, std::vector<std::string> const& p4, std::vector<char const*> const& p5, bool p6, char const* p7);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xadf20
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    bool init(ReviewChoiceDelegate* p0, int p1, char const* p2, std::string const& p3, std::vector<std::string> const& p4, std::vector<char const*> const& p5, bool p6, char const* p7);

    /**
     * @note[short] Android
     */
    void onChoice(cocos2d::CCObject* sender);
};
