
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CustomSongCell.hpp>
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

CustomSongCell::~CustomSongCell() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CustomSongCell*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x14ed00, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CustomSongCell(geode::CutoffConstructor, sizeof(CustomSongCell));
		geode::DestructorLock::addLock(this);
	}
}

CustomSongCell::CustomSongCell(char const* identifier, float width, float height) : CustomSongCell(geode::CutoffConstructor, sizeof(CustomSongCell)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	CustomSongCell::~CustomSongCell();

	using FunctionType = void(*)(CustomSongCell*, char const*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14ed00, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this, identifier, width, height);
}

auto CustomSongCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSongCell::init), this);
	using FunctionType = decltype(init())(*)(CustomSongCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14ee30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSongCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSongCell::draw), this);
	using FunctionType = decltype(draw())(*)(CustomSongCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSongCell::songIDChanged(int id) -> decltype(songIDChanged(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSongCell::songIDChanged), this);
	using FunctionType = decltype(songIDChanged(id))(*)(CustomSongCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSongCell::getActiveSongID() -> decltype(getActiveSongID()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSongCell::getActiveSongID), this);
	using FunctionType = decltype(getActiveSongID())(*)(CustomSongCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSongCell::getSongFileName() -> decltype(getSongFileName()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSongCell::getSongFileName), this);
	using FunctionType = decltype(getSongFileName())(*)(CustomSongCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSongCell::loadFromObject(SongInfoObject* object) -> decltype(loadFromObject(object)) {
	using FunctionType = decltype(loadFromObject(object))(*)(CustomSongCell*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14ee40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}
