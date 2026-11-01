
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CustomSFXCell.hpp>
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

CustomSFXCell::~CustomSFXCell() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CustomSFXCell*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x14f2a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CustomSFXCell(geode::CutoffConstructor, sizeof(CustomSFXCell));
		geode::DestructorLock::addLock(this);
	}
}

auto CustomSFXCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::init), this);
	using FunctionType = decltype(init())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f3d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::draw), this);
	using FunctionType = decltype(draw())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXCell::sfxObjectSelected(SFXInfoObject* object) -> decltype(sfxObjectSelected(object)) {
	auto self = addresser::thunkAdjust(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxObjectSelected), this);
	using FunctionType = decltype(sfxObjectSelected(object))(*)(CustomSFXCell*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto CustomSFXCell::getActiveSFXID() -> decltype(getActiveSFXID()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::getActiveSFXID), this);
	using FunctionType = decltype(getActiveSFXID())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXCell::getActiveCustomSFXID() -> decltype(getActiveCustomSFXID()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::getActiveCustomSFXID), this);
	using FunctionType = decltype(getActiveCustomSFXID())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f6b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXCell::sfxAddToFolder(SFXInfoObject* p0) -> decltype(sfxAddToFolder(p0)) {
	auto self = addresser::thunkAdjust(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxAddToFolder), this);
	using FunctionType = decltype(sfxAddToFolder(p0))(*)(CustomSFXCell*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto CustomSFXCell::sfxEditCustomObject(SFXInfoObject* p0) -> decltype(sfxEditCustomObject(p0)) {
	auto self = addresser::thunkAdjust(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxEditCustomObject), this);
	using FunctionType = decltype(sfxEditCustomObject(p0))(*)(CustomSFXCell*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f5d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto CustomSFXCell::sfxToggleCustomSelect(SFXInfoObject* p0) -> decltype(sfxToggleCustomSelect(p0)) {
	auto self = addresser::thunkAdjust(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxToggleCustomSelect), this);
	using FunctionType = decltype(sfxToggleCustomSelect(p0))(*)(CustomSFXCell*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto CustomSFXCell::isCustomEntrySelected(int p0) -> decltype(isCustomEntrySelected(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSFXCell::isCustomEntrySelected), this);
	using FunctionType = decltype(isCustomEntrySelected(p0))(*)(CustomSFXCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto CustomSFXCell::inCustomSFXTree() -> decltype(inCustomSFXTree()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::inCustomSFXTree), this);
	using FunctionType = decltype(inCustomSFXTree())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXCell::showsSFXInfoButton() -> decltype(showsSFXInfoButton()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::showsSFXInfoButton), this);
	using FunctionType = decltype(showsSFXInfoButton())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
