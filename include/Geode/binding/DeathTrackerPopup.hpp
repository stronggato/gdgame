#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/VirtualRowSource.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/vector.hpp>

class DeathTrackerPopup : public FLAlertLayer, public VirtualRowSource, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "DeathTrackerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DeathTrackerPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x102750
     * @note[short] Android: Rebinded
     */
    virtual  ~DeathTrackerPopup();

    /**
     * @note[short] Android
     */
    static DeathTrackerPopup* create(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x10d560
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x10d720
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x10d7d0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x10d860
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x10d520
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x10d530
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] Windows: 0xc2b30
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x10d260
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] Windows: 0x10b920
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] Windows: 0x10b950
     * @note[short] Android
     */
    virtual int virtualRowHeight(int p0);

    /**
     * @note[short] Windows: 0x10b970
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] Android
     */
    TodoReturn addRow(cocos2d::CCNode* p0, std::string const& p1, float p2, cocos2d::ccColor3B p3, float p4);

    /**
     * @note[short] Android
     */
    TodoReturn buildAttemptLine();

    /**
     * @note[short] Android
     */
    TodoReturn buildHistory();

    /**
     * @note[short] Android
     */
    TodoReturn buildList();

    /**
     * @note[short] Android
     */
    TodoReturn buildStatRow(std::vector<DTStatSeg> const& p0, cocos2d::CCNode* p1);

    /**
     * @note[short] Android
     */
    TodoReturn countsForScope(std::vector<int>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn dtScrollKey();

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
    void onJumpCurrent(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onJumpSession(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onJumpSummary(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextSession(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPanelButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevSession(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn parseGlobal();

    /**
     * @note[short] Android
     */
    TodoReturn parseSessions();

    /**
     * @note[short] Android
     */
    TodoReturn refreshGlobal();

    /**
     * @note[short] Android
     */
    TodoReturn refreshView();

    /**
     * @note[short] Android
     */
    void setView(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePanel();
};
