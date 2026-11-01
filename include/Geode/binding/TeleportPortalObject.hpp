#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/RingObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class TeleportPortalObject : public RingObject {
public:
    static constexpr auto CLASS_NAME = "TeleportPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TeleportPortalObject, RingObject)

    /**
     * @note[short] Windows: 0x6341a0
     * @note[short] Android: Rebinded
     */
    virtual  ~TeleportPortalObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43eaf8
     * @note[short] Android: Out of line
     */
     TeleportPortalObject();

    /**
     * @note[short] MacOS (ARM): 0x15d1dc
     * @note[short] MacOS (Intel): 0x19e300
     * @note[short] Windows: 0x4fffb0
     * @note[short] iOS: 0x42b80c
     * @note[short] Android
     */
    static TeleportPortalObject* create(char const* frame, bool trigger);

    /**
     * @note[short] MacOS (ARM): 0x15d53c
     * @note[short] MacOS (Intel): 0x19e6a0
     * @note[short] Windows: 0x64faf0
     * @note[short] iOS: 0x42ba48
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x15d5e8
     * @note[short] MacOS (Intel): 0x19e750
     * @note[short] Windows: 0x64fc70
     * @note[short] iOS: 0x42baf4
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x15d3a0
     * @note[short] MacOS (Intel): 0x19e500
     * @note[short] Windows: 0x64fa30
     * @note[short] iOS: 0x42b8b8
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x15f478
     * @note[short] MacOS (Intel): 0x1a0f00
     * @note[short] Windows: 0x650650
     * @note[short] iOS: 0x42c484
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x15d74c
     * @note[short] Windows: 0x64fe80
     * @note[short] iOS: 0x42bc54
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x15d668
     * @note[short] MacOS (Intel): 0x19e7e0
     * @note[short] Windows: 0x64fd30
     * @note[short] iOS: 0x42bb74
     * @note[short] Android
     */
    virtual int addToGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x15d6e4
     * @note[short] MacOS (Intel): 0x19e840
     * @note[short] Windows: 0x64fdf0
     * @note[short] iOS: 0x42bbec
     * @note[short] Android
     */
    virtual void removeFromGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x15d65c
     * @note[short] MacOS (Intel): 0x19e7b0
     * @note[short] Windows: 0x4fe4f0
     * @note[short] iOS: 0x42bb68
     * @note[short] Android
     */
    virtual void setRotation2(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x15d660
     * @note[short] MacOS (Intel): 0x19e7c0
     * @note[short] Windows: 0x64fd10
     * @note[short] Android
     */
    virtual void addToGroup2(int id);

    /**
     * @note[short] MacOS (ARM): 0x15d664
     * @note[short] MacOS (Intel): 0x19e7d0
     * @note[short] Windows: 0x64fd20
     * @note[short] iOS: 0x42bb70
     * @note[short] Android
     */
    virtual void removeFromGroup2(int id);

    /**
     * @note[short] MacOS (ARM): 0x15d468
     * @note[short] MacOS (Intel): 0x19e5d0
     * @note[short] Windows: 0x64fb90
     * @note[short] iOS: 0x42b980
     * @note[short] Android
     */
    float getTeleportXOff(cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x15d310
     * @note[short] MacOS (Intel): 0x19e460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame, bool trigger);

    /**
     * @note[short] MacOS (ARM): 0x15d39c
     * @note[short] MacOS (Intel): 0x19e4f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setPositionOverride(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x15d364
     * @note[short] MacOS (Intel): 0x19e4c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setStartPosOverride(cocos2d::CCPoint position);
    TeleportPortalObject* m_orangePortal;
    bool m_isYellowPortal;
    float m_teleportYOffset;
    bool m_teleportEase;
    bool m_staticForceEnabled;
    float m_staticForce;
    bool m_redirectForceEnabled;
    float m_redirectForceMod;
    float m_redirectForceMin;
    float m_redirectForceMax;
    bool m_saveOffset;
    bool m_ignoreX;
    bool m_ignoreY;
    int m_gravityMode;
    bool m_staticForceAdditive;
    bool m_instantCamera;
    bool m_snapGround;
    bool m_redirectDash;
    cocos2d::CCPoint m_teleportPosition;
};
