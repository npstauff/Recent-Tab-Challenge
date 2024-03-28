#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAnimationPopup.hpp>
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

	#ifndef GEODE_STATICS_onAnimationIDArrow
		#define GEODE_STATICS_onAnimationIDArrow
		GEODE_AS_STATIC_FUNCTION(onAnimationIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_updateAnimationID
		#define GEODE_STATICS_updateAnimationID
		GEODE_AS_STATIC_FUNCTION(updateAnimationID) 
	#endif

	#ifndef GEODE_STATICS_updateAnimationTextInputLabel
		#define GEODE_STATICS_updateAnimationTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateAnimationTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAnimationPopup> : ModifyBase<ModifyDerive<Der, SetupAnimationPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAnimationPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAnimationPopup>>::ModifyBase;
		using Base = SetupAnimationPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31c510, Optcall, SetupAnimationPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31c5c0, Membercall, SetupAnimationPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31d110, Thiscall, SetupAnimationPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31d580, Thiscall, SetupAnimationPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31d280, Thiscall, SetupAnimationPopup, textChanged, CCTextInputNode*)
		}
	};
}
