#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class SecretGame01Layer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretGame01Layer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretGame01Layer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3de184
     * @note[short] MacOS (Intel): 0x4733b0
     * @note[short] Android
     */
    static SecretGame01Layer* create();

    /**
     * @note[short] MacOS (ARM): 0x3df96c
     * @note[short] MacOS (Intel): 0x474e20
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3debb8
     * @note[short] MacOS (Intel): 0x473fe0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3df794
     * @note[short] MacOS (Intel): 0x474c60
     * @note[short] Android
     */
    void didSelectCorrectObject(CCMenuItemSpriteExtra* button);

    /**
     * @note[short] MacOS (ARM): 0x3defa4
     * @note[short] MacOS (Intel): 0x474390
     * @note[short] Android
     */
    void gameStep01();

    /**
     * @note[short] MacOS (ARM): 0x3df214
     * @note[short] MacOS (Intel): 0x474660
     * @note[short] Android
     */
    void gameStep02();

    /**
     * @note[short] MacOS (ARM): 0x3ded9c
     * @note[short] MacOS (Intel): 0x4741d0
     * @note[short] Android
     */
    int getCountForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3dedc4
     * @note[short] MacOS (Intel): 0x474200
     * @note[short] Android
     */
    std::string getFrameForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3ded78
     * @note[short] MacOS (Intel): 0x4741a0
     * @note[short] Android
     */
    int getRowsForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3dee98
     * @note[short] MacOS (Intel): 0x474290
     * @note[short] Android
     */
    int getTimeForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3deebc
     * @note[short] MacOS (Intel): 0x4742c0
     * @note[short] Android
     */
    void onSelectButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3de2a4
     * @note[short] MacOS (Intel): 0x473500
     * @note[short] Android
     */
    void resetGame();

    /**
     * @note[short] MacOS (ARM): 0x3df35c
     * @note[short] MacOS (Intel): 0x4747c0
     * @note[short] Android
     */
    void resetGameTimer();

    /**
     * @note[short] MacOS (ARM): 0x3df3d4
     * @note[short] MacOS (Intel): 0x474850
     * @note[short] Android
     */
    void scaleOutGame(bool won);

    /**
     * @note[short] MacOS (ARM): 0x3df3c8
     * @note[short] MacOS (Intel): 0x474830
     * @note[short] Android
     */
    void showGameOver();

    /**
     * @note[short] MacOS (ARM): 0x3df780
     * @note[short] MacOS (Intel): 0x378ea0
     * @note[short] Android
     */
    void showGameWon();
    cocos2d::CCArray* m_gameObjects;
    cocos2d::CCArray* m_requiredObjects;
    cocos2d::CCMenu* m_mainMenu;
    int m_selectedObject;
    int m_gameDifficulty;
    bool m_gameActive;
    float m_timeElapsed;
    float m_gameTime;
    cocos2d::CCSprite* m_timeBarSprite;
};
