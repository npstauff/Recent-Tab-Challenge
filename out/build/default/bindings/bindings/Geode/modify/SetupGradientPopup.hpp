#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupGradientPopup.hpp>
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

	#ifndef GEODE_STATICS_onBlending
		#define GEODE_STATICS_onBlending
		GEODE_AS_STATIC_FUNCTION(onBlending) 
	#endif

	#ifndef GEODE_STATICS_onZLayer
		#define GEODE_STATICS_onZLayer
		GEODE_AS_STATIC_FUNCTION(onZLayer) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateBlending
		#define GEODE_STATICS_updateBlending
		GEODE_AS_STATIC_FUNCTION(updateBlending) 
	#endif

	#ifndef GEODE_STATICS_updateBlendingLabel
		#define GEODE_STATICS_updateBlendingLabel
		GEODE_AS_STATIC_FUNCTION(updateBlendingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateGradientLabels
		#define GEODE_STATICS_updateGradientLabels
		GEODE_AS_STATIC_FUNCTION(updateGradientLabels) 
	#endif

	#ifndef GEODE_STATICS_updateZLayerButtons
		#define GEODE_STATICS_updateZLayerButtons
		GEODE_AS_STATIC_FUNCTION(updateZLayerButtons) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onPlusButton
		#define GEODE_STATICS_onPlusButton
		GEODE_AS_STATIC_FUNCTION(onPlusButton) 
	#endif

	#ifndef GEODE_STATICS_updateToggleItem
		#define GEODE_STATICS_updateToggleItem
		GEODE_AS_STATIC_FUNCTION(updateToggleItem) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupGradientPopup> : ModifyBase<ModifyDerive<Der, SetupGradientPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupGradientPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupGradientPopup>>::ModifyBase;
		using Base = SetupGradientPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32f140, Optcall, SetupGradientPopup, create, GradientTriggerObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32f1f0, Membercall, SetupGradientPopup, init, GradientTriggerObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32fe60, Thiscall, SetupGradientPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32ff50, Thiscall, SetupGradientPopup, onPlusButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32ff90, Thiscall, SetupGradientPopup, updateToggleItem, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x330470, Thiscall, SetupGradientPopup, valueDidChange, int, float)
		}
	};
}
