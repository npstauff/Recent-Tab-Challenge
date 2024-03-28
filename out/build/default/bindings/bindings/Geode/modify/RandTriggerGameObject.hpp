#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RandTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getRandomGroupID
		#define GEODE_STATICS_getRandomGroupID
		GEODE_AS_STATIC_FUNCTION(getRandomGroupID) 
	#endif

	#ifndef GEODE_STATICS_getTotalChance
		#define GEODE_STATICS_getTotalChance
		GEODE_AS_STATIC_FUNCTION(getTotalChance) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
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
	struct ModifyDerive<Der, RandTriggerGameObject> : ModifyBase<ModifyDerive<Der, RandTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RandTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, RandTriggerGameObject>>::ModifyBase;
		using Base = RandTriggerGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a9860, Optcall, RandTriggerGameObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a9950, Membercall, RandTriggerGameObject, getRandomGroupID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a9940, Thiscall, RandTriggerGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a9a00, Thiscall, RandTriggerGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a9b30, Thiscall, RandTriggerGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a9d70, Thiscall, RandTriggerGameObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
