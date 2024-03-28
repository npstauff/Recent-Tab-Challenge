#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, UploadPopupDelegate> : ModifyBase<ModifyDerive<Der, UploadPopupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadPopupDelegate>>;
		using ModifyBase<ModifyDerive<Der, UploadPopupDelegate>>::ModifyBase;
		using Base = UploadPopupDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
