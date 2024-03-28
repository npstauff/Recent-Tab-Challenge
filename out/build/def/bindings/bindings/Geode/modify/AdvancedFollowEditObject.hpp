#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdvancedFollowEditObject.hpp>
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

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AdvancedFollowEditObject> : ModifyBase<ModifyDerive<Der, AdvancedFollowEditObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdvancedFollowEditObject>>;
		using ModifyBase<ModifyDerive<Der, AdvancedFollowEditObject>>::ModifyBase;
		using Base = AdvancedFollowEditObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x396ba0, Optcall, AdvancedFollowEditObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x397030, Thiscall, AdvancedFollowEditObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x396c40, Thiscall, AdvancedFollowEditObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
