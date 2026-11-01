#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class ClearPlatformerSavesPopup : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "ClearPlatformerSavesPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ClearPlatformerSavesPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xa2fc0
     * @note[short] Android: Rebinded
     */
    virtual  ~ClearPlatformerSavesPopup();

    /**
     * @note[short] Android
     */
    static ClearPlatformerSavesPopup* create();

    /**
     * @note[short] Windows: 0xa3080
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xa40d0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onIncludeFavoritesToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateStats();
};
