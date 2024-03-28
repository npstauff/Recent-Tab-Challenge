#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlatformDownloadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, PlatformDownloadDelegate> : ModifyBase<ModifyDerive<Der, PlatformDownloadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlatformDownloadDelegate>>;
		using ModifyBase<ModifyDerive<Der, PlatformDownloadDelegate>>::ModifyBase;
		using Base = PlatformDownloadDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
