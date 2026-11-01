#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCDrawNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class HardStreak : public cocos2d::CCDrawNode {
public:
    static constexpr auto CLASS_NAME = "HardStreak";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(HardStreak, cocos2d::CCDrawNode)

    /**
     * @note[short] Windows: 0x3bce70
     * @note[short] Android: Rebinded
     */
    virtual  ~HardStreak();

    /**
     * @note[short] MacOS (ARM): 0x5cf34
     * @note[short] MacOS (Intel): 0x63f10
     * @note[short] Windows: 0x3bcee0
     * @note[short] iOS: 0x659b4
     * @note[short] Android
     */
    static HardStreak* create();

    /**
     * @note[short] MacOS (ARM): 0x3debb8
     * @note[short] MacOS (Intel): 0x251e90
     * @note[short] Windows: 0x3bcfb0
     * @note[short] iOS: 0x65a28
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void addPoint(cocos2d::CCPoint point);

    /**
     * @note[short] Android
     */
    TodoReturn appendQuad(cocos2d::CCPoint const* p0, cocos2d::ccColor4F const& p1);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x666ec
     * @note[short] Android
     */
    void clearAboveXPos(float x);

    /**
     * @note[short] MacOS (ARM): 0x5ddf0
     * @note[short] MacOS (Intel): 0x65070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x66654
     * @note[short] Android
     */
    void clearBehindXPos(float x);

    /**
     * @note[short] MacOS (ARM): 0x5e06c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x66784
     * @note[short] Android
     */
    HardStreak* createDuplicate();

    /**
     * @note[short] Android
     */
    TodoReturn ensureQuadCapacity(unsigned int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x65a68
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x5e038
     * @note[short] MacOS (Intel): 0x65290
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double normalizeAngle(double angle);

    /**
     * @note[short] MacOS (ARM): 0x5df20
     * @note[short] MacOS (Intel): 0x651b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint quadCornerOffset(cocos2d::CCPoint start, cocos2d::CCPoint end, float width);

    /**
     * @note[short] MacOS (ARM): 0x5daec
     * @note[short] MacOS (Intel): 0x64d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x66274
     * @note[short] Android
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): 0x5daa4
     * @note[short] MacOS (Intel): 0x64cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x6622c
     * @note[short] Android
     */
    void resumeStroke();

    /**
     * @note[short] MacOS (ARM): 0x5d120
     * @note[short] MacOS (Intel): 0x64110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x65aec
     * @note[short] Android
     */
    void scheduleAutoUpdate();

    /**
     * @note[short] MacOS (ARM): 0x5dab0
     * @note[short] MacOS (Intel): 0x64cd0
     * @note[short] Windows: 0x27c6f0
     * @note[short] iOS: 0x66238
     * @note[short] Android
     */
    void stopStroke();

    /**
     * @note[short] MacOS (ARM): 0x5d130
     * @note[short] MacOS (Intel): 0x64130
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x4c3b84
     * @note[short] Android
     */
    void updateStroke(float dt);
    cocos2d::CCArray* m_pointArray;
    cocos2d::CCPoint m_currentPoint;
    float m_waveSize;
    float m_pulseSize;
    bool m_isSolid;
    bool m_isFlipped;
    bool m_drawStreak;
};
