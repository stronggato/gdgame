#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCIMEDelegate.hpp>
#include <Geode/mapping/CCTextFieldDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/vector.hpp>

class CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate {
public:
    static constexpr auto CLASS_NAME = "CCTextInputNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCTextInputNode, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCTextInputNode();

    /**
     * @note[short] MacOS (ARM): 0x5e334
     * @note[short] MacOS (Intel): 0x655f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x454d14
     * @note[short] Android: Rebinded
     */
     ~CCTextInputNode();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, char const* fontPath);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, int fontSize, char const* fontPath);

    /**
     * @note[short] MacOS (ARM): 0x5e534
     * @note[short] MacOS (Intel): 0x658a0
     * @note[short] Windows: 0x54260
     * @note[short] iOS: 0x1f9144
     * @note[short] Android
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, char const* textFont, int fontSize, char const* labelFont);

    /**
     * @note[short] MacOS (ARM): 0x5fc48
     * @note[short] MacOS (Intel): 0x66f50
     * @note[short] Windows: 0x54e40
     * @note[short] iOS: 0x1f9fd4
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x65248
     * @note[short] MacOS (Intel): 0x6bfe0
     * @note[short] Windows: 0x58a90
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x65620
     * @note[short] MacOS (Intel): 0x6c410
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x65480
     * @note[short] MacOS (Intel): 0x6c260
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x65558
     * @note[short] MacOS (Intel): 0x6c350
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7650
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (Intel): 0x6d3e0
     * @note[short] Windows: 0x598d0
     * @note[short] iOS: 0x1fdf30
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x57130
     * @note[short] Android
     */
    virtual void textChanged();

    /**
     * @note[short] MacOS (ARM): 0x62e04
     * @note[short] MacOS (Intel): 0x69970
     * @note[short] Windows: 0x57110
     * @note[short] Android
     */
    virtual void onClickTrackNode(bool selected);

    /**
     * @note[short] MacOS (Intel): 0x33fb60
     * @note[short] Windows: 0x56f30
     * @note[short] Android
     */
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& info);

    /**
     * @note[short] Windows: 0x57050
     * @note[short] Android
     */
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& info);

    /**
     * @note[short] Windows: 0x57210
     * @note[short] Android
     */
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF* pSender, char const* text, int nLen, cocos2d::enumKeyCodes keyCodes);

    /**
     * @note[short] MacOS (ARM): 0xb101c
     * @note[short] MacOS (Intel): 0x6a9e0
     * @note[short] Windows: 0x57b90
     * @note[short] iOS: 0x1fc2b4
     * @note[short] Android
     */
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* tField);

    /**
     * @note[short] MacOS (ARM): 0x64224
     * @note[short] MacOS (Intel): 0x6ad80
     * @note[short] Windows: 0x57e70
     * @note[short] iOS: 0xa00e8
     * @note[short] Android
     */
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* tField);

    /**
     * @note[short] Windows: 0x58e70
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x55820
     * @note[short] Android
     */
    virtual bool onTextFieldDeleteBackward(cocos2d::CCTextFieldTTF* p0, char const* p1, int p2);

    /**
     * @note[short] Windows: 0x59470
     * @note[short] Android
     */
    virtual bool scrollWheel(float p0, float p1);

    /**
     * @note[short] Windows: 0x59010
     * @note[short] Android
     */
    virtual bool rightClick(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x5e944
     * @note[short] MacOS (Intel): 0x65cc0
     * @note[short] Windows: 0x482840
     * @note[short] iOS: 0x1f9470
     * @note[short] Android
     */
    void addTextArea(TextArea* textArea);

    /**
     * @note[short] Android
     */
    TodoReturn armHold(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn canClearText();

    /**
     * @note[short] Android
     */
    TodoReturn canCopyText();

    /**
     * @note[short] Android
     */
    TodoReturn clearText();

    /**
     * @note[short] Android
     */
    TodoReturn closeActiveInput();

    /**
     * @note[short] Android
     */
    TodoReturn closeEditMenu();

    /**
     * @note[short] Android
     */
    TodoReturn containsTouchPoint(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn copyText();

    /**
     * @note[short] Android
     */
    TodoReturn disarmHold();

    /**
     * @note[short] Android
     */
    TodoReturn displayToRawIndex(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn doneFromIME();

    /**
     * @note[short] Android
     */
    TodoReturn emoteTokenContaining(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn emoteTokenEndingAt(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn emoteTokenStartingAt(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn enableTextScroll();

    /**
     * @note[short] MacOS (Intel): 0x6b550
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void forceOffset();

    /**
     * @note[short] Android
     */
    TodoReturn getBoxRect();

    /**
     * @note[short] MacOS (ARM): 0x61fd4
     * @note[short] MacOS (Intel): 0x689a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fae28
     * @note[short] Android
     */
    std::string getString();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    cocos2d::CCLabelBMFont* getTextLabel();

    /**
     * @note[short] Android
     */
    TodoReturn getTextRowCount();

    /**
     * @note[short] Android
     */
    TodoReturn getWorldRect();

    /**
     * @note[short] Android
     */
    TodoReturn holdTimerFired(float p0);

    /**
     * @note[short] MacOS (ARM): 0x5e5e8
     * @note[short] MacOS (Intel): 0x65940
     * @note[short] Windows: 0x54510
     * @note[short] iOS: 0x1f91f8
     * @note[short] Android
     */
    bool init(float width, float height, char const* placeholder, char const* textFont, int fontSize, char const* labelFont);

    /**
     * @note[short] Android
     */
    TodoReturn insertAtCursor(std::string p0);

    /**
     * @note[short] Android
     */
    bool isCoveredByPopup();

    /**
     * @note[short] Android
     */
    bool isVisibleInTree();

    /**
     * @note[short] Android
     */
    TodoReturn moveCursorToEnd();

    /**
     * @note[short] Android
     */
    TodoReturn moveCursorVertical(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn openEditMenu(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn pasteText();

    /**
     * @note[short] Android
     */
    TodoReturn rawToDisplayIndex(int p0);

    /**
     * @note[short] MacOS (ARM): 0x62084
     * @note[short] MacOS (Intel): 0x68a50
     * @note[short] Windows: 0x6fba0
     * @note[short] iOS: 0x1fae5c
     * @note[short] Android
     */
    void refreshLabel();

    /**
     * @note[short] Android
     */
    TodoReturn scrollToCursor();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setAllowedChars(std::string filter);

    /**
     * @note[short] Android
     */
    void setAllowNewlines(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setDelegate(TextInputDelegate* delegate);

    /**
     * @note[short] MacOS (Intel): 0x68e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setLabelNormalColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x623c4
     * @note[short] MacOS (Intel): 0x68de0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setLabelPlaceholderColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x623bc
     * @note[short] MacOS (Intel): 0x68dc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setLabelPlaceholderScale(float v);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setMaxLabelLength(int v);

    /**
     * @note[short] MacOS (ARM): 0x623ac
     * @note[short] MacOS (Intel): 0x68d80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fb084
     * @note[short] Android
     */
    void setMaxLabelScale(float v);

    /**
     * @note[short] MacOS (ARM): 0x623b4
     * @note[short] MacOS (Intel): 0x68da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fb08c
     * @note[short] Android
     */
    void setMaxLabelWidth(float v);

    /**
     * @note[short] Android
     */
    void setMaxTextAreaHeight(float p0);

    /**
     * @note[short] Android
     */
    void setParseEmotes(int p0);

    /**
     * @note[short] MacOS (ARM): 0x5fca4
     * @note[short] MacOS (Intel): 0x66fb0
     * @note[short] Windows: 0x54eb0
     * @note[short] iOS: 0x1fa030
     * @note[short] Android
     */
    void setString(std::string text);

    /**
     * @note[short] Android
     */
    void setTextScrollViewSize(cocos2d::CCSize p0);

    /**
     * @note[short] Android
     */
    void setUnicodeText(bool p0);

    /**
     * @note[short] Android
     */
    void setWheelRange(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn showHoldMenu(float p0);

    /**
     * @note[short] MacOS (Intel): 0x67d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateBlinkLabel();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1fb0c0
     * @note[short] Android
     */
    void updateBlinkLabelToChar(int index);

    /**
     * @note[short] MacOS (ARM): 0x21dfe0
     * @note[short] MacOS (Intel): 0x278220
     * @note[short] Windows: 0x583c0
     * @note[short] Android
     */
    void updateCursorPosition(cocos2d::CCPoint position, cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x5e89c
     * @note[short] MacOS (Intel): 0x65c20
     * @note[short] Windows: 0x54c30
     * @note[short] iOS: 0x1f93f0
     * @note[short] Android
     */
    void updateDefaultFontValues(std::string font);

    /**
     * @note[short] MacOS (ARM): 0x5eb8c
     * @note[short] MacOS (Intel): 0x65f00
     * @note[short] Windows: 0x55d30
     * @note[short] Android
     */
    void updateLabel(std::string text);
    bool m_numberInput;
    std::string m_caption;
    float m_keyboardOffset;
    bool m_selected;
    bool m_keyboardShowing;
    float m_fontValue1;
    float m_fontValue2;
    bool m_isChatFont;
    std::string m_allowedChars;
    void* m_unkDelegate;
    int m_parseEmotes;
    std::vector<EmoteToken> m_emoteVector;
    cocos2d::CCNode* m_emoteContainer;
    float m_maxLabelWidth;
    float m_maxLabelScale;
    float m_placeholderScale;
    cocos2d::ccColor3B m_placeholderColor;
    cocos2d::ccColor3B m_textColor;
    cocos2d::CCLabelBMFont* m_cursor;
    cocos2d::CCTextFieldTTF* m_textField;
    TextInputDelegate* m_delegate;
    int m_maxLabelLength;
    cocos2d::CCLabelBMFont* m_textLabel;
    bool m_filterSwearWords;
    bool m_usePasswordChar;
    bool m_forceOffset;
    TextArea* m_textArea;
    bool m_allowNewlines;
    bool m_unicodeText;
    bool m_deselectOnOutsideTap;
    cocos2d::CCSize m_hitPadding;
    ScrollableContentLayer* m_scrollableLayer;
    float m_cursorTargetX;
    float m_maxTextAreaHeight;
    int m_unkTextareaMember;
    bool m_wheelRangeSet;
    float m_wheelRangeMin;
    float m_wheelRangeMax;
    int m_maxDigits;
    bool m_doneFromIME;
    CCTextInputMenu* m_editMenu;
    cocos2d::CCPoint m_holdMenuSpawn;
    bool m_holdTimerArmed;
    bool m_holdTimerFired;
    InputValueType m_valueType;
    int m_decimalPlaces;
    int m_kerningAmount;
};
