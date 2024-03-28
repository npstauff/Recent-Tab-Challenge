#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCScrollLayerExtDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, CCScrollLayerExtDelegate> : ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>>;
		using ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>>::ModifyBase;
		using Base = CCScrollLayerExtDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
