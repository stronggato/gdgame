
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJGroundLayer.hpp>
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

GJGroundLayer::~GJGroundLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJGroundLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x384210, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJGroundLayer(geode::CutoffConstructor, sizeof(GJGroundLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJGroundLayer::create(int groundID, int lineType) -> decltype(create(groundID, lineType)) {
	using FunctionType = decltype(create(groundID, lineType))(*)(int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x384270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(groundID, lineType);
}

auto GJGroundLayer::showGround() -> decltype(showGround()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGroundLayer::showGround), this);
	using FunctionType = decltype(showGround())(*)(GJGroundLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x384ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGroundLayer::fadeInGround(float duration) -> decltype(fadeInGround(duration)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJGroundLayer::fadeInGround), this);
	using FunctionType = decltype(fadeInGround(duration))(*)(GJGroundLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x384ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, duration);
}

auto GJGroundLayer::fadeOutGround(float duration) -> decltype(fadeOutGround(duration)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJGroundLayer::fadeOutGround), this);
	using FunctionType = decltype(fadeOutGround(duration))(*)(GJGroundLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3850e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, duration);
}

auto GJGroundLayer::init(int groundID, int lineType) -> decltype(init(groundID, lineType)) {
	using FunctionType = decltype(init(groundID, lineType))(*)(GJGroundLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3842f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groundID, lineType);
}

auto GJGroundLayer::loadGroundSprites(int count, bool ground1) -> decltype(loadGroundSprites(count, ground1)) {
	using FunctionType = decltype(loadGroundSprites(count, ground1))(*)(GJGroundLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1182a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, count, ground1);
}

auto GJGroundLayer::scaleGround(float scale) -> decltype(scaleGround(scale)) {
	using FunctionType = decltype(scaleGround(scale))(*)(GJGroundLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7f090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, scale);
}

auto GJGroundLayer::updateShadows() -> decltype(updateShadows()) {
	using FunctionType = decltype(updateShadows())(*)(GJGroundLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x384f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGroundLayer::updateShadowXPos(float leftX, float rightX) -> decltype(updateShadowXPos(leftX, rightX)) {
	using FunctionType = decltype(updateShadowXPos(leftX, rightX))(*)(GJGroundLayer*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x385010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, leftX, rightX);
}
