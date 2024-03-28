#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCMoveCNode.hpp>
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

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCMoveCNode> : ModifyBase<ModifyDerive<Der, CCMoveCNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCMoveCNode>>;
		using ModifyBase<ModifyDerive<Der, CCMoveCNode>>::ModifyBase;
		using Base = CCMoveCNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1dedf0, Optcall, CCMoveCNode, create, )
		}
	};
}
