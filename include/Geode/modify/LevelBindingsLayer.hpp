#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelBindingsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_setupTabs
		#define GEODE_STATICS_setupTabs
		GEODE_AS_STATIC_FUNCTION(setupTabs) 
	#endif

	#ifndef GEODE_STATICS_actionsToShow
		#define GEODE_STATICS_actionsToShow
		GEODE_AS_STATIC_FUNCTION(actionsToShow) 
	#endif

	#ifndef GEODE_STATICS_openBindingEditor
		#define GEODE_STATICS_openBindingEditor
		GEODE_AS_STATIC_FUNCTION(openBindingEditor) 
	#endif

	#ifndef GEODE_STATICS_showControllerChords
		#define GEODE_STATICS_showControllerChords
		GEODE_AS_STATIC_FUNCTION(showControllerChords) 
	#endif

	#ifndef GEODE_STATICS_settingsEntries
		#define GEODE_STATICS_settingsEntries
		GEODE_AS_STATIC_FUNCTION(settingsEntries) 
	#endif

	#ifndef GEODE_STATICS_crossCheckGlobalConflicts
		#define GEODE_STATICS_crossCheckGlobalConflicts
		GEODE_AS_STATIC_FUNCTION(crossCheckGlobalConflicts) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onApplyGlobal
		#define GEODE_STATICS_onApplyGlobal
		GEODE_AS_STATIC_FUNCTION(onApplyGlobal) 
	#endif

	#ifndef GEODE_STATICS_onClear
		#define GEODE_STATICS_onClear
		GEODE_AS_STATIC_FUNCTION(onClear) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onReset
		#define GEODE_STATICS_onReset
		GEODE_AS_STATIC_FUNCTION(onReset) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTabs
		#define GEODE_CONCEPT_CHECK_setupTabs
		GEODE_CONCEPT_FUNCTION_CHECK(setupTabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionsToShow
		#define GEODE_CONCEPT_CHECK_actionsToShow
		GEODE_CONCEPT_FUNCTION_CHECK(actionsToShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openBindingEditor
		#define GEODE_CONCEPT_CHECK_openBindingEditor
		GEODE_CONCEPT_FUNCTION_CHECK(openBindingEditor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showControllerChords
		#define GEODE_CONCEPT_CHECK_showControllerChords
		GEODE_CONCEPT_FUNCTION_CHECK(showControllerChords) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_settingsEntries
		#define GEODE_CONCEPT_CHECK_settingsEntries
		GEODE_CONCEPT_FUNCTION_CHECK(settingsEntries) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_crossCheckGlobalConflicts
		#define GEODE_CONCEPT_CHECK_crossCheckGlobalConflicts
		GEODE_CONCEPT_FUNCTION_CHECK(crossCheckGlobalConflicts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onApplyGlobal
		#define GEODE_CONCEPT_CHECK_onApplyGlobal
		GEODE_CONCEPT_FUNCTION_CHECK(onApplyGlobal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClear
		#define GEODE_CONCEPT_CHECK_onClear
		GEODE_CONCEPT_FUNCTION_CHECK(onClear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaste
		#define GEODE_CONCEPT_CHECK_onPaste
		GEODE_CONCEPT_FUNCTION_CHECK(onPaste) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReset
		#define GEODE_CONCEPT_CHECK_onReset
		GEODE_CONCEPT_FUNCTION_CHECK(onReset) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelBindingsLayer> : ModifyBase<ModifyDerive<Der, LevelBindingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelBindingsLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelBindingsLayer>>::ModifyBase;
		using Base = LevelBindingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3d28e0, Thiscall, LevelBindingsLayer)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelBindingsLayer, create, KeybindSet*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a060, Thiscall, LevelBindingsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4495f0, Thiscall, LevelBindingsLayer, setupTabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x449770, Thiscall, LevelBindingsLayer, actionsToShow, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4497e0, Thiscall, LevelBindingsLayer, openBindingEditor, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff70, Thiscall, LevelBindingsLayer, showControllerChords, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x449300, Thiscall, LevelBindingsLayer, settingsEntries, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff70, Thiscall, LevelBindingsLayer, crossCheckGlobalConflicts, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelBindingsLayer, init, KeybindSet*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelBindingsLayer, onApplyGlobal, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelBindingsLayer, onClear, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelBindingsLayer, onCopy, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelBindingsLayer, onPaste, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelBindingsLayer, onReset, cocos2d::CCObject*)
		}
	};
}
