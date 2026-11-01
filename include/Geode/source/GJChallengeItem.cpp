
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJChallengeItem.hpp>
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

GJChallengeItem::~GJChallengeItem() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJChallengeItem*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x2d3ec0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJChallengeItem(geode::CutoffConstructor, sizeof(GJChallengeItem));
		geode::DestructorLock::addLock(this);
	}
}

auto GJChallengeItem::create(GJChallengeType challengeType, int goal, int reward, int timeLeft, std::string questName) -> decltype(create(challengeType, goal, reward, timeLeft, questName)) {
	using FunctionType = decltype(create(challengeType, goal, reward, timeLeft, questName))(*)(GJChallengeType, int, int, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(challengeType, goal, reward, timeLeft, questName);
}

auto GJChallengeItem::createFromString(std::string string) -> decltype(createFromString(string)) {
	using FunctionType = decltype(createFromString(string))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6d50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(string);
}

auto GJChallengeItem::encodeWithCoder(DS_Dictionary* dsdict) -> decltype(encodeWithCoder(dsdict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJChallengeItem::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dsdict))(*)(GJChallengeItem*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f7140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dsdict);
}
