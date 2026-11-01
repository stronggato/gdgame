
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SpriteAnimationManager.hpp>
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

auto SpriteAnimationManager::animationFinished() -> decltype(animationFinished()) {
	using FunctionType = decltype(animationFinished())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11e5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::callAnimationFinished() -> decltype(callAnimationFinished()) {
	using FunctionType = decltype(callAnimationFinished())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::executeAnimation(std::string animation) -> decltype(executeAnimation(animation)) {
	using FunctionType = decltype(executeAnimation(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55d30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::getPrio(std::string animation) -> decltype(getPrio(animation)) {
	using FunctionType = decltype(getPrio(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::initWithOwner(CCAnimatedSprite* sprite, std::string definition) -> decltype(initWithOwner(sprite, definition)) {
	throw std::runtime_error("SpriteAnimationManager::initWithOwner not implemented");
}

auto SpriteAnimationManager::overridePrio() -> decltype(overridePrio()) {
	throw std::runtime_error("SpriteAnimationManager::overridePrio not implemented");
}

auto SpriteAnimationManager::queueAnimation(std::string animation) -> decltype(queueAnimation(animation)) {
	using FunctionType = decltype(queueAnimation(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::runAnimation(std::string animation) -> decltype(runAnimation(animation)) {
	using FunctionType = decltype(runAnimation(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}
