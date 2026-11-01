
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/RingObject.hpp>
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

RingObject::~RingObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(RingObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x634070, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) RingObject(geode::CutoffConstructor, sizeof(RingObject));
		geode::DestructorLock::addLock(this);
	}
}

auto RingObject::create(char const* frame) -> decltype(create(frame)) {
	using FunctionType = decltype(create(frame))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63fb80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frame);
}

auto RingObject::setScale(float scale) -> decltype(setScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&RingObject::setScale), this);
	using FunctionType = decltype(setScale(scale))(*)(RingObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63ff10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto RingObject::setRotation(float rotation) -> decltype(setRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&RingObject::setRotation), this);
	using FunctionType = decltype(setRotation(rotation))(*)(RingObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4fe4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto RingObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RingObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(RingObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63fef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RingObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&RingObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(RingObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63ffd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto RingObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&RingObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(RingObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6400f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto RingObject::setRScale(float scale) -> decltype(setRScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&RingObject::setRScale), this);
	using FunctionType = decltype(setRScale(scale))(*)(RingObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63ff40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto RingObject::triggerActivated(float xPosition) -> decltype(triggerActivated(xPosition)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&RingObject::triggerActivated), this);
	using FunctionType = decltype(triggerActivated(xPosition))(*)(RingObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63fc30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, xPosition);
}

auto RingObject::shouldDrawEditorHitbox() -> decltype(shouldDrawEditorHitbox()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RingObject::shouldDrawEditorHitbox), this);
	using FunctionType = decltype(shouldDrawEditorHitbox())(*)(RingObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63ffc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RingObject::powerOnObject(int state) -> decltype(powerOnObject(state)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&RingObject::powerOnObject), this);
	using FunctionType = decltype(powerOnObject(state))(*)(RingObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63fc40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, state);
}

auto RingObject::spawnCircle() -> decltype(spawnCircle()) {
	using FunctionType = decltype(spawnCircle())(*)(RingObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63fce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
