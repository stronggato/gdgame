#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/SelectSFXSortDelegate.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/SFXFolderPickerDelegate.hpp>
#include <Geode/mapping/set.hpp>

class SFXBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SelectSFXSortDelegate, public SetTextPopupDelegate, public FLAlertLayerProtocol, public SFXFolderPickerDelegate {
public:
    static constexpr auto CLASS_NAME = "SFXBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXBrowser, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SFXBrowser();

    /**
     * @note[short] MacOS (Intel): 0x8b11b0
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~SFXBrowser();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261f1c
     * @note[short] Android
     */
    static SFXBrowser* create(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3f85f4
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2dd274
     * @note[short] MacOS (Intel): 0x34ceb0
     * @note[short] Windows: 0x61ccb0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3a77b0
     * @note[short] Windows: 0x615980
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x3a7878
     * @note[short] MacOS (Intel): 0x430e20
     * @note[short] Windows: 0x615a20
     * @note[short] iOS: 0x1f3ce8
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (Intel): 0x6e8e70
     * @note[short] Windows: 0x61b4c0
     * @note[short] iOS: 0x46855c
     * @note[short] Android
     */
    virtual void sortSelectClosed(SelectSFXSortLayer* layer);

    /**
     * @note[short] Windows: 0x61a790
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* popup, std::string text);

    /**
     * @note[short] Windows: 0x61bbc0
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (Intel): 0x434d80
     * @note[short] Windows: 0x61c520
     * @note[short] iOS: 0x1f6870
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (Intel): 0x275fd0
     * @note[short] Windows: 0x61c530
     * @note[short] iOS: 0x1c00e0
     * @note[short] Android
     */
    virtual bool shouldSnapToSelected();

    /**
     * @note[short] Windows: 0x61b910
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] Windows: 0x6184c0
     * @note[short] Android
     */
    virtual void sfxFolderPicked(SFXFolderPickerPopup* p0, int p1, std::string const& p2);

    /**
     * @note[short] Windows: 0x619a80
     * @note[short] Android
     */
    virtual void sfxFoldersPicked(SFXFolderPickerPopup* p0, std::set<int> const& p1);

    /**
     * @note[short] Windows: 0x61ad90
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x61ba00
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x61c4d0
     * @note[short] Android
     */
    virtual TodoReturn getSelectedCellCustomIdx();

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual TodoReturn allowsCustomSFXActions();

    /**
     * @note[short] Windows: 0x619160
     * @note[short] Android
     */
    virtual bool isCustomIDSelected(int p0);

    /**
     * @note[short] Windows: 0x61c4e0
     * @note[short] Android
     */
    virtual TodoReturn inCustomSFXTree();

    /**
     * @note[short] Windows: 0x61c500
     * @note[short] Android
     */
    virtual TodoReturn showsSFXInfoButton();

    /**
     * @note[short] Android
     */
    TodoReturn currentListScrollY();

    /**
     * @note[short] Android
     */
    TodoReturn executeBatchDelete();

    /**
     * @note[short] Android
     */
    TodoReturn fitFolderPath();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x465590
     * @note[short] Android
     */
    bool init(int p0, int p1);

    /**
     * @note[short] Android
     */
    void onBatchDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onChangelog(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClearSearchText(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x11d484
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a5934
     * @note[short] MacOS (Intel): 0x42df00
     * @note[short] Windows: 0x1aec50
     * @note[short] iOS: 0x1f23a8
     * @note[short] Android
     */
    void onCredits(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onExitFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onExportFile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onImportFile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onImportSetup(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMoveToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNewFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a4a6c
     * @note[short] MacOS (Intel): 0x42dce0
     * @note[short] iOS: 0x1f186c
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReplaceSetup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f08c4
     * @note[short] iOS: 0x498070
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShareSetup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a4b90
     * @note[short] MacOS (Intel): 0x42ddf0
     * @note[short] Windows: 0x196220
     * @note[short] iOS: 0x1f1990
     * @note[short] Android
     */
    void onSorting(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a4bd4
     * @note[short] MacOS (Intel): 0x42de40
     * @note[short] iOS: 0x1f19d0
     * @note[short] Android
     */
    void onToggleCompactMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleView(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a4b30
     * @note[short] MacOS (Intel): 0x42dd80
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1f1930
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshCustomList();

    /**
     * @note[short] Android
     */
    TodoReturn refreshLevelIDList(SFXSearchResult* p0);

    /**
     * @note[short] Android
     */
    TodoReturn restoreListScroll(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn searchSettingsChanged();

    /**
     * @note[short] Android
     */
    void setupList(SFXSearchResult* result);

    /**
     * @note[short] Android
     */
    void setupSFXBrowser();

    /**
     * @note[short] Android
     */
    TodoReturn switchToView(AudioViewType p0);

    /**
     * @note[short] Android
     */
    void trySetupSFXBrowser();

    /**
     * @note[short] MacOS (ARM): 0x3a8790
     * @note[short] MacOS (Intel): 0x431f70
     * @note[short] Windows: 0x61c610
     * @note[short] iOS: 0x1f4820
     * @note[short] Android
     */
    void updatePageLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectionUI();

    /**
     * @note[short] Android
     */
    TodoReturn updateShareItem();

    /**
     * @note[short] Android
     */
    TodoReturn updateViewItems();
    SFXSearchResult* m_searchResult;
    cocos2d::CCArray* m_sfxObjects;
    GJCommentListLayer* m_listLayer;
    cocos2d::CCLabelBMFont* m_nameLabel;
    cocos2d::CCLabelBMFont* m_pathLabel;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_searchLabel;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_backButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemSpriteExtra* m_clearSearchButton;
    LoadingCircleSprite* m_circleSprite;
    int m_sfxID;
    int m_libraryVersion;
    int m_cellAmount;
    bool m_gettingURL;
    bool m_selectedCell;
    bool m_snapToSelected;
    bool m_compactMode;
    AudioSortType m_sortType;
    SFXBrowserDelegate* m_delegate;
    bool m_autoUpdating;
};
