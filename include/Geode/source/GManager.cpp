
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GManager.hpp>
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

GManager::GManager() : GManager(geode::CutoffConstructor, sizeof(GManager)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GManager::~GManager();

	using FunctionType = void(*)(GManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a030, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto GManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GManager::init), this);
	using FunctionType = decltype(init())(*)(GManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x771d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GManager::setup() -> decltype(setup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GManager::setup), this);
	using FunctionType = decltype(setup())(*)(GManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x771f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GManager::didEncodeForSave() -> decltype(didEncodeForSave()) {
	throw std::runtime_error("GManager::didEncodeForSave not implemented");
}

auto GManager::saveFinished(bool p0) -> decltype(saveFinished(p0)) {
	throw std::runtime_error("GManager::saveFinished not implemented");
}

auto GManager::getCompressedSaveString() -> decltype(getCompressedSaveString()) {
	using FunctionType = decltype(getCompressedSaveString())(*)(GManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GManager::loadDataFromFile(std::string const& filename) -> decltype(loadDataFromFile(filename)) {
	using FunctionType = decltype(loadDataFromFile(filename))(*)(GManager*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x776e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, filename);
}

auto GManager::loadFromCompressedString(std::string& str) -> decltype(loadFromCompressedString(str)) {
	using FunctionType = decltype(loadFromCompressedString(str))(*)(GManager*, std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x772e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GManager::save(bool p0) -> decltype(save(p0)) {
	throw std::runtime_error("GManager::save not implemented");
}
