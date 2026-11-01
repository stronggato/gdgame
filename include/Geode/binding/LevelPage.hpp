#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelPage : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelPage, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelPage();

    /**
     * @note[short] MacOS (Intel): 0x4227a0
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~LevelPage();

    /**
     * @note[short] MacOS (ARM): 0x39756c
     * @note[short] MacOS (Intel): 0x41fb90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x48041c
     * @note[short] Android
     */
    static LevelPage* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x39c1ec
     * @note[short] MacOS (Intel): 0x424bd0
     * @note[short] Windows: 0x4446e0
     * @note[short] iOS: 0x483e68
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x39c2ec
     * @note[short] MacOS (Intel): 0x424cf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x39c2f4
     * @note[short] MacOS (Intel): 0x424d10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x39c2fc
     * @note[short] MacOS (Intel): 0x424d30
     * @note[short] Windows: 0x83d80
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x39c318
     * @note[short] MacOS (Intel): 0x424d70
     * @note[short] Windows: 0x133890
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x39bf28
     * @note[short] MacOS (Intel): 0x424920
     * @note[short] Windows: 0x443b20
     * @note[short] iOS: 0x483c44
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x301e54
     * @note[short] MacOS (Intel): 0x421470
     * @note[short] Windows: 0x3a5900
     * @note[short] iOS: 0x1a8314
     * @note[short] Android
     */
    void addSecretCoin();

    /**
     * @note[short] MacOS (ARM): 0x39b24c
     * @note[short] MacOS (Intel): 0x423b00
     * @note[short] iOS: 0x4830e8
     * @note[short] Android
     */
    void addSecretDoor();

    /**
     * @note[short] MacOS (ARM): 0x39a148
     * @note[short] MacOS (Intel): 0x422900
     * @note[short] Windows: 0x440010
     * @note[short] iOS: 0x482248
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    void onDeathTracker(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39b3b8
     * @note[short] MacOS (Intel): 0x423c70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ec4bc
     * @note[short] MacOS (Intel): 0x421e80
     * @note[short] Windows: 0x443c10
     * @note[short] iOS: 0x139ea0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39b854
     * @note[short] MacOS (Intel): 0x424120
     * @note[short] iOS: 0x483684
     * @note[short] Android
     */
    void onSecretDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39ad00
     * @note[short] MacOS (Intel): 0x423560
     * @note[short] iOS: 0x482d04
     * @note[short] Android
     */
    void onTheTower(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39b41c
     * @note[short] MacOS (Intel): 0x423cd0
     * @note[short] iOS: 0x483254
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] iOS: 0x483cf4
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] iOS: 0x483db8
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x397900
     * @note[short] MacOS (Intel): 0x41ff40
     * @note[short] Windows: 0x440cb0
     * @note[short] iOS: 0x4806cc
     * @note[short] Android
     */
    void updateDynamicPage(GJGameLevel* level);
    bool m_isBusy;
    GJGameLevel* m_level;
    cocos2d::CCMenu* m_levelMenu;
    cocos2d::extension::CCScale9Sprite* m_levelDisplay;
    cocos2d::CCLabelBMFont* m_normalProgressLabel;
    cocos2d::CCLabelBMFont* m_practiceProgressLabel;
    cocos2d::CCLabelBMFont* m_nameLabel;
    cocos2d::CCLabelBMFont* m_starsLabel;
    float m_progressWidth;
    cocos2d::CCSprite* m_normalProgressBar;
    cocos2d::CCSprite* m_practiceProgressBar;
    cocos2d::CCSprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCSize m_levelDisplaySize;
    cocos2d::CCArray* m_coins;
    cocos2d::CCArray* m_dynamicObjects;
    cocos2d::CCArray* m_levelObjects;
    cocos2d::CCArray* m_progressObjects;
    GameObject* m_coinObject;
    cocos2d::CCSprite* m_secretDoor;
};
