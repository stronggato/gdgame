#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TabbedPopupLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_pageChanged
		#define GEODE_STATICS_pageChanged
		GEODE_AS_STATIC_FUNCTION(pageChanged) 
	#endif

	#ifndef GEODE_STATICS_showTab
		#define GEODE_STATICS_showTab
		GEODE_AS_STATIC_FUNCTION(showTab) 
	#endif

	#ifndef GEODE_STATICS_addCloseButton
		#define GEODE_STATICS_addCloseButton
		GEODE_AS_STATIC_FUNCTION(addCloseButton) 
	#endif

	#ifndef GEODE_STATICS_addTab
		#define GEODE_STATICS_addTab
		GEODE_AS_STATIC_FUNCTION(addTab) 
	#endif

	#ifndef GEODE_STATICS_beginTab
		#define GEODE_STATICS_beginTab
		GEODE_AS_STATIC_FUNCTION(beginTab) 
	#endif

	#ifndef GEODE_STATICS_createTabButtons
		#define GEODE_STATICS_createTabButtons
		GEODE_AS_STATIC_FUNCTION(createTabButtons) 
	#endif

	#ifndef GEODE_STATICS_ensurePopupPage
		#define GEODE_STATICS_ensurePopupPage
		GEODE_AS_STATIC_FUNCTION(ensurePopupPage) 
	#endif

	#ifndef GEODE_STATICS_getPopupPage
		#define GEODE_STATICS_getPopupPage
		GEODE_AS_STATIC_FUNCTION(getPopupPage) 
	#endif

	#ifndef GEODE_STATICS_offsetToNextPage
		#define GEODE_STATICS_offsetToNextPage
		GEODE_AS_STATIC_FUNCTION(offsetToNextPage) 
	#endif

	#ifndef GEODE_STATICS_onTab
		#define GEODE_STATICS_onTab
		GEODE_AS_STATIC_FUNCTION(onTab) 
	#endif

	#ifndef GEODE_STATICS_onTabPage
		#define GEODE_STATICS_onTabPage
		GEODE_AS_STATIC_FUNCTION(onTabPage) 
	#endif

	#ifndef GEODE_STATICS_pageForButtonCount
		#define GEODE_STATICS_pageForButtonCount
		GEODE_AS_STATIC_FUNCTION(pageForButtonCount) 
	#endif

	#ifndef GEODE_STATICS_refreshPageButtons
		#define GEODE_STATICS_refreshPageButtons
		GEODE_AS_STATIC_FUNCTION(refreshPageButtons) 
	#endif

	#ifndef GEODE_STATICS_refreshTabButtons
		#define GEODE_STATICS_refreshTabButtons
		GEODE_AS_STATIC_FUNCTION(refreshTabButtons) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_pageChanged
		#define GEODE_CONCEPT_CHECK_pageChanged
		GEODE_CONCEPT_FUNCTION_CHECK(pageChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTab
		#define GEODE_CONCEPT_CHECK_showTab
		GEODE_CONCEPT_FUNCTION_CHECK(showTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCloseButton
		#define GEODE_CONCEPT_CHECK_addCloseButton
		GEODE_CONCEPT_FUNCTION_CHECK(addCloseButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTab
		#define GEODE_CONCEPT_CHECK_addTab
		GEODE_CONCEPT_FUNCTION_CHECK(addTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_beginTab
		#define GEODE_CONCEPT_CHECK_beginTab
		GEODE_CONCEPT_FUNCTION_CHECK(beginTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTabButtons
		#define GEODE_CONCEPT_CHECK_createTabButtons
		GEODE_CONCEPT_FUNCTION_CHECK(createTabButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ensurePopupPage
		#define GEODE_CONCEPT_CHECK_ensurePopupPage
		GEODE_CONCEPT_FUNCTION_CHECK(ensurePopupPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPopupPage
		#define GEODE_CONCEPT_CHECK_getPopupPage
		GEODE_CONCEPT_FUNCTION_CHECK(getPopupPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetToNextPage
		#define GEODE_CONCEPT_CHECK_offsetToNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(offsetToNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTab
		#define GEODE_CONCEPT_CHECK_onTab
		GEODE_CONCEPT_FUNCTION_CHECK(onTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTabPage
		#define GEODE_CONCEPT_CHECK_onTabPage
		GEODE_CONCEPT_FUNCTION_CHECK(onTabPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageForButtonCount
		#define GEODE_CONCEPT_CHECK_pageForButtonCount
		GEODE_CONCEPT_FUNCTION_CHECK(pageForButtonCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshPageButtons
		#define GEODE_CONCEPT_CHECK_refreshPageButtons
		GEODE_CONCEPT_FUNCTION_CHECK(refreshPageButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshTabButtons
		#define GEODE_CONCEPT_CHECK_refreshTabButtons
		GEODE_CONCEPT_FUNCTION_CHECK(refreshTabButtons) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TabbedPopupLayer> : ModifyBase<ModifyDerive<Der, TabbedPopupLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TabbedPopupLayer>>;
		using ModifyBase<ModifyDerive<Der, TabbedPopupLayer>>::ModifyBase;
		using Base = TabbedPopupLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x19b720, Thiscall, TabbedPopupLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x669290, Thiscall, TabbedPopupLayer, pageChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x668e10, Thiscall, TabbedPopupLayer, showTab, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, addCloseButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, addTab, std::string const&, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, beginTab, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, createTabButtons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, createTabButtons, float, float, float, float, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, ensurePopupPage, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, getPopupPage, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, offsetToNextPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, onTab, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, onTabPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, pageForButtonCount, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, refreshPageButtons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TabbedPopupLayer, refreshTabButtons, char const*, char const*)
		}
	};
}
