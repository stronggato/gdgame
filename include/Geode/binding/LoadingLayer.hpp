#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class LoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "LoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LoadingLayer();

    /**
     * @note[short] MacOS (ARM): 0x316d20
     * @note[short] MacOS (Intel): 0x38c730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26d624
     * @note[short] Android: Rebinded
     */
     ~LoadingLayer();

    /**
     * @note[short] MacOS (Intel): 0x38b640
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LoadingLayer* create(bool refresh);

    /**
     * @note[short] MacOS (ARM): 0x315bdc
     * @note[short] MacOS (Intel): 0x38b540
     * @note[short] Windows: 0x465e30
     * @note[short] iOS: 0x26c6a0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool refresh);

    /**
     * @note[short] MacOS (ARM): 0x3164f8
     * @note[short] MacOS (Intel): 0x38be90
     * @note[short] Windows: 0x467340
     * @note[short] iOS: 0x26ce70
     * @note[short] Android
     */
    const char* getLoadingString();

    /**
     * @note[short] MacOS (ARM): 0x315d74
     * @note[short] MacOS (Intel): 0x38b720
     * @note[short] Windows: 0x465f40
     * @note[short] iOS: 0x26c798
     * @note[short] Android
     */
    bool init(bool refresh);

    /**
     * @note[short] MacOS (ARM): 0x3165d4
     * @note[short] MacOS (Intel): 0x38bf50
     * @note[short] Windows: 0x466800
     * @note[short] iOS: 0x26cf4c
     * @note[short] Android
     */
    void loadAssets();

    /**
     * @note[short] MacOS (ARM): 0x316cec
     * @note[short] MacOS (Intel): 0x38c700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26d5f0
     * @note[short] Android
     */
    void loadingFinished();

    /**
     * @note[short] MacOS (ARM): 0x316568
     * @note[short] MacOS (Intel): 0x38bef0
     * @note[short] iOS: 0x26cee0
     * @note[short] Android
     */
    void updateProgress(int progress);
    bool m_unknown;
    bool m_unknown2;
    int m_loadStep;
    cocos2d::CCLabelBMFont* m_caption;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_sliderBar;
    float m_sliderGrooveXPos;
    float m_sliderGrooveHeight;
    bool m_fromRefresh;
};
