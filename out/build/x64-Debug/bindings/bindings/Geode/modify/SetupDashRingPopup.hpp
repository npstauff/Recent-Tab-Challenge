#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupDashRingPopup.hpp>
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
	struct ModifyDerive<Der, SetupDashRingPopup> : ModifyBase<ModifyDerive<Der, SetupDashRingPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupDashRingPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupDashRingPopup>>::ModifyBase;
		using Base = SetupDashRingPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36da50, Optcall, SetupDashRingPopup, create, DashRingObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36db00, Membercall, SetupDashRingPopup, init, DashRingObject*, cocos2d::CCArray*)
		}
	};
}
