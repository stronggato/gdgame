
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CurrencySprite.hpp>
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

CurrencySprite::CurrencySprite() : CurrencySprite(geode::CutoffConstructor, sizeof(CurrencySprite)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	CurrencySprite::~CurrencySprite();

	using FunctionType = void(*)(CurrencySprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x138540, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto CurrencySprite::rewardToSpriteType(int rewardType) -> decltype(rewardToSpriteType(rewardType)) {
	using FunctionType = decltype(rewardToSpriteType(rewardType))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13d8c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(rewardType);
}

auto CurrencySprite::spriteTypeToStat(CurrencySpriteType type) -> decltype(spriteTypeToStat(type)) {
	using FunctionType = decltype(spriteTypeToStat(type))(*)(CurrencySpriteType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13d970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto CurrencySprite::init(CurrencySpriteType type, bool burst) -> decltype(init(type, burst)) {
	throw std::runtime_error("CurrencySprite::init not implemented");
}
