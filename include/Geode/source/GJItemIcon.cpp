
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJItemIcon.hpp>
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

auto GJItemIcon::createBrowserItem(UnlockType unlockType, int itemID) -> decltype(createBrowserItem(unlockType, itemID)) {
	using FunctionType = decltype(createBrowserItem(unlockType, itemID))(*)(UnlockType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fca60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(unlockType, itemID);
}

auto GJItemIcon::createStoreItem(UnlockType type, int id, bool dark, cocos2d::ccColor3B unlockColor) -> decltype(createStoreItem(type, id, dark, unlockColor)) {
	using FunctionType = decltype(createStoreItem(type, id, dark, unlockColor))(*)(UnlockType, int, bool, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x380880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, id, dark, unlockColor);
}

auto GJItemIcon::scaleForType(UnlockType type) -> decltype(scaleForType(type)) {
	using FunctionType = decltype(scaleForType(type))(*)(UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3816f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GJItemIcon::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&GJItemIcon::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(GJItemIcon*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x381220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto GJItemIcon::darkenStoreItem(ShopType type) -> decltype(darkenStoreItem(type)) {
	using FunctionType = decltype(darkenStoreItem(type))(*)(GJItemIcon*, ShopType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3812c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GJItemIcon::darkenStoreItem(cocos2d::ccColor3B color) -> decltype(darkenStoreItem(color)) {
	using FunctionType = decltype(darkenStoreItem(color))(*)(GJItemIcon*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dc40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto GJItemIcon::init(UnlockType type, int id, cocos2d::ccColor3B color1, cocos2d::ccColor3B color2, bool dark, bool unused, bool noLabel, cocos2d::ccColor3B unlockColor) -> decltype(init(type, id, color1, color2, dark, unused, noLabel, unlockColor)) {
	throw std::runtime_error("GJItemIcon::init not implemented");
}

auto GJItemIcon::toggleEnabledState(bool enabled) -> decltype(toggleEnabledState(enabled)) {
	using FunctionType = decltype(toggleEnabledState(enabled))(*)(GJItemIcon*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x381560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enabled);
}
