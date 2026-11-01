
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TextArea.hpp>
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

TextArea::~TextArea() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(TextArea*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x89c40, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) TextArea(geode::CutoffConstructor, sizeof(TextArea));
		geode::DestructorLock::addLock(this);
	}
}

auto TextArea::create(std::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor, int p7) -> decltype(create(str, font, scale, width, anchor, lineHeight, disableColor, p7)) {
	using FunctionType = decltype(create(str, font, scale, width, anchor, lineHeight, disableColor, p7))(*)(std::string, char const*, float, float, cocos2d::CCPoint, float, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, font, scale, width, anchor, lineHeight, disableColor, p7);
}

auto TextArea::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&TextArea::update), this);
	using FunctionType = decltype(update(dt))(*)(TextArea*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a7d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto TextArea::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&TextArea::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(TextArea*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a6e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto TextArea::colorAllCharactersTo(cocos2d::ccColor3B color) -> decltype(colorAllCharactersTo(color)) {
	using FunctionType = decltype(colorAllCharactersTo(color))(*)(TextArea*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto TextArea::fadeInCharacters(float duration, float charDuration, bool fadeOut, TextFadeInStyle style) -> decltype(fadeInCharacters(duration, charDuration, fadeOut, style)) {
	using FunctionType = decltype(fadeInCharacters(duration, charDuration, fadeOut, style))(*)(TextArea*, float, float, bool, TextFadeInStyle);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a9d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration, charDuration, fadeOut, style);
}

auto TextArea::finishFade() -> decltype(finishFade()) {
	using FunctionType = decltype(finishFade())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a6c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TextArea::setString(std::string text) -> decltype(setString(text)) {
	using FunctionType = decltype(setString(text))(*)(TextArea*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto TextArea::stopAllCharacterActions() -> decltype(stopAllCharacterActions()) {
	using FunctionType = decltype(stopAllCharacterActions())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
