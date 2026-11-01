#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GameLevelOptionsLayer : public GJOptionsLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GameLevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameLevelOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] Windows: 0x397200
     * @note[short] Android: Rebinded
     */
    virtual  ~GameLevelOptionsLayer();

    /**
     * @note[short] Windows: 0x3af360
     * @note[short] Android
     */
    static GameLevelOptionsLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x7ef5e8
     * @note[short] Windows: 0x3a7b30
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (Intel): 0x906e40
     * @note[short] Windows: 0x3a7c60
     * @note[short] Android
     */
    virtual void didToggle(int tag);

    /**
     * @note[short] Windows: 0x3a7ef0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x20cfe4
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn toggleLDM();
    GJGameLevel* m_level;
};
