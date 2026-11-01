
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelCell.hpp>
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

LevelCell::~LevelCell() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelCell*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x147340, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelCell(geode::CutoffConstructor, sizeof(LevelCell));
		geode::DestructorLock::addLock(this);
	}
}

LevelCell::LevelCell(char const* identifier, float width, float height) : LevelCell(geode::CutoffConstructor, sizeof(LevelCell)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	LevelCell::~LevelCell();

	using FunctionType = void(*)(LevelCell*, char const*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147460, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this, identifier, width, height);
}

auto LevelCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelCell::init), this);
	using FunctionType = decltype(init())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelCell::draw), this);
	using FunctionType = decltype(draw())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14c030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelCell::loadCustomLevelCell() -> decltype(loadCustomLevelCell()) {
	using FunctionType = decltype(loadCustomLevelCell())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelCell::loadFromLevel(GJGameLevel* level) -> decltype(loadFromLevel(level)) {
	using FunctionType = decltype(loadFromLevel(level))(*)(LevelCell*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto LevelCell::loadLocalLevelCell() -> decltype(loadLocalLevelCell()) {
	using FunctionType = decltype(loadLocalLevelCell())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14b2c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelCell::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(LevelCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14bcd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(LevelCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14bff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
