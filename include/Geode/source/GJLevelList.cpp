
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJLevelList.hpp>
#include <Geode/cocos/platform/win32/CCFileUtilsWin32.h>

using namespace geode;
using namespace geode::modifier;

#if !defined(GEODE_WRAP_FUNCTION)
#define GEODE_WRAP_FUNCTION
template <class F>
static auto wrapFunction(uintptr_t address, tulip::hook::TulipConvention convention) {
	auto wrapped = geode::hook::createWrapper(reinterpret_cast<void*>(address), tulip::hook::WrapperMetadata{
		.m_convention = geode::hook::createConvention(convention),
		.m_abstract = tulip::hook::AbstractFunction::from(F(nullptr)),
	});
	if (wrapped.isErr()) {
		throw std::runtime_error(wrapped.unwrapErr());
	}
	return wrapped.unwrap();
}
#endif

GJLevelList::~GJLevelList() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJLevelList*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x216400, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJLevelList(geode::CutoffConstructor, sizeof(GJLevelList));
		geode::DestructorLock::addLock(this);
	}
}

auto GJLevelList::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26fe00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJLevelList::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJLevelList::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJLevelList*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x271700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJLevelList::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJLevelList::init), this);
	using FunctionType = decltype(init())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26ffa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJLevelList::addLevelToList(GJGameLevel* level) -> decltype(addLevelToList(level)) {
	using FunctionType = decltype(addLevelToList(level))(*)(GJLevelList*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2704e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJLevelList::completedLevels() -> decltype(completedLevels()) {
	using FunctionType = decltype(completedLevels())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x270ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJLevelList::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJLevelList*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2713e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJLevelList::getListLevelsArray(cocos2d::CCArray* levels) -> decltype(getListLevelsArray(levels)) {
	using FunctionType = decltype(getListLevelsArray(levels))(*)(GJLevelList*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x270790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levels);
}

auto GJLevelList::hasMatchingLevels(GJLevelList* list) -> decltype(hasMatchingLevels(list)) {
	using FunctionType = decltype(hasMatchingLevels(list))(*)(GJLevelList*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x270020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GJLevelList::parseListLevels(std::string str) -> decltype(parseListLevels(str)) {
	using FunctionType = decltype(parseListLevels(str))(*)(GJLevelList*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x51e720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GJLevelList::reorderLevel(int levelID, int newPosition) -> decltype(reorderLevel(levelID, newPosition)) {
	throw std::runtime_error("GJLevelList::reorderLevel not implemented");
}

auto GJLevelList::updateLevelsString() -> decltype(updateLevelsString()) {
	using FunctionType = decltype(updateLevelsString())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25f210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
