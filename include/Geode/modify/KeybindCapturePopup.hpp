#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeybindCapturePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_inputKeySelected
		#define GEODE_STATICS_inputKeySelected
		GEODE_AS_STATIC_FUNCTION(inputKeySelected) 
	#endif

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif

	#ifndef GEODE_STATICS_fadeButtonSprite
		#define GEODE_STATICS_fadeButtonSprite
		GEODE_AS_STATIC_FUNCTION(fadeButtonSprite) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onRemove
		#define GEODE_STATICS_onRemove
		GEODE_AS_STATIC_FUNCTION(onRemove) 
	#endif

	#ifndef GEODE_STATICS_onSet
		#define GEODE_STATICS_onSet
		GEODE_AS_STATIC_FUNCTION(onSet) 
	#endif

	#ifndef GEODE_STATICS_onToggleController
		#define GEODE_STATICS_onToggleController
		GEODE_AS_STATIC_FUNCTION(onToggleController) 
	#endif

	#ifndef GEODE_STATICS_updateButtonStates
		#define GEODE_STATICS_updateButtonStates
		GEODE_AS_STATIC_FUNCTION(updateButtonStates) 
	#endif

	#ifndef GEODE_STATICS_updateChordDisplay
		#define GEODE_STATICS_updateChordDisplay
		GEODE_AS_STATIC_FUNCTION(updateChordDisplay) 
	#endif

	#ifndef GEODE_STATICS_updateConflictLabel
		#define GEODE_STATICS_updateConflictLabel
		GEODE_AS_STATIC_FUNCTION(updateConflictLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_inputKeySelected
		#define GEODE_CONCEPT_CHECK_inputKeySelected
		GEODE_CONCEPT_FUNCTION_CHECK(inputKeySelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyUp
		#define GEODE_CONCEPT_CHECK_keyUp
		GEODE_CONCEPT_FUNCTION_CHECK(keyUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeButtonSprite
		#define GEODE_CONCEPT_CHECK_fadeButtonSprite
		GEODE_CONCEPT_FUNCTION_CHECK(fadeButtonSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemove
		#define GEODE_CONCEPT_CHECK_onRemove
		GEODE_CONCEPT_FUNCTION_CHECK(onRemove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSet
		#define GEODE_CONCEPT_CHECK_onSet
		GEODE_CONCEPT_FUNCTION_CHECK(onSet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleController
		#define GEODE_CONCEPT_CHECK_onToggleController
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleController) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateButtonStates
		#define GEODE_CONCEPT_CHECK_updateButtonStates
		GEODE_CONCEPT_FUNCTION_CHECK(updateButtonStates) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateChordDisplay
		#define GEODE_CONCEPT_CHECK_updateChordDisplay
		GEODE_CONCEPT_FUNCTION_CHECK(updateChordDisplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateConflictLabel
		#define GEODE_CONCEPT_CHECK_updateConflictLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateConflictLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeybindCapturePopup> : ModifyBase<ModifyDerive<Der, KeybindCapturePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeybindCapturePopup>>;
		using ModifyBase<ModifyDerive<Der, KeybindCapturePopup>>::ModifyBase;
		using Base = KeybindCapturePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x44b110, Thiscall, KeybindCapturePopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindCapturePopup, create, KeybindSource*, int, int, KeybindingsLayer*, KeybindCaptureMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44bd10, Thiscall, KeybindCapturePopup, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44bcc0, Thiscall, KeybindCapturePopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44b240, Thiscall, KeybindCapturePopup, inputKeySelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44bf80, Thiscall, KeybindCapturePopup, keyUp, cocos2d::enumKeyCodes, double)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindCapturePopup, fadeButtonSprite, ButtonSprite*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindCapturePopup, init, KeybindSource*, int, int, KeybindingsLayer*, KeybindCaptureMode)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindCapturePopup, onRemove, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindCapturePopup, onSet, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindCapturePopup, onToggleController, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindCapturePopup, updateButtonStates, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindCapturePopup, updateChordDisplay, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindCapturePopup, updateConflictLabel, )
		}
	};
}
