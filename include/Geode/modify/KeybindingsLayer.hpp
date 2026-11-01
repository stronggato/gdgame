#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeybindingsLayer.hpp>
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

	#ifndef GEODE_STATICS_rebuildContent
		#define GEODE_STATICS_rebuildContent
		GEODE_AS_STATIC_FUNCTION(rebuildContent) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_showTab
		#define GEODE_STATICS_showTab
		GEODE_AS_STATIC_FUNCTION(showTab) 
	#endif

	#ifndef GEODE_STATICS_setupTabs
		#define GEODE_STATICS_setupTabs
		GEODE_AS_STATIC_FUNCTION(setupTabs) 
	#endif

	#ifndef GEODE_STATICS_actionsToShow
		#define GEODE_STATICS_actionsToShow
		GEODE_AS_STATIC_FUNCTION(actionsToShow) 
	#endif

	#ifndef GEODE_STATICS_nameForAction
		#define GEODE_STATICS_nameForAction
		GEODE_AS_STATIC_FUNCTION(nameForAction) 
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

	#ifndef GEODE_STATICS_addKeyPair
		#define GEODE_STATICS_addKeyPair
		GEODE_AS_STATIC_FUNCTION(addKeyPair) 
	#endif

	#ifndef GEODE_STATICS_buildContentForTab
		#define GEODE_STATICS_buildContentForTab
		GEODE_AS_STATIC_FUNCTION(buildContentForTab) 
	#endif

	#ifndef GEODE_STATICS_buildControllerGlyph
		#define GEODE_STATICS_buildControllerGlyph
		GEODE_AS_STATIC_FUNCTION(buildControllerGlyph) 
	#endif

	#ifndef GEODE_STATICS_countForPage
		#define GEODE_STATICS_countForPage
		GEODE_AS_STATIC_FUNCTION(countForPage) 
	#endif

	#ifndef GEODE_STATICS_getActionTable
		#define GEODE_STATICS_getActionTable
		GEODE_AS_STATIC_FUNCTION(getActionTable) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_layerForPage
		#define GEODE_STATICS_layerForPage
		GEODE_AS_STATIC_FUNCTION(layerForPage) 
	#endif

	#ifndef GEODE_STATICS_onAddBinding
		#define GEODE_STATICS_onAddBinding
		GEODE_AS_STATIC_FUNCTION(onAddBinding) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onEditBinding
		#define GEODE_STATICS_onEditBinding
		GEODE_AS_STATIC_FUNCTION(onEditBinding) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_tintGlyph
		#define GEODE_STATICS_tintGlyph
		GEODE_AS_STATIC_FUNCTION(tintGlyph) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
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

	#ifndef GEODE_CONCEPT_CHECK_rebuildContent
		#define GEODE_CONCEPT_CHECK_rebuildContent
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTab
		#define GEODE_CONCEPT_CHECK_showTab
		GEODE_CONCEPT_FUNCTION_CHECK(showTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTabs
		#define GEODE_CONCEPT_CHECK_setupTabs
		GEODE_CONCEPT_FUNCTION_CHECK(setupTabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionsToShow
		#define GEODE_CONCEPT_CHECK_actionsToShow
		GEODE_CONCEPT_FUNCTION_CHECK(actionsToShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nameForAction
		#define GEODE_CONCEPT_CHECK_nameForAction
		GEODE_CONCEPT_FUNCTION_CHECK(nameForAction) 
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

	#ifndef GEODE_CONCEPT_CHECK_addKeyPair
		#define GEODE_CONCEPT_CHECK_addKeyPair
		GEODE_CONCEPT_FUNCTION_CHECK(addKeyPair) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildContentForTab
		#define GEODE_CONCEPT_CHECK_buildContentForTab
		GEODE_CONCEPT_FUNCTION_CHECK(buildContentForTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildControllerGlyph
		#define GEODE_CONCEPT_CHECK_buildControllerGlyph
		GEODE_CONCEPT_FUNCTION_CHECK(buildControllerGlyph) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countForPage
		#define GEODE_CONCEPT_CHECK_countForPage
		GEODE_CONCEPT_FUNCTION_CHECK(countForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActionTable
		#define GEODE_CONCEPT_CHECK_getActionTable
		GEODE_CONCEPT_FUNCTION_CHECK(getActionTable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementCountForPage
		#define GEODE_CONCEPT_CHECK_incrementCountForPage
		GEODE_CONCEPT_FUNCTION_CHECK(incrementCountForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_infoKey
		#define GEODE_CONCEPT_CHECK_infoKey
		GEODE_CONCEPT_FUNCTION_CHECK(infoKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerForPage
		#define GEODE_CONCEPT_CHECK_layerForPage
		GEODE_CONCEPT_FUNCTION_CHECK(layerForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerKey
		#define GEODE_CONCEPT_CHECK_layerKey
		GEODE_CONCEPT_FUNCTION_CHECK(layerKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nextPosition
		#define GEODE_CONCEPT_CHECK_nextPosition
		GEODE_CONCEPT_FUNCTION_CHECK(nextPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectKey
		#define GEODE_CONCEPT_CHECK_objectKey
		GEODE_CONCEPT_FUNCTION_CHECK(objectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectsForPage
		#define GEODE_CONCEPT_CHECK_objectsForPage
		GEODE_CONCEPT_FUNCTION_CHECK(objectsForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddBinding
		#define GEODE_CONCEPT_CHECK_onAddBinding
		GEODE_CONCEPT_FUNCTION_CHECK(onAddBinding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearch
		#define GEODE_CONCEPT_CHECK_onClearSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditBinding
		#define GEODE_CONCEPT_CHECK_onEditBinding
		GEODE_CONCEPT_FUNCTION_CHECK(onEditBinding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggle
		#define GEODE_CONCEPT_CHECK_onToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageKey
		#define GEODE_CONCEPT_CHECK_pageKey
		GEODE_CONCEPT_FUNCTION_CHECK(pageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tintGlyph
		#define GEODE_CONCEPT_CHECK_tintGlyph
		GEODE_CONCEPT_FUNCTION_CHECK(tintGlyph) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeybindingsLayer> : ModifyBase<ModifyDerive<Der, KeybindingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeybindingsLayer>>;
		using ModifyBase<ModifyDerive<Der, KeybindingsLayer>>::ModifyBase;
		using Base = KeybindingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3d28e0, Thiscall, KeybindingsLayer)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, create, GameSettingsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6410, Thiscall, KeybindingsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5b70, Thiscall, KeybindingsLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5ca0, Thiscall, KeybindingsLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5d80, Thiscall, KeybindingsLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5e20, Thiscall, KeybindingsLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19cb10, Thiscall, KeybindingsLayer, rebuildContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d59c0, Thiscall, KeybindingsLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d4d20, Thiscall, KeybindingsLayer, showTab, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d3590, Thiscall, KeybindingsLayer, setupTabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d52f0, Thiscall, KeybindingsLayer, actionsToShow, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d55e0, Thiscall, KeybindingsLayer, nameForAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5630, Thiscall, KeybindingsLayer, openBindingEditor, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5660, Thiscall, KeybindingsLayer, showControllerChords, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5680, Thiscall, KeybindingsLayer, settingsEntries, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a230, Thiscall, KeybindingsLayer, crossCheckGlobalConflicts, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, addKeyPair, char const*, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, buildContentForTab, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, buildControllerGlyph, int, bool&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, countForPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, getActionTable, int&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, goToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, incrementCountForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, infoKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, init, GameSettingsLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, layerForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, layerKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, nextPosition, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, objectKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, objectsForPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, onAddBinding, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, onClearSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5ec0, Thiscall, KeybindingsLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, onEditBinding, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, onInfo, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, onNextPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, onPrevPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, onSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, onToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, pageKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsLayer, tintGlyph, cocos2d::CCSprite*, cocos2d::ccColor3B)
		}
	};
}
