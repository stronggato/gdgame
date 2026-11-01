#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ThreadRequestPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAccept
		#define GEODE_STATICS_onAccept
		GEODE_AS_STATIC_FUNCTION(onAccept) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onIgnore
		#define GEODE_STATICS_onIgnore
		GEODE_AS_STATIC_FUNCTION(onIgnore) 
	#endif

	#ifndef GEODE_STATICS_onReport
		#define GEODE_STATICS_onReport
		GEODE_AS_STATIC_FUNCTION(onReport) 
	#endif

	#ifndef GEODE_STATICS_onViewMembers
		#define GEODE_STATICS_onViewMembers
		GEODE_AS_STATIC_FUNCTION(onViewMembers) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAccept
		#define GEODE_CONCEPT_CHECK_onAccept
		GEODE_CONCEPT_FUNCTION_CHECK(onAccept) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onIgnore
		#define GEODE_CONCEPT_CHECK_onIgnore
		GEODE_CONCEPT_FUNCTION_CHECK(onIgnore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReport
		#define GEODE_CONCEPT_CHECK_onReport
		GEODE_CONCEPT_FUNCTION_CHECK(onReport) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewMembers
		#define GEODE_CONCEPT_CHECK_onViewMembers
		GEODE_CONCEPT_FUNCTION_CHECK(onViewMembers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ThreadRequestPopup> : ModifyBase<ModifyDerive<Der, ThreadRequestPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ThreadRequestPopup>>;
		using ModifyBase<ModifyDerive<Der, ThreadRequestPopup>>::ModifyBase;
		using Base = ThreadRequestPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xd3060, Thiscall, ThreadRequestPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadRequestPopup, create, GJMessageThread*, InvitesPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99e20, Thiscall, ThreadRequestPopup, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadRequestPopup, init, GJMessageThread*, InvitesPopup*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadRequestPopup, onAccept, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadRequestPopup, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadRequestPopup, onIgnore, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadRequestPopup, onReport, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadRequestPopup, onViewMembers, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadRequestPopup, onViewProfile, cocos2d::CCObject*)
		}
	};
}
