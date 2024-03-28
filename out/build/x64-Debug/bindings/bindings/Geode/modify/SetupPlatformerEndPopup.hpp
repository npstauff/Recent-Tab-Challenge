#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupPlatformerEndPopup.hpp>
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
	struct ModifyDerive<Der, SetupPlatformerEndPopup> : ModifyBase<ModifyDerive<Der, SetupPlatformerEndPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupPlatformerEndPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupPlatformerEndPopup>>::ModifyBase;
		using Base = SetupPlatformerEndPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32ce80, Optcall, SetupPlatformerEndPopup, create, EndTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32cf40, Membercall, SetupPlatformerEndPopup, init, EndTriggerGameObject*, cocos2d::CCArray*)
		}
	};
}
