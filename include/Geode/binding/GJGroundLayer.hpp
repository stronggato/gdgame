#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJGroundLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGroundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGroundLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x384210
     * @note[short] Android: Rebinded
     */
    virtual  ~GJGroundLayer();

    /**
     * @note[short] MacOS (ARM): 0x5d49a4
     * @note[short] MacOS (Intel): 0x6bbb40
     * @note[short] Windows: 0x384270
     * @note[short] iOS: 0x2eda4
     * @note[short] Android
     */
    static GJGroundLayer* create(int groundID, int lineType);

    /**
     * @note[short] MacOS (ARM): 0x5d5aa4
     * @note[short] MacOS (Intel): 0x6bcc70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fbd0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5d5898
     * @note[short] MacOS (Intel): 0x6bca90
     * @note[short] Windows: 0x384ee0
     * @note[short] iOS: 0x2fa68
     * @note[short] Android
     */
    virtual void showGround();

    /**
     * @note[short] MacOS (ARM): 0x5d58a4
     * @note[short] MacOS (Intel): 0x6bcaa0
     * @note[short] Windows: 0x384ef0
     * @note[short] iOS: 0x2fa74
     * @note[short] Android
     */
    virtual void fadeInGround(float duration);

    /**
     * @note[short] MacOS (ARM): 0x5d5a78
     * @note[short] MacOS (Intel): 0x6bcc40
     * @note[short] Windows: 0x3850e0
     * @note[short] iOS: 0x2fbc8
     * @note[short] Android
     */
    virtual void fadeOutGround(float duration);

    /**
     * @note[short] MacOS (ARM): 0x5d4f94
     * @note[short] MacOS (Intel): 0x6bc130
     * @note[short] iOS: 0x2f288
     * @note[short] Android
     */
    void createLine(int lineType);

    /**
     * @note[short] MacOS (ARM): 0x5d5a80
     * @note[short] MacOS (Intel): 0x6bcc50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void deactivateGround();

    /**
     * @note[short] MacOS (ARM): 0x5d5924
     * @note[short] MacOS (Intel): 0x6bcb10
     * @note[short] iOS: 0x2faf4
     * @note[short] Android
     */
    void fadeInFinished();

    /**
     * @note[short] MacOS (ARM): 0x5d5af0
     * @note[short] MacOS (Intel): 0x6bccc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getGroundY();

    /**
     * @note[short] MacOS (ARM): 0x5d5930
     * @note[short] MacOS (Intel): 0x6bcb20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideShadows();

    /**
     * @note[short] MacOS (ARM): 0x5d4a88
     * @note[short] MacOS (Intel): 0x6bbc50
     * @note[short] Windows: 0x3842f0
     * @note[short] iOS: 0x2ee28
     * @note[short] Android
     */
    bool init(int groundID, int lineType);

    /**
     * @note[short] MacOS (ARM): 0x5d5134
     * @note[short] MacOS (Intel): 0x6bc2f0
     * @note[short] Windows: 0x1182a0
     * @note[short] iOS: 0x2f424
     * @note[short] Android
     */
    void loadGroundSprites(int count, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x5d5aa8
     * @note[short] MacOS (Intel): 0x6bcc80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fbd4
     * @note[short] Android
     */
    void positionGround(float y);

    /**
     * @note[short] MacOS (ARM): 0x5d556c
     * @note[short] MacOS (Intel): 0x6bc720
     * @note[short] Windows: 0x7f090
     * @note[short] iOS: 0x2f7ac
     * @note[short] Android
     */
    float scaleGround(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5d5430
     * @note[short] MacOS (Intel): 0x6bc5d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f67c
     * @note[short] Android
     */
    void toggleVisible01(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x5d5470
     * @note[short] MacOS (Intel): 0x6bc610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f6b0
     * @note[short] Android
     */
    void toggleVisible02(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x5d53b0
     * @note[short] MacOS (Intel): 0x6bc550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5fc
     * @note[short] Android
     */
    void updateGround01Color(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x5d54e8
     * @note[short] MacOS (Intel): 0x6bc690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f728
     * @note[short] Android
     */
    void updateGround02Color(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x5d5498
     * @note[short] MacOS (Intel): 0x6bc640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f6d8
     * @note[short] Android
     */
    void updateGroundPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x5d5660
     * @note[short] MacOS (Intel): 0x6bc830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f830
     * @note[short] Android
     */
    void updateGroundWidth(bool useThis);

    /**
     * @note[short] MacOS (ARM): 0x5d585c
     * @note[short] MacOS (Intel): 0x6bca40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fa2c
     * @note[short] Android
     */
    void updateLineBlend(bool blend);

    /**
     * @note[short] MacOS (ARM): 0x5d57c8
     * @note[short] MacOS (Intel): 0x6bc9b0
     * @note[short] Windows: 0x384f70
     * @note[short] iOS: 0x2f998
     * @note[short] Android
     */
    void updateShadows();

    /**
     * @note[short] MacOS (ARM): 0x5d59b0
     * @note[short] MacOS (Intel): 0x6bcb80
     * @note[short] Windows: 0x385010
     * @note[short] iOS: 0x2fb00
     * @note[short] Android
     */
    void updateShadowXPos(float leftX, float rightX);
    cocos2d::CCSprite* m_ground1Sprite;
    cocos2d::CCSprite* m_ground2Sprite;
    float m_textureWidth;
    cocos2d::CCSprite* m_lineSprite;
    bool m_showGround;
    bool m_blendLine;
    float m_ground1Offset;
    int m_lineType;
    float m_groundWidth;
    bool m_showGround1;
    bool m_showGround2;
    float m_unk1cc;
    bool m_cameraRotated;
};
