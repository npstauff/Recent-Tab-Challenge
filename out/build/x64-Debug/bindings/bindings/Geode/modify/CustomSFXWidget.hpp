#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSFXWidget.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_deleteSFX
		#define GEODE_STATICS_deleteSFX
		GEODE_AS_STATIC_FUNCTION(deleteSFX) 
	#endif

	#ifndef GEODE_STATICS_downloadFailed
		#define GEODE_STATICS_downloadFailed
		GEODE_AS_STATIC_FUNCTION(downloadFailed) 
	#endif

	#ifndef GEODE_STATICS_hideLoadingArt
		#define GEODE_STATICS_hideLoadingArt
		GEODE_AS_STATIC_FUNCTION(hideLoadingArt) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCancelDownload
		#define GEODE_STATICS_onCancelDownload
		GEODE_AS_STATIC_FUNCTION(onCancelDownload) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onDownload
		#define GEODE_STATICS_onDownload
		GEODE_AS_STATIC_FUNCTION(onDownload) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_showLoadingArt
		#define GEODE_STATICS_showLoadingArt
		GEODE_AS_STATIC_FUNCTION(showLoadingArt) 
	#endif

	#ifndef GEODE_STATICS_startDownload
		#define GEODE_STATICS_startDownload
		GEODE_AS_STATIC_FUNCTION(startDownload) 
	#endif

	#ifndef GEODE_STATICS_startMonitorDownload
		#define GEODE_STATICS_startMonitorDownload
		GEODE_AS_STATIC_FUNCTION(startMonitorDownload) 
	#endif

	#ifndef GEODE_STATICS_updateDownloadProgress
		#define GEODE_STATICS_updateDownloadProgress
		GEODE_AS_STATIC_FUNCTION(updateDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_updateError
		#define GEODE_STATICS_updateError
		GEODE_AS_STATIC_FUNCTION(updateError) 
	#endif

	#ifndef GEODE_STATICS_updateLengthMod
		#define GEODE_STATICS_updateLengthMod
		GEODE_AS_STATIC_FUNCTION(updateLengthMod) 
	#endif

	#ifndef GEODE_STATICS_updatePlaybackBtn
		#define GEODE_STATICS_updatePlaybackBtn
		GEODE_AS_STATIC_FUNCTION(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_STATICS_updateProgressBar
		#define GEODE_STATICS_updateProgressBar
		GEODE_AS_STATIC_FUNCTION(updateProgressBar) 
	#endif

	#ifndef GEODE_STATICS_updateSFXInfo
		#define GEODE_STATICS_updateSFXInfo
		GEODE_AS_STATIC_FUNCTION(updateSFXInfo) 
	#endif

	#ifndef GEODE_STATICS_updateSFXObject
		#define GEODE_STATICS_updateSFXObject
		GEODE_AS_STATIC_FUNCTION(updateSFXObject) 
	#endif

	#ifndef GEODE_STATICS_verifySFXID
		#define GEODE_STATICS_verifySFXID
		GEODE_AS_STATIC_FUNCTION(verifySFXID) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFinished
		#define GEODE_STATICS_downloadSFXFinished
		GEODE_AS_STATIC_FUNCTION(downloadSFXFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFailed
		#define GEODE_STATICS_downloadSFXFailed
		GEODE_AS_STATIC_FUNCTION(downloadSFXFailed) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSFXWidget> : ModifyBase<ModifyDerive<Der, CustomSFXWidget>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSFXWidget>>;
		using ModifyBase<ModifyDerive<Der, CustomSFXWidget>>::ModifyBase;
		using Base = CustomSFXWidget;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8dcf0, Membercall, CustomSFXWidget, deleteSFX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8eaf0, Membercall, CustomSFXWidget, downloadFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8e010, Membercall, CustomSFXWidget, hideLoadingArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8cf20, Membercall, CustomSFXWidget, init, SFXInfoObject*, CustomSFXDelegate*, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8e0f0, Membercall, CustomSFXWidget, onDownload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8e270, Membercall, CustomSFXWidget, onPlayback, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8dec0, Membercall, CustomSFXWidget, showLoadingArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8e1b0, Membercall, CustomSFXWidget, startMonitorDownload, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8e490, Membercall, CustomSFXWidget, updateSFXInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8de40, Membercall, CustomSFXWidget, updateSFXObject, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8eab0, Thiscall, CustomSFXWidget, downloadSFXFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8e480, Thiscall, CustomSFXWidget, songStateChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8ebf0, Thiscall, CustomSFXWidget, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
