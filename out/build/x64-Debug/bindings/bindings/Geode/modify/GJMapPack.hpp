#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMapPack.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_completedMaps
		#define GEODE_STATICS_completedMaps
		GEODE_AS_STATIC_FUNCTION(completedMaps) 
	#endif

	#ifndef GEODE_STATICS_hasCompletedMapPack
		#define GEODE_STATICS_hasCompletedMapPack
		GEODE_AS_STATIC_FUNCTION(hasCompletedMapPack) 
	#endif

	#ifndef GEODE_STATICS_parsePackColors
		#define GEODE_STATICS_parsePackColors
		GEODE_AS_STATIC_FUNCTION(parsePackColors) 
	#endif

	#ifndef GEODE_STATICS_parsePackLevels
		#define GEODE_STATICS_parsePackLevels
		GEODE_AS_STATIC_FUNCTION(parsePackLevels) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMapPack> : ModifyBase<ModifyDerive<Der, GJMapPack>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMapPack>>;
		using ModifyBase<ModifyDerive<Der, GJMapPack>>::ModifyBase;
		using Base = GJMapPack;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x117650, Optcall, GJMapPack, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x117050, Optcall, GJMapPack, create, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x117ab0, Membercall, GJMapPack, completedMaps, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x117cd0, Membercall, GJMapPack, hasCompletedMapPack, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1176f0, Thiscall, GJMapPack, init, )
		}
	};
}
