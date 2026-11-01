
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/RateStarsModLayer.hpp>
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

RateStarsModLayer::~RateStarsModLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(RateStarsModLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x55b610, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) RateStarsModLayer(geode::CutoffConstructor, sizeof(RateStarsModLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto RateStarsModLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RateStarsModLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(RateStarsModLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55caf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RateStarsModLayer::uploadActionFinished(int p0, int p1) -> decltype(uploadActionFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&RateStarsModLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(p0, p1))(*)(RateStarsModLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55c8f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto RateStarsModLayer::uploadActionFailed(int p0, int p1) -> decltype(uploadActionFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&RateStarsModLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(p0, p1))(*)(RateStarsModLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55c970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto RateStarsModLayer::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&RateStarsModLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(RateStarsModLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55ca30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
