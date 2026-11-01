#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>

class SelectFontLayer2 : public FLAlertLayer, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "SelectFontLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectFontLayer2, FLAlertLayer)

    /**
     * @note[short] Windows: 0x589b70
     * @note[short] Android: Rebinded
     */
    virtual  ~SelectFontLayer2();

    /**
     * @note[short] Android
     */
    static SelectFontLayer2* create(LevelEditorLayer* p0);

    /**
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x58a580
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] Windows: 0x58a5e0
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] Android
     */
    TodoReturn loadPreviewSheet();

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onSelectFont(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn unloadPreviewSheet();
};
