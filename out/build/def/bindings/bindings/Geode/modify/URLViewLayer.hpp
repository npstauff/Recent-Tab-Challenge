#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/URLViewLayer.hpp>
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
	struct ModifyDerive<Der, URLViewLayer> : ModifyBase<ModifyDerive<Der, URLViewLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, URLViewLayer>>;
		using ModifyBase<ModifyDerive<Der, URLViewLayer>>::ModifyBase;
		using Base = URLViewLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2166a0, Optcall, URLViewLayer, create, gd::string, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216770, Membercall, URLViewLayer, init, gd::string, cocos2d::CCArray*)
		}
	};
}
