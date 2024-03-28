#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUINode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUINode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUINode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3c0230
     * @note[short] Android
     */
    static GJUINode* create(UIButtonConfig& p0);
    
private:
    [[deprecated("GJUINode::activeRangeTouchTest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activeRangeTouchTest(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJUINode::activeTouchTest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activeTouchTest(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJUINode::getButtonScale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getButtonScale();
public:
    
private:
    [[deprecated("GJUINode::getOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOpacity();
public:
    
private:
    [[deprecated("GJUINode::highlightButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn highlightButton(int p0);
public:

    /**
     * @note[short] Windows: 0x3c02d0
     * @note[short] Android
     */
    bool init(UIButtonConfig& p0);
    
private:
    [[deprecated("GJUINode::loadFromConfig not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadFromConfig(UIButtonConfig& p0);
public:

    /**
     * @note[short] Windows: 0x3c04f0
     * @note[short] Android
     */
    TodoReturn resetState();
    
private:
    [[deprecated("GJUINode::saveToConfig not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveToConfig(UIButtonConfig& p0);
public:
    
private:
    [[deprecated("GJUINode::setOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void setOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GJUINode::toggleHighlight not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleHighlight(int p0, bool p1);
public:
    
private:
    [[deprecated("GJUINode::toggleModeB not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleModeB(bool p0);
public:
    
private:
    [[deprecated("GJUINode::touchEnded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn touchEnded();
public:
    
private:
    [[deprecated("GJUINode::touchTest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn touchTest(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJUINode::updateButtonFrames not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateButtonFrames();
public:
    
private:
    [[deprecated("GJUINode::updateButtonPositions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateButtonPositions();
public:
    
private:
    [[deprecated("GJUINode::updateButtonScale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateButtonScale(float p0);
public:
    
private:
    [[deprecated("GJUINode::updateDeadzone not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDeadzone(int p0);
public:
    
private:
    [[deprecated("GJUINode::updateDragRadius not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDragRadius(float p0);
public:
    
private:
    [[deprecated("GJUINode::updateHeight not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHeight(float p0);
public:
    
private:
    [[deprecated("GJUINode::updateRangePos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateRangePos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJUINode::updateSize not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSize(float p0, float p1);
public:
    
private:
    [[deprecated("GJUINode::updateWidth not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateWidth(float p0);
public:

    /**
     * @note[short] Windows: 0x3c0de0
     * @note[short] Android
     */
    virtual void draw();
};
