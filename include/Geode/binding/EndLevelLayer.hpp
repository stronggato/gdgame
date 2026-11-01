#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class EndLevelLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "EndLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndLevelLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0x420544
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     EndLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~EndLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x41ca28
     * @note[short] MacOS (Intel): 0x4b8620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38fbec
     * @note[short] Android
     */
    static EndLevelLayer* create(PlayLayer* playLayer);

    /**
     * @note[short] MacOS (ARM): 0x41fd24
     * @note[short] MacOS (Intel): 0x4bbce0
     * @note[short] Windows: 0x204970
     * @note[short] iOS: 0x392a4c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4204c0
     * @note[short] MacOS (Intel): 0x4bc480
     * @note[short] Windows: 0x206000
     * @note[short] iOS: 0x393194
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x41ccfc
     * @note[short] MacOS (Intel): 0x4b8a00
     * @note[short] Windows: 0x201cd0
     * @note[short] iOS: 0x38fd18
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x41ef90
     * @note[short] MacOS (Intel): 0x4baeb0
     * @note[short] Windows: 0x203f20
     * @note[short] iOS: 0x391d28
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x41fc78
     * @note[short] MacOS (Intel): 0x4bbc00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3929cc
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x42053c
     * @note[short] MacOS (Intel): 0x4bc510
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x4200b4
     * @note[short] MacOS (Intel): 0x4bc090
     * @note[short] Windows: 0x205100
     * @note[short] iOS: 0x392da8
     * @note[short] Android
     */
    void coinEnterFinished(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xe994
     * @note[short] MacOS (Intel): 0x103e0
     * @note[short] Windows: 0xdaa90
     * @note[short] iOS: 0x392d5c
     * @note[short] Android
     */
    void coinEnterFinishedO(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4202d4
     * @note[short] iOS: 0x392fb0
     * @note[short] Android
     */
    void currencyEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x4203c8
     * @note[short] iOS: 0x3930a0
     * @note[short] Android
     */
    void diamondEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x41e6b8
     * @note[short] MacOS (Intel): 0x4ba650
     * @note[short] Windows: 0x203bc0
     * @note[short] iOS: 0x1d464c
     * @note[short] Android
     */
    std::string getCoinString();

    /**
     * @note[short] MacOS (ARM): 0x41e900
     * @note[short] MacOS (Intel): 0x4ba880
     * @note[short] iOS: 0xbdf14
     * @note[short] Android
     */
    const char* getEndText();

    /**
     * @note[short] MacOS (ARM): 0x41fc80
     * @note[short] MacOS (Intel): 0x4bbc20
     * @note[short] Windows: 0xfeac0
     * @note[short] iOS: 0x3929d0
     * @note[short] Android
     */
    void goEdit();

    /**
     * @note[short] MacOS (ARM): 0x41cabc
     * @note[short] MacOS (Intel): 0x4b86a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(PlayLayer* playLayer);

    /**
     * @note[short] Android
     */
    void onDeathTracker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41ebfc
     * @note[short] MacOS (Intel): 0x4944e0
     * @note[short] Windows: 0x204480
     * @note[short] iOS: 0x3919d0
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41fc7c
     * @note[short] MacOS (Intel): 0x4bbc10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41eea4
     * @note[short] MacOS (Intel): 0x4badc0
     * @note[short] Windows: 0x204650
     * @note[short] iOS: 0x391c6c
     * @note[short] Android
     */
    void onHideLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41ee04
     * @note[short] MacOS (Intel): 0x4bad10
     * @note[short] iOS: 0x391bcc
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41eaf8
     * @note[short] MacOS (Intel): 0x4baa30
     * @note[short] iOS: 0x3918e4
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41e9e4
     * @note[short] MacOS (Intel): 0x4ba930
     * @note[short] Windows: 0xda570
     * @note[short] iOS: 0x3917d8
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41ec90
     * @note[short] MacOS (Intel): 0x4babb0
     * @note[short] Windows: 0x204740
     * @note[short] iOS: 0x391a60
     * @note[short] Android
     */
    void onRestartCheckpoint(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41f478
     * @note[short] MacOS (Intel): 0x4bb3a0
     * @note[short] Windows: 0x1a6390
     * @note[short] iOS: 0x3921f0
     * @note[short] Android
     */
    void playCoinEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x41f608
     * @note[short] iOS: 0x392374
     * @note[short] Android
     */
    void playCurrencyEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x41f940
     * @note[short] iOS: 0x3926a0
     * @note[short] Android
     */
    void playDiamondEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x41fe4c
     * @note[short] MacOS (Intel): 0x4bbe40
     * @note[short] Windows: 0x452b40
     * @note[short] iOS: 0x392b70
     * @note[short] Android
     */
    void playEndEffect();

    /**
     * @note[short] MacOS (ARM): 0x41f120
     * @note[short] MacOS (Intel): 0x4bb040
     * @note[short] Windows: 0xe2480
     * @note[short] Android
     */
    void playStarEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x41fd30
     * @note[short] MacOS (Intel): 0x4bbd10
     * @note[short] Windows: 0x204d20
     * @note[short] iOS: 0x1f496c
     * @note[short] Android
     */
    void starEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x41ef60
     * @note[short] MacOS (Intel): 0x4bae80
     * @note[short] Android
     */
    void tryShowBanner(float dt);
    PlayLayer* m_playLayer;
    bool m_notLocal;
    bool m_coinsVerified;
    bool m_unknown3;
    bool m_exiting;
    bool m_animateCoins;
    bool m_endEffectPlayed;
    cocos2d::CCMenu* m_sideMenu;
    cocos2d::CCArray* m_coinsToAnimate;
    cocos2d::CCPoint m_starsPosition;
    cocos2d::CCPoint m_orbsPosition;
    cocos2d::CCPoint m_diamondsPosition;
    int m_orbs;
    int m_stars;
    int m_moons;
    int m_diamonds;
    bool m_secretKey;
    bool m_hidden;
};
