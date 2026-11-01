#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/VirtualRowSource.hpp>
#include <Geode/binding/UserListDelegate.hpp>

class FriendPickerPopup : public PagedListPopup, public VirtualRowSource, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendPickerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendPickerPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xd28f0
     * @note[short] Android: Rebinded
     */
    virtual  ~FriendPickerPopup();

    /**
     * @note[short] Android
     */
    static FriendPickerPopup* create(FriendPickerDelegate* p0, bool p1, bool p2, bool p3, bool p4);

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] Windows: 0xe7b30
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe7450
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] Windows: 0xe7470
     * @note[short] Android
     */
    virtual int virtualRowHeight(int p0);

    /**
     * @note[short] Windows: 0xe7480
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] Windows: 0xe65f0
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] Windows: 0xe66c0
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType p0, GJErrorCode p1);

    /**
     * @note[short] Windows: 0xe6830
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn buildRows();

    /**
     * @note[short] Android
     */
    TodoReturn delayedRebuild(float p0);

    /**
     * @note[short] Android
     */
    bool init(FriendPickerDelegate* p0, bool p1, bool p2, bool p3, bool p4);

    /**
     * @note[short] Android
     */
    void onClearAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDone(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGlobalSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPickFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShowProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSelectedView(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateCountLabel();
};
