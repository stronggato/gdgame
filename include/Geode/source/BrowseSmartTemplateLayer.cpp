
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/BrowseSmartTemplateLayer.hpp>
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

BrowseSmartTemplateLayer::BrowseSmartTemplateLayer() {
	throw std::runtime_error("BrowseSmartTemplateLayer::BrowseSmartTemplateLayer not implemented");
}

BrowseSmartTemplateLayer::~BrowseSmartTemplateLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(BrowseSmartTemplateLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5eb9d0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) BrowseSmartTemplateLayer(geode::CutoffConstructor, sizeof(BrowseSmartTemplateLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto BrowseSmartTemplateLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&BrowseSmartTemplateLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(BrowseSmartTemplateLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ed150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto BrowseSmartTemplateLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&BrowseSmartTemplateLayer::onBack), this);
	using FunctionType = decltype(onBack(sender))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ed170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto BrowseSmartTemplateLayer::baseSetup() -> decltype(baseSetup()) {
	using FunctionType = decltype(baseSetup())(*)(BrowseSmartTemplateLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100f80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BrowseSmartTemplateLayer::createPrefab(std::string key, int id) -> decltype(createPrefab(key, id)) {
	using FunctionType = decltype(createPrefab(key, id))(*)(BrowseSmartTemplateLayer*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ecd60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, id);
}

auto BrowseSmartTemplateLayer::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(BrowseSmartTemplateLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ecbf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BrowseSmartTemplateLayer::init(GJSmartTemplate* smartTemplate, SmartBrowseFilter browseFilter) -> decltype(init(smartTemplate, browseFilter)) {
	throw std::runtime_error("BrowseSmartTemplateLayer::init not implemented");
}

auto BrowseSmartTemplateLayer::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ed100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto BrowseSmartTemplateLayer::onTemplateObject(cocos2d::CCObject* sender) -> decltype(onTemplateObject(sender)) {
	using FunctionType = decltype(onTemplateObject(sender))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ece30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
