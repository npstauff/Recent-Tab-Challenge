#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CurrencyRewardDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, CurrencyRewardDelegate> : ModifyBase<ModifyDerive<Der, CurrencyRewardDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CurrencyRewardDelegate>>;
		using ModifyBase<ModifyDerive<Der, CurrencyRewardDelegate>>::ModifyBase;
		using Base = CurrencyRewardDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
