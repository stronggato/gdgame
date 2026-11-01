#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJKeybindManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_actionsForKey
		#define GEODE_STATICS_actionsForKey
		GEODE_AS_STATIC_FUNCTION(actionsForKey) 
	#endif

	#ifndef GEODE_STATICS_handleGlobalAction
		#define GEODE_STATICS_handleGlobalAction
		GEODE_AS_STATIC_FUNCTION(handleGlobalAction) 
	#endif

	#ifndef GEODE_STATICS_actionsForChord
		#define GEODE_STATICS_actionsForChord
		GEODE_AS_STATIC_FUNCTION(actionsForChord) 
	#endif

	#ifndef GEODE_STATICS_actionToString
		#define GEODE_STATICS_actionToString
		GEODE_AS_STATIC_FUNCTION(actionToString) 
	#endif

	#ifndef GEODE_STATICS_applyImportBlob
		#define GEODE_STATICS_applyImportBlob
		GEODE_AS_STATIC_FUNCTION(applyImportBlob) 
	#endif

	#ifndef GEODE_STATICS_applyMovementOverride
		#define GEODE_STATICS_applyMovementOverride
		GEODE_AS_STATIC_FUNCTION(applyMovementOverride) 
	#endif

	#ifndef GEODE_STATICS_applyNewDefaults
		#define GEODE_STATICS_applyNewDefaults
		GEODE_AS_STATIC_FUNCTION(applyNewDefaults) 
	#endif

	#ifndef GEODE_STATICS_bindChord
		#define GEODE_STATICS_bindChord
		GEODE_AS_STATIC_FUNCTION(bindChord) 
	#endif

	#ifndef GEODE_STATICS_bindKey
		#define GEODE_STATICS_bindKey
		GEODE_AS_STATIC_FUNCTION(bindKey) 
	#endif

	#ifndef GEODE_STATICS_buildBindsBlob
		#define GEODE_STATICS_buildBindsBlob
		GEODE_AS_STATIC_FUNCTION(buildBindsBlob) 
	#endif

	#ifndef GEODE_STATICS_chordsForAction
		#define GEODE_STATICS_chordsForAction
		GEODE_AS_STATIC_FUNCTION(chordsForAction) 
	#endif

	#ifndef GEODE_STATICS_chordToString
		#define GEODE_STATICS_chordToString
		GEODE_AS_STATIC_FUNCTION(chordToString) 
	#endif

	#ifndef GEODE_STATICS_clearMovementOverride
		#define GEODE_STATICS_clearMovementOverride
		GEODE_AS_STATIC_FUNCTION(clearMovementOverride) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_encodeChord
		#define GEODE_STATICS_encodeChord
		GEODE_AS_STATIC_FUNCTION(encodeChord) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_exportBindingsToFile
		#define GEODE_STATICS_exportBindingsToFile
		GEODE_AS_STATIC_FUNCTION(exportBindingsToFile) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_globalChordsForAction
		#define GEODE_STATICS_globalChordsForAction
		GEODE_AS_STATIC_FUNCTION(globalChordsForAction) 
	#endif

	#ifndef GEODE_STATICS_groupForAction
		#define GEODE_STATICS_groupForAction
		GEODE_AS_STATIC_FUNCTION(groupForAction) 
	#endif

	#ifndef GEODE_STATICS_groupsConflict
		#define GEODE_STATICS_groupsConflict
		GEODE_AS_STATIC_FUNCTION(groupsConflict) 
	#endif

	#ifndef GEODE_STATICS_handleGlobalAudioAction
		#define GEODE_STATICS_handleGlobalAudioAction
		GEODE_AS_STATIC_FUNCTION(handleGlobalAudioAction) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isControllerChord
		#define GEODE_STATICS_isControllerChord
		GEODE_AS_STATIC_FUNCTION(isControllerChord) 
	#endif

	#ifndef GEODE_STATICS_isExclusive
		#define GEODE_STATICS_isExclusive
		GEODE_AS_STATIC_FUNCTION(isExclusive) 
	#endif

	#ifndef GEODE_STATICS_isKnownAction
		#define GEODE_STATICS_isKnownAction
		GEODE_AS_STATIC_FUNCTION(isKnownAction) 
	#endif

	#ifndef GEODE_STATICS_isMovementAction
		#define GEODE_STATICS_isMovementAction
		GEODE_AS_STATIC_FUNCTION(isMovementAction) 
	#endif

	#ifndef GEODE_STATICS_loadDefaults
		#define GEODE_STATICS_loadDefaults
		GEODE_AS_STATIC_FUNCTION(loadDefaults) 
	#endif

	#ifndef GEODE_STATICS_parseBindsBlob
		#define GEODE_STATICS_parseBindsBlob
		GEODE_AS_STATIC_FUNCTION(parseBindsBlob) 
	#endif

	#ifndef GEODE_STATICS_parseImportFile
		#define GEODE_STATICS_parseImportFile
		GEODE_AS_STATIC_FUNCTION(parseImportFile) 
	#endif

	#ifndef GEODE_STATICS_unbindChord
		#define GEODE_STATICS_unbindChord
		GEODE_AS_STATIC_FUNCTION(unbindChord) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionsForKey
		#define GEODE_CONCEPT_CHECK_actionsForKey
		GEODE_CONCEPT_FUNCTION_CHECK(actionsForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleGlobalAction
		#define GEODE_CONCEPT_CHECK_handleGlobalAction
		GEODE_CONCEPT_FUNCTION_CHECK(handleGlobalAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionsForChord
		#define GEODE_CONCEPT_CHECK_actionsForChord
		GEODE_CONCEPT_FUNCTION_CHECK(actionsForChord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionToString
		#define GEODE_CONCEPT_CHECK_actionToString
		GEODE_CONCEPT_FUNCTION_CHECK(actionToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyImportBlob
		#define GEODE_CONCEPT_CHECK_applyImportBlob
		GEODE_CONCEPT_FUNCTION_CHECK(applyImportBlob) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyMovementOverride
		#define GEODE_CONCEPT_CHECK_applyMovementOverride
		GEODE_CONCEPT_FUNCTION_CHECK(applyMovementOverride) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyNewDefaults
		#define GEODE_CONCEPT_CHECK_applyNewDefaults
		GEODE_CONCEPT_FUNCTION_CHECK(applyNewDefaults) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bindChord
		#define GEODE_CONCEPT_CHECK_bindChord
		GEODE_CONCEPT_FUNCTION_CHECK(bindChord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bindKey
		#define GEODE_CONCEPT_CHECK_bindKey
		GEODE_CONCEPT_FUNCTION_CHECK(bindKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildBindsBlob
		#define GEODE_CONCEPT_CHECK_buildBindsBlob
		GEODE_CONCEPT_FUNCTION_CHECK(buildBindsBlob) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_chordsForAction
		#define GEODE_CONCEPT_CHECK_chordsForAction
		GEODE_CONCEPT_FUNCTION_CHECK(chordsForAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_chordToString
		#define GEODE_CONCEPT_CHECK_chordToString
		GEODE_CONCEPT_FUNCTION_CHECK(chordToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearMovementOverride
		#define GEODE_CONCEPT_CHECK_clearMovementOverride
		GEODE_CONCEPT_FUNCTION_CHECK(clearMovementOverride) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeChord
		#define GEODE_CONCEPT_CHECK_encodeChord
		GEODE_CONCEPT_FUNCTION_CHECK(encodeChord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exportBindingsToFile
		#define GEODE_CONCEPT_CHECK_exportBindingsToFile
		GEODE_CONCEPT_FUNCTION_CHECK(exportBindingsToFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_globalChordsForAction
		#define GEODE_CONCEPT_CHECK_globalChordsForAction
		GEODE_CONCEPT_FUNCTION_CHECK(globalChordsForAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupForAction
		#define GEODE_CONCEPT_CHECK_groupForAction
		GEODE_CONCEPT_FUNCTION_CHECK(groupForAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupsConflict
		#define GEODE_CONCEPT_CHECK_groupsConflict
		GEODE_CONCEPT_FUNCTION_CHECK(groupsConflict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleGlobalAudioAction
		#define GEODE_CONCEPT_CHECK_handleGlobalAudioAction
		GEODE_CONCEPT_FUNCTION_CHECK(handleGlobalAudioAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isControllerChord
		#define GEODE_CONCEPT_CHECK_isControllerChord
		GEODE_CONCEPT_FUNCTION_CHECK(isControllerChord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isExclusive
		#define GEODE_CONCEPT_CHECK_isExclusive
		GEODE_CONCEPT_FUNCTION_CHECK(isExclusive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isKnownAction
		#define GEODE_CONCEPT_CHECK_isKnownAction
		GEODE_CONCEPT_FUNCTION_CHECK(isKnownAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isMovementAction
		#define GEODE_CONCEPT_CHECK_isMovementAction
		GEODE_CONCEPT_FUNCTION_CHECK(isMovementAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDefaults
		#define GEODE_CONCEPT_CHECK_loadDefaults
		GEODE_CONCEPT_FUNCTION_CHECK(loadDefaults) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseBindsBlob
		#define GEODE_CONCEPT_CHECK_parseBindsBlob
		GEODE_CONCEPT_FUNCTION_CHECK(parseBindsBlob) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseImportFile
		#define GEODE_CONCEPT_CHECK_parseImportFile
		GEODE_CONCEPT_FUNCTION_CHECK(parseImportFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unbindChord
		#define GEODE_CONCEPT_CHECK_unbindChord
		GEODE_CONCEPT_FUNCTION_CHECK(unbindChord) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJKeybindManager> : ModifyBase<ModifyDerive<Der, GJKeybindManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJKeybindManager>>;
		using ModifyBase<ModifyDerive<Der, GJKeybindManager>>::ModifyBase;
		using Base = GJKeybindManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x385980, Thiscall, GJKeybindManager)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x385ab0, Thiscall, GJKeybindManager, actionsForKey, cocos2d::enumKeyCodes, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x385870, Thiscall, GJKeybindManager, handleGlobalAction, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, actionsForChord, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, actionToString, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, applyImportBlob, std::string const&, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, applyMovementOverride, KeybindSource*, KeybindSource*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, applyNewDefaults, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, bindChord, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, bindKey, cocos2d::enumKeyCodes, bool, bool, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, buildBindsBlob, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, chordsForAction, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, chordToString, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, clearMovementOverride, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, encodeChord, cocos2d::enumKeyCodes, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, exportBindingsToFile, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, firstSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, globalChordsForAction, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, groupForAction, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, groupsConflict, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, handleGlobalAudioAction, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, isControllerChord, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, isExclusive, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, isKnownAction, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, isMovementAction, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, loadDefaults, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, parseBindsBlob, std::string const&, bool, int*, int*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, parseImportFile, std::string&, int&, int&, int&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJKeybindManager, unbindChord, int, int)
		}
	};
}
