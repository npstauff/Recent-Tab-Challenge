#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretLayer2.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getBasicMessage
		#define GEODE_STATICS_getBasicMessage
		GEODE_AS_STATIC_FUNCTION(getBasicMessage) 
	#endif

	#ifndef GEODE_STATICS_getErrorMessage
		#define GEODE_STATICS_getErrorMessage
		GEODE_AS_STATIC_FUNCTION(getErrorMessage) 
	#endif

	#ifndef GEODE_STATICS_getMessage
		#define GEODE_STATICS_getMessage
		GEODE_AS_STATIC_FUNCTION(getMessage) 
	#endif

	#ifndef GEODE_STATICS_getThreadMessage
		#define GEODE_STATICS_getThreadMessage
		GEODE_AS_STATIC_FUNCTION(getThreadMessage) 
	#endif

	#ifndef GEODE_STATICS_nodeWithTag
		#define GEODE_STATICS_nodeWithTag
		GEODE_AS_STATIC_FUNCTION(nodeWithTag) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onDoor
		#define GEODE_STATICS_onDoor
		GEODE_AS_STATIC_FUNCTION(onDoor) 
	#endif

	#ifndef GEODE_STATICS_onSecretLevel
		#define GEODE_STATICS_onSecretLevel
		GEODE_AS_STATIC_FUNCTION(onSecretLevel) 
	#endif

	#ifndef GEODE_STATICS_onSubmit
		#define GEODE_STATICS_onSubmit
		GEODE_AS_STATIC_FUNCTION(onSubmit) 
	#endif

	#ifndef GEODE_STATICS_playCoinEffect
		#define GEODE_STATICS_playCoinEffect
		GEODE_AS_STATIC_FUNCTION(playCoinEffect) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_selectAThread
		#define GEODE_STATICS_selectAThread
		GEODE_AS_STATIC_FUNCTION(selectAThread) 
	#endif

	#ifndef GEODE_STATICS_showCompletedLevel
		#define GEODE_STATICS_showCompletedLevel
		GEODE_AS_STATIC_FUNCTION(showCompletedLevel) 
	#endif

	#ifndef GEODE_STATICS_showSecretLevel
		#define GEODE_STATICS_showSecretLevel
		GEODE_AS_STATIC_FUNCTION(showSecretLevel) 
	#endif

	#ifndef GEODE_STATICS_updateMessageLabel
		#define GEODE_STATICS_updateMessageLabel
		GEODE_AS_STATIC_FUNCTION(updateMessageLabel) 
	#endif

	#ifndef GEODE_STATICS_updateSearchLabel
		#define GEODE_STATICS_updateSearchLabel
		GEODE_AS_STATIC_FUNCTION(updateSearchLabel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretLayer2> : ModifyBase<ModifyDerive<Der, SecretLayer2>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretLayer2>>;
		using ModifyBase<ModifyDerive<Der, SecretLayer2>>::ModifyBase;
		using Base = SecretLayer2;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x305630, Optcall, SecretLayer2, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x309030, Membercall, SecretLayer2, getBasicMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3093c0, Membercall, SecretLayer2, getErrorMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308810, Membercall, SecretLayer2, getMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308a70, Membercall, SecretLayer2, getThreadMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x309ce0, Membercall, SecretLayer2, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306e30, Membercall, SecretLayer2, onDoor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306c30, Membercall, SecretLayer2, onSecretLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3071c0, Membercall, SecretLayer2, onSubmit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x309890, Membercall, SecretLayer2, playCoinEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3088b0, Membercall, SecretLayer2, selectAThread, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306460, Membercall, SecretLayer2, showCompletedLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306370, Membercall, SecretLayer2, showSecretLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308770, Membercall, SecretLayer2, updateMessageLabel, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3084b0, Membercall, SecretLayer2, updateSearchLabel, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3056d0, Thiscall, SecretLayer2, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x309d50, Thiscall, SecretLayer2, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x309d40, Thiscall, SecretLayer2, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308240, Thiscall, SecretLayer2, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308370, Thiscall, SecretLayer2, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308410, Thiscall, SecretLayer2, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306be0, Thiscall, SecretLayer2, dialogClosed, DialogLayer*)
		}
	};
}
