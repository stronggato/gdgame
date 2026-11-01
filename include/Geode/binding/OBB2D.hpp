#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>

class OBB2D : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "OBB2D";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(OBB2D, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x7b2d0
     * @note[short] Android: Rebinded
     */
    virtual  ~OBB2D();

    /**
     * @note[short] MacOS (ARM): 0x5dca0c
     * @note[short] MacOS (Intel): 0x6c4370
     * @note[short] Windows: 0x7b140
     * @note[short] iOS: 0x1559a8
     * @note[short] Android
     */
    static OBB2D* create(cocos2d::CCPoint center, float width, float height, float rotationAngle);

    /**
     * @note[short] MacOS (ARM): 0x5dcb90
     * @note[short] MacOS (Intel): 0x6c44a0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x155b94
     * @note[short] Android
     */
    void calculateWithCenter(cocos2d::CCPoint center, float width, float height, float rotationAngle);

    /**
     * @note[short] MacOS (ARM): 0x5dcd08
     * @note[short] MacOS (Intel): 0x6c4650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x155d0c
     * @note[short] Android
     */
    void computeAxes();

    /**
     * @note[short] MacOS (ARM): 0x5dd328
     * @note[short] MacOS (Intel): 0x6c4d50
     * @note[short] Windows: 0x7bbc0
     * @note[short] iOS: 0x156080
     * @note[short] Android
     */
    cocos2d::CCRect getBoundingRect();

    /**
     * @note[short] MacOS (ARM): 0x5dcb10
     * @note[short] MacOS (Intel): 0x6c4430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x155b14
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint center, float width, float height, float rotationAngle);

    /**
     * @note[short] MacOS (ARM): 0x5dce08
     * @note[short] MacOS (Intel): 0x6c47b0
     * @note[short] Windows: 0x7b620
     * @note[short] iOS: 0x155dec
     * @note[short] Android
     */
    void orderCorners();

    /**
     * @note[short] MacOS (ARM): 0x5dd19c
     * @note[short] MacOS (Intel): 0x6c4b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x155fa0
     * @note[short] Android
     */
    bool overlaps(OBB2D* other);

    /**
     * @note[short] MacOS (ARM): 0x5dd1d8
     * @note[short] MacOS (Intel): 0x6c4b60
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x155fdc
     * @note[short] Android
     */
    bool overlaps1Way(OBB2D* other);
    std::array<cocos2d::CCPoint, 4> m_corners;
    std::array<cocos2d::CCPoint, 4> m_positions;
    std::array<cocos2d::CCPoint, 4> m_edges;
    std::array<double, 2> m_projections;
    cocos2d::CCPoint m_center;
};
