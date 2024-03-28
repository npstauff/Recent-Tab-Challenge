#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ButtonSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ButtonSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ButtonSprite, cocos2d::CCSprite)

    /**
Create a ButtonSprite with a top sprite and a texture.

 @param topSprite The top sprite to add on top of the sprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of top spri     * @note[short] Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, bool absolute, float height, const char* texture, float scale);

    /**
Create a ButtonSprite with text, a font and a texture.

 @param caption The text of the ButtonSprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param font The name of the BM font file to use

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of text

 @returns Pointer to the created ButtonSprite, or nullptr on err     * @note[short] Out of line
     */
    static ButtonSprite* create(const char* caption, int width, bool absolute, const char* font, const char* texture, float height, float scale);

    /**
     * @note[short] Out of line
     */
    static ButtonSprite* create(char const* caption);

    /**
     * @note[short] Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture);

    /**
     * @note[short] Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture, float scale);
    
private:
    [[deprecated("ButtonSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0, float p1);
public:

    /**
     * @note[short] Windows: 0x1feb0
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4, char const* p5, char const* p6, float p7);
    
private:
    [[deprecated("ButtonSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4, char const* p5, char const* p6);
public:
    
private:
    [[deprecated("ButtonSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4);
public:

    /**
     * @note[short] Windows: 0x1fb90
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, int unused, float height, float p4, bool p5, char const* bgSprite, bool noScaleSpriteForBG);
    
private:
    [[deprecated("ButtonSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* p0, int p1, int p2, float p3, float p4, bool p5);
public:
    
private:
    [[deprecated("ButtonSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* p0);
public:

    /**
     * @note[short] Windows: 0x1ff80
     * @note[short] Android
     */
    bool init(char const* p0, int p1, int p2, float p3, bool p4, char const* p5, char const* p6, float p7);

    /**
     * @note[short] Windows: 0x1fc60
     * @note[short] Android
     */
    bool init(cocos2d::CCSprite* topSprite, int width, int unused, float scale, float height, bool unkBool, char const* bgSprite, bool useNormalCCSpriteForBG);

    /**
     * @note[short] Windows: 0x20b20
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Windows: 0x20770
     * @note[short] Android
     */
    void setString(char const* p0);

    /**
     * @note[short] Windows: 0x20230
     * @note[short] Android
     */
    void updateBGImage(char const* p0);

    /**
     * @note[short] Windows: 0x20340
     * @note[short] Android
     */
    void updateSpriteBGSize();
    
private:
    [[deprecated("ButtonSprite::updateSpriteOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpriteOffset(cocos2d::CCPoint p0);
public:
    GEODE_PAD(24);
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_subSprite;
    cocos2d::CCSprite* m_subBGSprite;
    cocos2d::extension::CCScale9Sprite* m_BGSprite;
    GEODE_PAD(8);
    cocos2d::CCPoint m_spritePosition;
};
