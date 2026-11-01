#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/LevelBrowserLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/SelectListIconDelegate.hpp>
#include <Geode/binding/LikeItemDelegate.hpp>
#include <Geode/binding/LevelListDeleteDelegate.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class LevelListLayer : public LevelBrowserLayer, public TextInputDelegate, public SelectListIconDelegate, public LikeItemDelegate, public LevelListDeleteDelegate, public AdminActionConfirmDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListLayer, LevelBrowserLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e4c70
     * @note[short] Android: Out of line
     */
     LevelListLayer();

    /**
     * @note[short] MacOS (Intel): 0x2a9940
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~LevelListLayer();

    /**
     * @note[short] MacOS (Intel): 0x346ca0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelListLayer* create(GJLevelList* list);

    /**
     * @note[short] MacOS (Intel): 0x346c10
     * @note[short] Windows: 0x427f50
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2da6ec
     * @note[short] MacOS (Intel): 0x34a060
     * @note[short] Windows: 0x429dc0
     * @note[short] iOS: 0x2e0e60
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (Intel): 0x34a090
     * @note[short] Windows: 0x429df0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2daae4
     * @note[short] MacOS (Intel): 0x34a450
     * @note[short] Windows: 0x42b590
     * @note[short] iOS: 0x2e1168
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x2dacfc
     * @note[short] MacOS (Intel): 0x34a680
     * @note[short] Windows: 0x3e36a0
     * @note[short] iOS: 0x2e12c8
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x2db1d0
     * @note[short] MacOS (Intel): 0x34ac60
     * @note[short] Windows: 0x42bde0
     * @note[short] iOS: 0x2e1594
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2db95c
     * @note[short] MacOS (Intel): 0x34b3f0
     * @note[short] Windows: 0x42c6b0
     * @note[short] iOS: 0x2e1c14
     * @note[short] Android
     */
    virtual void shareCommentClosed(std::string text, ShareCommentLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2db554
     * @note[short] Windows: 0x42c210
     * @note[short] iOS: 0x2e18bc
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2db084
     * @note[short] MacOS (Intel): 0x34ab00
     * @note[short] Windows: 0x42bd20
     * @note[short] iOS: 0x2e14e4
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x2db1c8
     * @note[short] MacOS (Intel): 0x34ac40
     * @note[short] Windows: 0x42bdd0
     * @note[short] iOS: 0x2e158c
     * @note[short] Android
     */
    virtual cocos2d::CCArray* updateResultArray(cocos2d::CCArray* results);

    /**
     * @note[short] MacOS (ARM): 0x2dad08
     * @note[short] MacOS (Intel): 0x34a6b0
     * @note[short] Windows: 0x42b910
     * @note[short] iOS: 0x2e12d4
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x2dba50
     * @note[short] MacOS (Intel): 0x34b4e0
     * @note[short] Windows: 0x42c8e0
     * @note[short] iOS: 0x2e1cd8
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType type, int id, bool liked);

    /**
     * @note[short] MacOS (ARM): 0x2dbc98
     * @note[short] MacOS (Intel): 0x34b7e0
     * @note[short] Windows: 0x42cbb0
     * @note[short] iOS: 0x2e1df8
     * @note[short] Android
     */
    virtual void iconSelectClosed(SelectListIconLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2dbf94
     * @note[short] Windows: 0x42d700
     * @note[short] iOS: 0x2e1f88
     * @note[short] Android
     */
    virtual void levelListDeleteFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x2dc084
     * @note[short] Windows: 0x42d830
     * @note[short] iOS: 0x2e2050
     * @note[short] Android
     */
    virtual void levelListDeleteFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x2dc380
     * @note[short] MacOS (Intel): 0x34bfc0
     * @note[short] Windows: 0x42dc10
     * @note[short] iOS: 0x2e227c
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2dc174
     * @note[short] MacOS (Intel): 0x34bdc0
     * @note[short] Windows: 0x42d960
     * @note[short] iOS: 0x2e2118
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2dc484
     * @note[short] MacOS (Intel): 0x34c090
     * @note[short] Windows: 0x42dd90
     * @note[short] iOS: 0x2e2378
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x42d6e0
     * @note[short] Android
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x2db690
     * @note[short] MacOS (Intel): 0x34b100
     * @note[short] Windows: 0x42cf90
     * @note[short] iOS: 0x2e19cc
     * @note[short] Android
     */
    void cloneList();

    /**
     * @note[short] MacOS (ARM): 0x2d9178
     * @note[short] MacOS (Intel): 0x348ae0
     * @note[short] Windows: 0x181220
     * @note[short] iOS: 0x2dfa48
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d94d4
     * @note[short] MacOS (Intel): 0x348e40
     * @note[short] iOS: 0x2dfd3c
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void confirmOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d756c
     * @note[short] MacOS (Intel): 0x346d00
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2ddf18
     * @note[short] Android
     */
    bool init(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2da750
     * @note[short] MacOS (Intel): 0x34a0b0
     * @note[short] iOS: 0x2e0ec4
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2db638
     * @note[short] MacOS (Intel): 0x34b0b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e1974
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] MacOS (ARM): 0x2d95bc
     * @note[short] MacOS (Intel): 0x348f20
     * @note[short] iOS: 0x2dfdf8
     * @note[short] Android
     */
    void onDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d9258
     * @note[short] MacOS (Intel): 0x348bc0
     * @note[short] Windows: 0x42c460
     * @note[short] iOS: 0x2dfb04
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x348a30
     * @note[short] Windows: 0x42c7b0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d9110
     * @note[short] MacOS (Intel): 0x348a60
     * @note[short] iOS: 0x2df9e0
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d97ec
     * @note[short] MacOS (Intel): 0x349140
     * @note[short] iOS: 0x2dffd8
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRateListAdmin(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d8fd0
     * @note[short] MacOS (Intel): 0x348910
     * @note[short] Windows: 0x42b3c0
     * @note[short] iOS: 0x2df8a0
     * @note[short] Android
     */
    void onRefreshLevelList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d9704
     * @note[short] MacOS (Intel): 0x349050
     * @note[short] Windows: 0x42ca50
     * @note[short] iOS: 0x2dfef4
     * @note[short] Android
     */
    void onSelectIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d96dc
     * @note[short] MacOS (Intel): 0x349010
     * @note[short] iOS: 0x2dfecc
     * @note[short] Android
     */
    void onToggleEditMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d8f9c
     * @note[short] MacOS (Intel): 0x3488e0
     * @note[short] Windows: 0x420200
     * @note[short] iOS: 0x2df86c
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void ownerDelete();

    /**
     * @note[short] Android
     */
    TodoReturn startServerDelete(std::string const& p0, std::vector<int> const& p1);

    /**
     * @note[short] MacOS (ARM): 0x2daeac
     * @note[short] MacOS (Intel): 0x34a870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateEditMode();

    /**
     * @note[short] MacOS (ARM): 0x2d97f4
     * @note[short] MacOS (Intel): 0x349160
     * @note[short] Windows: 0x42c940
     * @note[short] iOS: 0x2dffe0
     * @note[short] Android
     */
    void updateSideButtons();

    /**
     * @note[short] MacOS (Intel): 0x3491f0
     * @note[short] iOS: 0x2e0074
     * @note[short] Android
     */
    void updateStatsArt();

    /**
     * @note[short] MacOS (ARM): 0x2db3b0
     * @note[short] MacOS (Intel): 0x34ae30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x378064
     * @note[short] Android
     */
    void verifyListName();
    cocos2d::CCMenu* m_buttonMenu;
    std::string m_searchKey1;
    GJLevelList* m_levelList;
    std::string m_searchKey2;
    CCMenuItemSpriteExtra* m_likeButton;
    bool m_exiting;
    CCTextInputNode* m_titleInput;
    int m_editMode;
    cocos2d::CCArray* m_objects;
    cocos2d::CCSprite* m_diffSprite;
    cocos2d::CCSprite* m_featureSprite;
    cocos2d::CCPoint m_rewardPosition;
    bool m_exited;
};
