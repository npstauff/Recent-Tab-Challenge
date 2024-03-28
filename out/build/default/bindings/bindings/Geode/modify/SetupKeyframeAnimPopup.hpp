#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupKeyframeAnimPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupKeyframeAnimPopup> : ModifyBase<ModifyDerive<Der, SetupKeyframeAnimPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupKeyframeAnimPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupKeyframeAnimPopup>>::ModifyBase;
		using Base = SetupKeyframeAnimPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x332110, Optcall, SetupKeyframeAnimPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3321c0, Membercall, SetupKeyframeAnimPopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
