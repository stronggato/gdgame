#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJItemIcon : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJItemIcon";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJItemIcon, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d0034
     * @note[short] Android: Out of line
     */
     GJItemIcon();

    /**
     * @note[short] MacOS (ARM): 0x2e8e8c
     * @note[short] MacOS (Intel): 0x359da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a2368
     * @note[short] Android: Rebinded
     */
     ~GJItemIcon();

    /**
     * @note[short] MacOS (ARM): 0x2e8f90
     * @note[short] MacOS (Intel): 0x359ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a23e8
     * @note[short] Android
     */
    static GJItemIcon* create(UnlockType type, int id, cocos2d::ccColor3B color1, cocos2d::ccColor3B color2, bool dark, bool unused, bool noLabel, cocos2d::ccColor3B unlockColor);

    /**
     * @note[short] MacOS (ARM): 0x2e6284
     * @note[short] MacOS (Intel): 0x356d00
     * @note[short] Windows: 0x1fca60
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJItemIcon* createBrowserItem(UnlockType unlockType, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x2e8f74
     * @note[short] MacOS (Intel): 0x359ec0
     * @note[short] Windows: 0x380880
     * @note[short] iOS: 0x3a23cc
     * @note[short] Android
     */
    static GJItemIcon* createStoreItem(UnlockType type, int id, bool dark, cocos2d::ccColor3B unlockColor);

    /**
     * @note[short] MacOS (ARM): 0x2e62a4
     * @note[short] MacOS (Intel): 0x356d30
     * @note[short] Windows: 0x3816f0
     * @note[short] iOS: 0x3a032c
     * @note[short] Android
     */
    static float scaleForType(UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e96f8
     * @note[short] MacOS (Intel): 0x35a6b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a29f0
     * @note[short] Android
     */
    static cocos2d::ccColor3B unlockedColorForType(int type);

    /**
     * @note[short] MacOS (ARM): 0x2e95cc
     * @note[short] MacOS (Intel): 0x35a570
     * @note[short] Windows: 0x381220
     * @note[short] iOS: 0x3a2954
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2e679c
     * @note[short] MacOS (Intel): 0x357460
     * @note[short] iOS: 0x3a0820
     * @note[short] Android
     */
    void changeToLockedState(float scale);

    /**
     * @note[short] MacOS (ARM): 0x2e6774
     * @note[short] MacOS (Intel): 0x3573e0
     * @note[short] Windows: 0x3812c0
     * @note[short] iOS: 0x3a07f8
     * @note[short] Android
     */
    void darkenStoreItem(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2e976c
     * @note[short] MacOS (Intel): 0x35a710
     * @note[short] Windows: 0x4dc40
     * @note[short] iOS: 0x3a2a60
     * @note[short] Android
     */
    void darkenStoreItem(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2e90a0
     * @note[short] MacOS (Intel): 0x35a010
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3a24a8
     * @note[short] Android
     */
    bool init(UnlockType type, int id, cocos2d::ccColor3B color1, cocos2d::ccColor3B color2, bool dark, bool unused, bool noLabel, cocos2d::ccColor3B unlockColor);

    /**
     * @note[short] MacOS (ARM): 0x2e687c
     * @note[short] MacOS (Intel): 0x357510
     * @note[short] Windows: 0x381560
     * @note[short] iOS: 0x3a08fc
     * @note[short] Android
     */
    void toggleEnabledState(bool enabled);
    cocos2d::CCSprite* m_player;
    int m_iconRequestID;
    cocos2d::CCSize m_playerSize;
    bool m_isIcon;
    int m_unlockID;
    UnlockType m_unlockType;
};
