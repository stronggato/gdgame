#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>
#include <Geode/mapping/unordered_map.hpp>

class DrawGridLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "DrawGridLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DrawGridLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x3e9eb0
     * @note[short] Android: Rebinded
     */
    virtual  ~DrawGridLayer();

    /**
     * @note[short] MacOS (ARM): 0x70d14
     * @note[short] MacOS (Intel): 0xab8a0
     * @note[short] iOS: 0x13d5f4
     * @note[short] Android
     */
    static DrawGridLayer* create(cocos2d::CCNode* parent, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0xbd528
     * @note[short] MacOS (Intel): 0xd6c40
     * @note[short] Windows: 0x407960
     * @note[short] iOS: 0x40a074
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0xbd63c
     * @note[short] MacOS (Intel): 0xd6dd0
     * @note[short] Windows: 0x407b70
     * @note[short] iOS: 0x40a188
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0xa8e34
     * @note[short] MacOS (Intel): 0xbcc70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addAudioLineObject(AudioLineGuideGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa8c7c
     * @note[short] MacOS (Intel): 0xbcaf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fd1a4
     * @note[short] Android
     */
    void addToEffects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa912c
     * @note[short] MacOS (Intel): 0xbd270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fd524
     * @note[short] Android
     */
    void addToGuides(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa91b8
     * @note[short] MacOS (Intel): 0xbd2f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fd5b0
     * @note[short] Android
     */
    void addToSpeedObjects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xbd45c
     * @note[short] MacOS (Intel): 0xd6b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x409fb4
     * @note[short] Android
     */
    cocos2d::CCPoint getPortalMinMax(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xbd2fc
     * @note[short] MacOS (Intel): 0xd69c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x409e84
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* parent, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x9c9b0
     * @note[short] MacOS (Intel): 0xae5d0
     * @note[short] Windows: 0x1f41e0
     * @note[short] iOS: 0x3f6fc8
     * @note[short] Android
     */
    void loadTimeMarkers(std::string markers);

    /**
     * @note[short] MacOS (ARM): 0xaeed4
     * @note[short] MacOS (Intel): 0xc3d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): 0xbd51c
     * @note[short] MacOS (Intel): 0xd6c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void postUpdate();

    /**
     * @note[short] MacOS (ARM): 0xa90f4
     * @note[short] MacOS (Intel): 0xbd220
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeAudioLineObject(AudioLineGuideGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa90c4
     * @note[short] MacOS (Intel): 0xbd1f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeFromEffects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa9120
     * @note[short] MacOS (Intel): 0xbd250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fd518
     * @note[short] Android
     */
    void removeFromGuides(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa916c
     * @note[short] MacOS (Intel): 0xbd2b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fd564
     * @note[short] Android
     */
    void removeFromSpeedObjects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xbd44c
     * @note[short] MacOS (Intel): 0xd6b40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sortSpeedObjects();

    /**
     * @note[short] MacOS (ARM): 0xad970
     * @note[short] MacOS (Intel): 0xc2270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fffa4
     * @note[short] Android
     */
    float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, bool ignoreWarp, bool ignoreRotate, int id);

    /**
     * @note[short] MacOS (ARM): 0xbd62c
     * @note[short] MacOS (Intel): 0xd6db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40a178
     * @note[short] Android
     */
    void updateMusicGuideTime(float time);

    /**
     * @note[short] MacOS (ARM): 0xad8c4
     * @note[short] MacOS (Intel): 0xc21d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fff08
     * @note[short] Android
     */
    void updateTimeMarkers();
    std::array<cocos2d::CCPoint, 400>* m_pointArray1;
    std::array<cocos2d::CCPoint, 400>* m_pointArray2;
    std::array<cocos2d::CCPoint, 400>* m_pointArray3;
    std::unordered_map<int, AudioLineGuideGameObject*> m_audioLineObjects;
    float m_musicTime;
    float m_playbackTime;
    float m_oldPlaybackTime;
    float m_playbackX;
    float m_playbackY;
    bool m_sortEffects;
    LevelEditorLayer* m_editorLayer;
    std::string m_timeMarkerString;
    cocos2d::CCNode* m_objectLayer;
    cocos2d::CCArray* m_timeMarkers;
    cocos2d::CCArray* m_effectGameObjects;
    cocos2d::CCArray* m_guideObjects;
    cocos2d::CCArray* m_speedObjects;
    double m_beatWidth;
    float m_currentSpeed;
    float m_slowSpeed;
    float m_normalSpeed;
    float m_fastSpeed;
    float m_fasterSpeed;
    float m_fastestSpeed;
    bool m_updateTimeMarkers;
    bool m_updateSpeedObjects;
    float m_gridSize;
};
