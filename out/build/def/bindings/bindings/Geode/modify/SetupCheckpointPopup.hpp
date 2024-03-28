#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCheckpointPopup.hpp>
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
	struct ModifyDerive<Der, SetupCheckpointPopup> : ModifyBase<ModifyDerive<Der, SetupCheckpointPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCheckpointPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupCheckpointPopup>>::ModifyBase;
		using Base = SetupCheckpointPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366b80, Optcall, SetupCheckpointPopup, create, CheckpointGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366c30, Membercall, SetupCheckpointPopup, init, CheckpointGameObject*, cocos2d::CCArray*)
		}
	};
}
