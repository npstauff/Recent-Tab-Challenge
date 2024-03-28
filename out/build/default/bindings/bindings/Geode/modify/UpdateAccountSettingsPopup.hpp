#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UpdateAccountSettingsPopup.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_updateSettingsFinished
		#define GEODE_STATICS_updateSettingsFinished
		GEODE_AS_STATIC_FUNCTION(updateSettingsFinished) 
	#endif

	#ifndef GEODE_STATICS_updateSettingsFailed
		#define GEODE_STATICS_updateSettingsFailed
		GEODE_AS_STATIC_FUNCTION(updateSettingsFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UpdateAccountSettingsPopup> : ModifyBase<ModifyDerive<Der, UpdateAccountSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UpdateAccountSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, UpdateAccountSettingsPopup>>::ModifyBase;
		using Base = UpdateAccountSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20a3d0, Optcall, UpdateAccountSettingsPopup, create, GJAccountSettingsLayer*, int, int, int, gd::string, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20a540, Membercall, UpdateAccountSettingsPopup, init, GJAccountSettingsLayer*, int, int, int, gd::string, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20ab80, Thiscall, UpdateAccountSettingsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20aa20, Thiscall, UpdateAccountSettingsPopup, updateSettingsFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20aab0, Thiscall, UpdateAccountSettingsPopup, updateSettingsFailed, )
		}
	};
}
