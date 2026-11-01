#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/OptionsObjectDelegate.hpp>

class StartPosBrowser : public FLAlertLayer, public TableViewCellDelegate, public OptionsObjectDelegate {
public:
    static constexpr auto CLASS_NAME = "StartPosBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StartPosBrowser, FLAlertLayer)

    /**
     * @note[short] Windows: 0x4d3320
     * @note[short] Android: Rebinded
     */
    virtual  ~StartPosBrowser();

    /**
     * @note[short] Android
     */
    static StartPosBrowser* create(cocos2d::CCArray* p0, int p1);

    /**
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x4d8d20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x4d8bd0
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] Windows: 0x4d8c90
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void stateChanged(OptionsObject* p0);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, int p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupList();

    /**
     * @note[short] Android
     */
    TodoReturn updatePageLabel();
};
