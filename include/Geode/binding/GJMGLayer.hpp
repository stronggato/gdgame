#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJMGLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJMGLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMGLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x1a08c0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJMGLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJMGLayer();

    /**
     * @note[short] MacOS (Intel): 0x6bce10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJMGLayer* create(int index);

    /**
     * @note[short] MacOS (ARM): 0x5d5bec
     * @note[short] MacOS (Intel): 0x6bcdf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float defaultYOffsetForBG2(int index);

    /**
     * @note[short] MacOS (ARM): 0x5d6684
     * @note[short] MacOS (Intel): 0x6bd8c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30510
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5d6654
     * @note[short] MacOS (Intel): 0x6bd890
     * @note[short] Windows: 0x384ee0
     * @note[short] iOS: 0x30504
     * @note[short] Android
     */
    virtual void showGround();

    /**
     * @note[short] MacOS (ARM): 0x5d6660
     * @note[short] MacOS (Intel): 0x6bd8a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void deactivateGround();

    /**
     * @note[short] MacOS (ARM): 0x5d5ce8
     * @note[short] MacOS (Intel): 0x6bcf20
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2fcec
     * @note[short] Android
     */
    bool init(int index);

    /**
     * @note[short] MacOS (ARM): 0x5d6164
     * @note[short] MacOS (Intel): 0x6bd3b0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x30054
     * @note[short] Android
     */
    void loadGroundSprites(int count, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x10490c
     * @note[short] MacOS (Intel): 0x6bd720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x303a0
     * @note[short] Android
     */
    float scaleGround(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5d63b0
     * @note[short] MacOS (Intel): 0x6bd5e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleVisible01(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x5d63f0
     * @note[short] MacOS (Intel): 0x6bd620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x302a0
     * @note[short] Android
     */
    void toggleVisible02(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x5d6320
     * @note[short] MacOS (Intel): 0x6bd550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30210
     * @note[short] Android
     */
    void updateGroundColor(cocos2d::ccColor3B color, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x5d6468
     * @note[short] MacOS (Intel): 0x6bd6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30318
     * @note[short] Android
     */
    void updateGroundOpacity(unsigned char opacity, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x5d6418
     * @note[short] MacOS (Intel): 0x6bd650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x302c8
     * @note[short] Android
     */
    void updateGroundPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x5d656c
     * @note[short] MacOS (Intel): 0x6bd7b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3041c
     * @note[short] Android
     */
    void updateGroundWidth(bool useThis);

    /**
     * @note[short] MacOS (ARM): 0x5d6688
     * @note[short] MacOS (Intel): 0x6bd8d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30514
     * @note[short] Android
     */
    void updateMG01Blend(bool blend);

    /**
     * @note[short] MacOS (ARM): 0x5d66c4
     * @note[short] MacOS (Intel): 0x6bd920
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30550
     * @note[short] Android
     */
    void updateMG02Blend(bool blend);
    cocos2d::CCSprite* m_ground1Sprite;
    cocos2d::CCSprite* m_ground2Sprite;
    float m_textureWidth;
    void* m_unk1b0;
    bool m_showGround;
    float m_groundWidth;
    bool m_showGround1;
    bool m_showGround2;
    float m_unk1c4;
    bool m_cameraRotated;
    bool m_blendMG1;
    bool m_blendMG2;
    cocos2d::CCSpriteBatchNode* m_mg1BatchNode;
    cocos2d::CCSpriteBatchNode* m_mg2BatchNode;
    float m_groundScale;
    float m_ground2Offset;
};
