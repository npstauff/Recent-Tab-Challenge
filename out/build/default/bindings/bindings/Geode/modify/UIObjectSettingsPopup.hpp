#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UIObjectSettingsPopup.hpp>
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

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UIObjectSettingsPopup> : ModifyBase<ModifyDerive<Der, UIObjectSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UIObjectSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, UIObjectSettingsPopup>>::ModifyBase;
		using Base = UIObjectSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x367170, Optcall, UIObjectSettingsPopup, create, UISettingsGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x367220, Membercall, UIObjectSettingsPopup, init, UISettingsGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3678c0, Thiscall, UIObjectSettingsPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
		}
	};
}
