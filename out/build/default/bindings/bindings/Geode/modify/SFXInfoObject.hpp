#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXInfoObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getLowerCaseName
		#define GEODE_STATICS_getLowerCaseName
		GEODE_AS_STATIC_FUNCTION(getLowerCaseName) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXInfoObject> : ModifyBase<ModifyDerive<Der, SFXInfoObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXInfoObject>>;
		using ModifyBase<ModifyDerive<Der, SFXInfoObject>>::ModifyBase;
		using Base = SFXInfoObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2891d0, Optcall, SFXInfoObject, create, int, gd::string, int, int, int)
		}
	};
}
