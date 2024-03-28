#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupTransformPopup.hpp>
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
	struct ModifyDerive<Der, SetupTransformPopup> : ModifyBase<ModifyDerive<Der, SetupTransformPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupTransformPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupTransformPopup>>::ModifyBase;
		using Base = SetupTransformPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3635c0, Optcall, SetupTransformPopup, create, TransformTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x363670, Membercall, SetupTransformPopup, init, TransformTriggerGameObject*, cocos2d::CCArray*)
		}
	};
}
