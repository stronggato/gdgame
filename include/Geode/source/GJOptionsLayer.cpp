
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJOptionsLayer.hpp>
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

GJOptionsLayer::GJOptionsLayer() {
	throw std::runtime_error("GJOptionsLayer::GJOptionsLayer not implemented");
}

GJOptionsLayer::~GJOptionsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJOptionsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x398080, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJOptionsLayer(geode::CutoffConstructor, sizeof(GJOptionsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJOptionsLayer::didToggleGV(std::string variable) -> decltype(didToggleGV(variable)) {
	throw std::runtime_error("GJOptionsLayer::didToggleGV not implemented");
}

auto GJOptionsLayer::addGVToggle(char const* title, char const* variable, char const* description) -> decltype(addGVToggle(title, variable, description)) {
	using FunctionType = decltype(addGVToggle(title, variable, description))(*)(GJOptionsLayer*, char const*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, title, variable, description);
}

auto GJOptionsLayer::addToggleInternal(char const* title, int id, bool initial, char const* description) -> decltype(addToggleInternal(title, id, initial, description)) {
	throw std::runtime_error("GJOptionsLayer::addToggleInternal not implemented");
}

auto GJOptionsLayer::countForPage(int page) -> decltype(countForPage(page)) {
	throw std::runtime_error("GJOptionsLayer::countForPage not implemented");
}

auto GJOptionsLayer::init(int p0, float p1) -> decltype(init(p0, p1)) {
	throw std::runtime_error("GJOptionsLayer::init not implemented");
}

auto GJOptionsLayer::onToggle(cocos2d::CCObject* sender) -> decltype(onToggle(sender)) {
	using FunctionType = decltype(onToggle(sender))(*)(GJOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3996b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
