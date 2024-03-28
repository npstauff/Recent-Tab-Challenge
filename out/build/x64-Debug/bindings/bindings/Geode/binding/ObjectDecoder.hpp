#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectDecoder {
public:
    static constexpr auto CLASS_NAME = "ObjectDecoder";
    
private:
    [[deprecated("ObjectDecoder::sharedDecoder not implemented")]]
    /**
     * @note[short] Android
     */
    static ObjectDecoder* sharedDecoder();
public:
    
private:
    [[deprecated("ObjectDecoder::getDecodedObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDecodedObject(int p0, DS_Dictionary* p1);
public:
    
private:
    [[deprecated("ObjectDecoder::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:
};
