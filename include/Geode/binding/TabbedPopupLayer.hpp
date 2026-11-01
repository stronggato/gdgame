#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class TabbedPopupLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "TabbedPopupLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TabbedPopupLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x19b720
     * @note[short] Android: Rebinded
     */
    virtual  ~TabbedPopupLayer();

    /**
     * @note[short] Windows: 0x669290
     * @note[short] Android
     */
    virtual void pageChanged();

    /**
     * @note[short] Windows: 0x668e10
     * @note[short] Android
     */
    virtual TodoReturn showTab(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn addCloseButton();

    /**
     * @note[short] Android
     */
    TodoReturn addTab(std::string const& p0, char const* p1);

    /**
     * @note[short] Android
     */
    TodoReturn beginTab(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn createTabButtons();

    /**
     * @note[short] Android
     */
    TodoReturn createTabButtons(float p0, float p1, float p2, float p3, float p4, float p5);

    /**
     * @note[short] Android
     */
    TodoReturn ensurePopupPage(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getPopupPage(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn offsetToNextPage(int p0);

    /**
     * @note[short] Android
     */
    void onTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTabPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn pageForButtonCount(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn refreshPageButtons();

    /**
     * @note[short] Android
     */
    TodoReturn refreshTabButtons(char const* p0, char const* p1);
};
