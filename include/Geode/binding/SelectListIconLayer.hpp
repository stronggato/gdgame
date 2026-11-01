#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectListIconLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectListIconLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectListIconLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectListIconLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~SelectListIconLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SelectListIconLayer* create(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x2dd274
     * @note[short] MacOS (Intel): 0x34ceb0
     * @note[short] Windows: 0x42eb30
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2dcbdc
     * @note[short] Windows: 0x42e240
     * @note[short] iOS: 0x2e2850
     * @note[short] Android
     */
    bool init(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x2dd21c
     * @note[short] MacOS (Intel): 0x34ce60
     * @note[short] iOS: 0x2e2dd4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2dd124
     * @note[short] MacOS (Intel): 0x34cda0
     * @note[short] Windows: 0x42ea30
     * @note[short] iOS: 0x2e2cf4
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    cocos2d::CCArray* m_difficulties;
    int m_currentDifficulty;
    SelectListIconDelegate* m_delegate;
};
