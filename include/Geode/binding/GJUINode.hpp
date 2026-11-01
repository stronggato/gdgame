#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJUINode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUINode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUINode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x10f400
     * @note[short] Android: Rebinded
     */
    virtual  ~GJUINode();

    /**
     * @note[short] MacOS (ARM): 0x425528
     * @note[short] MacOS (Intel): 0x4c21c0
     * @note[short] Windows: 0x6698e0
     * @note[short] iOS: 0x50560
     * @note[short] Android
     */
    static GJUINode* create(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0xf5aac
     * @note[short] MacOS (Intel): 0x4c6870
     * @note[short] Windows: 0x670780
     * @note[short] iOS: 0x533cc
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x42943c
     * @note[short] MacOS (Intel): 0x4c6720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x53280
     * @note[short] Android
     */
    int activeRangeTouchTest(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x428478
     * @note[short] MacOS (Intel): 0x4c55c0
     * @note[short] Windows: 0x670450
     * @note[short] iOS: 0x52994
     * @note[short] Android
     */
    int activeTouchTest(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (Intel): 0x4c6200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x53110
     * @note[short] Android
     */
    float getButtonScale();

    /**
     * @note[short] MacOS (Intel): 0x3e3f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x53120
     * @note[short] Android
     */
    uint8_t getOpacity();

    /**
     * @note[short] MacOS (ARM): 0x4284e8
     * @note[short] MacOS (Intel): 0x4c5630
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x52a04
     * @note[short] Android
     */
    void highlightButton(int button);

    /**
     * @note[short] MacOS (ARM): 0x428774
     * @note[short] MacOS (Intel): 0x4c5940
     * @note[short] Windows: 0x66fe00
     * @note[short] iOS: 0x52c7c
     * @note[short] Android
     */
    bool init(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x428fcc
     * @note[short] MacOS (Intel): 0x4c6240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x50f6c
     * @note[short] Android
     */
    void loadFromConfig(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x4263bc
     * @note[short] MacOS (Intel): 0x4c30e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x51174
     * @note[short] Android
     */
    void resetState();

    /**
     * @note[short] MacOS (ARM): 0x428f14
     * @note[short] MacOS (Intel): 0x4c6150
     * @note[short] Windows: 0x6700b0
     * @note[short] iOS: 0x53078
     * @note[short] Android
     */
    void saveToConfig(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x428ec4
     * @note[short] MacOS (Intel): 0x4c6110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x53028
     * @note[short] Android
     */
    void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x428400
     * @note[short] MacOS (Intel): 0x4c5560
     * @note[short] Windows: 0x6706f0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleHighlight(int button, bool highlight);

    /**
     * @note[short] MacOS (ARM): 0x428c90
     * @note[short] MacOS (Intel): 0x41fe20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x52f58
     * @note[short] Android
     */
    void toggleModeB(bool modeB);

    /**
     * @note[short] MacOS (ARM): 0x4285a0
     * @note[short] MacOS (Intel): 0x4c56d0
     * @note[short] Windows: 0x670630
     * @note[short] iOS: 0x52ab8
     * @note[short] Android
     */
    void touchEnded();

    /**
     * @note[short] MacOS (ARM): 0x4282a8
     * @note[short] MacOS (Intel): 0x4c5410
     * @note[short] Windows: 0x670340
     * @note[short] iOS: 0x528fc
     * @note[short] Android
     */
    int touchTest(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x429244
     * @note[short] MacOS (Intel): 0x4c64f0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x53130
     * @note[short] Android
     */
    void updateButtonFrames();

    /**
     * @note[short] MacOS (ARM): 0x428ad0
     * @note[short] MacOS (Intel): 0x4c5cf0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x52e60
     * @note[short] Android
     */
    void updateButtonPositions();

    /**
     * @note[short] MacOS (ARM): 0x428d94
     * @note[short] MacOS (Intel): 0x4c5fe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x52fb8
     * @note[short] Android
     */
    void updateButtonScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x428c84
     * @note[short] MacOS (Intel): 0x4c5ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDeadzone(int deadzone);

    /**
     * @note[short] MacOS (ARM): 0x428ba4
     * @note[short] MacOS (Intel): 0x4c5dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x52f3c
     * @note[short] Android
     */
    void updateDragRadius(float radius);

    /**
     * @note[short] MacOS (ARM): 0x429360
     * @note[short] MacOS (Intel): 0x4c6620
     * @note[short] Android
     */
    void updateHeight(float height);

    /**
     * @note[short] MacOS (ARM): 0x4293b4
     * @note[short] MacOS (Intel): 0x4c6690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x531f8
     * @note[short] Android
     */
    void updateRangePos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x428a80
     * @note[short] MacOS (Intel): 0x4c5c90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x52e10
     * @note[short] Android
     */
    void updateSize(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x42930c
     * @note[short] MacOS (Intel): 0x4c65b0
     * @note[short] Android
     */
    void updateWidth(float width);
    cocos2d::CCSprite* m_firstSprite;
    cocos2d::CCSprite* m_secondSprite;
    cocos2d::CCRect m_rect;
    int m_touchID;
    cocos2d::CCPoint m_touchDelta;
    cocos2d::CCPoint m_touchPosition;
    float m_radius;
    float m_deadzone;
    bool m_drawLines;
    bool m_modeB;
    bool m_snap;
    bool m_swiping;
    bool m_moving;
    bool m_player2;
    bool m_oneButton;
    bool m_split;
    PlayerButton m_currentButton;
};
