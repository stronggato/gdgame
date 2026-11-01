#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ScrollViewPopup.hpp>

class MusicChangelogPopup : public ScrollViewPopup {
public:
    static constexpr auto CLASS_NAME = "MusicChangelogPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MusicChangelogPopup, ScrollViewPopup)

    /**
     * @note[short] Windows: 0x61db30
     * @note[short] Android: Rebinded
     */
    virtual  ~MusicChangelogPopup();

    /**
     * @note[short] Android
     */
    static MusicChangelogPopup* create(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x47c870
     * @note[short] Android
     */
    virtual float buildContent(cocos2d::CCNode* p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0);
};
