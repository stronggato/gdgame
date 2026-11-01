#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/LikeItemDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class CommentCell : public TableViewCell, public LikeItemDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CommentCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommentCell, TableViewCell)

    /**
     * @note[short] Windows: 0x150890
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CommentCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e8ea0
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~CommentCell();

    /**
     * @note[short] Windows: 0x150940
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e9618
     * @note[short] MacOS (Intel): 0x23e230
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x137d30
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e96c4
     * @note[short] MacOS (Intel): 0x23e300
     * @note[short] Windows: 0x153560
     * @note[short] iOS: 0x137ddc
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType type, int id, bool liked);

    /**
     * @note[short] Windows: 0x1539e0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1e9860
     * @note[short] MacOS (Intel): 0x23e4a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementDislikes();

    /**
     * @note[short] MacOS (ARM): 0x1e97ac
     * @note[short] MacOS (Intel): 0x23e3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementLikes();

    /**
     * @note[short] MacOS (ARM): 0x7be4dc
     * @note[short] MacOS (Intel): 0x22d390
     * @note[short] Windows: 0x428190
     * @note[short] Android
     */
    void loadFromComment(GJComment* comment);

    /**
     * @note[short] Android
     */
    void onBulkSelectToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e940c
     * @note[short] MacOS (Intel): 0x23e020
     * @note[short] iOS: 0x137b5c
     * @note[short] Android
     */
    void onConfirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] Android
     */
    void onGoToLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMoreOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e9a58
     * @note[short] MacOS (Intel): 0x23e6d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onUndelete();

    /**
     * @note[short] MacOS (ARM): 0x1e92b4
     * @note[short] MacOS (Intel): 0x23dea0
     * @note[short] Windows: 0x153b80
     * @note[short] iOS: 0x137a04
     * @note[short] Android
     */
    void onUnhide(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e913c
     * @note[short] MacOS (Intel): 0x23dd20
     * @note[short] Windows: 0xc9cf0
     * @note[short] iOS: 0x13789c
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1dbbb0
     * @note[short] MacOS (Intel): 0x22f6f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12bf50
     * @note[short] Android
     */
    void updateBGColor(int index);

    /**
     * @note[short] Android
     */
    TodoReturn updateBulkToggle();

    /**
     * @note[short] MacOS (ARM): 0x1e991c
     * @note[short] MacOS (Intel): 0x23e570
     * @note[short] Windows: 0x1af2c0
     * @note[short] iOS: 0x137e40
     * @note[short] Android
     */
    void updateLabelValues();
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCLabelBMFont* m_likeLabel;
    GJComment* m_comment;
    bool m_accountComment;
    bool m_unk259;
    bool m_compactMode;
};
