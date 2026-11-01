#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>

class OptionsScrollLayer : public FLAlertLayer, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "OptionsScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsScrollLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x476e50
     * @note[short] Android: Rebinded
     */
    virtual  ~OptionsScrollLayer();

    /**
     * @note[short] MacOS (ARM): 0x435e70
     * @note[short] Android
     */
    static OptionsScrollLayer* create(cocos2d::CCArray* p0, bool p1, std::string p2, MusicSearchResult* p3);

    /**
     * @note[short] MacOS (ARM): 0x5fde1c
     * @note[short] MacOS (Intel): 0x6ea4d0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x4695e0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x47c1b0
     * @note[short] iOS: 0x4695d4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5fde54
     * @note[short] MacOS (Intel): 0x6ea510
     * @note[short] Windows: 0x47c1c0
     * @note[short] iOS: 0x469618
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] Windows: 0x47bdf0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addTagMatchToggle();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getRelevantObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x87b4ec
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, bool p1, std::string p2, MusicSearchResult* p3);

    /**
     * @note[short] Android
     */
    void onClearAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClearSearchText(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMatchToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6589c
     * @note[short] Windows: 0x1bc5e0
     * @note[short] iOS: 0x469044
     * @note[short] Android
     */
    void setupList(cocos2d::CCArray* objects);
    cocos2d::CCArray* m_optionObjects;
    GJCommentListLayer* m_listLayer;
    bool m_recreateList;
    int m_minCount;
};
