#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class MapSelectLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MapSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MapSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (Intel): 0x251d70
     * @note[short] Android
     */
    static MapSelectLayer* create();

    /**
     * @note[short] MacOS (Intel): 0x251d30
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x1fbaa0
     * @note[short] MacOS (Intel): 0x252df0
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x1fac2c
     * @note[short] MacOS (Intel): 0x251e90
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fbd50
     * @note[short] MacOS (Intel): 0x253090
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x1fc320
     * @note[short] MacOS (Intel): 0x253730
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x1fc418
     * @note[short] MacOS (Intel): 0x253830
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x1fc6e4
     * @note[short] MacOS (Intel): 0x253b20
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x1fc700
     * @note[short] MacOS (Intel): 0x253b60
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1fbc88
     * @note[short] MacOS (Intel): 0x252fd0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1fb868
     * @note[short] MacOS (Intel): 0x252ba0
     * @note[short] Android
     */
    virtual bool scrollWheel(float y, float x);

    /**
     * @note[short] MacOS (ARM): 0x1fbec4
     * @note[short] MacOS (Intel): 0x253240
     * @note[short] Android
     */
    bool checkTouchMonster(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1fc318
     * @note[short] MacOS (Intel): 0x253720
     * @note[short] Android
     */
    GJMapObject* createObjectAtPoint(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1fba1c
     * @note[short] MacOS (Intel): 0x252d70
     * @note[short] Android
     */
    cocos2d::CCPoint getConstrainedMapPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1fb2b4
     * @note[short] MacOS (Intel): 0x252570
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    GJBigSprite* m_bigSprite;
    SimplePlayer* m_player;
    cocos2d::CCNode* m_mainLayer;
    bool m_unloadTexturesOnExit;
    bool m_backPressed;
    bool m_blockExit;
    bool m_inTouch;
    double m_lastTouchTime;
    bool m_editMode;
    cocos2d::CCPoint m_lastTouchPos;
    cocos2d::CCPoint m_mapPos;
    cocos2d::CCArray* m_monsters;
    LevelEditorLayer* m_editorLayer;
};
