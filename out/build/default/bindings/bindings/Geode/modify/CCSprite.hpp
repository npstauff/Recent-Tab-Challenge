#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrame
		#define GEODE_STATICS_createWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_createWithTexture
		#define GEODE_STATICS_createWithTexture
		GEODE_AS_STATIC_FUNCTION(createWithTexture) 
	#endif

	#ifndef GEODE_STATICS_getAtlasIndex
		#define GEODE_STATICS_getAtlasIndex
		GEODE_AS_STATIC_FUNCTION(getAtlasIndex) 
	#endif

	#ifndef GEODE_STATICS_getBlVertexMod
		#define GEODE_STATICS_getBlVertexMod
		GEODE_AS_STATIC_FUNCTION(getBlVertexMod) 
	#endif

	#ifndef GEODE_STATICS_getBrVertexMod
		#define GEODE_STATICS_getBrVertexMod
		GEODE_AS_STATIC_FUNCTION(getBrVertexMod) 
	#endif

	#ifndef GEODE_STATICS_getDontDraw
		#define GEODE_STATICS_getDontDraw
		GEODE_AS_STATIC_FUNCTION(getDontDraw) 
	#endif

	#ifndef GEODE_STATICS_getOffsetPosition
		#define GEODE_STATICS_getOffsetPosition
		GEODE_AS_STATIC_FUNCTION(getOffsetPosition) 
	#endif

	#ifndef GEODE_STATICS_getQuad
		#define GEODE_STATICS_getQuad
		GEODE_AS_STATIC_FUNCTION(getQuad) 
	#endif

	#ifndef GEODE_STATICS_getTextureAtlas
		#define GEODE_STATICS_getTextureAtlas
		GEODE_AS_STATIC_FUNCTION(getTextureAtlas) 
	#endif

	#ifndef GEODE_STATICS_getTextureRect
		#define GEODE_STATICS_getTextureRect
		GEODE_AS_STATIC_FUNCTION(getTextureRect) 
	#endif

	#ifndef GEODE_STATICS_getTlVertexMod
		#define GEODE_STATICS_getTlVertexMod
		GEODE_AS_STATIC_FUNCTION(getTlVertexMod) 
	#endif

	#ifndef GEODE_STATICS_getTrVertexMod
		#define GEODE_STATICS_getTrVertexMod
		GEODE_AS_STATIC_FUNCTION(getTrVertexMod) 
	#endif

	#ifndef GEODE_STATICS_getUnflippedOffsetPosition
		#define GEODE_STATICS_getUnflippedOffsetPosition
		GEODE_AS_STATIC_FUNCTION(getUnflippedOffsetPosition) 
	#endif

	#ifndef GEODE_STATICS_getUseVertexMod
		#define GEODE_STATICS_getUseVertexMod
		GEODE_AS_STATIC_FUNCTION(getUseVertexMod) 
	#endif

	#ifndef GEODE_STATICS_setAtlasIndex
		#define GEODE_STATICS_setAtlasIndex
		GEODE_AS_STATIC_FUNCTION(setAtlasIndex) 
	#endif

	#ifndef GEODE_STATICS_setBlVertexMod
		#define GEODE_STATICS_setBlVertexMod
		GEODE_AS_STATIC_FUNCTION(setBlVertexMod) 
	#endif

	#ifndef GEODE_STATICS_setBrVertexMod
		#define GEODE_STATICS_setBrVertexMod
		GEODE_AS_STATIC_FUNCTION(setBrVertexMod) 
	#endif

	#ifndef GEODE_STATICS_setDontDraw
		#define GEODE_STATICS_setDontDraw
		GEODE_AS_STATIC_FUNCTION(setDontDraw) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

	#ifndef GEODE_STATICS_setTextureAtlas
		#define GEODE_STATICS_setTextureAtlas
		GEODE_AS_STATIC_FUNCTION(setTextureAtlas) 
	#endif

	#ifndef GEODE_STATICS_setTlVertexMod
		#define GEODE_STATICS_setTlVertexMod
		GEODE_AS_STATIC_FUNCTION(setTlVertexMod) 
	#endif

	#ifndef GEODE_STATICS_setTrVertexMod
		#define GEODE_STATICS_setTrVertexMod
		GEODE_AS_STATIC_FUNCTION(setTrVertexMod) 
	#endif

	#ifndef GEODE_STATICS_setUseVertexMod
		#define GEODE_STATICS_setUseVertexMod
		GEODE_AS_STATIC_FUNCTION(setUseVertexMod) 
	#endif

	#ifndef GEODE_STATICS_isFlipX
		#define GEODE_STATICS_isFlipX
		GEODE_AS_STATIC_FUNCTION(isFlipX) 
	#endif

	#ifndef GEODE_STATICS_isFlipY
		#define GEODE_STATICS_isFlipY
		GEODE_AS_STATIC_FUNCTION(isFlipY) 
	#endif

	#ifndef GEODE_STATICS_isTextureRectRotated
		#define GEODE_STATICS_isTextureRectRotated
		GEODE_AS_STATIC_FUNCTION(isTextureRectRotated) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setVertexZ
		#define GEODE_STATICS_setVertexZ
		GEODE_AS_STATIC_FUNCTION(setVertexZ) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setSkewX
		#define GEODE_STATICS_setSkewX
		GEODE_AS_STATIC_FUNCTION(setSkewX) 
	#endif

	#ifndef GEODE_STATICS_setSkewY
		#define GEODE_STATICS_setSkewY
		GEODE_AS_STATIC_FUNCTION(setSkewY) 
	#endif

	#ifndef GEODE_STATICS_setAnchorPoint
		#define GEODE_STATICS_setAnchorPoint
		GEODE_AS_STATIC_FUNCTION(setAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setRotationX
		#define GEODE_STATICS_setRotationX
		GEODE_AS_STATIC_FUNCTION(setRotationX) 
	#endif

	#ifndef GEODE_STATICS_setRotationY
		#define GEODE_STATICS_setRotationY
		GEODE_AS_STATIC_FUNCTION(setRotationY) 
	#endif

	#ifndef GEODE_STATICS_ignoreAnchorPointForPosition
		#define GEODE_STATICS_ignoreAnchorPointForPosition
		GEODE_AS_STATIC_FUNCTION(ignoreAnchorPointForPosition) 
	#endif

	#ifndef GEODE_STATICS_addChild
		#define GEODE_STATICS_addChild
		GEODE_AS_STATIC_FUNCTION(addChild) 
	#endif

	#ifndef GEODE_STATICS_removeChild
		#define GEODE_STATICS_removeChild
		GEODE_AS_STATIC_FUNCTION(removeChild) 
	#endif

	#ifndef GEODE_STATICS_removeAllChildrenWithCleanup
		#define GEODE_STATICS_removeAllChildrenWithCleanup
		GEODE_AS_STATIC_FUNCTION(removeAllChildrenWithCleanup) 
	#endif

	#ifndef GEODE_STATICS_reorderChild
		#define GEODE_STATICS_reorderChild
		GEODE_AS_STATIC_FUNCTION(reorderChild) 
	#endif

	#ifndef GEODE_STATICS_sortAllChildren
		#define GEODE_STATICS_sortAllChildren
		GEODE_AS_STATIC_FUNCTION(sortAllChildren) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateTransform
		#define GEODE_STATICS_updateTransform
		GEODE_AS_STATIC_FUNCTION(updateTransform) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrame
		#define GEODE_STATICS_initWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrameName
		#define GEODE_STATICS_initWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_initWithFile
		#define GEODE_STATICS_initWithFile
		GEODE_AS_STATIC_FUNCTION(initWithFile) 
	#endif

	#ifndef GEODE_STATICS_setChildColor
		#define GEODE_STATICS_setChildColor
		GEODE_AS_STATIC_FUNCTION(setChildColor) 
	#endif

	#ifndef GEODE_STATICS_setChildOpacity
		#define GEODE_STATICS_setChildOpacity
		GEODE_AS_STATIC_FUNCTION(setChildOpacity) 
	#endif

	#ifndef GEODE_STATICS_getBatchNode
		#define GEODE_STATICS_getBatchNode
		GEODE_AS_STATIC_FUNCTION(getBatchNode) 
	#endif

	#ifndef GEODE_STATICS_setBatchNode
		#define GEODE_STATICS_setBatchNode
		GEODE_AS_STATIC_FUNCTION(setBatchNode) 
	#endif

	#ifndef GEODE_STATICS_refreshTextureRect
		#define GEODE_STATICS_refreshTextureRect
		GEODE_AS_STATIC_FUNCTION(refreshTextureRect) 
	#endif

	#ifndef GEODE_STATICS_setTextureRect
		#define GEODE_STATICS_setTextureRect
		GEODE_AS_STATIC_FUNCTION(setTextureRect) 
	#endif

	#ifndef GEODE_STATICS_setVertexRect
		#define GEODE_STATICS_setVertexRect
		GEODE_AS_STATIC_FUNCTION(setVertexRect) 
	#endif

	#ifndef GEODE_STATICS_setDisplayFrame
		#define GEODE_STATICS_setDisplayFrame
		GEODE_AS_STATIC_FUNCTION(setDisplayFrame) 
	#endif

	#ifndef GEODE_STATICS_isFrameDisplayed
		#define GEODE_STATICS_isFrameDisplayed
		GEODE_AS_STATIC_FUNCTION(isFrameDisplayed) 
	#endif

	#ifndef GEODE_STATICS_displayFrame
		#define GEODE_STATICS_displayFrame
		GEODE_AS_STATIC_FUNCTION(displayFrame) 
	#endif

	#ifndef GEODE_STATICS_setDisplayFrameWithAnimationName
		#define GEODE_STATICS_setDisplayFrameWithAnimationName
		GEODE_AS_STATIC_FUNCTION(setDisplayFrameWithAnimationName) 
	#endif

	#ifndef GEODE_STATICS_isDirty
		#define GEODE_STATICS_isDirty
		GEODE_AS_STATIC_FUNCTION(isDirty) 
	#endif

	#ifndef GEODE_STATICS_setDirty
		#define GEODE_STATICS_setDirty
		GEODE_AS_STATIC_FUNCTION(setDirty) 
	#endif

	#ifndef GEODE_STATICS_setTextureCoords
		#define GEODE_STATICS_setTextureCoords
		GEODE_AS_STATIC_FUNCTION(setTextureCoords) 
	#endif

	#ifndef GEODE_STATICS_updateBlendFunc
		#define GEODE_STATICS_updateBlendFunc
		GEODE_AS_STATIC_FUNCTION(updateBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_setReorderChildDirtyRecursively
		#define GEODE_STATICS_setReorderChildDirtyRecursively
		GEODE_AS_STATIC_FUNCTION(setReorderChildDirtyRecursively) 
	#endif

	#ifndef GEODE_STATICS_setDirtyRecursively
		#define GEODE_STATICS_setDirtyRecursively
		GEODE_AS_STATIC_FUNCTION(setDirtyRecursively) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_isOpacityModifyRGB
		#define GEODE_STATICS_isOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedColor
		#define GEODE_STATICS_updateDisplayedColor
		GEODE_AS_STATIC_FUNCTION(updateDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedOpacity
		#define GEODE_STATICS_updateDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(updateDisplayedOpacity) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSprite> : ModifyBase<ModifyDerive<Der, cocos2d::CCSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSprite>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSprite>>::ModifyBase;
		using Base = cocos2d::CCSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCSprite::create)), Cdecl, cocos2d::CCSprite, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect const&>::func(&cocos2d::CCSprite::create)), Cdecl, cocos2d::CCSprite, create, char const*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::create)), Cdecl, cocos2d::CCSprite, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCSprite::createWithSpriteFrame)), Cdecl, cocos2d::CCSprite, createWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCSprite::createWithSpriteFrameName)), Cdecl, cocos2d::CCSprite, createWithSpriteFrameName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCSprite::createWithTexture)), Cdecl, cocos2d::CCSprite, createWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&cocos2d::CCSprite::createWithTexture)), Cdecl, cocos2d::CCSprite, createWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getAtlasIndex)), Thiscall, cocos2d::CCSprite, getAtlasIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getBlVertexMod)), Thiscall, cocos2d::CCSprite, getBlVertexMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getBrVertexMod)), Thiscall, cocos2d::CCSprite, getBrVertexMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getDontDraw)), Thiscall, cocos2d::CCSprite, getDontDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getOffsetPosition)), Thiscall, cocos2d::CCSprite, getOffsetPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getQuad)), Thiscall, cocos2d::CCSprite, getQuad, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getTextureAtlas)), Thiscall, cocos2d::CCSprite, getTextureAtlas, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getTextureRect)), Thiscall, cocos2d::CCSprite, getTextureRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getTlVertexMod)), Thiscall, cocos2d::CCSprite, getTlVertexMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getTrVertexMod)), Thiscall, cocos2d::CCSprite, getTrVertexMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getUnflippedOffsetPosition)), Thiscall, cocos2d::CCSprite, getUnflippedOffsetPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::getUseVertexMod)), Thiscall, cocos2d::CCSprite, getUseVertexMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCSprite::setAtlasIndex)), Thiscall, cocos2d::CCSprite, setAtlasIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCSprite::setBlVertexMod)), Thiscall, cocos2d::CCSprite, setBlVertexMod, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCSprite::setBrVertexMod)), Thiscall, cocos2d::CCSprite, setBrVertexMod, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setDontDraw)), Thiscall, cocos2d::CCSprite, setDontDraw, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setFlipX)), Thiscall, cocos2d::CCSprite, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setFlipY)), Thiscall, cocos2d::CCSprite, setFlipY, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTextureAtlas*>::func(&cocos2d::CCSprite::setTextureAtlas)), Thiscall, cocos2d::CCSprite, setTextureAtlas, cocos2d::CCTextureAtlas*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCSprite::setTlVertexMod)), Thiscall, cocos2d::CCSprite, setTlVertexMod, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCSprite::setTrVertexMod)), Thiscall, cocos2d::CCSprite, setTrVertexMod, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setUseVertexMod)), Thiscall, cocos2d::CCSprite, setUseVertexMod, bool)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress(GetModuleHandleA("libcocos2d.dll"), "??0CCSprite@cocos2d@@QAE@XZ")), Thiscall, cocos2d::CCSprite, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress(GetModuleHandleA("libcocos2d.dll"), "??1CCSprite@cocos2d@@UAE@XZ")), Thiscall, cocos2d::CCSprite)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::isFlipX)), Thiscall, cocos2d::CCSprite, isFlipX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::isFlipY)), Thiscall, cocos2d::CCSprite, isFlipY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::isTextureRectRotated)), Thiscall, cocos2d::CCSprite, isTextureRectRotated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::updateColor)), Thiscall, cocos2d::CCSprite, updateColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::init)), Thiscall, cocos2d::CCSprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setVertexZ)), Thiscall, cocos2d::CCSprite, setVertexZ, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setScaleX)), Thiscall, cocos2d::CCSprite, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setScaleY)), Thiscall, cocos2d::CCSprite, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setScale)), Thiscall, cocos2d::CCSprite, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCSprite::setPosition)), Thiscall, cocos2d::CCSprite, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setSkewX)), Thiscall, cocos2d::CCSprite, setSkewX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setSkewY)), Thiscall, cocos2d::CCSprite, setSkewY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCSprite::setAnchorPoint)), Thiscall, cocos2d::CCSprite, setAnchorPoint, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setVisible)), Thiscall, cocos2d::CCSprite, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setRotation)), Thiscall, cocos2d::CCSprite, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setRotationX)), Thiscall, cocos2d::CCSprite, setRotationX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setRotationY)), Thiscall, cocos2d::CCSprite, setRotationY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSprite::ignoreAnchorPointForPosition)), Thiscall, cocos2d::CCSprite, ignoreAnchorPointForPosition, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCSprite::addChild)), Thiscall, cocos2d::CCSprite, addChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCSprite::addChild)), Thiscall, cocos2d::CCSprite, addChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int, int>::func(&cocos2d::CCSprite::addChild)), Thiscall, cocos2d::CCSprite, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, bool>::func(&cocos2d::CCSprite::removeChild)), Thiscall, cocos2d::CCSprite, removeChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSprite::removeAllChildrenWithCleanup)), Thiscall, cocos2d::CCSprite, removeAllChildrenWithCleanup, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCSprite::reorderChild)), Thiscall, cocos2d::CCSprite, reorderChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::sortAllChildren)), Thiscall, cocos2d::CCSprite, sortAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::draw)), Thiscall, cocos2d::CCSprite, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::updateTransform)), Thiscall, cocos2d::CCSprite, updateTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCSprite::initWithTexture)), Thiscall, cocos2d::CCSprite, initWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&cocos2d::CCSprite::initWithTexture)), Thiscall, cocos2d::CCSprite, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool>::func(&cocos2d::CCSprite::initWithTexture)), Thiscall, cocos2d::CCSprite, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCSprite::initWithSpriteFrame)), Thiscall, cocos2d::CCSprite, initWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCSprite::initWithSpriteFrameName)), Thiscall, cocos2d::CCSprite, initWithSpriteFrameName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCSprite::initWithFile)), Thiscall, cocos2d::CCSprite, initWithFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, cocos2d::CCRect const&>::func(&cocos2d::CCSprite::initWithFile)), Thiscall, cocos2d::CCSprite, initWithFile, char const*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccColor3B const&>::func(&cocos2d::CCSprite::setChildColor)), Thiscall, cocos2d::CCSprite, setChildColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCSprite::setChildOpacity)), Thiscall, cocos2d::CCSprite, setChildOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::getBatchNode)), Thiscall, cocos2d::CCSprite, getBatchNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteBatchNode*>::func(&cocos2d::CCSprite::setBatchNode)), Thiscall, cocos2d::CCSprite, setBatchNode, cocos2d::CCSpriteBatchNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::refreshTextureRect)), Thiscall, cocos2d::CCSprite, refreshTextureRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCSprite::setTextureRect)), Thiscall, cocos2d::CCSprite, setTextureRect, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect const&, bool, cocos2d::CCSize const&>::func(&cocos2d::CCSprite::setTextureRect)), Thiscall, cocos2d::CCSprite, setTextureRect, cocos2d::CCRect const&, bool, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCSprite::setVertexRect)), Thiscall, cocos2d::CCSprite, setVertexRect, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCSprite::setDisplayFrame)), Thiscall, cocos2d::CCSprite, setDisplayFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCSprite::isFrameDisplayed)), Thiscall, cocos2d::CCSprite, isFrameDisplayed, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::displayFrame)), Thiscall, cocos2d::CCSprite, displayFrame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, int>::func(&cocos2d::CCSprite::setDisplayFrameWithAnimationName)), Thiscall, cocos2d::CCSprite, setDisplayFrameWithAnimationName, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::isDirty)), Thiscall, cocos2d::CCSprite, isDirty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setDirty)), Thiscall, cocos2d::CCSprite, setDirty, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCSprite::setTextureCoords)), Thiscall, cocos2d::CCSprite, setTextureCoords, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::updateBlendFunc)), Thiscall, cocos2d::CCSprite, updateBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::setReorderChildDirtyRecursively)), Thiscall, cocos2d::CCSprite, setReorderChildDirtyRecursively, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setDirtyRecursively)), Thiscall, cocos2d::CCSprite, setDirtyRecursively, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccColor3B const&>::func(&cocos2d::CCSprite::setColor)), Thiscall, cocos2d::CCSprite, setColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCSprite::setOpacity)), Thiscall, cocos2d::CCSprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setOpacityModifyRGB)), Thiscall, cocos2d::CCSprite, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::isOpacityModifyRGB)), Thiscall, cocos2d::CCSprite, isOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccColor3B const&>::func(&cocos2d::CCSprite::updateDisplayedColor)), Thiscall, cocos2d::CCSprite, updateDisplayedColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCSprite::updateDisplayedOpacity)), Thiscall, cocos2d::CCSprite, updateDisplayedOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccBlendFunc>::func(&cocos2d::CCSprite::setBlendFunc)), Thiscall, cocos2d::CCSprite, setBlendFunc, cocos2d::_ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::getBlendFunc)), Thiscall, cocos2d::CCSprite, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::getTexture)), Thiscall, cocos2d::CCSprite, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCSprite::setTexture)), Thiscall, cocos2d::CCSprite, setTexture, cocos2d::CCTexture2D*)
		}
	};
}
