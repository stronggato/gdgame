#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DeathMarkerSettingsPopup.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearMarkers
		#define GEODE_STATICS_onClearMarkers
		GEODE_AS_STATIC_FUNCTION(onClearMarkers) 
	#endif

	#ifndef GEODE_STATICS_onFrequencySlider
		#define GEODE_STATICS_onFrequencySlider
		GEODE_AS_STATIC_FUNCTION(onFrequencySlider) 
	#endif

	#ifndef GEODE_STATICS_onTimescaleSlider
		#define GEODE_STATICS_onTimescaleSlider
		GEODE_AS_STATIC_FUNCTION(onTimescaleSlider) 
	#endif

	#ifndef GEODE_STATICS_onToggleAnimation
		#define GEODE_STATICS_onToggleAnimation
		GEODE_AS_STATIC_FUNCTION(onToggleAnimation) 
	#endif

	#ifndef GEODE_STATICS_onToggleColor
		#define GEODE_STATICS_onToggleColor
		GEODE_AS_STATIC_FUNCTION(onToggleColor) 
	#endif

	#ifndef GEODE_STATICS_onToggleDisabled
		#define GEODE_STATICS_onToggleDisabled
		GEODE_AS_STATIC_FUNCTION(onToggleDisabled) 
	#endif

	#ifndef GEODE_STATICS_onToggleGlobal
		#define GEODE_STATICS_onToggleGlobal
		GEODE_AS_STATIC_FUNCTION(onToggleGlobal) 
	#endif

	#ifndef GEODE_STATICS_onToggleLabels
		#define GEODE_STATICS_onToggleLabels
		GEODE_AS_STATIC_FUNCTION(onToggleLabels) 
	#endif

	#ifndef GEODE_STATICS_onToggleLimited
		#define GEODE_STATICS_onToggleLimited
		GEODE_AS_STATIC_FUNCTION(onToggleLimited) 
	#endif

	#ifndef GEODE_STATICS_onToggleLive
		#define GEODE_STATICS_onToggleLive
		GEODE_AS_STATIC_FUNCTION(onToggleLive) 
	#endif

	#ifndef GEODE_STATICS_onToggleLocal
		#define GEODE_STATICS_onToggleLocal
		GEODE_AS_STATIC_FUNCTION(onToggleLocal) 
	#endif

	#ifndef GEODE_STATICS_onToggleSound
		#define GEODE_STATICS_onToggleSound
		GEODE_AS_STATIC_FUNCTION(onToggleSound) 
	#endif

	#ifndef GEODE_STATICS_updateFrequencyLabel
		#define GEODE_STATICS_updateFrequencyLabel
		GEODE_AS_STATIC_FUNCTION(updateFrequencyLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTimescaleLabel
		#define GEODE_STATICS_updateTimescaleLabel
		GEODE_AS_STATIC_FUNCTION(updateTimescaleLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearMarkers
		#define GEODE_CONCEPT_CHECK_onClearMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(onClearMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFrequencySlider
		#define GEODE_CONCEPT_CHECK_onFrequencySlider
		GEODE_CONCEPT_FUNCTION_CHECK(onFrequencySlider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTimescaleSlider
		#define GEODE_CONCEPT_CHECK_onTimescaleSlider
		GEODE_CONCEPT_FUNCTION_CHECK(onTimescaleSlider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleAnimation
		#define GEODE_CONCEPT_CHECK_onToggleAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleColor
		#define GEODE_CONCEPT_CHECK_onToggleColor
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleDisabled
		#define GEODE_CONCEPT_CHECK_onToggleDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleGlobal
		#define GEODE_CONCEPT_CHECK_onToggleGlobal
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleGlobal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleLabels
		#define GEODE_CONCEPT_CHECK_onToggleLabels
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleLimited
		#define GEODE_CONCEPT_CHECK_onToggleLimited
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleLimited) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleLive
		#define GEODE_CONCEPT_CHECK_onToggleLive
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleLive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleLocal
		#define GEODE_CONCEPT_CHECK_onToggleLocal
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleLocal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSound
		#define GEODE_CONCEPT_CHECK_onToggleSound
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFrequencyLabel
		#define GEODE_CONCEPT_CHECK_updateFrequencyLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateFrequencyLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimescaleLabel
		#define GEODE_CONCEPT_CHECK_updateTimescaleLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimescaleLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DeathMarkerSettingsPopup> : ModifyBase<ModifyDerive<Der, DeathMarkerSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DeathMarkerSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, DeathMarkerSettingsPopup>>::ModifyBase;
		using Base = DeathMarkerSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x606ea0, Thiscall, DeathMarkerSettingsPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6410, Thiscall, DeathMarkerSettingsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99df0, Thiscall, DeathMarkerSettingsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c0d0, Thiscall, DeathMarkerSettingsPopup, FLAlert_Clicked, FLAlertLayer*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, init, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onClearMarkers, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onFrequencySlider, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onTimescaleSlider, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onToggleAnimation, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onToggleColor, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onToggleDisabled, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onToggleGlobal, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onToggleLabels, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onToggleLimited, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onToggleLive, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onToggleLocal, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, onToggleSound, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, updateFrequencyLabel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerSettingsPopup, updateTimescaleLabel, int)
		}
	};
}
