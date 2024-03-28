#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FRequestProfilePage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_deleteSelected
		#define GEODE_STATICS_deleteSelected
		GEODE_AS_STATIC_FUNCTION(deleteSelected) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onSentRequests
		#define GEODE_STATICS_onSentRequests
		GEODE_AS_STATIC_FUNCTION(onSentRequests) 
	#endif

	#ifndef GEODE_STATICS_onToggleAllObjects
		#define GEODE_STATICS_onToggleAllObjects
		GEODE_AS_STATIC_FUNCTION(onToggleAllObjects) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_setupCommentsBrowser
		#define GEODE_STATICS_setupCommentsBrowser
		GEODE_AS_STATIC_FUNCTION(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_STATICS_untoggleAll
		#define GEODE_STATICS_untoggleAll
		GEODE_AS_STATIC_FUNCTION(untoggleAll) 
	#endif

	#ifndef GEODE_STATICS_updateLevelsLabel
		#define GEODE_STATICS_updateLevelsLabel
		GEODE_AS_STATIC_FUNCTION(updateLevelsLabel) 
	#endif

	#ifndef GEODE_STATICS_updatePageArrows
		#define GEODE_STATICS_updatePageArrows
		GEODE_AS_STATIC_FUNCTION(updatePageArrows) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_loadFRequestsFinished
		#define GEODE_STATICS_loadFRequestsFinished
		GEODE_AS_STATIC_FUNCTION(loadFRequestsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadFRequestsFailed
		#define GEODE_STATICS_loadFRequestsFailed
		GEODE_AS_STATIC_FUNCTION(loadFRequestsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_forceReloadRequests
		#define GEODE_STATICS_forceReloadRequests
		GEODE_AS_STATIC_FUNCTION(forceReloadRequests) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FRequestProfilePage> : ModifyBase<ModifyDerive<Der, FRequestProfilePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FRequestProfilePage>>;
		using ModifyBase<ModifyDerive<Der, FRequestProfilePage>>::ModifyBase;
		using Base = FRequestProfilePage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeeee0, Optcall, FRequestProfilePage, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xefb90, Membercall, FRequestProfilePage, deleteSelected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeef90, Membercall, FRequestProfilePage, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf00d0, Membercall, FRequestProfilePage, loadPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0320, Membercall, FRequestProfilePage, setupCommentsBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xefe50, Membercall, FRequestProfilePage, untoggleAll, )
		}
	};
}
