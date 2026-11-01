
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/VideoOptionsLayer.hpp>
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

VideoOptionsLayer::~VideoOptionsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(VideoOptionsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4c7720, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) VideoOptionsLayer(geode::CutoffConstructor, sizeof(VideoOptionsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto VideoOptionsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&VideoOptionsLayer::init), this);
	using FunctionType = decltype(init())(*)(VideoOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c96c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto VideoOptionsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&VideoOptionsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(VideoOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cb550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto VideoOptionsLayer::createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, float scale, float width, bool center, cocos2d::CCArray* nodes) -> decltype(createToggleButton(label, selector, toggled, menu, position, scale, width, center, nodes)) {
	using FunctionType = decltype(createToggleButton(label, selector, toggled, menu, position, scale, width, center, nodes))(*)(VideoOptionsLayer*, std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float, bool, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cb560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, label, selector, toggled, menu, position, scale, width, center, nodes);
}

auto VideoOptionsLayer::onAdvanced(cocos2d::CCObject* sender) -> decltype(onAdvanced(sender)) {
	using FunctionType = decltype(onAdvanced(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4caa20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::onApply(cocos2d::CCObject* sender) -> decltype(onApply(sender)) {
	using FunctionType = decltype(onApply(sender))(*)(VideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4caff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto VideoOptionsLayer::updateTextureQuality(int quality) -> decltype(updateTextureQuality(quality)) {
	using FunctionType = decltype(updateTextureQuality(quality))(*)(VideoOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cabd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, quality);
}
