#include <Geode/binding/TextArea.hpp>
#include <Geode/binding/MultilineBitmapFont.hpp>
#include <Geode/binding/TextAreaDelegate.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// Constructor
TextArea::TextArea() {
    m_disableColor = false;
    m_unk259 = false;
    m_unk25c = 0;
    m_unk260 = 0.0f;
    m_label = nullptr;
    m_width = 0.0f;
    m_unknown = 0.0f;
    m_fontFile = "";
    m_height = 0.0f;
    m_onTimerUnused = false;
    m_anchorPoint = cocos2d::CCPointZero;
    m_allShown = false;
    m_scale = 1.0f;
    m_rectHeight = 0;
    m_rectWidth = 0;
    m_maxWidth = 0.0f;
    m_textPos = cocos2d::CCPointZero;
    m_delegate = nullptr;
    m_shakeCharacters = nullptr;
    m_shakeElapsed = 0.0f;
}

// [1/9] Address: 0x88c40
// Method: TextArea::~TextArea
TextArea::~TextArea() {
    CC_SAFE_RELEASE(this->m_shakeCharacters);
}

// [2/9] Address: 0x88cc0
// Method: TextArea::create
TextArea* TextArea::create(std::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor, int p7) {
    auto ret = new (std::nothrow) TextArea();
    if (ret && ret->init(str, font, scale, width, anchor, lineHeight, disableColor, p7)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

// [3/9] Address: 0x88f20
// Method: TextArea::setString
void TextArea::setString(std::string text) {
    if (text.empty()) {
        text = " ";
    }

    if (this->m_label) {
        this->stopAllCharacterActions();
        this->setOpacity(0);
        this->m_label->stopAllActions();
        this->m_label->removeFromParentAndCleanup(true);
        this->m_label = nullptr;
    }

    this->m_label = MultilineBitmapFont::createWithFont(
        this->m_fontFile.c_str(),
        text,
        this->m_scale,
        this->m_width,
        this->m_anchorPoint,
        (int)this->m_height,
        this->m_disableColor,
        this->m_unk259,
        this->m_unk25c,
        this->m_unk260
    );

    if (this->m_label) {
        this->m_rectWidth = this->m_label->m_width;
        this->m_rectHeight = this->m_label->m_height;
        this->m_textPos = this->m_label->m_position;
        this->m_maxWidth = this->m_label->m_maxWidth;

        this->setTextureRect(cocos2d::CCRect(0.0f, 0.0f, (float)this->m_rectWidth, (float)this->m_rectHeight));
        this->addChild(this->m_label, 1);
        this->m_label->setPosition(this->m_textPos);
    }
}

// [4/9] Address: 0x89600
// Method: TextArea::stopAllCharacterActions
void TextArea::stopAllCharacterActions() {
    if (!this->m_label) return;
    CCArray* lines = this->m_label->getChildren();
    if (!lines) return;

    for (unsigned int i = 0; i < lines->count(); ++i) {
        CCNode* lineNode = static_cast<CCNode*>(lines->objectAtIndex(i));
        if (!lineNode) continue;
        CCArray* charNodes = lineNode->getChildren();
        if (!charNodes) continue;

        for (unsigned int j = 0; j < charNodes->count(); ++j) {
            CCNode* charNode = static_cast<CCNode*>(charNodes->objectAtIndex(j));
            if (charNode) {
                charNode->stopAllActions();
            }
        }
    }
}

// [5/9] Address: 0x896c0
// Method: TextArea::finishFade
void TextArea::finishFade() {
    this->m_allShown = true;
    if (this->m_delegate) {
        this->m_delegate->fadeInTextFinished(this);
    }
}

// [6/9] Address: 0x896e0
// Method: TextArea::setOpacity
void TextArea::setOpacity(unsigned char opacity) {
    CCSprite::setOpacity(opacity);
    if (this->m_label) {
        this->m_label->setOpacity(opacity);
    }
}

// [7/9] Address: 0x89720
// Method: TextArea::colorAllCharactersTo
void TextArea::colorAllCharactersTo(cocos2d::ccColor3B color) {
    if (!this->m_label) return;
    CCArray* lines = this->m_label->getChildren();
    if (!lines) return;

    for (unsigned int i = 0; i < lines->count(); ++i) {
        CCNode* lineNode = static_cast<CCNode*>(lines->objectAtIndex(i));
        if (!lineNode) continue;
        CCArray* charNodes = lineNode->getChildren();
        if (!charNodes) continue;

        for (unsigned int j = 0; j < charNodes->count(); ++j) {
            CCRGBAProtocol* rgba = dynamic_cast<CCRGBAProtocol*>(charNodes->objectAtIndex(j));
            if (rgba) {
                rgba->setColor(color);
            }
        }
    }
}

// [8/9] Address: 0x897d0
// Method: TextArea::update
void TextArea::update(float dt) {
    this->m_shakeElapsed += dt;
    if (!this->m_shakeCharacters) return;

    CCDictElement* el = this->m_shakeCharacters->m_pElements;
    while (el) {
        CCArray* arr = static_cast<CCArray*>(el->getObject());
        if (arr && arr->count() > 0) {
            float* firstCharData = reinterpret_cast<float*>(arr->objectAtIndex(0));
            if (firstCharData && this->m_shakeElapsed > firstCharData[157]) {
                firstCharData[157] = this->m_shakeElapsed + firstCharData[155];
                float intensity = firstCharData[156];
                int r1 = rand();
                float norm1 = (float)r1 / 32767.0f;
                int r2 = rand();
                float norm2 = (float)r2 / 32767.0f;
                CCPoint shakeOffset(
                    ((norm2 * 2.0f) - 1.0f) * intensity * 0.5f,
                    ((norm1 * 2.0f) - 1.0f) * intensity * 0.5f
                );

                for (unsigned int k = 0; k < arr->count(); ++k) {
                    CCNode* charNode = static_cast<CCNode*>(arr->objectAtIndex(k));
                    if (!charNode) break;
                    char* charBytes = reinterpret_cast<char*>(charNode);
                    CCPoint originalPos = *reinterpret_cast<CCPoint*>(charBytes + 636);
                    charNode->setPosition(originalPos + shakeOffset);
                }
            }
        }
        el = (CCDictElement*)el->hh.next;
    }
}

// [9/9] Address: 0x899d0
// Method: TextArea::fadeInCharacters
float TextArea::fadeInCharacters(float duration, float charDuration, bool fadeOut, TextFadeInStyle style) {
    CC_SAFE_RELEASE(this->m_shakeCharacters);
    this->m_shakeCharacters = CCDictionary::create();
    this->m_shakeCharacters->retain();

    bool hasShaking = false;
    int charIndex = 0;
    float accumulatedDelay = 0.0f;
    float lastCharDuration = duration;

    if (this->m_label) {
        CCArray* lines = this->m_label->getChildren();
        if (lines && lines->count() > 0) {
            int lineCount = (int)lines->count();
            int lastLineIdx = lineCount - 1;

            for (int lineIdx = 0; lineIdx < lineCount; ++lineIdx) {
                CCNode* lineNode = static_cast<CCNode*>(lines->objectAtIndex(lineIdx));
                if (!lineNode) continue;
                CCArray* charNodes = lineNode->getChildren();
                if (!charNodes || charNodes->count() == 0) continue;

                for (unsigned int c = 0; c < charNodes->count(); ++c) {
                    CCNode* charNode = static_cast<CCNode*>(charNodes->objectAtIndex(c));
                    if (!charNode) break;

                    char* charBytes = reinterpret_cast<char*>(charNode);
                    if (!fadeOut) {
                        charNode->stopAllActions();
                        CCRGBAProtocol* rgba = dynamic_cast<CCRGBAProtocol*>(charNode);
                        if (rgba) rgba->setOpacity(0);
                        accumulatedDelay += *reinterpret_cast<float*>(charBytes + 616);
                    }

                    float curDuration = duration;
                    if (charBytes[608]) {
                        curDuration = *reinterpret_cast<float*>(charBytes + 612);
                    }
                    lastCharDuration = curDuration;

                    float delay = (float)charIndex * charDuration + accumulatedDelay;
                    CCActionInterval* fadeAction = nullptr;
                    if (fadeOut) {
                        fadeAction = CCFadeOut::create(curDuration);
                    } else {
                        fadeAction = CCFadeIn::create(curDuration);
                    }

                    CCSequence* seq = CCSequence::create(CCDelayTime::create(delay), fadeAction, nullptr);
                    charNode->runAction(seq);

                    if (style == TextFadeInStyle::Scale || static_cast<int>(style) == 1) {
                        float targetScale = 1.4f;
                        float scaleDur = curDuration;
                        if (!fadeOut) {
                            charNode->setScale(0.0f);
                            targetScale = 1.0f;
                            scaleDur = curDuration * 0.5f;
                        }
                        CCActionInterval* scaleAction = CCScaleTo::create(scaleDur, targetScale);
                        CCEaseInOut* ease = CCEaseInOut::create(scaleAction, 2.0f);
                        CCSequence* scaleSeq = CCSequence::create(CCDelayTime::create(delay), ease, nullptr);
                        charNode->runAction(scaleSeq);
                    }

                    if (!charBytes[608]) {
                        ++charIndex;
                    }

                    int shakeKey = *reinterpret_cast<int*>(charBytes + 632);
                    if (shakeKey > 0) {
                        *reinterpret_cast<CCPoint*>(charBytes + 636) = charNode->getPosition();
                        CCArray* shakeList = static_cast<CCArray*>(this->m_shakeCharacters->objectForKey(shakeKey));
                        if (!shakeList) {
                            shakeList = CCArray::create();
                            this->m_shakeCharacters->setObject(shakeList, shakeKey);
                        }
                        shakeList->addObject(charNode);
                        hasShaking = true;
                    }
                }

                if (lineIdx == lastLineIdx) {
                    float totalTime = (float)charIndex * charDuration + lastCharDuration + accumulatedDelay;
                    CCDelayTime* delayTime = CCDelayTime::create(totalTime);
                    CCCallFunc* finishCall = CCCallFunc::create(this, callfunc_selector(TextArea::finishFade));
                    this->runAction(CCSequence::create(delayTime, finishCall, nullptr));
                }
            }
        }
    }

    this->unscheduleUpdate();
    if (hasShaking) {
        this->scheduleUpdate();
    }
    return (float)charIndex * charDuration + lastCharDuration + accumulatedDelay;
}
