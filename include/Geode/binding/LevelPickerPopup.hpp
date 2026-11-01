#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>

class LevelPickerPopup : public PagedListPopup, public LevelManagerDelegate, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelPickerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelPickerPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xd2740
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelPickerPopup();

    /**
     * @note[short] Android
     */
    static LevelPickerPopup* create(LevelPickerDelegate* p0);

    /**
     * @note[short] Windows: 0xe8f90
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] Windows: 0xea900
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] Windows: 0xe97f0
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] Windows: 0xe9900
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] Windows: 0xe9650
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string p0, char const* p1);

    /**
     * @note[short] Windows: 0xe9990
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn applyKind();

    /**
     * @note[short] Android
     */
    TodoReturn buildSavedPage();

    /**
     * @note[short] Android
     */
    TodoReturn doPageRequest(float p0);

    /**
     * @note[short] Android
     */
    bool init(LevelPickerDelegate* p0);

    /**
     * @note[short] Android
     */
    void onOnlineMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRefreshOnline(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleKind(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUseID(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshUseID();

    /**
     * @note[short] Android
     */
    TodoReturn savedIndex();

    /**
     * @note[short] Android
     */
    TodoReturn setupList(cocos2d::CCArray* p0);
};
