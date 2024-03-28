#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, UploadActionDelegate> : ModifyBase<ModifyDerive<Der, UploadActionDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadActionDelegate>>;
		using ModifyBase<ModifyDerive<Der, UploadActionDelegate>>::ModifyBase;
		using Base = UploadActionDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
