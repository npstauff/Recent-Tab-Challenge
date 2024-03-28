#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelOptionsLayer2.hpp>
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

	#ifndef GEODE_STATICS_setupOptions
		#define GEODE_STATICS_setupOptions
		GEODE_AS_STATIC_FUNCTION(setupOptions) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelOptionsLayer2> : ModifyBase<ModifyDerive<Der, LevelOptionsLayer2>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelOptionsLayer2>>;
		using ModifyBase<ModifyDerive<Der, LevelOptionsLayer2>>::ModifyBase;
		using Base = LevelOptionsLayer2;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271f10, Optcall, LevelOptionsLayer2, create, LevelSettingsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271fb0, Membercall, LevelOptionsLayer2, init, LevelSettingsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272080, Thiscall, LevelOptionsLayer2, setupOptions, )
		}
	};
}
