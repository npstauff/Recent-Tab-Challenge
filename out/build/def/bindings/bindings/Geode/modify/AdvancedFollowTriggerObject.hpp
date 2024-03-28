#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdvancedFollowTriggerObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getAdvancedFollowID
		#define GEODE_STATICS_getAdvancedFollowID
		GEODE_AS_STATIC_FUNCTION(getAdvancedFollowID) 
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
	struct ModifyDerive<Der, AdvancedFollowTriggerObject> : ModifyBase<ModifyDerive<Der, AdvancedFollowTriggerObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdvancedFollowTriggerObject>>;
		using ModifyBase<ModifyDerive<Der, AdvancedFollowTriggerObject>>::ModifyBase;
		using Base = AdvancedFollowTriggerObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x393950, Optcall, AdvancedFollowTriggerObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3939f0, Membercall, AdvancedFollowTriggerObject, getAdvancedFollowID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x395bc0, Thiscall, AdvancedFollowTriggerObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x393a50, Thiscall, AdvancedFollowTriggerObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
