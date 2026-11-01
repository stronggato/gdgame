#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DpadMenu.hpp>
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

    
	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DpadMenu> : ModifyBase<ModifyDerive<Der, DpadMenu>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DpadMenu>>;
		using ModifyBase<ModifyDerive<Der, DpadMenu>>::ModifyBase;
		using Base = DpadMenu;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x1f13c0, Thiscall, DpadMenu)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f1150, Thiscall, DpadMenu, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f1240, Thiscall, DpadMenu, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
		}
	};
}
