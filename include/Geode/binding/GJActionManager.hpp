#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJActionManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJActionManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJActionManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJActionManager();

    /**
     * @note[short] MacOS (ARM): 0x5f3c5c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398a08
     * @note[short] Android: Rebinded
     */
     ~GJActionManager();

    /**
     * @note[short] MacOS (ARM): 0x5f3d14
     * @note[short] MacOS (Intel): 0x6df050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398a5c
     * @note[short] Android
     */
    static GJActionManager* create();

    /**
     * @note[short] MacOS (ARM): 0x5f3da8
     * @note[short] MacOS (Intel): 0x6df0e0
     * @note[short] Windows: 0x302e90
     * @note[short] iOS: 0x398ad8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5f3e1c
     * @note[short] MacOS (Intel): 0x6df150
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCAction* getInternalAction(int id);

    /**
     * @note[short] MacOS (ARM): 0x5f3de0
     * @note[short] MacOS (Intel): 0x6df120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398b10
     * @note[short] Android
     */
    void runInternalAction(cocos2d::CCAction* action, cocos2d::CCNode* target);

    /**
     * @note[short] MacOS (ARM): 0x14fe0
     * @note[short] MacOS (Intel): 0x178d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398b9c
     * @note[short] Android
     */
    void stopAllInternalActions();

    /**
     * @note[short] MacOS (ARM): 0x5f3e28
     * @note[short] MacOS (Intel): 0x6df170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398b4c
     * @note[short] Android
     */
    void stopInternalAction(int id);

    /**
     * @note[short] MacOS (ARM): 0x5f3f18
     * @note[short] MacOS (Intel): 0x6df260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398ba8
     * @note[short] Android
     */
    void updateInternalActions(float dt, bool remove);
    cocos2d::CCDictionary* m_internalActions;
};
