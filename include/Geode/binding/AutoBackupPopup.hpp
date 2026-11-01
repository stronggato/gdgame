#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/AutoBackupOptionsDelegate.hpp>

class AutoBackupPopup : public PagedListPopup, public FLAlertLayerProtocol, public AutoBackupOptionsDelegate {
public:
    static constexpr auto CLASS_NAME = "AutoBackupPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AutoBackupPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xc89e0
     * @note[short] Android: Rebinded
     */
    virtual  ~AutoBackupPopup();

    /**
     * @note[short] Android
     */
    static AutoBackupPopup* create(int p0);

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] Windows: 0xc9d30
     * @note[short] Android
     */
    virtual TodoReturn clearPageContent();

    /**
     * @note[short] Windows: 0xcbbf0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc99c0
     * @note[short] Android
     */
    virtual void backupsChanged();

    /**
     * @note[short] Windows: 0xc99f0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0xcb4c0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn assignRevs();

    /**
     * @note[short] Android
     */
    TodoReturn backupDirectory();

    /**
     * @note[short] Android
     */
    TodoReturn buildRows();

    /**
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRestore(cocos2d::CCObject* sender);

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
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn pruneBackups(std::string const& p0, int p1, std::string const& p2, bool p3);

    /**
     * @note[short] Android
     */
    TodoReturn reloadFiles();

    /**
     * @note[short] Android
     */
    TodoReturn selectedCount();

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectUI();

    /**
     * @note[short] Android
     */
    TodoReturn updateSummary();
};
