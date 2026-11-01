#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/SliderDelegate.hpp>
#include <Geode/binding/SelectSFXSortDelegate.hpp>

class MusicBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public FLAlertLayerProtocol, public SliderDelegate, public SelectSFXSortDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MusicBrowser, FLAlertLayer)

    /**
     * @note[short] Windows: 0x476cf0
     * @note[short] Android: Rebinded
     */
    virtual  ~MusicBrowser();

    /**
     * @note[short] MacOS (ARM): 0x98928
     * @note[short] Windows: 0x476f50
     * @note[short] iOS: 0x3f4334
     * @note[short] Android
     */
    static MusicBrowser* create(int songID, GJSongType songType);

    /**
     * @note[short] MacOS (ARM): 0x5fb03c
     * @note[short] MacOS (Intel): 0x6e7350
     * @note[short] Windows: 0x478900
     * @note[short] iOS: 0x467114
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x428670
     * @note[short] MacOS (Intel): 0x312820
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x1ca7d8
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x47b160
     * @note[short] iOS: 0x4686a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x479670
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x5fc060
     * @note[short] MacOS (Intel): 0x6e84f0
     * @note[short] Windows: 0x479710
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x5fb470
     * @note[short] MacOS (Intel): 0x6e77b0
     * @note[short] Windows: 0x478f70
     * @note[short] iOS: 0x467544
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* slider);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* popup, std::string text);

    /**
     * @note[short] Windows: 0x47a0e0
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] Windows: 0x47a280
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x5fc990
     * @note[short] MacOS (Intel): 0x6e8f10
     * @note[short] Windows: 0x47ada0
     * @note[short] iOS: 0x4685bc
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Windows: 0x47a590
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x47ad50
     * @note[short] Android
     */
    virtual void sortSelectClosed(SelectSFXSortLayer* p0);

    /**
     * @note[short] MacOS (Intel): 0x42baa0
     * @note[short] Windows: 0xf5b70
     * @note[short] iOS: 0x4c04e0
     * @note[short] Android
     */
    bool init(int songID, GJSongType songType);

    /**
     * @note[short] Android
     */
    void onArtistFilters(cocos2d::CCObject* sender);

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
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5fa788
     * @note[short] MacOS (Intel): 0x6e6aa0
     * @note[short] Windows: 0x47a290
     * @note[short] iOS: 0x4668cc
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5fb184
     * @note[short] MacOS (Intel): 0x6e74a0
     * @note[short] Windows: 0xdb6c0
     * @note[short] iOS: 0x46725c
     * @note[short] Android
     */
    void onPlaybackControl(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSorting(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x23e170
     * @note[short] Android
     */
    void onTagFilters(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleView(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshLevelIDList();

    /**
     * @note[short] MacOS (ARM): 0x5fb990
     * @note[short] MacOS (Intel): 0x6e7d30
     * @note[short] Windows: 0x173be0
     * @note[short] iOS: 0x467948
     * @note[short] Android
     */
    void setupList(MusicSearchResult* result);

    /**
     * @note[short] MacOS (ARM): 0x503bec
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupMusicBrowser();

    /**
     * @note[short] Android
     */
    void setupSongControls();

    /**
     * @note[short] MacOS (ARM): 0x5fb17c
     * @note[short] MacOS (Intel): 0x6e7490
     * @note[short] iOS: 0x467254
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a6458
     * @note[short] MacOS (Intel): 0x42f740
     * @note[short] iOS: 0x1f2c78
     * @note[short] Android
     */
    void trySetupMusicBrowser();

    /**
     * @note[short] MacOS (ARM): 0x5fc22c
     * @note[short] MacOS (Intel): 0x6e86f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x467fc4
     * @note[short] Android
     */
    void updatePageLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateSongControlLayout();

    /**
     * @note[short] Android
     */
    TodoReturn updateViewItems();
    GJSongType m_songType;
    MusicSearchResult* m_searchResult;
    GJCommentListLayer* m_listLayer;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCLabelBMFont* m_pageLabel;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemSpriteExtra* m_clearSearchButton;
    CCMenuItemSpriteExtra* m_tagFilterButton;
    CCMenuItemSpriteExtra* m_artistFilterButton;
    LoadingCircleSprite* m_circleSprite;
    int m_songID;
    int m_libraryVersion;
    bool m_gettingURL;
    bool m_selectedCell;
    MusicBrowserDelegate* m_delegate;
    Slider* m_playSlider;
    cocos2d::CCLabelBMFont* m_playLabel;
    CCMenuItemSpriteExtra* m_playButton;
    bool m_autoUpdating;
};
