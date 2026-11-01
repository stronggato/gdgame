#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class LikeItemLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LikeItemLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LikeItemLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x4656f0
     * @note[short] Android: Rebinded
     */
    virtual  ~LikeItemLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LikeItemLayer();

    /**
     * @note[short] Windows: 0x4657a0
     * @note[short] Android
     */
    static LikeItemLayer* create(LikeItemType type, int id, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x5e5674
     * @note[short] MacOS (Intel): 0x6ce200
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x2e7f30
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5e5118
     * @note[short] MacOS (Intel): 0x6cdc80
     * @note[short] Windows: 0x4658b0
     * @note[short] iOS: 0x2e7abc
     * @note[short] Android
     */
    bool init(LikeItemType type, int id, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x5e54cc
     * @note[short] MacOS (Intel): 0x6ce050
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x2e7e68
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5e5580
     * @note[short] MacOS (Intel): 0x6ce100
     * @note[short] iOS: 0x2e7eac
     * @note[short] Android
     */
    void onDislike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5e5508
     * @note[short] MacOS (Intel): 0x6ce080
     * @note[short] iOS: 0x2e7ea4
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5e55f8
     * @note[short] MacOS (Intel): 0x6ce180
     * @note[short] Windows: 0x465cc0
     * @note[short] iOS: 0x2e7eb4
     * @note[short] Android
     */
    void triggerLike(bool isLiked);
    LikeItemType m_itemType;
    int m_itemID;
    int m_commentSourceID;
    LikeItemDelegate* m_likeDelegate;
};
