#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GooglePlayManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GooglePlayManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GooglePlayManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x779d0
     * @note[short] Android: Rebinded
     */
    virtual  ~GooglePlayManager();

    /**
     * @note[short] MacOS (ARM): 0x3d7aec
     * @note[short] MacOS (Intel): 0x46c290
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x454ac
     * @note[short] Android
     */
    static GooglePlayManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x3d7b58
     * @note[short] MacOS (Intel): 0x46c300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4550c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3d7b60
     * @note[short] MacOS (Intel): 0x46c310
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void googlePlaySignedIn();
    GooglePlayDelegate* m_delegate1;
    GooglePlayDelegate* m_delegate2;
};
