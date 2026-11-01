
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/StartPosLayer.hpp>
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

StartPosLayer::~StartPosLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(StartPosLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4548c0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) StartPosLayer(geode::CutoffConstructor, sizeof(StartPosLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto StartPosLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&StartPosLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(StartPosLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45baf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto StartPosLayer::updateInputNode(int p0, float p1) -> decltype(updateInputNode(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&StartPosLayer::updateInputNode), this);
	using FunctionType = decltype(updateInputNode(p0, p1))(*)(StartPosLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45bec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto StartPosLayer::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&StartPosLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(StartPosLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c2e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto StartPosLayer::getValue(int p0) -> decltype(getValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&StartPosLayer::getValue), this);
	using FunctionType = decltype(getValue(p0))(*)(StartPosLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c0d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
