#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class SectionedContentNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SectionedContentNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SectionedContentNode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x80c50
     * @note[short] Android: Rebinded
     */
    virtual  ~SectionedContentNode();

    /**
     * @note[short] Windows: 0x80b10
     * @note[short] Android
     */
    virtual void addChild(cocos2d::CCNode* p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x80b30
     * @note[short] Android
     */
    virtual void removeAllChildrenWithCleanup(bool p0);
};
