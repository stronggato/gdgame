#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class DemonFilterSelectLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonFilterSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonFilterSelectLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DemonFilterSelectLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~DemonFilterSelectLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43ef14
     * @note[short] Android
     */
    static DemonFilterSelectLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x61afc4
     * @note[short] Windows: 0x43da70
     * @note[short] iOS: 0x5f418
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x61b5b4
     * @note[short] MacOS (Intel): 0x70a850
     * @note[short] Windows: 0x43e200
     * @note[short] iOS: 0x5f978
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x61b554
     * @note[short] MacOS (Intel): 0x70a800
     * @note[short] Windows: 0x43e1b0
     * @note[short] iOS: 0x5f918
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61b48c
     * @note[short] MacOS (Intel): 0x70a740
     * @note[short] Windows: 0x43e0f0
     * @note[short] iOS: 0x5f850
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    cocos2d::CCArray* m_demons;
    void* m_unkPtr;
    int m_currentDemon;
    DemonFilterDelegate* m_delegate;
};
