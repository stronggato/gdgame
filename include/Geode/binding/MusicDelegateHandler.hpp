#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class MusicDelegateHandler : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "MusicDelegateHandler";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicDelegateHandler, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x47d310
     * @note[short] Android: Rebinded
     */
    virtual  ~MusicDelegateHandler();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MusicDelegateHandler();

    /**
     * @note[short] MacOS (ARM): 0x582e98
     * @note[short] MacOS (Intel): 0x647c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d0360
     * @note[short] Android
     */
    static MusicDelegateHandler* create(MusicDownloadDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x582f28
     * @note[short] MacOS (Intel): 0x647c90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(MusicDownloadDelegate* delegate);
    MusicDownloadDelegate* m_delegate;
};
