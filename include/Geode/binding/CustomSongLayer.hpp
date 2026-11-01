#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/GJDropDownLayerDelegate.hpp>
#include <Geode/binding/MusicBrowserDelegate.hpp>

class CustomSongLayer : public FLAlertLayer, public GJDropDownLayerDelegate, public MusicBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x162500
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomSongLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CustomSongLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x66c58
     * @note[short] Android
     */
    static CustomSongLayer* create(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1ab068
     * @note[short] MacOS (Intel): 0x1f99c0
     * @note[short] Windows: 0x164050
     * @note[short] iOS: 0x1c1c00
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1ab154
     * @note[short] MacOS (Intel): 0x1f9ab0
     * @note[short] Windows: 0x164060
     * @note[short] iOS: 0x1c1c0c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (Intel): 0x1f9470
     * @note[short] Windows: 0x1639d0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1aab60
     * @note[short] MacOS (Intel): 0x1f9410
     * @note[short] Windows: 0x163910
     * @note[short] iOS: 0x1c1968
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1aaae0
     * @note[short] MacOS (Intel): 0x1f93b0
     * @note[short] Windows: 0x163910
     * @note[short] iOS: 0x1c1930
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5b9a0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] Windows: 0x5bb00
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (Intel): 0x1f9860
     * @note[short] Windows: 0x163dc0
     * @note[short] iOS: 0x1c1b30
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1aafa0
     * @note[short] MacOS (Intel): 0x1f9910
     * @note[short] Windows: 0x163ea0
     * @note[short] iOS: 0x1c1b98
     * @note[short] Android
     */
    virtual void musicBrowserClosed(MusicBrowser* browser);

    /**
     * @note[short] MacOS (ARM): 0x1a9a08
     * @note[short] MacOS (Intel): 0x1f81a0
     * @note[short] Windows: 0x39e350
     * @note[short] iOS: 0x1c09f8
     * @note[short] Android
     */
    bool init(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1aa584
     * @note[short] MacOS (Intel): 0x1f8de0
     * @note[short] Windows: 0x163f80
     * @note[short] iOS: 0x1c1540
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa6dc
     * @note[short] MacOS (Intel): 0x8120
     * @note[short] iOS: 0xdaf3c
     * @note[short] Android
     */
    void onCreateLines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa678
     * @note[short] MacOS (Intel): 0x1f8ed0
     * @note[short] Windows: 0x163a60
     * @note[short] iOS: 0x1c1634
     * @note[short] Android
     */
    void onMusicBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa65c
     * @note[short] MacOS (Intel): 0x1f8eb0
     * @note[short] iOS: 0x1c1618
     * @note[short] Android
     */
    void onNCSBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa6c0
     * @note[short] MacOS (Intel): 0x1f8f20
     * @note[short] iOS: 0x1c167c
     * @note[short] Android
     */
    void onNewgroundsBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x193514
     * @note[short] MacOS (Intel): 0x1df9d0
     * @note[short] iOS: 0x110944
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa738
     * @note[short] MacOS (Intel): 0x1f8fa0
     * @note[short] iOS: 0x1c16f4
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa5f8
     * @note[short] MacOS (Intel): 0x1f8e50
     * @note[short] Windows: 0x1639e0
     * @note[short] iOS: 0x1c15b4
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa8b4
     * @note[short] MacOS (Intel): 0x1f9110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c17dc
     * @note[short] Android
     */
    void showNewgroundsMessage();
    CustomSongDelegate* m_songDelegate;
    CCTextInputNode* m_songIDInput;
    CustomSongWidget* m_songWidget;
    CustomSongLayerDelegate* m_delegate;
};
