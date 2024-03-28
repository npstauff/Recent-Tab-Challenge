#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupKeyframePopup.hpp>
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

	#ifndef GEODE_STATICS_onTimeMode
		#define GEODE_STATICS_onTimeMode
		GEODE_AS_STATIC_FUNCTION(onTimeMode) 
	#endif

	#ifndef GEODE_STATICS_refreshPreviewArt
		#define GEODE_STATICS_refreshPreviewArt
		GEODE_AS_STATIC_FUNCTION(refreshPreviewArt) 
	#endif

	#ifndef GEODE_STATICS_updateTimeModeButtons
		#define GEODE_STATICS_updateTimeModeButtons
		GEODE_AS_STATIC_FUNCTION(updateTimeModeButtons) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCustomButton
		#define GEODE_STATICS_onCustomButton
		GEODE_AS_STATIC_FUNCTION(onCustomButton) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupKeyframePopup> : ModifyBase<ModifyDerive<Der, SetupKeyframePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupKeyframePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupKeyframePopup>>::ModifyBase;
		using Base = SetupKeyframePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x332830, Optcall, SetupKeyframePopup, create, KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3328e0, Membercall, SetupKeyframePopup, init, KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*)
		}
	};
}
