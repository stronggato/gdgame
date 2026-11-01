
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/OBB2D.hpp>
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

OBB2D::~OBB2D() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(OBB2D*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x7b2d0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) OBB2D(geode::CutoffConstructor, sizeof(OBB2D));
		geode::DestructorLock::addLock(this);
	}
}

auto OBB2D::create(cocos2d::CCPoint center, float width, float height, float rotationAngle) -> decltype(create(center, width, height, rotationAngle)) {
	using FunctionType = decltype(create(center, width, height, rotationAngle))(*)(cocos2d::CCPoint, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(center, width, height, rotationAngle);
}

auto OBB2D::calculateWithCenter(cocos2d::CCPoint center, float width, float height, float rotationAngle) -> decltype(calculateWithCenter(center, width, height, rotationAngle)) {
	throw std::runtime_error("OBB2D::calculateWithCenter not implemented");
}

auto OBB2D::getBoundingRect() -> decltype(getBoundingRect()) {
	using FunctionType = decltype(getBoundingRect())(*)(OBB2D*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7bbc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto OBB2D::orderCorners() -> decltype(orderCorners()) {
	using FunctionType = decltype(orderCorners())(*)(OBB2D*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto OBB2D::overlaps1Way(OBB2D* other) -> decltype(overlaps1Way(other)) {
	throw std::runtime_error("OBB2D::overlaps1Way not implemented");
}
