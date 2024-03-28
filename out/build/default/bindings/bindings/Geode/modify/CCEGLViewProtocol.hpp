#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getViewPortRect
		#define GEODE_STATICS_getViewPortRect
		GEODE_AS_STATIC_FUNCTION(getViewPortRect) 
	#endif

	#ifndef GEODE_STATICS_getScaleX
		#define GEODE_STATICS_getScaleX
		GEODE_AS_STATIC_FUNCTION(getScaleX) 
	#endif

	#ifndef GEODE_STATICS_getScaleY
		#define GEODE_STATICS_getScaleY
		GEODE_AS_STATIC_FUNCTION(getScaleY) 
	#endif

	#ifndef GEODE_STATICS_setDesignResolutionSize
		#define GEODE_STATICS_setDesignResolutionSize
		GEODE_AS_STATIC_FUNCTION(setDesignResolutionSize) 
	#endif

	#ifndef GEODE_STATICS_setFrameSize
		#define GEODE_STATICS_setFrameSize
		GEODE_AS_STATIC_FUNCTION(setFrameSize) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCEGLViewProtocol> : ModifyBase<ModifyDerive<Der, cocos2d::CCEGLViewProtocol>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCEGLViewProtocol>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCEGLViewProtocol>>::ModifyBase;
		using Base = cocos2d::CCEGLViewProtocol;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::getCocos() + 0xbac00, Thiscall, cocos2d::CCEGLViewProtocol, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::getCocos() + 0xbacc0, Thiscall, cocos2d::CCEGLViewProtocol)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getViewPortRect)), Thiscall, cocos2d::CCEGLViewProtocol, getViewPortRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getScaleX)), Thiscall, cocos2d::CCEGLViewProtocol, getScaleX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getScaleY)), Thiscall, cocos2d::CCEGLViewProtocol, getScaleY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float, ResolutionPolicy>::func(&cocos2d::CCEGLViewProtocol::setDesignResolutionSize)), Thiscall, cocos2d::CCEGLViewProtocol, setDesignResolutionSize, float, float, ResolutionPolicy)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float>::func(&cocos2d::CCEGLViewProtocol::setFrameSize)), Thiscall, cocos2d::CCEGLViewProtocol, setFrameSize, float, float)
		}
	};
}
