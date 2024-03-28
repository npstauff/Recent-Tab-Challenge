#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAudioLineGuidePopup.hpp>
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

	#ifndef GEODE_STATICS_onSpeed
		#define GEODE_STATICS_onSpeed
		GEODE_AS_STATIC_FUNCTION(onSpeed) 
	#endif

	#ifndef GEODE_STATICS_selectSettingClosed
		#define GEODE_STATICS_selectSettingClosed
		GEODE_AS_STATIC_FUNCTION(selectSettingClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAudioLineGuidePopup> : ModifyBase<ModifyDerive<Der, SetupAudioLineGuidePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAudioLineGuidePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAudioLineGuidePopup>>::ModifyBase;
		using Base = SetupAudioLineGuidePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36ba20, Optcall, SetupAudioLineGuidePopup, create, AudioLineGuideGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x36bad0, Membercall, SetupAudioLineGuidePopup, init, AudioLineGuideGameObject*, cocos2d::CCArray*)
		}
	};
}
