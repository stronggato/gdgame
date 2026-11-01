#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/IDNameBrowserDelegate.hpp>
#include <Geode/binding/DropdownListPopupOwner.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class IDNameInput : public cocos2d::CCNode, public TextInputDelegate, public IDNameBrowserDelegate, public DropdownListPopupOwner {
public:
    static constexpr auto CLASS_NAME = "IDNameInput";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(IDNameInput, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3c47f0
     * @note[short] Android: Rebinded
     */
    virtual  ~IDNameInput();

    /**
     * @note[short] Android
     */
    static IDNameInput* create(FLAlertLayer* p0, TextInputDelegate* p1, int p2, int p3, std::string const& p4, cocos2d::CCPoint p5, float p6, int p7, int p8, int p9, bool p10);

    /**
     * @note[short] Windows: 0x3c6b80
     * @note[short] Android
     */
    virtual void idNameBrowserClosed(IDNameBrowserPopup* p0, int p1);

    /**
     * @note[short] Windows: 0x3c8120
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x3c8500
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x3c82e0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x3c8520
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] Windows: 0x3c8540
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x3c8560
     * @note[short] Android
     */
    virtual bool allowTextInput(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x3c8580
     * @note[short] Android
     */
    virtual void enterPressed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x3c8680
     * @note[short] Android
     */
    virtual void dropdownListPopupClosed(DropdownListPopup* p0);

    /**
     * @note[short] Android
     */
    TodoReturn collectMatches(std::string const& p0, std::vector<DropdownListRow>& p1);

    /**
     * @note[short] Android
     */
    TodoReturn commitID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn commitTypedName();

    /**
     * @note[short] Android
     */
    TodoReturn dismissAutocomplete();

    /**
     * @note[short] Android
     */
    TodoReturn idNameTypeForItemValueType(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn initCore(FLAlertLayer* p0, TextInputDelegate* p1, int p2, int p3, std::string const& p4, cocos2d::CCPoint p5, float p6, int p7, int p8, int p9, bool p10);

    /**
     * @note[short] Android
     */
    TodoReturn nameLess(std::string const& p0, int p1, std::string const& p2, int p3);

    /**
     * @note[short] Android
     */
    void onArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onAutocompleteRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextFree(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshLabel();

    /**
     * @note[short] Android
     */
    TodoReturn revertToLastID();

    /**
     * @note[short] Android
     */
    void setType(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn stepArrow(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn textIsPureInt(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateAutocomplete();

    /**
     * @note[short] Android
     */
    TodoReturn useRank(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn useRankLess(std::unordered_map<int, int> const& p0, int p1, int p2);
};
