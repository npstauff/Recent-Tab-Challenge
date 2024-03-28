#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPathRewardPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_closePopup
		#define GEODE_STATICS_closePopup
		GEODE_AS_STATIC_FUNCTION(closePopup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClaim
		#define GEODE_STATICS_onClaim
		GEODE_AS_STATIC_FUNCTION(onClaim) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJPathRewardPopup> : ModifyBase<ModifyDerive<Der, GJPathRewardPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPathRewardPopup>>;
		using ModifyBase<ModifyDerive<Der, GJPathRewardPopup>>::ModifyBase;
		using Base = GJPathRewardPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x200930, Optcall, GJPathRewardPopup, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2009d0, Membercall, GJPathRewardPopup, init, int)
		}
	};
}
