#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/VirtualRowSource.hpp>

class IDNameBrowserPopup : public FLAlertLayer, public VirtualRowSource {
public:
    static constexpr auto CLASS_NAME = "IDNameBrowserPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(IDNameBrowserPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3beac0
     * @note[short] Android: Rebinded
     */
    virtual  ~IDNameBrowserPopup();

    /**
     * @note[short] Android
     */
    static IDNameBrowserPopup* create(int p0, int p1, IDNameBrowserDelegate* p2);

    /**
     * @note[short] Windows: 0x3c2340
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x3c23b0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x3c2420
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x3c2470
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x3c2330
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x3c21d0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x3c0b20
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x3c05d0
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] Windows: 0x3c0600
     * @note[short] Android
     */
    virtual int virtualRowHeight(int p0);

    /**
     * @note[short] Windows: 0x3c0610
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] Android
     */
    TodoReturn getFormID();

    /**
     * @note[short] Android
     */
    bool init(int p0, int p1, IDNameBrowserDelegate* p2);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFormAdd(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFormArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFormArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFormNextFree(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSort(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn rebuildList();

    /**
     * @note[short] Android
     */
    void setFormID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateConflictLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateSortButtonLabel();
};
