#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/DropdownListPopupOwner.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class Dropdown : public cocos2d::CCNode, public DropdownListPopupOwner {
public:
    static constexpr auto CLASS_NAME = "Dropdown";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(Dropdown, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x11f0f0
     * @note[short] Android: Rebinded
     */
    virtual  ~Dropdown();

    /**
     * @note[short] Android
     */
    static Dropdown* create(FLAlertLayer* p0, cocos2d::CCMenu* p1, std::vector<std::string> const& p2, int p3, float p4, DropdownDelegate* p5, int p6);

    /**
     * @note[short] Windows: 0x11f700
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Windows: 0x11f760
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] Windows: 0x11fe30
     * @note[short] Android
     */
    virtual void dropdownListPopupClosed(DropdownListPopup* p0);

    /**
     * @note[short] Android
     */
    TodoReturn closeList();

    /**
     * @note[short] Android
     */
    bool init(FLAlertLayer* p0, cocos2d::CCMenu* p1, std::vector<std::string> const& p2, int p3, float p4, DropdownDelegate* p5, int p6);

    /**
     * @note[short] Android
     */
    void onRowSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn openList();

    /**
     * @note[short] Android
     */
    TodoReturn refreshValueLabel();

    /**
     * @note[short] Android
     */
    void setSelectedIndex(int p0);
};
