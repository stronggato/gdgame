#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCTouchClipper.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class ScrollableContentLayer : public cocos2d::CCLayer, public cocos2d::CCTouchClipper {
public:
    static constexpr auto CLASS_NAME = "ScrollableContentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ScrollableContentLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x80a80
     * @note[short] Android: Rebinded
     */
    virtual  ~ScrollableContentLayer();

    /**
     * @note[short] Android
     */
    static ScrollableContentLayer* create(cocos2d::CCSize p0);

    /**
     * @note[short] Windows: 0x81ed0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Windows: 0x81cc0
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] Windows: 0x81d30
     * @note[short] Android
     */
    virtual bool touchInsideClip(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Windows: 0x81d60
     * @note[short] Android
     */
    virtual bool scrollWheel(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn applyContentPosition();

    /**
     * @note[short] Android
     */
    TodoReturn clampOffset();

    /**
     * @note[short] Android
     */
    TodoReturn consumePendingCancel();

    /**
     * @note[short] Android
     */
    TodoReturn contentWiped();

    /**
     * @note[short] Android
     */
    TodoReturn createOwnedMenu();

    /**
     * @note[short] Android
     */
    TodoReturn ensureOwnedContentNode();

    /**
     * @note[short] Android
     */
    TodoReturn ensureScrollThumb();

    /**
     * @note[short] Android
     */
    TodoReturn feedTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn feedTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn feedTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn feedTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn getOrCreateSection(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getOrCreateSectionMenu(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn handleTouchBegan(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    TodoReturn handleTouchCancelled(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    TodoReturn handleTouchEnded(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    TodoReturn handleTouchMoved(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCSize p0);

    /**
     * @note[short] Android
     */
    TodoReturn itemTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn itemTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn itemTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn itemTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn mountedVirtualRow(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn mountRowSlot(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn persistScrollOffset(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn reloadVirtualRows(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn remountVirtualRow(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn restoreScrollOffset(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn scrollTo(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn sectionAddChild(cocos2d::CCNode* p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn sectionClear();

    /**
     * @note[short] Android
     */
    TodoReturn sectionIndexForY(float p0);

    /**
     * @note[short] Android
     */
    void setContentHeight(float p0);

    /**
     * @note[short] Android
     */
    void setForwardedTouchesOnly(bool p0);

    /**
     * @note[short] Android
     */
    void setHorizontal(bool p0);

    /**
     * @note[short] Android
     */
    void setSectionHeight(float p0);

    /**
     * @note[short] Android
     */
    void setThumbColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setThumbOffset(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setThumbOpacity(unsigned char p0);

    /**
     * @note[short] Android
     */
    void setViewSize(cocos2d::CCSize p0);

    /**
     * @note[short] Android
     */
    void setVirtualRows(VirtualRowSource* p0, float p1, float p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn unmountAllRows();

    /**
     * @note[short] Android
     */
    TodoReturn unmountRowSlot(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateScrollThumb();

    /**
     * @note[short] Android
     */
    TodoReturn updateSectionVisibility();

    /**
     * @note[short] Android
     */
    TodoReturn updateVirtualRows();

    /**
     * @note[short] Android
     */
    TodoReturn worldClipRect();
};
