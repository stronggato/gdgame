#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSFXCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_sfxObjectSelected
		#define GEODE_STATICS_sfxObjectSelected
		GEODE_AS_STATIC_FUNCTION(sfxObjectSelected) 
	#endif

	#ifndef GEODE_STATICS_getActiveSFXID
		#define GEODE_STATICS_getActiveSFXID
		GEODE_AS_STATIC_FUNCTION(getActiveSFXID) 
	#endif

	#ifndef GEODE_STATICS_getActiveCustomSFXID
		#define GEODE_STATICS_getActiveCustomSFXID
		GEODE_AS_STATIC_FUNCTION(getActiveCustomSFXID) 
	#endif

	#ifndef GEODE_STATICS_sfxAddToFolder
		#define GEODE_STATICS_sfxAddToFolder
		GEODE_AS_STATIC_FUNCTION(sfxAddToFolder) 
	#endif

	#ifndef GEODE_STATICS_sfxEditCustomObject
		#define GEODE_STATICS_sfxEditCustomObject
		GEODE_AS_STATIC_FUNCTION(sfxEditCustomObject) 
	#endif

	#ifndef GEODE_STATICS_sfxToggleCustomSelect
		#define GEODE_STATICS_sfxToggleCustomSelect
		GEODE_AS_STATIC_FUNCTION(sfxToggleCustomSelect) 
	#endif

	#ifndef GEODE_STATICS_isCustomEntrySelected
		#define GEODE_STATICS_isCustomEntrySelected
		GEODE_AS_STATIC_FUNCTION(isCustomEntrySelected) 
	#endif

	#ifndef GEODE_STATICS_inCustomSFXTree
		#define GEODE_STATICS_inCustomSFXTree
		GEODE_AS_STATIC_FUNCTION(inCustomSFXTree) 
	#endif

	#ifndef GEODE_STATICS_showsSFXInfoButton
		#define GEODE_STATICS_showsSFXInfoButton
		GEODE_AS_STATIC_FUNCTION(showsSFXInfoButton) 
	#endif

	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxObjectSelected
		#define GEODE_CONCEPT_CHECK_sfxObjectSelected
		GEODE_CONCEPT_FUNCTION_CHECK(sfxObjectSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveSFXID
		#define GEODE_CONCEPT_CHECK_getActiveSFXID
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveSFXID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveCustomSFXID
		#define GEODE_CONCEPT_CHECK_getActiveCustomSFXID
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveCustomSFXID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxAddToFolder
		#define GEODE_CONCEPT_CHECK_sfxAddToFolder
		GEODE_CONCEPT_FUNCTION_CHECK(sfxAddToFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxEditCustomObject
		#define GEODE_CONCEPT_CHECK_sfxEditCustomObject
		GEODE_CONCEPT_FUNCTION_CHECK(sfxEditCustomObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxToggleCustomSelect
		#define GEODE_CONCEPT_CHECK_sfxToggleCustomSelect
		GEODE_CONCEPT_FUNCTION_CHECK(sfxToggleCustomSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCustomEntrySelected
		#define GEODE_CONCEPT_CHECK_isCustomEntrySelected
		GEODE_CONCEPT_FUNCTION_CHECK(isCustomEntrySelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_inCustomSFXTree
		#define GEODE_CONCEPT_CHECK_inCustomSFXTree
		GEODE_CONCEPT_FUNCTION_CHECK(inCustomSFXTree) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showsSFXInfoButton
		#define GEODE_CONCEPT_CHECK_showsSFXInfoButton
		GEODE_CONCEPT_FUNCTION_CHECK(showsSFXInfoButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromObject
		#define GEODE_CONCEPT_CHECK_loadFromObject
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldReload
		#define GEODE_CONCEPT_CHECK_shouldReload
		GEODE_CONCEPT_FUNCTION_CHECK(shouldReload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSFXCell> : ModifyBase<ModifyDerive<Der, CustomSFXCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSFXCell>>;
		using ModifyBase<ModifyDerive<Der, CustomSFXCell>>::ModifyBase;
		using Base = CustomSFXCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x14f2a0, Thiscall, CustomSFXCell)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f3d0, Thiscall, CustomSFXCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x147270, Thiscall, CustomSFXCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f550, Thiscall, CustomSFXCell, sfxObjectSelected, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f050, Thiscall, CustomSFXCell, getActiveSFXID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f6b0, Thiscall, CustomSFXCell, getActiveCustomSFXID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f590, Thiscall, CustomSFXCell, sfxAddToFolder, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f5d0, Thiscall, CustomSFXCell, sfxEditCustomObject, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f610, Thiscall, CustomSFXCell, sfxToggleCustomSelect, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f650, Thiscall, CustomSFXCell, isCustomEntrySelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f670, Thiscall, CustomSFXCell, inCustomSFXTree, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14f690, Thiscall, CustomSFXCell, showsSFXInfoButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSFXCell, loadFromObject, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXCell, shouldReload, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSFXCell, updateBGColor, int)
		}
	};
}
