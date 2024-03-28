#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAnimSettingsPopup.hpp>
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

	#ifndef GEODE_STATICS_updateAnimSettings
		#define GEODE_STATICS_updateAnimSettings
		GEODE_AS_STATIC_FUNCTION(updateAnimSettings) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAnimSettingsPopup> : ModifyBase<ModifyDerive<Der, SetupAnimSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAnimSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAnimSettingsPopup>>::ModifyBase;
		using Base = SetupAnimSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31d690, Optcall, SetupAnimSettingsPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31d740, Membercall, SetupAnimSettingsPopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
