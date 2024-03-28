#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCoinLayer.hpp>
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
	struct ModifyDerive<Der, SetupCoinLayer> : ModifyBase<ModifyDerive<Der, SetupCoinLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCoinLayer>>;
		using ModifyBase<ModifyDerive<Der, SetupCoinLayer>>::ModifyBase;
		using Base = SetupCoinLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36b340, Optcall, SetupCoinLayer, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36b3f0, Membercall, SetupCoinLayer, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
