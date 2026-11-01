#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/EditorSoundListDelegate.hpp>
#include <Geode/binding/EditorSoundConfigCellDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>

class EditorSoundBrowserLayer : public SetupTriggerPopup, public EditorSoundListDelegate, public EditorSoundConfigCellDelegate, public TableViewCellDelegate, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorSoundBrowserLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundBrowserLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x18c2a0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundBrowserLayer();

    /**
     * @note[short] Android
     */
    static EditorSoundBrowserLayer* create(std::string p0, EditorSoundsLayer* p1);

    /**
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x18ee10
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] Windows: 0x18d820
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x18eaa0
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, std::string p1);

    /**
     * @note[short] Windows: 0x18ee20
     * @note[short] Android
     */
    virtual void loadEditorSoundsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Windows: 0x18eed0
     * @note[short] Android
     */
    virtual void loadEditorSoundsFailed(char const* p0);

    /**
     * @note[short] Windows: 0x18ef80
     * @note[short] Android
     */
    virtual void onConfigViewClicked(GJEditorSoundConfig* p0);

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] Windows: 0x98c90
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] Android
     */
    TodoReturn clearCells();

    /**
     * @note[short] Android
     */
    bool init(std::string p0, EditorSoundsLayer* p1);

    /**
     * @note[short] Android
     */
    TodoReturn layoutCells(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Android
     */
    TodoReturn loadCurrentPage(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn onConfigCopiedToMyLists(GJEditorSoundConfig* p0);

    /**
     * @note[short] Android
     */
    TodoReturn onConfigListChanged();

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSaveActive(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setMode(EditorSoundBrowseMode p0);

    /**
     * @note[short] Android
     */
    TodoReturn showLoading(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateFooterButtonVisibility();

    /**
     * @note[short] Android
     */
    TodoReturn updatePageLabel();
};
