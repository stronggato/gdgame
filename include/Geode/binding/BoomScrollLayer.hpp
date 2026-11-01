#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCTouchClipper.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class BoomScrollLayer : public cocos2d::CCLayer, public cocos2d::CCTouchClipper {
public:
    static constexpr auto CLASS_NAME = "BoomScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomScrollLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     BoomScrollLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x409d7c
     * @note[short] Android: Rebinded
     */
     ~BoomScrollLayer();

    /**
     * @note[short] MacOS (ARM): 0x3183b0
     * @note[short] MacOS (Intel): 0x38e000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1540b0
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int offset, bool looped);

    /**
     * @note[short] MacOS (ARM): 0x317fe4
     * @note[short] MacOS (Intel): 0x38dc20
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x153d78
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int offset, bool looped, cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x3196ec
     * @note[short] MacOS (Intel): 0x38f4e0
     * @note[short] Windows: 0x41490
     * @note[short] iOS: 0x154d08
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x31a2c0
     * @note[short] MacOS (Intel): 0x3900e0
     * @note[short] Windows: 0x420b0
     * @note[short] iOS: 0x155368
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x31a398
     * @note[short] MacOS (Intel): 0x3901d0
     * @note[short] Windows: 0x421b0
     * @note[short] iOS: 0x155430
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x31a664
     * @note[short] MacOS (Intel): 0x3904f0
     * @note[short] Windows: 0x424f0
     * @note[short] iOS: 0x155658
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x31a104
     * @note[short] MacOS (Intel): 0x38ff10
     * @note[short] Windows: 0x41fd0
     * @note[short] iOS: 0x155318
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x41f30
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x414f0
     * @note[short] Android
     */
    virtual bool touchInsideClip(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x319d58
     * @note[short] MacOS (Intel): 0x38fb40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPage(cocos2d::CCLayer* page);

    /**
     * @note[short] MacOS (ARM): 0x319dc8
     * @note[short] MacOS (Intel): 0x38fbc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPage(cocos2d::CCLayer* page, int index);

    /**
     * @note[short] MacOS (Intel): 0x38fe30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void cancelAndStoleTouch(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void claimTouch(cocos2d::CCTouch* touch);

    /**
     * @note[short] MacOS (ARM): 0x31923c
     * @note[short] MacOS (Intel): 0x38eed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x154a14
     * @note[short] Android
     */
    cocos2d::CCLayer* getPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x319618
     * @note[short] MacOS (Intel): 0x38f410
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getRelativePageForNum(int page);

    /**
     * @note[short] MacOS (ARM): 0x3191ec
     * @note[short] MacOS (Intel): 0x38ee80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativePosForPage(int page);

    /**
     * @note[short] MacOS (Intel): 0x38eb50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getTotalPages();

    /**
     * @note[short] MacOS (ARM): 0x31809c
     * @note[short] MacOS (Intel): 0x38dcb0
     * @note[short] Windows: 0x40b60
     * @note[short] iOS: 0x153e1c
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* pages, int offset, bool looped, cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x3199cc
     * @note[short] MacOS (Intel): 0x22a1e0
     * @note[short] Windows: 0x41750
     * @note[short] iOS: 0x154e60
     * @note[short] Android
     */
    void instantMoveToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x319aa4
     * @note[short] MacOS (Intel): 0x38f880
     * @note[short] Windows: 0x41830
     * @note[short] iOS: 0x154f38
     * @note[short] Android
     */
    void moveToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x31983c
     * @note[short] MacOS (Intel): 0x38f610
     * @note[short] Windows: 0x415c0
     * @note[short] iOS: 0x154dd4
     * @note[short] Android
     */
    void moveToPageEnded();

    /**
     * @note[short] MacOS (ARM): 0x319540
     * @note[short] MacOS (Intel): 0x38f340
     * @note[short] iOS: 0x154b5c
     * @note[short] Android
     */
    int pageNumberForPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x319978
     * @note[short] MacOS (Intel): 0x38f750
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint positionForPageWithNumber(int page);

    /**
     * @note[short] MacOS (Intel): 0x38fae0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void quickUpdate();

    /**
     * @note[short] MacOS (ARM): 0x319e30
     * @note[short] MacOS (Intel): 0x38fc30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removePage(cocos2d::CCLayer* page);

    /**
     * @note[short] MacOS (ARM): 0x319ec4
     * @note[short] MacOS (Intel): 0x38fcc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removePageWithNumber(int page);

    /**
     * @note[short] MacOS (ARM): 0x318644
     * @note[short] MacOS (Intel): 0x38e290
     * @note[short] iOS: 0x154298
     * @note[short] Android
     */
    void repositionPagesLooped();

    /**
     * @note[short] MacOS (ARM): 0x319c48
     * @note[short] MacOS (Intel): 0x38fa30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1550d4
     * @note[short] Android
     */
    void selectPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x319184
     * @note[short] MacOS (Intel): 0x38ee10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1549ac
     * @note[short] Android
     */
    void setDotScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x3184fc
     * @note[short] MacOS (Intel): 0x38e140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x154158
     * @note[short] Android
     */
    void setPagesIndicatorPosition(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x318c94
     * @note[short] MacOS (Intel): 0x38e900
     * @note[short] iOS: 0x1545a8
     * @note[short] Android
     */
    void setupDynamicScrolling(cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x319680
     * @note[short] MacOS (Intel): 0x38f470
     * @note[short] iOS: 0x154c9c
     * @note[short] Android
     */
    void togglePageIndicators(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x318ef8
     * @note[short] MacOS (Intel): 0x38eb70
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x15480c
     * @note[short] Android
     */
    void updateDots(float dt);

    /**
     * @note[short] MacOS (ARM): 0x318524
     * @note[short] MacOS (Intel): 0x38e170
     * @note[short] Windows: 0x41170
     * @note[short] iOS: 0x154180
     * @note[short] Android
     */
    void updatePages();
    cocos2d::CCArray* m_dots;
    int m_slowPage;
    float m_touchX;
    float m_touchQuotient;
    bool m_looped;
    DynamicScrollDelegate* m_dynamicDelegate;
    cocos2d::CCArray* m_dynamicObjects;
    bool m_dynamic;
    int m_touchType;
    bool m_ignoreTouchCancel;
    cocos2d::CCTouch* m_touch;
    cocos2d::CCArray* m_pages;
    double m_touchTime;
    cocos2d::CCPoint m_position;
    ExtendedLayer* m_extendedLayer;
    cocos2d::CCRect m_rect;
    float m_unkFloat1;
    float m_maxSpeed;
    float m_minSpeed;
    float m_unkFloat2;
    BoomScrollLayerDelegate* m_delegate;
    bool m_pageMoving;
    bool m_pagesInvisible;
    float m_minimumTouchLengthToSlide;
    float m_minimumTouchLengthToChangePage;
    float m_width;
    bool m_cancelAndStealTouch;
    bool m_dotsVisible;
    cocos2d::CCPoint m_dotPosition;
    cocos2d::ccColor4B m_selectedPageColor;
    cocos2d::ccColor4B m_normalPageColor;
    int m_page;
    float m_pageOffset;
    void* m_unkPtr;
    bool m_doVisit;
    cocos2d::CCRect m_clippingRect;
};
