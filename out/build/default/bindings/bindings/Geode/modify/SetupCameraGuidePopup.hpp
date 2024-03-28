#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCameraGuidePopup.hpp>
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
	struct ModifyDerive<Der, SetupCameraGuidePopup> : ModifyBase<ModifyDerive<Der, SetupCameraGuidePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCameraGuidePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupCameraGuidePopup>>::ModifyBase;
		using Base = SetupCameraGuidePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36c0d0, Optcall, SetupCameraGuidePopup, create, CameraTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36c180, Membercall, SetupCameraGuidePopup, init, CameraTriggerGameObject*, cocos2d::CCArray*)
		}
	};
}
