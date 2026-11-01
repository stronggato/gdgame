
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SongInfoObject.hpp>
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

SongInfoObject::~SongInfoObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SongInfoObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x47d830, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SongInfoObject(geode::CutoffConstructor, sizeof(SongInfoObject));
		geode::DestructorLock::addLock(this);
	}
}

auto SongInfoObject::create(cocos2d::CCDictionary* dict) -> decltype(create(dict)) {
	using FunctionType = decltype(create(dict))(*)(cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fd670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto SongInfoObject::create(int songID) -> decltype(create(songID)) {
	using FunctionType = decltype(create(songID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x490ff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songID);
}

auto SongInfoObject::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&SongInfoObject::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(SongInfoObject*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x492d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto SongInfoObject::getExtraArtistCount() -> decltype(getExtraArtistCount()) {
	using FunctionType = decltype(getExtraArtistCount())(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x493560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SongInfoObject::getTagsString(bool shortTags) -> decltype(getTagsString(shortTags)) {
	using FunctionType = decltype(getTagsString(shortTags))(*)(SongInfoObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x494190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, shortTags);
}

auto SongInfoObject::init(int p0, std::string p1, std::string p2, int p3, float p4, std::string p5, int p6, std::string p7, bool p8, int p9, int p10) -> decltype(init(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10))(*)(SongInfoObject*, int, std::string, std::string, int, float, std::string, int, std::string, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa8dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
}
