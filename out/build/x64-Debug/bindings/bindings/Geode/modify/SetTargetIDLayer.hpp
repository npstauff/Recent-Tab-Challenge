#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetTargetIDLayer.hpp>
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

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetTargetIDLayer> : ModifyBase<ModifyDerive<Der, SetTargetIDLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetTargetIDLayer>>;
		using ModifyBase<ModifyDerive<Der, SetTargetIDLayer>>::ModifyBase;
		using Base = SetTargetIDLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x317e80, Optcall, SetTargetIDLayer, create, EffectGameObject*, cocos2d::CCArray*, gd::string, gd::string, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x317fb0, Membercall, SetTargetIDLayer, init, EffectGameObject*, cocos2d::CCArray*, gd::string, gd::string, int, int, int)
		}
	};
}
