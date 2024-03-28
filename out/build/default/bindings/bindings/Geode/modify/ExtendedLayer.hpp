#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ExtendedLayer.hpp>
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

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ExtendedLayer> : ModifyBase<ModifyDerive<Der, ExtendedLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ExtendedLayer>>;
		using ModifyBase<ModifyDerive<Der, ExtendedLayer>>::ModifyBase;
		using Base = ExtendedLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f930, Optcall, ExtendedLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f9d0, Thiscall, ExtendedLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f9e0, Thiscall, ExtendedLayer, setPosition, cocos2d::CCPoint const&)
		}
	};
}
