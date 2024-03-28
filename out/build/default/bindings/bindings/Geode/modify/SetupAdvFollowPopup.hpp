#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAdvFollowPopup.hpp>
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

	#ifndef GEODE_STATICS_onMode
		#define GEODE_STATICS_onMode
		GEODE_AS_STATIC_FUNCTION(onMode) 
	#endif

	#ifndef GEODE_STATICS_onPremade
		#define GEODE_STATICS_onPremade
		GEODE_AS_STATIC_FUNCTION(onPremade) 
	#endif

	#ifndef GEODE_STATICS_updateMode
		#define GEODE_STATICS_updateMode
		GEODE_AS_STATIC_FUNCTION(updateMode) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_selectPremadeClosed
		#define GEODE_STATICS_selectPremadeClosed
		GEODE_AS_STATIC_FUNCTION(selectPremadeClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAdvFollowPopup> : ModifyBase<ModifyDerive<Der, SetupAdvFollowPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAdvFollowPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAdvFollowPopup>>::ModifyBase;
		using Base = SetupAdvFollowPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3184c0, Optcall, SetupAdvFollowPopup, create, AdvancedFollowTriggerObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x318570, Membercall, SetupAdvFollowPopup, init, AdvancedFollowTriggerObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31aa70, Membercall, SetupAdvFollowPopup, onMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31ab60, Membercall, SetupAdvFollowPopup, onPremade, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31aaf0, Membercall, SetupAdvFollowPopup, updateMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31a670, Thiscall, SetupAdvFollowPopup, updateDefaultTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31a760, Thiscall, SetupAdvFollowPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31a9d0, Thiscall, SetupAdvFollowPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31aba0, Thiscall, SetupAdvFollowPopup, selectPremadeClosed, SelectPremadeLayer*, int)
		}
	};
}
