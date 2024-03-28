#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCameraRotatePopup2.hpp>
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
	struct ModifyDerive<Der, SetupCameraRotatePopup2> : ModifyBase<ModifyDerive<Der, SetupCameraRotatePopup2>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCameraRotatePopup2>>;
		using ModifyBase<ModifyDerive<Der, SetupCameraRotatePopup2>>::ModifyBase;
		using Base = SetupCameraRotatePopup2;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x328470, Optcall, SetupCameraRotatePopup2, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x328520, Membercall, SetupCameraRotatePopup2, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
