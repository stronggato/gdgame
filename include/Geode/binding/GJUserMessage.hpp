#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJUserMessage : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUserMessage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUserMessage, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x216c40
     * @note[short] Android: Rebinded
     */
    virtual  ~GJUserMessage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJUserMessage();

    /**
     * @note[short] MacOS (ARM): 0x4dc9ec
     * @note[short] MacOS (Intel): 0x58c330
     * @note[short] Windows: 0x26cd50
     * @note[short] iOS: 0xd4594
     * @note[short] Android
     */
    static GJUserMessage* create();

    /**
     * @note[short] MacOS (ARM): 0x4ba438
     * @note[short] MacOS (Intel): 0x5673e0
     * @note[short] Windows: 0x50db90
     * @note[short] iOS: 0xbe4bc
     * @note[short] Android
     */
    static GJUserMessage* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dca88
     * @note[short] MacOS (Intel): 0x58c3d0
     * @note[short] Windows: 0x8aef0
     * @note[short] iOS: 0xd4624
     * @note[short] Android
     */
    virtual bool init();
    int m_messageID;
    int m_accountID;
    int m_userID;
    std::string m_title;
    std::string m_content;
    std::string m_username;
    std::string m_uploadDate;
    bool m_read;
    bool m_outgoing;
    bool m_toggled;
};
