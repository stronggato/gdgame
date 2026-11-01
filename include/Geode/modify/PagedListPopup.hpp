#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PagedListPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_requestPage
		#define GEODE_STATICS_requestPage
		GEODE_AS_STATIC_FUNCTION(requestPage) 
	#endif

	#ifndef GEODE_STATICS_clearPageContent
		#define GEODE_STATICS_clearPageContent
		GEODE_AS_STATIC_FUNCTION(clearPageContent) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_clearStatus
		#define GEODE_STATICS_clearStatus
		GEODE_AS_STATIC_FUNCTION(clearStatus) 
	#endif

	#ifndef GEODE_STATICS_createScrollArea
		#define GEODE_STATICS_createScrollArea
		GEODE_AS_STATIC_FUNCTION(createScrollArea) 
	#endif

	#ifndef GEODE_STATICS_createScrollView
		#define GEODE_STATICS_createScrollView
		GEODE_AS_STATIC_FUNCTION(createScrollView) 
	#endif

	#ifndef GEODE_STATICS_fadeLoading
		#define GEODE_STATICS_fadeLoading
		GEODE_AS_STATIC_FUNCTION(fadeLoading) 
	#endif

	#ifndef GEODE_STATICS_initFrame
		#define GEODE_STATICS_initFrame
		GEODE_AS_STATIC_FUNCTION(initFrame) 
	#endif

	#ifndef GEODE_STATICS_initPaged
		#define GEODE_STATICS_initPaged
		GEODE_AS_STATIC_FUNCTION(initPaged) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_retryPendingPage
		#define GEODE_STATICS_retryPendingPage
		GEODE_AS_STATIC_FUNCTION(retryPendingPage) 
	#endif

	#ifndef GEODE_STATICS_showLoading
		#define GEODE_STATICS_showLoading
		GEODE_AS_STATIC_FUNCTION(showLoading) 
	#endif

	#ifndef GEODE_STATICS_showStatus
		#define GEODE_STATICS_showStatus
		GEODE_AS_STATIC_FUNCTION(showStatus) 
	#endif

	#ifndef GEODE_STATICS_updatePageArrows
		#define GEODE_STATICS_updatePageArrows
		GEODE_AS_STATIC_FUNCTION(updatePageArrows) 
	#endif

	#ifndef GEODE_STATICS_updatePageUI
		#define GEODE_STATICS_updatePageUI
		GEODE_AS_STATIC_FUNCTION(updatePageUI) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestPage
		#define GEODE_CONCEPT_CHECK_requestPage
		GEODE_CONCEPT_FUNCTION_CHECK(requestPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearPageContent
		#define GEODE_CONCEPT_CHECK_clearPageContent
		GEODE_CONCEPT_FUNCTION_CHECK(clearPageContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearStatus
		#define GEODE_CONCEPT_CHECK_clearStatus
		GEODE_CONCEPT_FUNCTION_CHECK(clearStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createScrollArea
		#define GEODE_CONCEPT_CHECK_createScrollArea
		GEODE_CONCEPT_FUNCTION_CHECK(createScrollArea) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createScrollView
		#define GEODE_CONCEPT_CHECK_createScrollView
		GEODE_CONCEPT_FUNCTION_CHECK(createScrollView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeLoading
		#define GEODE_CONCEPT_CHECK_fadeLoading
		GEODE_CONCEPT_FUNCTION_CHECK(fadeLoading) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initFrame
		#define GEODE_CONCEPT_CHECK_initFrame
		GEODE_CONCEPT_FUNCTION_CHECK(initFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initPaged
		#define GEODE_CONCEPT_CHECK_initPaged
		GEODE_CONCEPT_FUNCTION_CHECK(initPaged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPage
		#define GEODE_CONCEPT_CHECK_loadPage
		GEODE_CONCEPT_FUNCTION_CHECK(loadPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_retryPendingPage
		#define GEODE_CONCEPT_CHECK_retryPendingPage
		GEODE_CONCEPT_FUNCTION_CHECK(retryPendingPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLoading
		#define GEODE_CONCEPT_CHECK_showLoading
		GEODE_CONCEPT_FUNCTION_CHECK(showLoading) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showStatus
		#define GEODE_CONCEPT_CHECK_showStatus
		GEODE_CONCEPT_FUNCTION_CHECK(showStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageArrows
		#define GEODE_CONCEPT_CHECK_updatePageArrows
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageArrows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageUI
		#define GEODE_CONCEPT_CHECK_updatePageUI
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageUI) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PagedListPopup> : ModifyBase<ModifyDerive<Der, PagedListPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PagedListPopup>>;
		using ModifyBase<ModifyDerive<Der, PagedListPopup>>::ModifyBase;
		using Base = PagedListPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xc1c60, Thiscall, PagedListPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc2be0, Thiscall, PagedListPopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc2c50, Thiscall, PagedListPopup, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc2cc0, Thiscall, PagedListPopup, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc2d10, Thiscall, PagedListPopup, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc2bc0, Thiscall, PagedListPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc2b30, Thiscall, PagedListPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PagedListPopup, requestPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc2830, Thiscall, PagedListPopup, clearPageContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99df0, Thiscall, PagedListPopup, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, clearStatus, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, createScrollArea, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, createScrollView, float, float, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, fadeLoading, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, initFrame, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, initPaged, char const*, std::string const&, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, loadPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, onNextPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, onPrevPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, retryPendingPage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, showLoading, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, showStatus, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, updatePageArrows, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PagedListPopup, updatePageUI, int, int, int)
		}
	};
}
