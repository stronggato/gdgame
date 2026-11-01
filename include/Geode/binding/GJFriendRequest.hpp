#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJFriendRequest : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJFriendRequest";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJFriendRequest, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x216be0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJFriendRequest();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJFriendRequest();

    /**
     * @note[short] MacOS (ARM): 0x4dc78c
     * @note[short] MacOS (Intel): 0x58c0b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd4480
     * @note[short] Android
     */
    static GJFriendRequest* create();

    /**
     * @note[short] MacOS (ARM): 0x4b9b84
     * @note[short] MacOS (Intel): 0x566a80
     * @note[short] Windows: 0xcdbd0
     * @note[short] iOS: 0xbdf60
     * @note[short] Android
     */
    static GJFriendRequest* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dc824
     * @note[short] MacOS (Intel): 0x58c140
     * @note[short] Windows: 0x8aef0
     * @note[short] iOS: 0xd450c
     * @note[short] Android
     */
    virtual bool init();
    int m_requestID;
    int m_accountID;
    int m_unusedToAccountID;
    std::string m_message;
    std::string m_uploadDate;
    bool m_isRead;
};
