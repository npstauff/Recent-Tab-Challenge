#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextArea : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "TextArea";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextArea, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x52250
     * @note[short] Android
     */
    static TextArea* create(gd::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor);

    /**
     * @note[short] Windows: 0x52850
     * @note[short] Android
     */
    TodoReturn colorAllCharactersTo(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("TextArea::colorAllLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorAllLabels(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("TextArea::fadeIn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeIn(float p0, bool p1);
public:
    
private:
    [[deprecated("TextArea::fadeInCharacters not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeInCharacters(float p0, float p1);
public:
    
private:
    [[deprecated("TextArea::fadeOut not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeOut(float p0);
public:
    
private:
    [[deprecated("TextArea::fadeOutAndRemove not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeOutAndRemove();
public:
    
private:
    [[deprecated("TextArea::finishFade not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishFade();
public:
    
private:
    [[deprecated("TextArea::hideAll not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideAll();
public:

    /**
     * @note[short] Windows: 0x52350
     * @note[short] Android
     */
    bool init(gd::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor);
    
private:
    [[deprecated("TextArea::setIgnoreColorCode not implemented")]]
    /**
     * @note[short] Android
     */
    void setIgnoreColorCode(bool p0);
public:

    /**
     * @note[short] Windows: 0x52460
     * @note[short] Android
     */
    void setString(gd::string p0);
    
private:
    [[deprecated("TextArea::showAll not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showAll();
public:
    
private:
    [[deprecated("TextArea::stopAllCharacterActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAllCharacterActions();
public:
    
private:
    [[deprecated("TextArea::update not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void update(float p0);
public:
    
private:
    [[deprecated("TextArea::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:
    
private:
    [[deprecated("TextArea::setOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
public:
    bool m_disableColor;
    MultilineBitmapFont* m_label;
    float m_width;
    int m_unknown;
    gd::string m_fontFile;
    float m_height;
    GEODE_PAD(4);
    cocos2d::CCPoint m_anchorPoint;
};
