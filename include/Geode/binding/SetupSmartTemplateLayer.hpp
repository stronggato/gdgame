#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class SetupSmartTemplateLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SetupSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartTemplateLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5e8190
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSmartTemplateLayer();

    /**
     * @note[short] Windows: 0x5ea660
     * @note[short] iOS: 0x1c19c0
     * @note[short] Android
     */
    static SetupSmartTemplateLayer* create(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x441e24
     * @note[short] MacOS (Intel): 0x4e3020
     * @note[short] Windows: 0x5eb990
     * @note[short] iOS: 0x795a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x441ac8
     * @note[short] MacOS (Intel): 0x4e2d20
     * @note[short] Windows: 0x5eb3b0
     * @note[short] iOS: 0x792c0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x441d18
     * @note[short] MacOS (Intel): 0x4e2f40
     * @note[short] Windows: 0x5eb710
     * @note[short] iOS: 0x79444
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x441bac
     * @note[short] MacOS (Intel): 0x4e2e00
     * @note[short] Windows: 0x5eb490
     * @note[short] iOS: 0x79324
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x441e04
     * @note[short] MacOS (Intel): 0x4e3000
     * @note[short] Windows: 0x1639d0
     * @note[short] iOS: 0x79580
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x440e50
     * @note[short] MacOS (Intel): 0x4e2010
     * @note[short] iOS: 0x299dc
     * @note[short] Android
     */
    bool init(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x441728
     * @note[short] MacOS (Intel): 0x4e28f0
     * @note[short] Windows: 0x5eb890
     * @note[short] iOS: 0x78ff8
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x441750
     * @note[short] MacOS (Intel): 0x4e2920
     * @note[short] Windows: 0x195450
     * @note[short] iOS: 0x79020
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4419f8
     * @note[short] MacOS (Intel): 0x4e2c50
     * @note[short] Windows: 0x5eb8c0
     * @note[short] iOS: 0x791f0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    GJSmartTemplate* m_smartTemplate;
    CCTextInputNode* m_nameInput;
    cocos2d::CCNode* m_unk298;
};
