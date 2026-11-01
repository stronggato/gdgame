#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>

class TutorialPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialPopup, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static TutorialPopup* create(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5bef58
     * @note[short] MacOS (Intel): 0x6a4010
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5bf034
     * @note[short] MacOS (Intel): 0x6a40e0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x5bf090
     * @note[short] MacOS (Intel): 0x6a4130
     * @note[short] Android
     */
    void animateMenu();

    /**
     * @note[short] MacOS (ARM): 0x5beeec
     * @note[short] MacOS (Intel): 0x6a3fb0
     * @note[short] Android
     */
    void closeTutorial(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5becf0
     * @note[short] MacOS (Intel): 0x6a3db0
     * @note[short] Android
     */
    bool init(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5bf100
     * @note[short] MacOS (Intel): 0x6a41a0
     * @note[short] Android
     */
    void registerForCallback(cocos2d::SEL_MenuHandler selector, cocos2d::CCNode* target);
    std::string m_currentSprite;
    bool m_callbackRegistered;
    cocos2d::SEL_MenuHandler m_callbackSelector;
    cocos2d::CCNode* m_targetNode;
    CCMenuItemSpriteExtra* m_closeButton;
};
