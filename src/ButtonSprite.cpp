#include <Geode/binding/ButtonSprite.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>

using namespace cocos2d;

ButtonSprite::ButtonSprite() {
    m_mode = 0;
    m_width = 0.0f;
    m_minWidth = 0.0f;
    m_scale = 1.0f;
    m_height = 0.0f;
    m_absolute = false;
    m_label = nullptr;
    m_subSprite = nullptr;
    m_subBGSprite = nullptr;
    m_BGSprite = nullptr;
    m_textOffset = cocos2d::CCPointZero;
    m_spritePosition = cocos2d::CCPointZero;
    m_caption = "";
}

ButtonSprite::~ButtonSprite() {
}

ButtonSprite* ButtonSprite::create(cocos2d::CCSprite* topSprite, int width, int minWidth, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG) {
    auto* pRet = new ButtonSprite();
    if (pRet && pRet->init(topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG)) {
        pRet->autorelease();
        return pRet;
    }
    delete pRet;
    return nullptr;
}

ButtonSprite* ButtonSprite::create(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg, float height) {
    auto* pRet = new ButtonSprite();
    if (pRet && pRet->init(caption, width, minWidth, scale, absolute, font, bg, height)) {
        pRet->autorelease();
        return pRet;
    }
    delete pRet;
    return nullptr;
}

bool ButtonSprite::init(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg, float height) {
    if (!cocos2d::CCSprite::init()) {
        return false;
    }

    m_mode = 1;
    m_width = static_cast<float>(width);
    m_minWidth = static_cast<float>(minWidth);
    m_scale = scale;
    m_absolute = absolute;
    m_height = height;
    m_textOffset = cocos2d::CCPoint(0.0f, 2.0f);

    if (font && std::string(font) == "bigFont.fnt") {
        m_textOffset = cocos2d::CCPoint(-1.0f, 2.0f);
    }

    m_label = cocos2d::CCLabelBMFont::create("", font ? font : "goldFont.fnt");
    this->addChild(m_label, 1);

    m_BGSprite = cocos2d::extension::CCScale9Sprite::create(bg ? bg : "GJ_button_01.png", cocos2d::CCRect(0.0f, 0.0f, 40.0f, 40.0f));
    m_BGSprite->setContentSize(cocos2d::CCSize(16.0f, 16.0f));
    this->addChild(m_BGSprite, 0);

    this->setString(caption);
    return true;
}

void ButtonSprite::setString(char const* text) {
    if (m_mode == 1) {
        if (m_label) {
            m_label->setString(text ? text : "");
        }
        m_caption = text ? text : "";

        float targetWidth = m_width;
        if (m_label) {
            if (m_width > 0.0f && m_label->getContentSize().width > m_width) {
                m_label->setScale(m_width / m_label->getContentSize().width);
            }
            if (m_scale > m_label->getScale()) {
                m_label->setScale(m_scale);
            }
        }

        if (m_absolute) {
            targetWidth = m_width;
        } else {
            targetWidth = m_minWidth;
            if (m_label) {
                float labelScaledWidth = m_label->getContentSize().width * m_label->getScale();
                if (targetWidth <= labelScaledWidth) {
                    targetWidth = labelScaledWidth;
                }
            }
        }

        float targetHeight = 4.0f;
        if (m_label) {
            targetHeight += m_label->getContentSize().height;
        }
        if (m_height != 0.0f) {
            targetHeight = m_height;
        }

        if (m_BGSprite) {
            m_BGSprite->setContentSize(cocos2d::CCSize(targetWidth + 16.0f, targetHeight));
            this->setContentSize(m_BGSprite->getContentSize());
        }

        if (m_label) {
            m_label->setPosition(cocos2d::CCPoint(
                this->getContentSize().width * 0.5f + m_textOffset.x,
                this->getContentSize().height * 0.5f + m_textOffset.y
            ));
        }

        if (m_BGSprite) {
            m_BGSprite->setPosition(cocos2d::CCPoint(
                this->getContentSize().width * 0.5f,
                this->getContentSize().height * 0.5f
            ));
        }

        if (auto parent = this->getParent()) {
            if (auto btn = dynamic_cast<CCMenuItemSpriteExtra*>(parent)) {
                btn->setContentSize(this->getContentSize());
                this->setPosition(cocos2d::CCPoint(
                    this->getContentSize().width * 0.5f,
                    this->getContentSize().height * 0.5f
                ));
            }
        }
    }
}
