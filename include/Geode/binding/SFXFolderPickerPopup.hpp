#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>
#include <Geode/mapping/set.hpp>

class SFXFolderPickerPopup : public FLAlertLayer, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SFXFolderPickerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXFolderPickerPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xc2d70
     * @note[short] Android: Rebinded
     */
    virtual  ~SFXFolderPickerPopup();

    /**
     * @note[short] Android
     */
    static SFXFolderPickerPopup* create(SFXFolderPickerMode p0, std::string const& p1, std::set<int> const& p2, SFXFolderPickerDelegate* p3, int p4);

    /**
     * @note[short] Windows: 0xc5a90
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xc5b00
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xc5b70
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xc5bc0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xc5a30
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xc58f0
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, std::string p1);

    /**
     * @note[short] Android
     */
    bool init(SFXFolderPickerMode p0, std::string const& p1, std::set<int> const& p2, SFXFolderPickerDelegate* p3, int p4);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onConfirm(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNewFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPickFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn pickFolder(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn rebuildList();

    /**
     * @note[short] Android
     */
    TodoReturn refreshList();

    /**
     * @note[short] Android
     */
    TodoReturn updateActionBtn();

    /**
     * @note[short] Android
     */
    TodoReturn updateShareHint();
};
