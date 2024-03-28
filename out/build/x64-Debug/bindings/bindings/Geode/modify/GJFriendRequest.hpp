#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJFriendRequest.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, GJFriendRequest> : ModifyBase<ModifyDerive<Der, GJFriendRequest>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJFriendRequest>>;
		using ModifyBase<ModifyDerive<Der, GJFriendRequest>>::ModifyBase;
		using Base = GJFriendRequest;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1194e0, Optcall, GJFriendRequest, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1190e0, Optcall, GJFriendRequest, create, cocos2d::CCDictionary*)
		}
	};
}
