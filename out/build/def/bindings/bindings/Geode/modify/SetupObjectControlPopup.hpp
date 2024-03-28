#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupObjectControlPopup.hpp>
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
	struct ModifyDerive<Der, SetupObjectControlPopup> : ModifyBase<ModifyDerive<Der, SetupObjectControlPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupObjectControlPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupObjectControlPopup>>::ModifyBase;
		using Base = SetupObjectControlPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36d7b0, Optcall, SetupObjectControlPopup, create, ObjectControlGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36d860, Membercall, SetupObjectControlPopup, init, ObjectControlGameObject*, cocos2d::CCArray*)
		}
	};
}
