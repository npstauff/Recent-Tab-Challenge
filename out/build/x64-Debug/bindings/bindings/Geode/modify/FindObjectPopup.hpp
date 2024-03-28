#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FindObjectPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onFindObjectID
		#define GEODE_STATICS_onFindObjectID
		GEODE_AS_STATIC_FUNCTION(onFindObjectID) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FindObjectPopup> : ModifyBase<ModifyDerive<Der, FindObjectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FindObjectPopup>>;
		using ModifyBase<ModifyDerive<Der, FindObjectPopup>>::ModifyBase;
		using Base = FindObjectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x210890, Optcall, FindObjectPopup, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x210930, Thiscall, FindObjectPopup, init, )
		}
	};
}
