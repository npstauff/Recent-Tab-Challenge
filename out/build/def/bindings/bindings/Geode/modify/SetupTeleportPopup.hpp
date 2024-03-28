#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupTeleportPopup.hpp>
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

	#ifndef GEODE_STATICS_onTeleportGravity
		#define GEODE_STATICS_onTeleportGravity
		GEODE_AS_STATIC_FUNCTION(onTeleportGravity) 
	#endif

	#ifndef GEODE_STATICS_updateTeleportGravityState
		#define GEODE_STATICS_updateTeleportGravityState
		GEODE_AS_STATIC_FUNCTION(updateTeleportGravityState) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupTeleportPopup> : ModifyBase<ModifyDerive<Der, SetupTeleportPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupTeleportPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupTeleportPopup>>::ModifyBase;
		using Base = SetupTeleportPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x35ff80, Optcall, SetupTeleportPopup, create, TeleportPortalObject*, cocos2d::CCArray*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x360030, Membercall, SetupTeleportPopup, init, TeleportPortalObject*, cocos2d::CCArray*, int, bool)
		}
	};
}
