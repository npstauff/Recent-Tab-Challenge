#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupPlayerControlPopup.hpp>
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
	struct ModifyDerive<Der, SetupPlayerControlPopup> : ModifyBase<ModifyDerive<Der, SetupPlayerControlPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupPlayerControlPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupPlayerControlPopup>>::ModifyBase;
		using Base = SetupPlayerControlPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366020, Optcall, SetupPlayerControlPopup, create, PlayerControlGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3660d0, Membercall, SetupPlayerControlPopup, init, PlayerControlGameObject*, cocos2d::CCArray*)
		}
	};
}
