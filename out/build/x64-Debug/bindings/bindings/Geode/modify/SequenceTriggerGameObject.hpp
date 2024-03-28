#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SequenceTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addCount
		#define GEODE_STATICS_addCount
		GEODE_AS_STATIC_FUNCTION(addCount) 
	#endif

	#ifndef GEODE_STATICS_addTarget
		#define GEODE_STATICS_addTarget
		GEODE_AS_STATIC_FUNCTION(addTarget) 
	#endif

	#ifndef GEODE_STATICS_deleteTarget
		#define GEODE_STATICS_deleteTarget
		GEODE_AS_STATIC_FUNCTION(deleteTarget) 
	#endif

	#ifndef GEODE_STATICS_reorderTarget
		#define GEODE_STATICS_reorderTarget
		GEODE_AS_STATIC_FUNCTION(reorderTarget) 
	#endif

	#ifndef GEODE_STATICS_updateSequenceTotalCount
		#define GEODE_STATICS_updateSequenceTotalCount
		GEODE_AS_STATIC_FUNCTION(updateSequenceTotalCount) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
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
	struct ModifyDerive<Der, SequenceTriggerGameObject> : ModifyBase<ModifyDerive<Der, SequenceTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SequenceTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, SequenceTriggerGameObject>>::ModifyBase;
		using Base = SequenceTriggerGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a9fd0, Optcall, SequenceTriggerGameObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aae20, Membercall, SequenceTriggerGameObject, addCount, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aad40, Membercall, SequenceTriggerGameObject, addTarget, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aada0, Membercall, SequenceTriggerGameObject, reorderTarget, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aa070, Thiscall, SequenceTriggerGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aa080, Thiscall, SequenceTriggerGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aa0a0, Thiscall, SequenceTriggerGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aa5b0, Thiscall, SequenceTriggerGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aa900, Thiscall, SequenceTriggerGameObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
