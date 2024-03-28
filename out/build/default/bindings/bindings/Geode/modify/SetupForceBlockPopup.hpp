#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupForceBlockPopup.hpp>
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

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupForceBlockPopup> : ModifyBase<ModifyDerive<Der, SetupForceBlockPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupForceBlockPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupForceBlockPopup>>::ModifyBase;
		using Base = SetupForceBlockPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36c4d0, Optcall, SetupForceBlockPopup, create, ForceBlockGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36c580, Membercall, SetupForceBlockPopup, init, ForceBlockGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36ca30, Thiscall, SetupForceBlockPopup, valueDidChange, int, float)
		}
	};
}
