
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/VirtualRowSource.hpp>
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

auto VirtualRowSource::virtualRowCount() -> decltype(virtualRowCount()) {
	throw std::runtime_error("VirtualRowSource::virtualRowCount not implemented");
}

auto VirtualRowSource::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	throw std::runtime_error("VirtualRowSource::virtualRowHeight not implemented");
}

auto VirtualRowSource::mountVirtualRow() -> decltype(mountVirtualRow()) {
	throw std::runtime_error("VirtualRowSource::mountVirtualRow not implemented");
}

auto VirtualRowSource::unmountVirtualRow(int p0, cocos2d::CCNode* p1) -> decltype(unmountVirtualRow(p0, p1)) {
	throw std::runtime_error("VirtualRowSource::unmountVirtualRow not implemented");
}
