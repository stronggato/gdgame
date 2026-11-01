#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class MoreSearchLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "MoreSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreSearchLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MoreSearchLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~MoreSearchLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MoreSearchLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x618ee8
     * @note[short] MacOS (Intel): 0x707ec0
     * @note[short] Windows: 0x438870
     * @note[short] iOS: 0x5d744
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x43da60
     * @note[short] Android
     */
    virtual void keyBackClicked();

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
     * @note[short] MacOS (ARM): 0x61a918
     * @note[short] MacOS (Intel): 0x709a80
     * @note[short] iOS: 0x5f008
     * @note[short] Android
     */
    void audioNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61a8a4
     * @note[short] MacOS (Intel): 0x709a10
     * @note[short] iOS: 0x5efc4
     * @note[short] Android
     */
    void audioPrevious(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x43d3a0
     * @note[short] iOS: 0x5e8b4
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler callback, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x61a0a8
     * @note[short] MacOS (Intel): 0x709260
     * @note[short] Windows: 0x93d10
     * @note[short] iOS: 0x5e7d0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61a4c4
     * @note[short] MacOS (Intel): 0x709620
     * @note[short] iOS: 0x5ebd8
     * @note[short] Android
     */
    void onCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61a694
     * @note[short] MacOS (Intel): 0x709800
     * @note[short] iOS: 0x5eda8
     * @note[short] Android
     */
    void onEpic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61aa5c
     * @note[short] MacOS (Intel): 0x709ba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61aa9c
     * @note[short] MacOS (Intel): 0x709be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61a980
     * @note[short] MacOS (Intel): 0x709af0
     * @note[short] iOS: 0x5f050
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61a6d4
     * @note[short] MacOS (Intel): 0x709840
     * @note[short] iOS: 0x5ede8
     * @note[short] Android
     */
    void onLegendary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61a714
     * @note[short] MacOS (Intel): 0x709880
     * @note[short] iOS: 0x5ee28
     * @note[short] Android
     */
    void onMythic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNoStar(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61a484
     * @note[short] MacOS (Intel): 0x7095e0
     * @note[short] iOS: 0x5eb98
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61a544
     * @note[short] MacOS (Intel): 0x7096a0
     * @note[short] iOS: 0x5ec58
     * @note[short] Android
     */
    void onSongFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61a754
     * @note[short] MacOS (Intel): 0x7098c0
     * @note[short] iOS: 0x5ee68
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61a504
     * @note[short] MacOS (Intel): 0x709660
     * @note[short] iOS: 0x5ec18
     * @note[short] Android
     */
    void onTwoPlayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUncompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61abd4
     * @note[short] MacOS (Intel): 0x709d60
     * @note[short] iOS: 0x5f1e0
     * @note[short] Android
     */
    void selectSong(int songID);

    /**
     * @note[short] MacOS (ARM): 0x61aadc
     * @note[short] MacOS (Intel): 0x709c20
     * @note[short] Windows: 0xfb750
     * @note[short] iOS: 0x5f0e8
     * @note[short] Android
     */
    void toggleSongNodes(bool custom, bool disable);

    /**
     * @note[short] MacOS (ARM): 0x61ac1c
     * @note[short] MacOS (Intel): 0x709db0
     * @note[short] Windows: 0x48e530
     * @note[short] iOS: 0x5f228
     * @note[short] Android
     */
    void updateAudioLabel();
    cocos2d::CCLabelBMFont* m_audioTrackName;
    CCMenuItemSpriteExtra* m_songLeftBtn;
    CCMenuItemSpriteExtra* m_songRightBtn;
    CCMenuItemSpriteExtra* m_normalBtn;
    CCMenuItemSpriteExtra* m_customBtn;
    CCTextInputNode* m_enterSongID;
    cocos2d::CCArray* m_commonSongNodes;
    cocos2d::CCArray* m_normalSongNodes;
    cocos2d::CCArray* m_customSongNodes;
};
