#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectSFXSortLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSFXSortLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSFXSortLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a280
     * @note[short] Android: Rebinded
     */
    virtual  ~SelectSFXSortLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectSFXSortLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36a690
     * @note[short] Android
     */
    static SelectSFXSortLayer* create(AudioSortType sortType);

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3ab058
     * @note[short] Windows: 0x61cdc0
     * @note[short] iOS: 0x1f68d4
     * @note[short] Android
     */
    bool init(AudioSortType sortType);

    /**
     * @note[short] MacOS (ARM): 0x3ab4d0
     * @note[short] MacOS (Intel): 0x4352a0
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x1f6d48
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ab50c
     * @note[short] MacOS (Intel): 0x4352d0
     * @note[short] Windows: 0x61d460
     * @note[short] iOS: 0x1f6d84
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    AudioSortType m_sortType;
    SelectSFXSortDelegate* m_delegate;
};
