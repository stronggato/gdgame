#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/ShareCommentDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class LevelBrowserLayer : public cocos2d::CCLayerColor, public LevelManagerDelegate, public FLAlertLayerProtocol, public SetIDPopupDelegate, public SetTextPopupDelegate, public TableViewCellDelegate, public ShareCommentDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelBrowserLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelBrowserLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelBrowserLayer();

    /**
     * @note[short] MacOS (Intel): 0x47fd10
     * @note[short] Windows: 0x3df260
     * @note[short] Android: Rebinded
     */
     ~LevelBrowserLayer();

    /**
     * @note[short] MacOS (ARM): 0x19077c
     * @note[short] MacOS (Intel): 0x1dcac0
     * @note[short] Windows: 0xd82f0
     * @note[short] Android
     */
    static LevelBrowserLayer* create(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x190730
     * @note[short] MacOS (Intel): 0x1dca80
     * @note[short] Windows: 0x3df480
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3f1734
     * @note[short] MacOS (Intel): 0x4880c0
     * @note[short] Windows: 0x3e7fa0
     * @note[short] iOS: 0x498c1c
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x3f1d84
     * @note[short] MacOS (Intel): 0x4886a0
     * @note[short] Windows: 0x350940
     * @note[short] iOS: 0x499110
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0x3f1e54
     * @note[short] MacOS (Intel): 0x488780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4991e4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f1e74
     * @note[short] MacOS (Intel): 0x4887e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x499204
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f1e64
     * @note[short] MacOS (Intel): 0x4887a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4991f4
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f1e6c
     * @note[short] MacOS (Intel): 0x4887c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4991fc
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f1d88
     * @note[short] MacOS (Intel): 0x4886b0
     * @note[short] Windows: 0x3e8b10
     * @note[short] iOS: 0x499114
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3f0494
     * @note[short] MacOS (Intel): 0x486d80
     * @note[short] Windows: 0x3e4220
     * @note[short] iOS: 0x497d08
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f04b8
     * @note[short] MacOS (Intel): 0x486dc0
     * @note[short] Windows: 0x3e4240
     * @note[short] iOS: 0x497d2c
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3ef960
     * @note[short] MacOS (Intel): 0x4861f0
     * @note[short] Windows: 0x3e3550
     * @note[short] iOS: 0x497620
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x3efae8
     * @note[short] MacOS (Intel): 0x4863d0
     * @note[short] Windows: 0x3e36a0
     * @note[short] iOS: 0x497748
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x3efbd4
     * @note[short] MacOS (Intel): 0x4864b0
     * @note[short] Windows: 0x3e36f0
     * @note[short] iOS: 0x24b554
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x3f03e0
     * @note[short] MacOS (Intel): 0x486cd0
     * @note[short] Windows: 0x3e4190
     * @note[short] iOS: 0x497c90
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f07f8
     * @note[short] MacOS (Intel): 0x4870d0
     * @note[short] Windows: 0x3e5840
     * @note[short] iOS: 0x498004
     * @note[short] Android
     */
    virtual void shareCommentClosed(std::string text, ShareCommentLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x3f08c4
     * @note[short] MacOS (Intel): 0x4871b0
     * @note[short] Windows: 0x3e6640
     * @note[short] iOS: 0x498070
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* popup, std::string text);

    /**
     * @note[short] Windows: 0x3e77e0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3f02c0
     * @note[short] Windows: 0x3e3bf0
     * @note[short] iOS: 0x497b7c
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x3f1e7c
     * @note[short] MacOS (Intel): 0x488800
     * @note[short] Windows: 0x3df210
     * @note[short] iOS: 0x49920c
     * @note[short] Android
     */
    virtual cocos2d::CCArray* updateResultArray(cocos2d::CCArray* results);

    /**
     * @note[short] Windows: 0x3e8040
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] Android
     */
    TodoReturn claimRecallChest(LevelCell* p0);

    /**
     * @note[short] MacOS (ARM): 0x3f0780
     * @note[short] MacOS (Intel): 0x487060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x497f8c
     * @note[short] Android
     */
    void createNewLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f060c
     * @note[short] MacOS (Intel): 0x486f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x497e44
     * @note[short] Android
     */
    void createNewList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f05a4
     * @note[short] MacOS (Intel): 0x486ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x497ddc
     * @note[short] Android
     */
    void createNewSmartTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ec240
     * @note[short] MacOS (Intel): 0x4826b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x494a7c
     * @note[short] Android
     */
    void deleteSelected();

    /**
     * @note[short] MacOS (ARM): 0x3f0450
     * @note[short] MacOS (Intel): 0x486d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x497cc4
     * @note[short] Android
     */
    void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3eed3c
     * @note[short] MacOS (Intel): 0x4853f0
     * @note[short] Windows: 0x2250a0
     * @note[short] iOS: 0x496ab8
     * @note[short] Android
     */
    cocos2d::CCArray* getItemsMatchingSearch(cocos2d::CCArray* items, std::string query, GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3ef398
     * @note[short] MacOS (Intel): 0x485aa0
     * @note[short] Windows: 0x214ba0
     * @note[short] iOS: 0x4970a0
     * @note[short] Android
     */
    std::string getSearchTitle();

    /**
     * @note[short] Android
     */
    bool init(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3eeb84
     * @note[short] MacOS (Intel): 0x485220
     * @note[short] iOS: 0x4969c8
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] Android
     */
    bool isSafeType();

    /**
     * @note[short] Android
     */
    bool isVaultType();

    /**
     * @note[short] MacOS (ARM): 0x3edba0
     * @note[short] Windows: 0x3e17d0
     * @note[short] iOS: 0x495c94
     * @note[short] Android
     */
    void loadPage(GJSearchObject* object);

    /**
     * @note[short] Android
     */
    void onBackups(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3edb24
     * @note[short] MacOS (Intel): 0x483f20
     * @note[short] Windows: 0x3e62f0
     * @note[short] iOS: 0x495c10
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ecbc4
     * @note[short] MacOS (Intel): 0x483030
     * @note[short] iOS: 0x4950dc
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x928040
     * @note[short] Windows: 0x44e7e0
     * @note[short] iOS: 0x1107a8
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onExportSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x495320
     * @note[short] Android
     */
    void onFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ed754
     * @note[short] MacOS (Intel): 0x483b40
     * @note[short] Windows: 0xd53c0
     * @note[short] iOS: 0x49592c
     * @note[short] Android
     */
    void onGoToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGoToLastPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ebfe4
     * @note[short] MacOS (Intel): 0x482460
     * @note[short] Windows: 0x3e3a10
     * @note[short] iOS: 0x49489c
     * @note[short] Android
     */
    void onGoToPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f05a0
     * @note[short] MacOS (Intel): 0x486ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onImportLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ed0f8
     * @note[short] MacOS (Intel): 0x483530
     * @note[short] Windows: 0x3e42e0
     * @note[short] iOS: 0x4954b0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLevelsImported(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ec98c
     * @note[short] MacOS (Intel): 0x482e20
     * @note[short] Windows: 0x3e5760
     * @note[short] iOS: 0x494f08
     * @note[short] Android
     */
    void onLocalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ec670
     * @note[short] MacOS (Intel): 0x240d70
     * @note[short] Windows: 0x3e5960
     * @note[short] iOS: 0x494d0c
     * @note[short] Android
     */
    void onMyOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ec574
     * @note[short] MacOS (Intel): 0x482a10
     * @note[short] Windows: 0x361d00
     * @note[short] iOS: 0x494ce4
     * @note[short] Android
     */
    void onNew(cocos2d::CCObject* sender);

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
    void onProcessSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x348050
     * @note[short] MacOS (Intel): 0x483410
     * @note[short] Windows: 0x3e6190
     * @note[short] iOS: 0x495408
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3eca64
     * @note[short] MacOS (Intel): 0x482ef0
     * @note[short] iOS: 0x494fb0
     * @note[short] Android
     */
    void onRemoveAllFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSafeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x495238
     * @note[short] Android
     */
    void onSaved(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3eccbc
     * @note[short] MacOS (Intel): 0x483100
     * @note[short] Windows: 0x3e5680
     * @note[short] iOS: 0x495190
     * @note[short] Android
     */
    void onSavedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ed85c
     * @note[short] iOS: 0x495a2c
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectionChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1283e0
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn recallCell(int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reloadAllObjects();

    /**
     * @note[short] Android
     */
    TodoReturn reloadPageRows();

    /**
     * @note[short] Android
     */
    TodoReturn safeSearchObject(GJTimedLevelType p0);

    /**
     * @note[short] Android
     */
    TodoReturn selectedCount();

    /**
     * @note[short] MacOS (ARM): 0xa0ba4
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setSearchObject(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3ef0f8
     * @note[short] MacOS (Intel): 0x4857b0
     * @note[short] iOS: 0x496e00
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* items);

    /**
     * @note[short] MacOS (ARM): 0x3f1dd0
     * @note[short] MacOS (Intel): 0x488700
     * @note[short] iOS: 0x499168
     * @note[short] Android
     */
    void show();

    /**
     * @note[short] Android
     */
    TodoReturn showExportResult(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn showImportResult(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateBackgroundColor();

    /**
     * @note[short] MacOS (ARM): 0x3f0228
     * @note[short] MacOS (Intel): 0x486ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x497ae8
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] MacOS (ARM): 0x3ebed8
     * @note[short] MacOS (Intel): 0x482340
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x494798
     * @note[short] Android
     */
    void updatePageLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectUI();
    bool m_unk;
    bool m_allSelected;
    TextArea* m_noInternet;
    GJListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_lastBtn;
    CCMenuItemSpriteExtra* m_cancelSearchBtn;
    CCMenuItemSpriteExtra* m_refreshBtn;
    cocos2d::CCArray* m_levels;
    GJSearchObject* m_searchObject;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCLabelBMFont* m_pageText;
    CCMenuItemSpriteExtra* m_pageBtn;
    cocos2d::CCLabelBMFont* m_folderText;
    CCMenuItemSpriteExtra* m_folderBtn;
    CCMenuItemToggler* m_allObjectsToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    LoadingCircle* m_circle;
    int m_lastPage;
    bool m_isOverlay;
    cocos2d::CCScene* m_scene;
    int m_zOffset;
    bool m_unk2;
    int m_listHeight;
    float m_unkFloat;
    float m_initialListViewY;
    TableViewCellDelegate* m_delegate;
    bool m_cached;
};
