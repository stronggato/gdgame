#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>

class SelectEventLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SelectEventLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectEventLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectEventLayer();

    /**
     * @note[short] MacOS (Intel): 0x5a42f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x485820
     * @note[short] Android: Rebinded
     */
     ~SelectEventLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SelectEventLayer* create(SetupEventLinkPopup* popup, std::set<int>& eventIDs);

    /**
     * @note[short] MacOS (ARM): 0x4f504c
     * @note[short] MacOS (Intel): 0x5a69e0
     * @note[short] Windows: 0xa6410
     * @note[short] iOS: 0x487444
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4f4f94
     * @note[short] MacOS (Intel): 0x5a6910
     * @note[short] Windows: 0x5f9a60
     * @note[short] iOS: 0x487400
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f4d60
     * @note[short] MacOS (Intel): 0x28bfb0
     * @note[short] Windows: 0x5f9910
     * @note[short] iOS: 0x4872dc
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f4808
     * @note[short] MacOS (Intel): 0x5a6170
     * @note[short] iOS: 0x486f5c
     * @note[short] Android
     */
    void addToggle(int id, std::string info);

    /**
     * @note[short] MacOS (ARM): 0x4f32d4
     * @note[short] MacOS (Intel): 0x5a46c0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x4858f0
     * @note[short] Android
     */
    bool init(SetupEventLinkPopup* popup, std::set<int>& eventIDs);

    /**
     * @note[short] MacOS (ARM): 0x4f5070
     * @note[short] MacOS (Intel): 0x5a6a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x487468
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition();

    /**
     * @note[short] MacOS (ARM): 0x4f517c
     * @note[short] MacOS (Intel): 0x5a6b40
     * @note[short] Windows: 0x5f9f80
     * @note[short] iOS: 0x487574
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
    SetupEventLinkPopup* m_eventLinkPopup;
    bool m_eventsChanged;
    int m_unk3b4;
    int m_toggleCount;
    int m_maxPage;
    std::map<int, std::string> m_eventInfos;
    std::set<int> m_eventIDs;
};
